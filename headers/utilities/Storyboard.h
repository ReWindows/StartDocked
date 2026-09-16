#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 3 member(s).
namespace Windows::UI::Xaml::Media::Animation {
class Storyboard {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetProperty@Storyboard@Animation@Media@Xaml@UI@Windows@@SAPE$AAVString@Platform@@PE$AAVTimeline@23456@@Z
    static ::Platform::String & * GetTargetProperty(::Windows::UI::Xaml::Media::Animation::Timeline & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTarget@Storyboard@Animation@Media@Xaml@UI@Windows@@SAXPE$AAVTimeline@23456@PE$AAVDependencyObject@456@@Z
    static void SetTarget(::Windows::UI::Xaml::Media::Animation::Timeline & *, ::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetProperty@Storyboard@Animation@Media@Xaml@UI@Windows@@SAXPE$AAVTimeline@23456@PE$AAVString@Platform@@@Z
    static void SetTargetProperty(::Windows::UI::Xaml::Media::Animation::Timeline & *, ::Platform::String & *);
};
} // namespace Windows::UI::Xaml::Media::Animation
