#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace StartDocked {
class DisplayNameUtils {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFriendlyDisplayName@DisplayNameUtils@StartDocked@@YA?AUhstring@winrt@@AEBU34@W4AppState@UnifiedTile@Shell@WindowsInternal@@PE$AAUIResourceLoaderInternal@SharedUtilities@@@Z
    WindissectOpaque GetFriendlyDisplayName(WindissectOpaque const &, int, WindissectOpaque & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnfriendly@DisplayNameUtils@StartDocked@@YA_NAEBUhstring@winrt@@@Z
    bool IsUnfriendly(WindissectOpaque const &);
};
} // namespace StartDocked
