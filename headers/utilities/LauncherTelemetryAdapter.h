#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 13 member(s).
namespace StartDocked {
class LauncherTelemetryAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextMenuBeginSession@LauncherTelemetryAdapter@StartDocked@@QEAAXPE$AAVObject@Platform@@W4VerbSource@2@W4VerbInputSource@2@@Z
    void ContextMenuBeginSession(::Platform::Object & *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMode@LauncherTelemetryAdapter@StartDocked@@QEAA?AW4Mode@LauncherTelemetry@@XZ
    int GetMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAllApplicationItems@LauncherTelemetryAdapter@StartDocked@@QEAAXPE$AAUICollectionView@Data@Xaml@UI@Windows@@@Z
    void LogAllApplicationItems(::Windows::UI::Xaml::Data::ICollectionView & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppListItemAdded@LauncherTelemetryAdapter@StartDocked@@QEAAXPE$AAUIAppItemViewModel@2@I@Z
    void LogAppListItemAdded(WindissectOpaque & *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppListItemInvoke@LauncherTelemetryAdapter@StartDocked@@QEAAXPE$AAUIAppItemViewModel@2@W4VerbSource@2@IJW4ActivationOptions@UnifiedTile@Shell@WindowsInternal@@@Z
    void LogAppListItemInvoke(WindissectOpaque & *, int, unsigned int, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppListItemMissingLogo@LauncherTelemetryAdapter@StartDocked@@QEAAXPE$AAUIAppItemViewModel@2@@Z
    void LogAppListItemMissingLogo(WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppListItemRemoved@LauncherTelemetryAdapter@StartDocked@@QEAAXPE$AAUIAppItemViewModel@2@IW4AppListItemRemovedReason@LauncherTelemetry@@@Z
    void LogAppListItemRemoved(WindissectOpaque & *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppListItemUnfriendlyDisplayName@LauncherTelemetryAdapter@StartDocked@@QEAAXPE$AAUIAppItemViewModel@2@@Z
    void LogAppListItemUnfriendlyDisplayName(WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogLauncherFrameOnVisibilityChanged@LauncherTelemetryAdapter@StartDocked@@QEAAJ_NPE$AAUIAllAppsViewModel@2@@Z
    long LogLauncherFrameOnVisibilityChanged(bool, WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogWorkingSet@LauncherTelemetryAdapter@StartDocked@@QEAAXPEB_W@Z
    void LogWorkingSet(wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerbDelegateCommandExecuted@LauncherTelemetryAdapter@StartDocked@@QEAAJW4VerbSource@2@PE$AAVObject@Platform@@W4VerbCommandId@2@@Z
    long VerbDelegateCommandExecuted(int, ::Platform::Object & *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LauncherTelemetryAdapter@StartDocked@@QEAA@XZ
    ~LauncherTelemetryAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerbOnAppItem@LauncherTelemetryAdapter@StartDocked@@AEAAJU_GUID@@W4Location@LauncherTelemetry@@PE$AAUIAppItemViewModel@2@@Z
    long VerbOnAppItem(_GUID, int, WindissectOpaque & *);
};
} // namespace StartDocked
