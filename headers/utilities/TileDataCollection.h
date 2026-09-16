#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 6 member(s).
namespace StartAppTelemetry {
class TileDataCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TileDataCollection@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileDataCollection@StartAppTelemetry@@QEAA@XZ
    ~TileDataCollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TileDataCollection@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TileDataCollection@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
