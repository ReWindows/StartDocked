#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace StartDocked {
class __LauncherFrameActivationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFactory@__LauncherFrameActivationFactory@StartDocked@@SAJPEAIPEAU__abi___classObjectEntry@@AEAVGuid@Platform@@PEAPEAU__abi_IUnknown@@@Z
    static long CreateFactory(unsigned int *, __abi___classObjectEntry *, ::Platform::Guid &, __abi_IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetClassName@__LauncherFrameActivationFactory@StartDocked@@SAPEB_WXZ
    static wchar_t const * GetTargetClassName();
};
} // namespace StartDocked
