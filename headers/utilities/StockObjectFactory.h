#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 15 member(s).
namespace StartDocked {
class StockObjectFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAllAppsExpandingGroupViewModel@StockObjectFactory@StartDocked@@UEAAPE$AAUIAllAppsExpandingGroupViewModel@2@PE$AAUIAllAppsExpandingGroupDataSource@2@PE$AAVString@Platform@@II@Z
    virtual WindissectOpaque & * CreateAllAppsExpandingGroupViewModel(WindissectOpaque & *, ::Platform::String & *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAllAppsGroupViewModel@StockObjectFactory@StartDocked@@UEAAPE$AAUIAllAppsGroupViewModel@2@PE$AAVString@Platform@@@Z
    virtual WindissectOpaque & * CreateAllAppsGroupViewModel(::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAllAppsGroupViewModel@StockObjectFactory@StartDocked@@UEAAPE$AAUIAllAppsGroupViewModel@2@PE$AAVString@Platform@@0@Z
    virtual WindissectOpaque & * CreateAllAppsGroupViewModel(::Platform::String & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAllAppsViewModel@StockObjectFactory@StartDocked@@UEAAPE$AAUIAllAppsViewModel@2@XZ
    virtual WindissectOpaque & * CreateAllAppsViewModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAppItemEnumerator@StockObjectFactory@StartDocked@@UEAAPE$AAUIAppItemEnumerator@2@W4View@IObjectFactory@2@@Z
    virtual WindissectOpaque & * CreateAppItemEnumerator(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPowerOptionsViewModel@StockObjectFactory@StartDocked@@UEAAPE$AAVPowerOptionsViewModel@2@XZ
    virtual WindissectOpaque & * GetPowerOptionsViewModel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedAppFreshnessService@StockObjectFactory@StartDocked@@UEAAPE$AAUIAppFreshnessService@2@XZ
    virtual WindissectOpaque & * GetSharedAppFreshnessService();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedFrequentAppsViewModel@StockObjectFactory@StartDocked@@UEAAPE$AAUIAllAppsExpandingGroupDataSource@2@XZ
    virtual WindissectOpaque & * GetSharedFrequentAppsViewModel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedPlacesViewModel@StockObjectFactory@StartDocked@@UEAAPE$AAUIPlacesViewModel@2@XZ
    virtual WindissectOpaque & * GetSharedPlacesViewModel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedStartSizingFrameViewModel@StockObjectFactory@StartDocked@@UEAAPE$AAUIStartSizingFrameViewModel@2@XZ
    virtual WindissectOpaque & * GetSharedStartSizingFrameViewModel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemListVerbProvider@StockObjectFactory@StartDocked@@UEAAPE$AAVSystemListVerbProvider@2@XZ
    virtual WindissectOpaque & * GetSystemListVerbProvider();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StockObjectFactory@StartDocked@@UEAA@XZ
    virtual ~StockObjectFactory();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPerFrameData@StockObjectFactory@StartDocked@@AEAAPE$AAUIPerFrameData@2@XZ
    WindissectOpaque & * GetPerFrameData();
};
} // namespace StartDocked
