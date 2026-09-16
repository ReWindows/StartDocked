#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class AccountDisplayNameUpdate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AccountDisplayNameUpdate@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccountDisplayNameUpdate@StartAppTelemetry@@QEAA@XZ
    ~AccountDisplayNameUpdate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AccountDisplayNameUpdate@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AccountDisplayNameUpdate@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
