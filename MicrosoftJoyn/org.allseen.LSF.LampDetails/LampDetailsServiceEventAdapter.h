//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace allseen { namespace LSF { namespace LampDetails {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement ILampDetailsService. Instead, LampDetailsServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class LampDetailsServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] ILampDetailsService
{
public:
    // Method Invocation Events
    // Property Read Events
    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetVersionRequestedEventArgs^>^ GetVersionRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetVersionRequestedEventArgs^>^ handler) 
        { 
            return _GetVersionRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetVersionRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetVersionRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetVersionRequestedEventArgs^ args) 
        { 
            _GetVersionRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetMakeRequestedEventArgs^>^ GetMakeRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetMakeRequestedEventArgs^>^ handler) 
        { 
            return _GetMakeRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetMakeRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetMakeRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetMakeRequestedEventArgs^ args) 
        { 
            _GetMakeRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetModelRequestedEventArgs^>^ GetModelRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetModelRequestedEventArgs^>^ handler) 
        { 
            return _GetModelRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetModelRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetModelRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetModelRequestedEventArgs^ args) 
        { 
            _GetModelRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetTypeRequestedEventArgs^>^ GetTypeRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetTypeRequestedEventArgs^>^ handler) 
        { 
            return _GetTypeRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetTypeRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetTypeRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetTypeRequestedEventArgs^ args) 
        { 
            _GetTypeRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetLampTypeRequestedEventArgs^>^ GetLampTypeRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetLampTypeRequestedEventArgs^>^ handler) 
        { 
            return _GetLampTypeRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetLampTypeRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetLampTypeRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetLampTypeRequestedEventArgs^ args) 
        { 
            _GetLampTypeRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetLampBaseTypeRequestedEventArgs^>^ GetLampBaseTypeRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetLampBaseTypeRequestedEventArgs^>^ handler) 
        { 
            return _GetLampBaseTypeRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetLampBaseTypeRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetLampBaseTypeRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetLampBaseTypeRequestedEventArgs^ args) 
        { 
            _GetLampBaseTypeRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetLampBeamAngleRequestedEventArgs^>^ GetLampBeamAngleRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetLampBeamAngleRequestedEventArgs^>^ handler) 
        { 
            return _GetLampBeamAngleRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetLampBeamAngleRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetLampBeamAngleRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetLampBeamAngleRequestedEventArgs^ args) 
        { 
            _GetLampBeamAngleRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetDimmableRequestedEventArgs^>^ GetDimmableRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetDimmableRequestedEventArgs^>^ handler) 
        { 
            return _GetDimmableRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetDimmableRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetDimmableRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetDimmableRequestedEventArgs^ args) 
        { 
            _GetDimmableRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetColorRequestedEventArgs^>^ GetColorRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetColorRequestedEventArgs^>^ handler) 
        { 
            return _GetColorRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetColorRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetColorRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetColorRequestedEventArgs^ args) 
        { 
            _GetColorRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetVariableColorTempRequestedEventArgs^>^ GetVariableColorTempRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetVariableColorTempRequestedEventArgs^>^ handler) 
        { 
            return _GetVariableColorTempRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetVariableColorTempRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetVariableColorTempRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetVariableColorTempRequestedEventArgs^ args) 
        { 
            _GetVariableColorTempRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetHasEffectsRequestedEventArgs^>^ GetHasEffectsRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetHasEffectsRequestedEventArgs^>^ handler) 
        { 
            return _GetHasEffectsRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetHasEffectsRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetHasEffectsRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetHasEffectsRequestedEventArgs^ args) 
        { 
            _GetHasEffectsRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetMinVoltageRequestedEventArgs^>^ GetMinVoltageRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetMinVoltageRequestedEventArgs^>^ handler) 
        { 
            return _GetMinVoltageRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetMinVoltageRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetMinVoltageRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetMinVoltageRequestedEventArgs^ args) 
        { 
            _GetMinVoltageRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetMaxVoltageRequestedEventArgs^>^ GetMaxVoltageRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetMaxVoltageRequestedEventArgs^>^ handler) 
        { 
            return _GetMaxVoltageRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetMaxVoltageRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetMaxVoltageRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetMaxVoltageRequestedEventArgs^ args) 
        { 
            _GetMaxVoltageRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetWattageRequestedEventArgs^>^ GetWattageRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetWattageRequestedEventArgs^>^ handler) 
        { 
            return _GetWattageRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetWattageRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetWattageRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetWattageRequestedEventArgs^ args) 
        { 
            _GetWattageRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetIncandescentEquivalentRequestedEventArgs^>^ GetIncandescentEquivalentRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetIncandescentEquivalentRequestedEventArgs^>^ handler) 
        { 
            return _GetIncandescentEquivalentRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetIncandescentEquivalentRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetIncandescentEquivalentRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetIncandescentEquivalentRequestedEventArgs^ args) 
        { 
            _GetIncandescentEquivalentRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetMaxLumensRequestedEventArgs^>^ GetMaxLumensRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetMaxLumensRequestedEventArgs^>^ handler) 
        { 
            return _GetMaxLumensRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetMaxLumensRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetMaxLumensRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetMaxLumensRequestedEventArgs^ args) 
        { 
            _GetMaxLumensRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetMinTemperatureRequestedEventArgs^>^ GetMinTemperatureRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetMinTemperatureRequestedEventArgs^>^ handler) 
        { 
            return _GetMinTemperatureRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetMinTemperatureRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetMinTemperatureRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetMinTemperatureRequestedEventArgs^ args) 
        { 
            _GetMinTemperatureRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetMaxTemperatureRequestedEventArgs^>^ GetMaxTemperatureRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetMaxTemperatureRequestedEventArgs^>^ handler) 
        { 
            return _GetMaxTemperatureRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetMaxTemperatureRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetMaxTemperatureRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetMaxTemperatureRequestedEventArgs^ args) 
        { 
            _GetMaxTemperatureRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetColorRenderingIndexRequestedEventArgs^>^ GetColorRenderingIndexRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetColorRenderingIndexRequestedEventArgs^>^ handler) 
        { 
            return _GetColorRenderingIndexRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetColorRenderingIndexRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetColorRenderingIndexRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetColorRenderingIndexRequestedEventArgs^ args) 
        { 
            _GetColorRenderingIndexRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetLampIDRequestedEventArgs^>^ GetLampIDRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<LampDetailsServiceEventAdapter^, LampDetailsGetLampIDRequestedEventArgs^>^ handler) 
        { 
            return _GetLampIDRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<LampDetailsServiceEventAdapter^>(sender), safe_cast<LampDetailsGetLampIDRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetLampIDRequested -= token; 
        } 
    internal: 
        void raise(LampDetailsServiceEventAdapter^ sender, LampDetailsGetLampIDRequestedEventArgs^ args) 
        { 
            _GetLampIDRequested(sender, args);
        } 
    }

    // Property Write Events
    // ILampDetailsService Implementation

    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetVersionResult^>^ GetVersionAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetMakeResult^>^ GetMakeAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetModelResult^>^ GetModelAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetTypeResult^>^ GetTypeAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetLampTypeResult^>^ GetLampTypeAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetLampBaseTypeResult^>^ GetLampBaseTypeAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetLampBeamAngleResult^>^ GetLampBeamAngleAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetDimmableResult^>^ GetDimmableAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetColorResult^>^ GetColorAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetVariableColorTempResult^>^ GetVariableColorTempAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetHasEffectsResult^>^ GetHasEffectsAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetMinVoltageResult^>^ GetMinVoltageAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetMaxVoltageResult^>^ GetMaxVoltageAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetWattageResult^>^ GetWattageAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetIncandescentEquivalentResult^>^ GetIncandescentEquivalentAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetMaxLumensResult^>^ GetMaxLumensAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetMinTemperatureResult^>^ GetMinTemperatureAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetMaxTemperatureResult^>^ GetMaxTemperatureAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetColorRenderingIndexResult^>^ GetColorRenderingIndexAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<LampDetailsGetLampIDResult^>^ GetLampIDAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);


private:
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetVersionRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetMakeRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetModelRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetTypeRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetLampTypeRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetLampBaseTypeRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetLampBeamAngleRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetDimmableRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetColorRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetVariableColorTempRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetHasEffectsRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetMinVoltageRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetMaxVoltageRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetWattageRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetIncandescentEquivalentRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetMaxLumensRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetMinTemperatureRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetMaxTemperatureRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetColorRenderingIndexRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetLampIDRequested;
};

} } } } 
