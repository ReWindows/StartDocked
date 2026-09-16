#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class AccountControlLoadReactView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AccountControlLoadReactView@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccountControlLoadReactView@StartAppTelemetry@@QEAA@XZ
    ~AccountControlLoadReactView();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AccountControlLoadReactView@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AccountControlLoadReactView@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
