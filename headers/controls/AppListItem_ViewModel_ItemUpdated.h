#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class AppListItem_ViewModel_ItemUpdated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AppListItem_ViewModel_ItemUpdated@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppListItem_ViewModel_ItemUpdated@StartAppTelemetry@@QEAA@XZ
    ~AppListItem_ViewModel_ItemUpdated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AppListItem_ViewModel_ItemUpdated@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AppListItem_ViewModel_ItemUpdated@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
