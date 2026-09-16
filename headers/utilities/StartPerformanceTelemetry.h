#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 6 member(s).
class StartPerformanceTelemetry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@StartPerformanceTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppViewCount_@StartPerformanceTelemetry@@QEAAXH@Z
    void LogAppViewCount_(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogWorkingSet_@StartPerformanceTelemetry@@QEAAXPEB_WHH@Z
    void LogWorkingSet_(wchar_t const *, int, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@StartPerformanceTelemetry@@KAPEAV1@XZ
    static StartPerformanceTelemetry * Instance();
};
