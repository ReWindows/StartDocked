#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 3 member(s).
namespace StartDocked {
class CommandingVerbProvider {
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedTileNoThrow@CommandingVerbProvider@StartDocked@@CAPE$AAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PE$AAUIItemViewModel@2@@Z
    static ::WindowsInternal::Shell::UnifiedTile::IUnifiedTile & * GetUnifiedTileNoThrow(WindissectOpaque & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerbExecutionArgs@CommandingVerbProvider@StartDocked@@CAPE$AAVVerbExecutionArgs@UnifiedTile@Shell@WindowsInternal@@XZ
    static ::WindowsInternal::Shell::UnifiedTile::VerbExecutionArgs & * GetVerbExecutionArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVerbExecute@CommandingVerbProvider@StartDocked@@CAXPE$AAUIPerFrameData@2@PE$AAVTileVerb@UnifiedTile@Shell@WindowsInternal@@W4VerbCommandId@2@PE$AAUIItemViewModel@2@PE$AAVFrameworkElement@Xaml@UI@Windows@@W4VerbSource@2@_N@Z
    static void OnVerbExecute(WindissectOpaque & *, ::WindowsInternal::Shell::UnifiedTile::TileVerb & *, int, WindissectOpaque & *, ::Windows::UI::Xaml::FrameworkElement & *, int, bool);
};
} // namespace StartDocked
