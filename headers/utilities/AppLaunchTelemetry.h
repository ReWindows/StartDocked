#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 4 member(s).
namespace PerfTrack {
class AppLaunchTelemetry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppLaunched_@AppLaunchTelemetry@PerfTrack@@QEAAXW4Location@2@PEB_W@Z
    void AppLaunched_(int, wchar_t const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@AppLaunchTelemetry@PerfTrack@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
};
} // namespace PerfTrack
