#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class LocalSettings_Initialization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@LocalSettings_Initialization@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LocalSettings_Initialization@StartAppTelemetry@@QEAA@XZ
    ~LocalSettings_Initialization();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@LocalSettings_Initialization@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@LocalSettings_Initialization@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
