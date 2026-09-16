#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 3 member(s).
namespace StartDocked {
class AllAppsGridKeyboardNavigationService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@AllAppsGridKeyboardNavigationService@StartDocked@@QEAAXPE$AAVAllAppsGridListView@2@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    void OnKeyDown(WindissectOpaque & *, ::Windows::UI::Xaml::Input::KeyRoutedEventArgs & *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnArrowKeys@AllAppsGridKeyboardNavigationService@StartDocked@@AEAAPE$AAVObject@Platform@@PE$AAVAllAppsGridListView@2@W4VirtualKey@System@Windows@@@Z
    ::Platform::Object & * OnArrowKeys(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPageKeys@AllAppsGridKeyboardNavigationService@StartDocked@@AEAAPE$AAVObject@Platform@@PE$AAVAllAppsGridListView@2@W4VirtualKey@System@Windows@@@Z
    ::Platform::Object & * OnPageKeys(WindissectOpaque & *, int);
};
} // namespace StartDocked
