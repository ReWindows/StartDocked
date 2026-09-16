#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace Windows::UI::Xaml::Input {
class FocusManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElement@FocusManager@Input@Xaml@UI@Windows@@SAPE$AAVObject@Platform@@XZ
    static ::Platform::Object & * GetFocusedElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveFocus@FocusManager@Input@Xaml@UI@Windows@@SA_NW4FocusNavigationDirection@2345@@Z
    static bool TryMoveFocus(int);
};
} // namespace Windows::UI::Xaml::Input
