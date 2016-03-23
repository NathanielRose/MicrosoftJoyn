using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Net.Http;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;

using System.Net.NetworkInformation;
using Windows.Devices.AllJoyn;
using Windows.Devices.WiFi;
using org.allseen.LSF.LampState;
using org.alljoyn.Notification.Producer;
using System.Diagnostics;


// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

namespace MicrosoftJoyn
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        LampStateConsumer _lampState;
        String _AlljoynNetwork;
        String _AlljoynNetwork_Private;
        public AllJoynAboutData AJnetworkData;

        ProducerConsumer _phoneMessage;
        

       public Binding AJNetwork = new Binding();
                
        public static void ShowNetworkInterfaces()
        {
            
        }
        public MainPage()
        {
            var clientnetwork = NetworkInterface.GetIsNetworkAvailable();
            this.InitializeComponent();

            FindLamp();
            FindPhone();
        }

        public void FindLamp()
        {
            Debug.WriteLine("Starting consumer ...");

            AllJoynBusAttachment busAttachment = new AllJoynBusAttachment();
            LampStateWatcher watcher = new LampStateWatcher(busAttachment);
            watcher.Added += LampFound;
            watcher.Start();
        }

        public void FindPhone()
        {
            Debug.WriteLine("Starting Phone Consumer ...");

            AllJoynBusAttachment busAttachment2 = new AllJoynBusAttachment();
            ProducerWatcher phoneProducer = new ProducerWatcher(busAttachment2);
            phoneProducer.Added += PhoneProducer_Added;
           // phoneProducer_Added();
        }

        private async void PhoneProducer_Added(ProducerWatcher sender, AllJoynServiceInfo args)
        {
            Debug.WriteLine("Attempt to join session for phone...");

            var phoneJoin = await ProducerConsumer.JoinSessionAsync(args, sender);

            if (phoneJoin.Status == AllJoynStatus.Ok)
            {
                _phoneMessage = phoneJoin.Consumer;
                Debug.WriteLine("Consumer has been successfully initialized");
               // await _phoneMessage.Signals

            }
        }

        private async void LampFound(LampStateWatcher sender, AllJoynServiceInfo args)
        {
            Debug.WriteLine("Attempt to join session..");

            var joinResult = await LampStateConsumer.JoinSessionAsync(args, sender);

            AJNetwork.Mode = BindingMode.OneTime;
            AJNetwork.Source = "Test Network";
            //Debug.WriteLine(AJnetworkData.AppId.ToString(), "AppID");
          

            if (joinResult.Status == AllJoynStatus.Ok)
            {
                _lampState = joinResult.Consumer;
                Debug.WriteLine("Consumer has been susccessfully initialized");
                await _lampState.SetOnOffAsync(true);
                PowerSwitch.IsOn = true;

            }
            else
            {
                Debug.WriteLine("Join session has failed");
            }
        }

        private async void Brightness_ValueChanged(object sender, RangeBaseValueChangedEventArgs e)
        {
            var value = Convert.ToUInt32(UInt32.MaxValue * (e.NewValue / 100.0));
            await _lampState.SetBrightnessAsync(value);
        }

        private async void Hue_ValueChanged(object sender, RangeBaseValueChangedEventArgs e)
        {
            var value = Convert.ToUInt32(UInt32.MaxValue * (e.NewValue / 360.0));
            await _lampState.SetHueAsync(value);
        }

        private async void Saturation_ValueChanged(object sender, RangeBaseValueChangedEventArgs e)
        {
            var value = Convert.ToUInt32(UInt32.MaxValue * (e.NewValue / 100.0));
            await _lampState.SetSaturationAsync(value);
        }

        private async void PowerSwitch_Toggled(object sender, Windows.UI.Xaml.RoutedEventArgs e)
        {
            if(_lampState != null)
            await _lampState.SetOnOffAsync(PowerSwitch.IsOn);
        }



    }
}
