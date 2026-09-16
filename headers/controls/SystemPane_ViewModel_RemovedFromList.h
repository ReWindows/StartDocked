#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class SystemPane_ViewModel_RemovedFromList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SystemPane_ViewModel_RemovedFromList@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemPane_ViewModel_RemovedFromList@StartAppTelemetry@@QEAA@XZ
    ~SystemPane_ViewModel_RemovedFromList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SystemPane_ViewModel_RemovedFromList@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SystemPane_ViewModel_RemovedFromList@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
