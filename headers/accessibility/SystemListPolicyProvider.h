#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartDocked {
class SystemListPolicyProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumFrequentApps@SystemListPolicyProvider@StartDocked@@UEAAIXZ
    virtual unsigned int GetMaximumFrequentApps();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumRecentAppsWhenCollapsed@SystemListPolicyProvider@StartDocked@@UEAAIXZ
    virtual unsigned int GetMaximumRecentAppsWhenCollapsed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaximumRecentAppsWhenExpanded@SystemListPolicyProvider@StartDocked@@UEAAIXZ
    virtual unsigned int GetMaximumRecentAppsWhenExpanded();
};
} // namespace StartDocked
