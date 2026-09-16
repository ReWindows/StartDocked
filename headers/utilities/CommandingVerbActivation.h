#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class CommandingVerbActivation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CommandingVerbActivation@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommandingVerbActivation@StartAppTelemetry@@QEAA@XZ
    ~CommandingVerbActivation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CommandingVerbActivation@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CommandingVerbActivation@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
