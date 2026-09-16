#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 3 member(s).
namespace Microsoft::WRL {
class Details {
public:
    class ModuleBase;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z
    unsigned long SafeUnknownDecrementReference(long volatile &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z
    unsigned long SafeUnknownIncrementReference(long volatile &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z
    bool TerminateMap(WindissectOpaque *, wchar_t const *, bool);
};
} // namespace Microsoft::WRL
