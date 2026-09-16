#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 6 member(s).
namespace StartAppTelemetry {
class StartSizingFrameMeasure {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartSizingFrameMeasure@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartSizingFrameMeasure@StartAppTelemetry@@QEAA@XZ
    ~StartSizingFrameMeasure();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartSizingFrameMeasure@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartSizingFrameMeasure@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
