#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
class ExplorerProcessWatchdog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformInitialization@ExplorerProcessWatchdog@@QEAAXPEA_K@Z
    void PerformInitialization(uint64_t *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_waitCallback@ExplorerProcessWatchdog@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    static void s_waitCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
};
