#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 28 member(s).
namespace StartDocked::UserTileView {
class UserTileView_obj1_Bindings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@UserTileView_obj1_Bindings@UserTileView@StartDocked@@UEAAXHPE$AAVObject@Platform@@@Z
    virtual void Connect(int, ::Platform::Object & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUnloadedObject@UserTileView_obj1_Bindings@UserTileView@StartDocked@@UEAAXH@Z
    virtual void DisconnectUnloadedObject(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUnloadedElement@UserTileView_obj1_Bindings@UserTileView@StartDocked@@QEAAXH@Z
    void UpdateUnloadedElement(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserTileView_obj1_Bindings@UserTileView@StartDocked@@QEAA@XZ
    UserTileView_obj1_Bindings();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionChanged@UserTileView_obj1_Bindings@UserTileView@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAVNotifyCollectionChangedEventArgs@Interop@Xaml@UI@Windows@@@Z
    virtual void CollectionChanged(::Platform::Object & *, ::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteUpdate@UserTileView_obj1_Bindings@UserTileView@StartDocked@@AEAAXH@Z
    void CompleteUpdate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DependencyPropertyChanged@UserTileView_obj1_Bindings@UserTileView@StartDocked@@EEAAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyProperty@567@@Z
    virtual void DependencyPropertyChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyProperty & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke_M_IsFallbackVisualVisible_2877533597@UserTileView_obj1_Bindings@UserTileView@StartDocked@@AEAAXH@Z
    void Invoke_M_IsFallbackVisualVisible_2877533597(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapChanged@UserTileView_obj1_Bindings@UserTileView@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAU?$IMapChangedEventArgs@PE$AAVString@Platform@@@Collections@Foundation@Windows@@@Z
    virtual void MapChanged(::Platform::Object & *, WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyChanged@UserTileView_obj1_Bindings@UserTileView@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAVPropertyChangedEventArgs@Data@Xaml@UI@Windows@@@Z
    virtual void PropertyChanged(::Platform::Object & *, ::Windows::UI::Xaml::Data::PropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllListeners@UserTileView_obj1_Bindings@UserTileView@StartDocked@@EEAAXXZ
    virtual void ReleaseAllListeners();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_StartDocked_NavigationPaneToolTipService_ToolTip@UserTileView_obj1_Bindings@UserTileView@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVObject@Platform@@PE$AAVString@9@@Z
    static void Set_StartDocked_NavigationPaneToolTipService_ToolTip(::Windows::UI::Xaml::DependencyObject & *, ::Platform::Object & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Controls_TextBlock_Text@UserTileView_obj1_Bindings@UserTileView@StartDocked@@CAXPE$AAVTextBlock@Controls@Xaml@UI@Windows@@PE$AAVString@Platform@@1@Z
    static void Set_Windows_UI_Xaml_Controls_TextBlock_Text(::Windows::UI::Xaml::Controls::TextBlock & *, ::Platform::String & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Shapes_Shape_Fill@UserTileView_obj1_Bindings@UserTileView@StartDocked@@CAXPE$AAVShape@Shapes@Xaml@UI@Windows@@PE$AAVBrush@Media@678@PE$AAVString@Platform@@@Z
    static void Set_Windows_UI_Xaml_Shapes_Shape_Fill(::Windows::UI::Xaml::Shapes::Shape & *, ::Windows::UI::Xaml::Media::Brush & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet_ViewModel_UserImageBrush@UserTileView_obj1_Bindings@UserTileView@StartDocked@@AEAA_NAEAPE$AAVImageBrush@Media@Xaml@UI@Windows@@@Z
    bool TryGet_ViewModel_UserImageBrush(::Windows::UI::Xaml::Media::ImageBrush & * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFallback_M_IsFallbackVisualVisible_2877533597@UserTileView_obj1_Bindings@UserTileView@StartDocked@@AEAAXH@Z
    void UpdateFallback_M_IsFallbackVisualVisible_2877533597(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_@UserTileView_obj1_Bindings@UserTileView@StartDocked@@EEAAXPE$AAV23@H@Z
    virtual void Update_(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_M_IsFallbackVisualVisible_2877533597@UserTileView_obj1_Bindings@UserTileView@StartDocked@@AEAAXH@Z
    void Update_M_IsFallbackVisualVisible_2877533597(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel@UserTileView_obj1_Bindings@UserTileView@StartDocked@@AEAAXPE$AAVUserTileViewModel@3@H@Z
    void Update_ViewModel(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_IsAccountBadgingShown@UserTileView_obj1_Bindings@UserTileView@StartDocked@@AEAAX_NH@Z
    void Update_ViewModel_IsAccountBadgingShown(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_IsUserNameShown@UserTileView_obj1_Bindings@UserTileView@StartDocked@@AEAAX_NH@Z
    void Update_ViewModel_IsUserNameShown(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_UserImageBrush@UserTileView_obj1_Bindings@UserTileView@StartDocked@@AEAAXPE$AAVImageBrush@Media@Xaml@UI@Windows@@H@Z
    void Update_ViewModel_UserImageBrush(::Windows::UI::Xaml::Media::ImageBrush & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_UserTileName@UserTileView_obj1_Bindings@UserTileView@StartDocked@@AEAAXPE$AAVString@Platform@@H@Z
    void Update_ViewModel_UserTileName(::Platform::String & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_UserTileTooltip@UserTileView_obj1_Bindings@UserTileView@StartDocked@@AEAAXPE$AAVString@Platform@@H@Z
    void Update_ViewModel_UserTileTooltip(::Platform::String & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VectorChanged@UserTileView_obj1_Bindings@UserTileView@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual void VectorChanged(::Platform::Object & *, WindissectOpaque & *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserTileView_obj1_Bindings@UserTileView@StartDocked@@EEAA@XZ
    virtual ~UserTileView_obj1_Bindings();
};
} // namespace StartDocked::UserTileView
