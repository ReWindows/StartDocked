#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 3 member(s).
namespace Windows::UI::Xaml::Media {
class VisualTreeHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChild@VisualTreeHelper@Media@Xaml@UI@Windows@@SAPE$AAVDependencyObject@345@PE$AAV6345@H@Z
    static ::Windows::UI::Xaml::DependencyObject & * GetChild(::Windows::UI::Xaml::DependencyObject & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCount@VisualTreeHelper@Media@Xaml@UI@Windows@@SAHPE$AAVDependencyObject@345@@Z
    static int GetChildrenCount(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@VisualTreeHelper@Media@Xaml@UI@Windows@@SAPE$AAVDependencyObject@345@PE$AAV6345@@Z
    static ::Windows::UI::Xaml::DependencyObject & * GetParent(::Windows::UI::Xaml::DependencyObject & *);
};
} // namespace Windows::UI::Xaml::Media
