#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 3 member(s).
namespace Windows::System {
class Launcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriAsync@Launcher@System@Windows@@SAPE$AAU?$IAsyncOperation@_N@Foundation@3@PE$AAVUri@53@@Z
    static WindissectOpaque & * LaunchUriAsync(::Windows::Foundation::Uri & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriAsync@Launcher@System@Windows@@SAPE$AAU?$IAsyncOperation@_N@Foundation@3@PE$AAVUri@53@PE$AAVLauncherOptions@23@@Z
    static WindissectOpaque & * LaunchUriAsync(::Windows::Foundation::Uri & *, ::Windows::System::LauncherOptions & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUriForUserAsync@Launcher@System@Windows@@SAPE$AAU?$IAsyncOperation@W4LaunchUriStatus@System@Windows@@@Foundation@3@PE$AAVUser@23@PE$AAVUri@53@@Z
    static WindissectOpaque & * LaunchUriForUserAsync(::Windows::System::User & *, ::Windows::Foundation::Uri & *);
};
} // namespace Windows::System
