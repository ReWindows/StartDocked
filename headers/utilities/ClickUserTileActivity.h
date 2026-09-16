#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 6 member(s).
namespace StartAppTelemetry {
class ClickUserTileActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@ClickUserTileActivity@StartAppTelemetry@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ClickUserTileActivity@StartAppTelemetry@@QEAAX_NIPEB_WIU_GUID@@@Z
    void StartActivity(bool, unsigned int, wchar_t const *, unsigned int, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopWithResult@ClickUserTileActivity@StartAppTelemetry@@QEAAXJ@Z
    void StopWithResult(long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClickUserTileActivity@StartAppTelemetry@@QEAA@XZ
    ~ClickUserTileActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ClickUserTileActivity@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ClickUserTileActivity@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
