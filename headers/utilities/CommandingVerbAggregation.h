#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartAppTelemetry {
class CommandingVerbAggregation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@CommandingVerbAggregation@StartAppTelemetry@@QEAA?AV12@XZ
    WindissectOpaque Split();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CommandingVerbAggregation@StartAppTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommandingVerbAggregation@StartAppTelemetry@@QEAA@XZ
    ~CommandingVerbAggregation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CommandingVerbAggregation@StartAppTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CommandingVerbAggregation@StartAppTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StartAppTelemetry
