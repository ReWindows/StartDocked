#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class StartSizingFrameDrag {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartSizingFrameDrag@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartSizingFrameDrag@StartAppTelemetry@@QEAA@XZ
    ~StartSizingFrameDrag();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartSizingFrameDrag@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartSizingFrameDrag@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
