#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class AllAppsPane_ContextMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AllAppsPane_ContextMenu@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AllAppsPane_ContextMenu@StartAppTelemetry@@QEAA@XZ
    ~AllAppsPane_ContextMenu();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AllAppsPane_ContextMenu@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AllAppsPane_ContextMenu@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
