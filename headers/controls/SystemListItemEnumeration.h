#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 6 member(s).
namespace StartAppTelemetry {
class SystemListItemEnumeration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllAppsListItemsAdded@SystemListItemEnumeration@StartAppTelemetry@@QEAAXAEBUAllAppsListCollection@LauncherTelemetry@@@Z
    void AllAppsListItemsAdded(::LauncherTelemetry::AllAppsListCollection const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SystemListItemEnumeration@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SystemListItemEnumeration@StartAppTelemetry@@QEAAXW4Mode@LauncherTelemetry@@W4Location@4@@Z
    void Stop(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemListItemEnumeration@StartAppTelemetry@@QEAA@XZ
    ~SystemListItemEnumeration();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SystemListItemEnumeration@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SystemListItemEnumeration@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
