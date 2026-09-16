#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 9 member(s).
namespace StartDocked {
class LocalSettings {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllAppsSeenTime@LocalSettings@StartDocked@@UEAA?AVDateTime@Foundation@Windows@@XZ
    virtual ::Windows::Foundation::DateTime GetAllAppsSeenTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstRunAfterInstallOrUpdateTime@LocalSettings@StartDocked@@UEAA?AVDateTime@Foundation@Windows@@XZ
    virtual ::Windows::Foundation::DateTime GetFirstRunAfterInstallOrUpdateTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstRunTime@LocalSettings@StartDocked@@UEAA?AVDateTime@Foundation@Windows@@XZ
    virtual ::Windows::Foundation::DateTime GetFirstRunTime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFirstRun@LocalSettings@StartDocked@@UEAA_NXZ
    virtual bool IsFirstRun();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFirstRunAfterInstallOrUpdate@LocalSettings@StartDocked@@UEAA_NXZ
    virtual bool IsFirstRunAfterInstallOrUpdate();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LocalSettings@StartDocked@@QEAA@XZ
    LocalSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllAppsSeenTime@LocalSettings@StartDocked@@UEAAXVDateTime@Foundation@Windows@@@Z
    virtual void SetAllAppsSeenTime(::Windows::Foundation::DateTime);
};
} // namespace StartDocked
