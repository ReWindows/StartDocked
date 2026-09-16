#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartAppTelemetry {
class ClickShutdownActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@ClickShutdownActivity@StartAppTelemetry@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ClickShutdownActivity@StartAppTelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClickShutdownActivity@StartAppTelemetry@@QEAA@XZ
    ~ClickShutdownActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ClickShutdownActivity@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ClickShutdownActivity@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
