#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
class UserHelpers {
public:
    class Impersonator;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemAccount@UserHelpers@@YA_NPEAX@Z
    bool IsSystemAccount(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThreadEffectiveToken@UserHelpers@@YA_NPEAX@Z
    bool IsThreadEffectiveToken(void *);
};
