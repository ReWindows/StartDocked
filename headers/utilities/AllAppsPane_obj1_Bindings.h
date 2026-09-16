#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 22 member(s).
namespace StartDocked::AllAppsPane {
class AllAppsPane_obj1_Bindings {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@QEAA@XZ
    AllAppsPane_obj1_Bindings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@UEAAXHPE$AAVObject@Platform@@@Z
    virtual void Connect(int, ::Platform::Object & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUnloadedObject@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@UEAAXH@Z
    virtual void DisconnectUnloadedObject(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionChanged@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAVNotifyCollectionChangedEventArgs@Interop@Xaml@UI@Windows@@@Z
    virtual void CollectionChanged(::Platform::Object & *, ::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DependencyPropertyChanged@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@EEAAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyProperty@567@@Z
    virtual void DependencyPropertyChanged(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyProperty & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapChanged@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAU?$IMapChangedEventArgs@PE$AAVString@Platform@@@Collections@Foundation@Windows@@@Z
    virtual void MapChanged(::Platform::Object & *, WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertyChanged@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAVPropertyChangedEventArgs@Data@Xaml@UI@Windows@@@Z
    virtual void PropertyChanged(::Platform::Object & *, ::Windows::UI::Xaml::Data::PropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllListeners@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@EEAAXXZ
    virtual void ReleaseAllListeners();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Controls_Control_Padding@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@CAXPE$AAVControl@Controls@Xaml@UI@Windows@@VThickness@678@@Z
    static void Set_Windows_UI_Xaml_Controls_Control_Padding(::Windows::UI::Xaml::Controls::Control & *, ::Windows::UI::Xaml::Thickness);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Controls_ItemsControl_ItemsSource@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@CAXPE$AAVItemsControl@Controls@Xaml@UI@Windows@@PE$AAVObject@Platform@@PE$AAVString@Platform@@@Z
    static void Set_Windows_UI_Xaml_Controls_ItemsControl_ItemsSource(::Windows::UI::Xaml::Controls::ItemsControl & *, ::Platform::Object & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@EEAAXPE$AAV23@H@Z
    virtual void Update_(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_CanDragItems@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@AEAAX_NH@Z
    void Update_CanDragItems(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_HorizontalContentAlignment@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@AEAAXW4HorizontalAlignment@Xaml@UI@Windows@@H@Z
    void Update_HorizontalContentAlignment(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@AEAAXPE$AAVAllAppsViewModel@3@H@Z
    void Update_ViewModel(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_AllAppsCollectionView@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@AEAAXPE$AAUICollectionView@Data@Xaml@UI@Windows@@H@Z
    void Update_ViewModel_AllAppsCollectionView(::Windows::UI::Xaml::Data::ICollectionView & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ViewModel_ZoomCollectionGroups@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@AEAAXPE$AAU?$IObservableVector@PE$AAUIAllAppsGroupViewModel@StartDocked@@@Collections@Foundation@Windows@@H@Z
    void Update_ViewModel_ZoomCollectionGroups(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ZoomedInListPadding@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@AEAAXVThickness@Xaml@UI@Windows@@H@Z
    void Update_ZoomedInListPadding(::Windows::UI::Xaml::Thickness, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_ZoomedOutListPadding@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@AEAAXVThickness@Xaml@UI@Windows@@H@Z
    void Update_ZoomedOutListPadding(::Windows::UI::Xaml::Thickness, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VectorChanged@AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@EEAAXPE$AAVObject@Platform@@PE$AAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual void VectorChanged(::Platform::Object & *, WindissectOpaque & *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AllAppsPane_obj1_Bindings@AllAppsPane@StartDocked@@EEAA@XZ
    virtual ~AllAppsPane_obj1_Bindings();
};
} // namespace StartDocked::AllAppsPane
