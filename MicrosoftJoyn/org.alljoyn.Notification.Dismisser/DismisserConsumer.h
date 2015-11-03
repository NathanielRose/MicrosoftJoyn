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

namespace org { namespace alljoyn { namespace Notification { namespace Dismisser {

public interface class IDismisserConsumer
{
    event Windows::Foundation::TypedEventHandler<DismisserConsumer^, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs^>^ SessionLost;
    event Windows::Foundation::TypedEventHandler<DismisserConsumer^, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs^>^ SessionMemberAdded;
    event Windows::Foundation::TypedEventHandler<DismisserConsumer^, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs^>^ SessionMemberRemoved;
};

public ref class DismisserConsumer sealed  : [Windows::Foundation::Metadata::Default] IDismisserConsumer
{
public:
    DismisserConsumer(Windows::Devices::AllJoyn::AllJoynBusAttachment^ busAttachment);
    virtual ~DismisserConsumer();

    // Join the AllJoyn session specified by sessionName.
    //
    // This will usually be called after the unique name of a producer has been reported
    // in the Added callback on the Watcher.
    static Windows::Foundation::IAsyncOperation<DismisserJoinSessionResult^>^ JoinSessionAsync(_In_ Windows::Devices::AllJoyn::AllJoynServiceInfo^ serviceInfo, _Inout_ DismisserWatcher^ watcher);


    // Get the value of the Version property.
    Windows::Foundation::IAsyncOperation<DismisserGetVersionResult^>^ GetVersionAsync();


    // Used to send signals or register functions to handle received signals.
    property DismisserSignals^ Signals
    {
        DismisserSignals^ get() { return m_signals; }
    }

    // This event will fire whenever the consumer loses the session that it is a member of.
    virtual event Windows::Foundation::TypedEventHandler<DismisserConsumer^, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs^>^ SessionLost 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<DismisserConsumer^, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs^>^ handler) 
        { 
            return _SessionLost += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<DismisserConsumer^>(sender), safe_cast<Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SessionLost -= token; 
        } 
    internal: 
        void raise(DismisserConsumer^ sender, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs^ args) 
        { 
            _SessionLost(sender, args);
        } 
    }

    // This event will fire whenever a member joins the session.
    virtual event Windows::Foundation::TypedEventHandler<DismisserConsumer^, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs^>^ SessionMemberAdded 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<DismisserConsumer^, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs^>^ handler) 
        { 
            return _SessionMemberAdded += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<DismisserConsumer^>(sender), safe_cast<Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SessionMemberAdded -= token; 
        } 
    internal: 
        void raise(DismisserConsumer^ sender, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs^ args) 
        { 
            _SessionMemberAdded(sender, args);
        } 
    }

    // This event will fire whenever a member leaves the session.
    virtual event Windows::Foundation::TypedEventHandler<DismisserConsumer^, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs^>^ SessionMemberRemoved 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<DismisserConsumer^, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs^>^ handler) 
        { 
            return _SessionMemberRemoved += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<DismisserConsumer^>(sender), safe_cast<Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SessionMemberRemoved -= token; 
        } 
    internal: 
        void raise(DismisserConsumer^ sender, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs^ args) 
        { 
            _SessionMemberRemoved(sender, args);
        } 
    }

internal:
    // Consumers do not support property get.
    QStatus OnPropertyGet(_In_ PCSTR interfaceName, _In_ PCSTR propertyName, _Inout_ alljoyn_msgarg val) 
    { 
        UNREFERENCED_PARAMETER(interfaceName); UNREFERENCED_PARAMETER(propertyName); UNREFERENCED_PARAMETER(val); 
        return ER_NOT_IMPLEMENTED; 
    }

    // Consumers do not support property set.
    QStatus OnPropertySet(_In_ PCSTR interfaceName, _In_ PCSTR propertyName, _In_ alljoyn_msgarg val) 
    { 
        UNREFERENCED_PARAMETER(interfaceName); UNREFERENCED_PARAMETER(propertyName); UNREFERENCED_PARAMETER(val);
        return ER_NOT_IMPLEMENTED;
    }

    void OnSessionLost(_In_ alljoyn_sessionid sessionId, _In_ alljoyn_sessionlostreason reason);
    void OnSessionMemberAdded(_In_ alljoyn_sessionid sessionId, _In_ PCSTR uniqueName);
    void OnSessionMemberRemoved(_In_ alljoyn_sessionid sessionId, _In_ PCSTR uniqueName);

    void OnPropertyChanged(_In_ alljoyn_proxybusobject obj, _In_ PCSTR interfaceName, _In_ const alljoyn_msgarg changed, _In_ const alljoyn_msgarg invalidated);

    property Platform::String^ ServiceObjectPath
    {
        Platform::String^ get() { return m_ServiceObjectPath; }
        void set(Platform::String^ value) { m_ServiceObjectPath = value; }
    }

    property alljoyn_proxybusobject ProxyBusObject
    {
        alljoyn_proxybusobject get() { return m_proxyBusObject; }
        void set(alljoyn_proxybusobject value) { m_proxyBusObject = value; }
    }

    property alljoyn_busobject BusObject
    {
        alljoyn_busobject get() { return m_busObject; }
        void set(alljoyn_busobject value) { m_busObject = value; }
    }
    
    property alljoyn_sessionlistener SessionListener
    {
        alljoyn_sessionlistener get() { return m_sessionListener; }
        void set(alljoyn_sessionlistener value) { m_sessionListener = value; }
    }

    property alljoyn_sessionid SessionId
    {
        alljoyn_sessionid get() { return m_sessionId; }
    }
    
private:
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _SessionLost;
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _SessionMemberAdded;
    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _SessionMemberRemoved;

    int32 JoinSession(_In_ Windows::Devices::AllJoyn::AllJoynServiceInfo^ serviceInfo);

    // Register a callback function to handle incoming signals.
    QStatus AddSignalHandler(_In_ alljoyn_busattachment busAttachment, _In_ alljoyn_interfacedescription interfaceDescription, _In_ PCSTR methodName, _In_ alljoyn_messagereceiver_signalhandler_ptr handler);

    static void CallDismissSignalHandler(_In_ const alljoyn_interfacedescription_member* member, _In_ alljoyn_message message);
    
    Windows::Devices::AllJoyn::AllJoynBusAttachment^ m_busAttachment;
    DismisserSignals^ m_signals;
    Platform::String^ m_ServiceObjectPath;

    alljoyn_proxybusobject m_proxyBusObject;
    alljoyn_busobject m_busObject;
    alljoyn_sessionlistener m_sessionListener;
    alljoyn_sessionid m_sessionId;
    alljoyn_busattachment m_nativeBusAttachment;

    // Used to pass a pointer to this class to callbacks
    Platform::WeakReference* m_weak;

    // This map is required because we need a way to pass the consumer to the signal
    // handlers, but the current AllJoyn C API does not allow passing a context to these
    // callbacks.
    static std::map<alljoyn_interfacedescription, Platform::WeakReference*> SourceInterfaces;
};

} } } } 
