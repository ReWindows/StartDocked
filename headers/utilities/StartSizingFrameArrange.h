#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartAppTelemetry {
class StartSizingFrameArrange {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartSizingFrameArrange@StartAppTelemetry@@QEAAXVSize@Foundation@Windows@@@Z
    void StartActivity(::Windows::Foundation::Size);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@StartSizingFrameArrange@StartAppTelemetry@@QEAAXVSize@Foundation@Windows@@@Z
    void Stop(::Windows::Foundation::Size);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartSizingFrameArrange@StartAppTelemetry@@QEAA@XZ
    ~StartSizingFrameArrange();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartSizingFrameArrange@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartSizingFrameArrange@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
