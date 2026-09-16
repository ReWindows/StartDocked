#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartDocked {
class TimePolicyProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNew@TimePolicyProvider@StartDocked@@UEAA_NVDateTime@Foundation@Windows@@@Z
    virtual bool IsNew(::Windows::Foundation::DateTime);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNewBadgeApplicable@TimePolicyProvider@StartDocked@@UEAA_NVDateTime@Foundation@Windows@@0@Z
    virtual bool IsNewBadgeApplicable(::Windows::Foundation::DateTime, ::Windows::Foundation::DateTime);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRecentlyInstalled@TimePolicyProvider@StartDocked@@UEAA_NVDateTime@Foundation@Windows@@@Z
    virtual bool IsRecentlyInstalled(::Windows::Foundation::DateTime);
};
} // namespace StartDocked
