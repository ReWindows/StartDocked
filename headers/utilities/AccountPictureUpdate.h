#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class AccountPictureUpdate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AccountPictureUpdate@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccountPictureUpdate@StartAppTelemetry@@QEAA@XZ
    ~AccountPictureUpdate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AccountPictureUpdate@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AccountPictureUpdate@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
