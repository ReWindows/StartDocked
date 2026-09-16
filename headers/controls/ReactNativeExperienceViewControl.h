#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 3 member(s).
namespace StartDocked {
class ReactNativeExperienceViewControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExtensionActivationArgs@ReactNativeExperienceViewControl@StartDocked@@SAPE$AAVPropertySet@Collections@Foundation@Windows@@XZ
    static WindissectOpaque & * CreateExtensionActivationArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCloudDomainTenantName@ReactNativeExperienceViewControl@StartDocked@@SAJPEAPEA_W@Z
    static long GetCloudDomainTenantName(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHomeProSku@ReactNativeExperienceViewControl@StartDocked@@SA_NXZ
    static bool IsHomeProSku();
};
} // namespace StartDocked
