#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartAppTelemetry {
class ShutdownConfirmOKClickActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@ShutdownConfirmOKClickActivity@StartAppTelemetry@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShutdownConfirmOKClickActivity@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShutdownConfirmOKClickActivity@StartAppTelemetry@@QEAA@XZ
    ~ShutdownConfirmOKClickActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShutdownConfirmOKClickActivity@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShutdownConfirmOKClickActivity@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
