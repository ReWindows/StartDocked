#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 26 member(s).
namespace StartDocked::LauncherFrame {
class LauncherFrame_obj1_Bindings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@UEAAXHPE$AAVObject@Platform@@@Z
    virtual void Connect(int, ::Platform::Object & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUnloadedObject@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@UEAAXH@Z
    virtual void DisconnectUnloadedObject(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@QEAA@XZ
    LauncherFrame_obj1_Bindings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUnloadedElement@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@QEAAXH@Z
    void UpdateUnloadedElement(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionChanged@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAVNotifyCollectionChangedEventArgs@Interop@Xaml@UI@Windows@@@Z
    virtual void CollectionChanged(::Platform::Object & *, ::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteUpdate@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@AEAAXH@Z
    void CompleteUpdate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DependencyPropertyChanged@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@EEAAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyProperty@567@@Z
    virtual void DependencyPropertyChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyProperty & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapChanged@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAU?$IMapChangedEventArgs@PE$AAVString@Platform@@@Collections@Foundation@Windows@@@Z
    virtual void MapChanged(::Platform::Object & *, WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyChanged@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAVPropertyChangedEventArgs@Data@Xaml@UI@Windows@@@Z
    virtual void PropertyChanged(::Platform::Object & *, ::Windows::UI::Xaml::Data::PropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllListeners@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@EEAAXXZ
    virtual void ReleaseAllListeners();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Automation_AutomationProperties_Name@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVString@Platform@@1@Z
    static void Set_Windows_UI_Xaml_Automation_AutomationProperties_Name(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Controls_ContentControl_Content@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@CAXPE$AAVContentControl@Controls@Xaml@UI@Windows@@PE$AAVObject@Platform@@PE$AAVString@Platform@@@Z
    static void Set_Windows_UI_Xaml_Controls_ContentControl_Content(::Windows::UI::Xaml::Controls::ContentControl & *, ::Platform::Object & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Controls_Primitives_ToggleButton_IsChecked@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@CAXPE$AAVToggleButton@Primitives@Controls@Xaml@UI@Windows@@PE$AAU?$IBox@_N@Platform@@PE$AAVString@Platform@@@Z
    static void Set_Windows_UI_Xaml_Controls_Primitives_ToggleButton_IsChecked(::Windows::UI::Xaml::Controls::Primitives::ToggleButton & *, WindissectOpaque & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Controls_TextBlock_Text@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@CAXPE$AAVTextBlock@Controls@Xaml@UI@Windows@@PE$AAVString@Platform@@1@Z
    static void Set_Windows_UI_Xaml_Controls_TextBlock_Text(::Windows::UI::Xaml::Controls::TextBlock & *, ::Platform::String & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_UIElement_Visibility@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@CAXPE$AAVUIElement@Xaml@UI@Windows@@W4Visibility@567@@Z
    static void Set_Windows_UI_Xaml_UIElement_Visibility(::Windows::UI::Xaml::UIElement & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@EEAAXPE$AAV23@H@Z
    virtual void Update_(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_FakeSearchBoxAccName@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@AEAAXPE$AAVString@Platform@@H@Z
    void Update_FakeSearchBoxAccName(::Platform::String & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_FakeSearchBoxText@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@AEAAXPE$AAVString@Platform@@H@Z
    void Update_FakeSearchBoxText(::Platform::String & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_IsFakeSearchBoxInFocus@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@AEAAX_NH@Z
    void Update_IsFakeSearchBoxInFocus(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_PlaceholderText@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@AEAAXPE$AAVTextBlock@Controls@Xaml@UI@Windows@@H@Z
    void Update_PlaceholderText(::Windows::UI::Xaml::Controls::TextBlock & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_PlaceholderText_IsTextTrimmed_Cast_IsTextTrimmed_To_Visibility@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@AEAAXW4Visibility@Xaml@UI@Windows@@H@Z
    void Update_PlaceholderText_IsTextTrimmed_Cast_IsTextTrimmed_To_Visibility(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ShouldLoadSearchBox@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@AEAAX_NH@Z
    void Update_ShouldLoadSearchBox(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VectorChanged@LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual void VectorChanged(::Platform::Object & *, WindissectOpaque & *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LauncherFrame_obj1_Bindings@LauncherFrame@StartDocked@@EEAA@XZ
    virtual ~LauncherFrame_obj1_Bindings();
};
} // namespace StartDocked::LauncherFrame
