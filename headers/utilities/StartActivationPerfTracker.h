#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartAppTelemetry {
class StartActivationPerfTracker {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMarked@StartActivationPerfTracker@StartAppTelemetry@@QEBA_NW4StartActivationPhase@2@@Z
    bool IsMarked(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Mark@StartActivationPerfTracker@StartAppTelemetry@@QEAAXW4StartActivationPhase@2@@Z
    void Mark(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaybeEmitSummary@StartActivationPerfTracker@StartAppTelemetry@@QEAAXXZ
    void MaybeEmitSummary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@StartActivationPerfTracker@StartAppTelemetry@@QEAAXXZ
    void Reset();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToMs@StartActivationPerfTracker@StartAppTelemetry@@AEBAI_K0@Z
    unsigned int ToMs(uint64_t, uint64_t) const;
};
} // namespace StartAppTelemetry
