#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class AccountControlCreateHostFlyout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AccountControlCreateHostFlyout@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccountControlCreateHostFlyout@StartAppTelemetry@@QEAA@XZ
    ~AccountControlCreateHostFlyout();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AccountControlCreateHostFlyout@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AccountControlCreateHostFlyout@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
