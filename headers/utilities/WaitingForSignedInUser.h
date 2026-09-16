#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class WaitingForSignedInUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WaitingForSignedInUser@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WaitingForSignedInUser@StartAppTelemetry@@QEAA@XZ
    ~WaitingForSignedInUser();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WaitingForSignedInUser@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WaitingForSignedInUser@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
