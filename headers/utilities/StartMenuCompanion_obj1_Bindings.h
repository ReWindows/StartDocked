#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 25 member(s).
namespace StartDocked::StartMenuCompanion {
class StartMenuCompanion_obj1_Bindings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@UEAAXHPE$AAVObject@Platform@@@Z
    virtual void Connect(int, ::Platform::Object & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUnloadedObject@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@UEAAXH@Z
    virtual void DisconnectUnloadedObject(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@QEAA@XZ
    StartMenuCompanion_obj1_Bindings();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionChanged@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAVNotifyCollectionChangedEventArgs@Interop@Xaml@UI@Windows@@@Z
    virtual void CollectionChanged(::Platform::Object & *, ::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DependencyPropertyChanged@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@EEAAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyProperty@567@@Z
    virtual void DependencyPropertyChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyProperty & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapChanged@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAU?$IMapChangedEventArgs@PE$AAVString@Platform@@@Collections@Foundation@Windows@@@Z
    virtual void MapChanged(::Platform::Object & *, WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyChanged@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAVPropertyChangedEventArgs@Data@Xaml@UI@Windows@@@Z
    virtual void PropertyChanged(::Platform::Object & *, ::Windows::UI::Xaml::Data::PropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllListeners@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@EEAAXXZ
    virtual void ReleaseAllListeners();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Automation_AutomationProperties_Name@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVString@Platform@@1@Z
    static void Set_Windows_UI_Xaml_Automation_AutomationProperties_Name(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Controls_Image_Source@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@CAXPE$AAVImage@Controls@Xaml@UI@Windows@@PE$AAVImageSource@Media@678@PE$AAVString@Platform@@@Z
    static void Set_Windows_UI_Xaml_Controls_Image_Source(::Windows::UI::Xaml::Controls::Image & *, ::Windows::UI::Xaml::Media::ImageSource & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Controls_TextBlock_Text@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@CAXPE$AAVTextBlock@Controls@Xaml@UI@Windows@@PE$AAVString@Platform@@1@Z
    static void Set_Windows_UI_Xaml_Controls_TextBlock_Text(::Windows::UI::Xaml::Controls::TextBlock & *, ::Platform::String & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Controls_ToolTipService_ToolTip@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVObject@Platform@@PE$AAVString@9@@Z
    static void Set_Windows_UI_Xaml_Controls_ToolTipService_ToolTip(::Windows::UI::Xaml::DependencyObject & *, ::Platform::Object & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_UIElement_Visibility@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@CAXPE$AAVUIElement@Xaml@UI@Windows@@W4Visibility@567@@Z
    static void Set_Windows_UI_Xaml_UIElement_Visibility(::Windows::UI::Xaml::UIElement & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@EEAAXPE$AAV23@H@Z
    virtual void Update_(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_MoreOptionsText@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@AEAAXPE$AAVString@Platform@@H@Z
    void Update_MoreOptionsText(::Platform::String & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@AEAAXPE$AAVStartMenuCompanionViewModel@3@H@Z
    void Update_ViewModel(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_IsPrimaryActionBarItemFontIconAvailable_Cast_IsPrimaryActionBarItemFontIconAvailable_To_Visibility@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@AEAAXW4Visibility@Xaml@UI@Windows@@H@Z
    void Update_ViewModel_IsPrimaryActionBarItemFontIconAvailable_Cast_IsPrimaryActionBarItemFontIconAvailable_To_Visibility(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_IsPrimaryActionBarItemImageAvailable_Cast_IsPrimaryActionBarItemImageAvailable_To_Visibility@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@AEAAXW4Visibility@Xaml@UI@Windows@@H@Z
    void Update_ViewModel_IsPrimaryActionBarItemImageAvailable_Cast_IsPrimaryActionBarItemImageAvailable_To_Visibility(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_PrimaryActionBarItem@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@AEAAXPE$AAVStartMenuCompanionActionBarItem@3@H@Z
    void Update_ViewModel_PrimaryActionBarItem(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_PrimaryActionBarItem_ImageSource@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@AEAAXPE$AAVBitmapImage@Imaging@Media@Xaml@UI@Windows@@H@Z
    void Update_ViewModel_PrimaryActionBarItem_ImageSource(::Windows::UI::Xaml::Media::Imaging::BitmapImage & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_PrimaryActionBarItem_Title@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@AEAAXPE$AAVString@Platform@@H@Z
    void Update_ViewModel_PrimaryActionBarItem_Title(::Platform::String & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VectorChanged@StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual void VectorChanged(::Platform::Object & *, WindissectOpaque & *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartMenuCompanion_obj1_Bindings@StartMenuCompanion@StartDocked@@EEAA@XZ
    virtual ~StartMenuCompanion_obj1_Bindings();
};
} // namespace StartDocked::StartMenuCompanion
