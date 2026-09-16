#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace ApplicationTheme::AppThemeAPI {
class ThemeColorsChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add@ThemeColorsChanged@AppThemeAPI@ApplicationTheme@@SA?AVEventRegistrationToken@Foundation@Windows@@PE$AAV?$EventHandler@PE$AAVObject@Platform@@@56@@Z
    static ::Windows::Foundation::EventRegistrationToken add(WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove@ThemeColorsChanged@AppThemeAPI@ApplicationTheme@@SAXVEventRegistrationToken@Foundation@Windows@@@Z
    static void remove(::Windows::Foundation::EventRegistrationToken);
};
} // namespace ApplicationTheme::AppThemeAPI
