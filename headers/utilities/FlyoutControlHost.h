#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace JumpViewUI {
class FlyoutControlHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHostFlyout@FlyoutControlHost@JumpViewUI@@SAPE$AAVMenuFlyout@Controls@Xaml@UI@Windows@@PE$AAVResourceDictionary@567@@Z
    static ::Windows::UI::Xaml::Controls::MenuFlyout & * CreateHostFlyout(::Windows::UI::Xaml::ResourceDictionary & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlyoutAt@FlyoutControlHost@JumpViewUI@@SAXPE$AAVMenuFlyout@Controls@Xaml@UI@Windows@@PE$AAVControl@4567@PE$AAVString@Platform@@PE$AAVFrameworkElement@567@@Z
    static void ShowFlyoutAt(::Windows::UI::Xaml::Controls::MenuFlyout & *, ::Windows::UI::Xaml::Controls::Control & *, ::Platform::String & *, ::Windows::UI::Xaml::FrameworkElement & *);
};
} // namespace JumpViewUI
