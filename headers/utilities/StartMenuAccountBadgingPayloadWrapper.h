#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 10 member(s).
namespace StartDocked {
class StartMenuAccountBadgingPayloadWrapper {
public:
    class AccountBadgingIrisPayload;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeColor@StartMenuAccountBadgingPayloadWrapper@StartDocked@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque BadgeColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BadgeType@StartMenuAccountBadgingPayloadWrapper@StartDocked@@QEAAK_N@Z
    unsigned long BadgeType(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreativeIndex@StartMenuAccountBadgingPayloadWrapper@StartDocked@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque CreativeIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@StartMenuAccountBadgingPayloadWrapper@StartDocked@@SAAEAV12@XZ
    static WindissectOpaque & GetInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Size@StartMenuAccountBadgingPayloadWrapper@StartDocked@@QEAAKXZ
    unsigned long Size();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetIrisJsonAsync@StartMenuAccountBadgingPayloadWrapper@StartDocked@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ
    WindissectOpaque TryGetIrisJsonAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseClientLocalImpressionEligibility@StartMenuAccountBadgingPayloadWrapper@StartDocked@@SA_NXZ
    static bool UseClientLocalImpressionEligibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseIrisDelivered@StartMenuAccountBadgingPayloadWrapper@StartDocked@@SA_NXZ
    static bool UseIrisDelivered();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRulesEngineWrapper@StartMenuAccountBadgingPayloadWrapper@StartDocked@@AEAAXXZ
    void EnsureRulesEngineWrapper();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartMenuAccountBadgingPayload@StartMenuAccountBadgingPayloadWrapper@StartDocked@@CA?AUStartMenuAccountBadgingPayload@12@XZ
    static WindissectOpaque GetStartMenuAccountBadgingPayload();
};
} // namespace StartDocked
