#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartAppTelemetry {
class AllAppsPane_ViewModel_Folder_ItemUpdated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AllAppsPane_ViewModel_Folder_ItemUpdated@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AllAppsPane_ViewModel_Folder_ItemUpdated@StartAppTelemetry@@QEAA@XZ
    ~AllAppsPane_ViewModel_Folder_ItemUpdated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AllAppsPane_ViewModel_Folder_ItemUpdated@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AllAppsPane_ViewModel_Folder_ItemUpdated@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
