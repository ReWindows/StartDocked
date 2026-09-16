#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartDocked {
class PlatformCapability {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppResolverPresent@PlatformCapability@StartDocked@@YA_NXZ
    bool IsAppResolverPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExternalDragDropSupported@PlatformCapability@StartDocked@@YA_NXZ
    bool IsExternalDragDropSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDeferAllAppsInitialization@PlatformCapability@StartDocked@@YA_NXZ
    bool ShouldDeferAllAppsInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsMultipleUsersPerSession@PlatformCapability@StartDocked@@YA_NXZ
    bool SupportsMultipleUsersPerSession();
};
} // namespace StartDocked
