#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace Windows::Internal::Shell::StartUI {
class UserTileMenu {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommands@UserTileMenu@StartUI@Shell@Internal@Windows@@SAPE$AAU?$IVectorView@PE$AAVUserTileCommand@StartUI@Shell@Internal@Windows@@@Collections@Foundation@5@XZ
    static WindissectOpaque & * GetCommands();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwitchUserList@UserTileMenu@StartUI@Shell@Internal@Windows@@SAPE$AAU?$IVectorView@PE$AAVUserTileSwitchUser@StartUI@Shell@Internal@Windows@@@Collections@Foundation@5@XZ
    static WindissectOpaque & * GetSwitchUserList();
};
} // namespace Windows::Internal::Shell::StartUI
