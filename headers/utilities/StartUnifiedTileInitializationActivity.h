#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 3 member(s).
namespace StartAppTelemetry {
class StartUnifiedTileInitializationActivity {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartUnifiedTileInitializationActivity@StartAppTelemetry@@QEAA@XZ
    ~StartUnifiedTileInitializationActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartUnifiedTileInitializationActivity@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartUnifiedTileInitializationActivity@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
