#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class AllAppsPane_RecentlyAdded_ExpandCollapse {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AllAppsPane_RecentlyAdded_ExpandCollapse@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AllAppsPane_RecentlyAdded_ExpandCollapse@StartAppTelemetry@@QEAA@XZ
    ~AllAppsPane_RecentlyAdded_ExpandCollapse();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AllAppsPane_RecentlyAdded_ExpandCollapse@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AllAppsPane_RecentlyAdded_ExpandCollapse@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
