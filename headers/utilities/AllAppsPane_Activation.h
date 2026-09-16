#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class AllAppsPane_Activation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AllAppsPane_Activation@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AllAppsPane_Activation@StartAppTelemetry@@QEAA@XZ
    ~AllAppsPane_Activation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AllAppsPane_Activation@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AllAppsPane_Activation@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
