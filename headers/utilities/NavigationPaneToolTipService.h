#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartDocked {
class NavigationPaneToolTipService {
public:
    class IsEnabled;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToolTip@NavigationPaneToolTipService@StartDocked@@SAPE$AAVObject@Platform@@PE$AAVDependencyObject@Xaml@UI@Windows@@@Z
    static ::Platform::Object & * GetToolTip(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDependencyProperties@NavigationPaneToolTipService@StartDocked@@SAXXZ
    static void RegisterDependencyProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToolTip@NavigationPaneToolTipService@StartDocked@@SAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVObject@Platform@@@Z
    static void SetToolTip(::Windows::UI::Xaml::DependencyObject & *, ::Platform::Object & *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnToolTipPropertyChanged@NavigationPaneToolTipService@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVObject@Platform@@1@Z
    static void OnToolTipPropertyChanged(::Windows::UI::Xaml::DependencyObject & *, ::Platform::Object & *, ::Platform::Object & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnToolTipPropertyChangedImpl@NavigationPaneToolTipService@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@456@@Z
    static void OnToolTipPropertyChangedImpl(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
};
} // namespace StartDocked
