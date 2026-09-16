#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class OtherUserAccountPictureUpdate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OtherUserAccountPictureUpdate@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OtherUserAccountPictureUpdate@StartAppTelemetry@@QEAA@XZ
    ~OtherUserAccountPictureUpdate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OtherUserAccountPictureUpdate@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OtherUserAccountPictureUpdate@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
