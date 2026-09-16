#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class MoveFocusToSearch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@MoveFocusToSearch@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MoveFocusToSearch@StartAppTelemetry@@QEAA@XZ
    ~MoveFocusToSearch();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@MoveFocusToSearch@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@MoveFocusToSearch@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
