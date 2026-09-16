#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class NavigationPane_ContextMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NavigationPane_ContextMenu@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationPane_ContextMenu@StartAppTelemetry@@QEAA@XZ
    ~NavigationPane_ContextMenu();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NavigationPane_ContextMenu@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NavigationPane_ContextMenu@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
