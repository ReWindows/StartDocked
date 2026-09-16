#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 19 member(s).
namespace StartDocked::NavigationPaneView {
class NavigationPaneView_obj1_Bindings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@UEAAXHPE$AAVObject@Platform@@@Z
    virtual void Connect(int, ::Platform::Object & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUnloadedObject@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@UEAAXH@Z
    virtual void DisconnectUnloadedObject(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@QEAA@XZ
    NavigationPaneView_obj1_Bindings();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionChanged@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAVNotifyCollectionChangedEventArgs@Interop@Xaml@UI@Windows@@@Z
    virtual void CollectionChanged(::Platform::Object & *, ::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DependencyPropertyChanged@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@EEAAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyProperty@567@@Z
    virtual void DependencyPropertyChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyProperty & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapChanged@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAU?$IMapChangedEventArgs@PE$AAVString@Platform@@@Collections@Foundation@Windows@@@Z
    virtual void MapChanged(::Platform::Object & *, WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyChanged@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAVPropertyChangedEventArgs@Data@Xaml@UI@Windows@@@Z
    virtual void PropertyChanged(::Platform::Object & *, ::Windows::UI::Xaml::Data::PropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllListeners@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@EEAAXXZ
    virtual void ReleaseAllListeners();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Controls_ItemsControl_ItemsSource@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@CAXPE$AAVItemsControl@Controls@Xaml@UI@Windows@@PE$AAVObject@Platform@@PE$AAVString@Platform@@@Z
    static void Set_Windows_UI_Xaml_Controls_ItemsControl_ItemsSource(::Windows::UI::Xaml::Controls::ItemsControl & *, ::Platform::Object & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_UIElement_Visibility@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@CAXPE$AAVUIElement@Xaml@UI@Windows@@W4Visibility@567@@Z
    static void Set_Windows_UI_Xaml_UIElement_Visibility(::Windows::UI::Xaml::UIElement & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@EEAAXPE$AAV23@H@Z
    virtual void Update_(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_IsPowerButtonVisible_Cast_IsPowerButtonVisible_To_Visibility@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@AEAAXW4Visibility@Xaml@UI@Windows@@H@Z
    void Update_IsPowerButtonVisible_Cast_IsPowerButtonVisible_To_Visibility(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_IsUserTileVisible@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@AEAAX_NH@Z
    void Update_IsUserTileVisible(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_PlacesPaneViewModel@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@AEAAXPE$AAUIPlacesViewModel@3@H@Z
    void Update_PlacesPaneViewModel(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_PlacesPaneViewModel_Places@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@AEAAXPE$AAU?$IObservableVector@PE$AAUIAppItemViewModel@StartDocked@@@Collections@Foundation@Windows@@H@Z
    void Update_PlacesPaneViewModel_Places(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VectorChanged@NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual void VectorChanged(::Platform::Object & *, WindissectOpaque & *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationPaneView_obj1_Bindings@NavigationPaneView@StartDocked@@EEAA@XZ
    virtual ~NavigationPaneView_obj1_Bindings();
};
} // namespace StartDocked::NavigationPaneView
