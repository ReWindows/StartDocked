#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace StartAppTelemetry {
class ThemeManager_SystemThemeUpdate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ThemeManager_SystemThemeUpdate@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThemeManager_SystemThemeUpdate@StartAppTelemetry@@QEAA@XZ
    ~ThemeManager_SystemThemeUpdate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ThemeManager_SystemThemeUpdate@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ThemeManager_SystemThemeUpdate@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
