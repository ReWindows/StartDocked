#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartAppTelemetry {
class ShutdownReasonOKClickActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@ShutdownReasonOKClickActivity@StartAppTelemetry@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShutdownReasonOKClickActivity@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShutdownReasonOKClickActivity@StartAppTelemetry@@QEAA@XZ
    ~ShutdownReasonOKClickActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShutdownReasonOKClickActivity@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShutdownReasonOKClickActivity@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
