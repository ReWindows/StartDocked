#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartAppTelemetry {
class ShutdownUpdateSelectedReasonActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@ShutdownUpdateSelectedReasonActivity@StartAppTelemetry@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShutdownUpdateSelectedReasonActivity@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShutdownUpdateSelectedReasonActivity@StartAppTelemetry@@QEAA@XZ
    ~ShutdownUpdateSelectedReasonActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShutdownUpdateSelectedReasonActivity@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShutdownUpdateSelectedReasonActivity@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
