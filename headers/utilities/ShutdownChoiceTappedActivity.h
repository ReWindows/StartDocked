#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartAppTelemetry {
class ShutdownChoiceTappedActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@ShutdownChoiceTappedActivity@StartAppTelemetry@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShutdownChoiceTappedActivity@StartAppTelemetry@@QEAAX_N0@Z
    void StartActivity(bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShutdownChoiceTappedActivity@StartAppTelemetry@@QEAA@XZ
    ~ShutdownChoiceTappedActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShutdownChoiceTappedActivity@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShutdownChoiceTappedActivity@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
