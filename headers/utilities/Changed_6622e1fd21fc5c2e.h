#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace WindowsUdk::UI::Themes::SystemVisualTheme {
class Changed {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add@Changed@SystemVisualTheme@Themes@UI@WindowsUdk@@SA?AVEventRegistrationToken@Foundation@Windows@@PE$AAVVisualThemeChangedHandler@345@@Z
    static ::Windows::Foundation::EventRegistrationToken add(::WindowsUdk::UI::Themes::VisualThemeChangedHandler & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove@Changed@SystemVisualTheme@Themes@UI@WindowsUdk@@SAXVEventRegistrationToken@Foundation@Windows@@@Z
    static void remove(::Windows::Foundation::EventRegistrationToken);
};
} // namespace WindowsUdk::UI::Themes::SystemVisualTheme
