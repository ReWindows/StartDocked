#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartAppTelemetry {
class StartInitializationActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartInitializationActivity@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartInitializationActivity@StartAppTelemetry@@QEAA@XZ
    ~StartInitializationActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartInitializationActivity@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartInitializationActivity@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
