#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 6 member(s).
namespace StartAppTelemetry {
class AppViewModelBase_Enumerate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@AppViewModelBase_Enumerate@StartAppTelemetry@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppViewModelBase_Enumerate@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppViewModelBase_Enumerate@StartAppTelemetry@@QEAA@XZ
    ~AppViewModelBase_Enumerate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppViewModelBase_Enumerate@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppViewModelBase_Enumerate@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
