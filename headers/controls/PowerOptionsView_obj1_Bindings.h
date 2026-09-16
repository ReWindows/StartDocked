#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 24 member(s).
namespace StartDocked::PowerOptionsView {
class PowerOptionsView_obj1_Bindings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@UEAAXHPE$AAVObject@Platform@@@Z
    virtual void Connect(int, ::Platform::Object & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUnloadedObject@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@UEAAXH@Z
    virtual void DisconnectUnloadedObject(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@QEAA@XZ
    PowerOptionsView_obj1_Bindings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUnloadedElement@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@QEAAXH@Z
    void UpdateUnloadedElement(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionChanged@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAVNotifyCollectionChangedEventArgs@Interop@Xaml@UI@Windows@@@Z
    virtual void CollectionChanged(::Platform::Object & *, ::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteUpdate@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@AEAAXH@Z
    void CompleteUpdate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DependencyPropertyChanged@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@EEAAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyProperty@567@@Z
    virtual void DependencyPropertyChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyProperty & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapChanged@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAU?$IMapChangedEventArgs@PE$AAVString@Platform@@@Collections@Foundation@Windows@@@Z
    virtual void MapChanged(::Platform::Object & *, WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyChanged@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAVPropertyChangedEventArgs@Data@Xaml@UI@Windows@@@Z
    virtual void PropertyChanged(::Platform::Object & *, ::Windows::UI::Xaml::Data::PropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllListeners@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@EEAAXXZ
    virtual void ReleaseAllListeners();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_StartDocked_NavigationPaneToolTipService_ToolTip@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVObject@Platform@@PE$AAVString@9@@Z
    static void Set_StartDocked_NavigationPaneToolTipService_ToolTip(::Windows::UI::Xaml::DependencyObject & *, ::Platform::Object & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Automation_AutomationProperties_Name@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVString@Platform@@1@Z
    static void Set_Windows_UI_Xaml_Automation_AutomationProperties_Name(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Controls_FontIcon_Glyph@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@CAXPE$AAVFontIcon@Controls@Xaml@UI@Windows@@PE$AAVString@Platform@@1@Z
    static void Set_Windows_UI_Xaml_Controls_FontIcon_Glyph(::Windows::UI::Xaml::Controls::FontIcon & *, ::Platform::String & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@EEAAXPE$AAV23@H@Z
    virtual void Update_(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ItemViewModel@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@AEAAXPE$AAVNavigationPaneItemViewModel@3@H@Z
    void Update_ItemViewModel(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ItemViewModel_AccessibleDisplayName@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@AEAAXPE$AAVString@Platform@@H@Z
    void Update_ItemViewModel_AccessibleDisplayName(::Platform::String & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ItemViewModel_DisplayName@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@AEAAXPE$AAVString@Platform@@H@Z
    void Update_ItemViewModel_DisplayName(::Platform::String & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@AEAAXPE$AAVPowerOptionsViewModel@3@H@Z
    void Update_ViewModel(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_IsWindowsUpdatePending@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@AEAAX_NH@Z
    void Update_ViewModel_IsWindowsUpdatePending(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_UpdatePendingGlyph@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@AEAAXPE$AAVString@Platform@@H@Z
    void Update_ViewModel_UpdatePendingGlyph(::Platform::String & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VectorChanged@PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual void VectorChanged(::Platform::Object & *, WindissectOpaque & *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PowerOptionsView_obj1_Bindings@PowerOptionsView@StartDocked@@EEAA@XZ
    virtual ~PowerOptionsView_obj1_Bindings();
};
} // namespace StartDocked::PowerOptionsView
