#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace StartDocked {
class __AllAppsTelemetryActivationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFactory@__AllAppsTelemetryActivationFactory@StartDocked@@SAJPEAIPEAU__abi___classObjectEntry@@AEAVGuid@Platform@@PEAPEAU__abi_IUnknown@@@Z
    static long CreateFactory(unsigned int *, __abi___classObjectEntry *, ::Platform::Guid &, __abi_IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetClassName@__AllAppsTelemetryActivationFactory@StartDocked@@SAPEB_WXZ
    static wchar_t const * GetTargetClassName();
};
} // namespace StartDocked
