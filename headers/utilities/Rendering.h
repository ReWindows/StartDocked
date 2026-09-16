#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace Windows::UI::Xaml::Media::CompositionTarget {
class Rendering {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?add@Rendering@CompositionTarget@Media@Xaml@UI@Windows@@SA?AVEventRegistrationToken@Foundation@6@PE$AAV?$EventHandler@PE$AAVObject@Platform@@@86@@Z
    static ::Windows::Foundation::EventRegistrationToken add(WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove@Rendering@CompositionTarget@Media@Xaml@UI@Windows@@SAXVEventRegistrationToken@Foundation@6@@Z
    static void remove(::Windows::Foundation::EventRegistrationToken);
};
} // namespace Windows::UI::Xaml::Media::CompositionTarget
