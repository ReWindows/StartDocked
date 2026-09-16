#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 3 member(s).
class UserContextHelper {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetCurrentUserImpl@UserContextHelper@@CAPE$AAUIUserContext@StartDocked@@_N@Z
    static WindissectOpaque & * TryGetCurrentUserImpl(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetSignedInUser@UserContextHelper@@CAPE$AAVUser@System@Windows@@XZ
    static ::Windows::System::User & * TryGetSignedInUser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForSignedInUser@UserContextHelper@@CAPE$AAVUser@System@Windows@@XZ
    static ::Windows::System::User & * WaitForSignedInUser();
};
