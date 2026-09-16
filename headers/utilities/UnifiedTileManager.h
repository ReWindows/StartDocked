#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 1 member(s).
namespace WindowsInternal::Shell::UnifiedTile {
class UnifiedTileManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithOptionsAndStatusAsync@UnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@SAPE$AAU?$IAsyncOperation@PE$AAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4TileFeatures@234@W4TileSources@234@PE$AAVUnifiedTileManagerOptions@234@PEAPE$AAVUnifiedTileManagerCreationStatus@234@@Z
    static WindissectOpaque & * CreateWithOptionsAndStatusAsync(int, int, ::WindowsInternal::Shell::UnifiedTile::UnifiedTileManagerOptions & *, ::WindowsInternal::Shell::UnifiedTile::UnifiedTileManagerCreationStatus & * *);
};
} // namespace WindowsInternal::Shell::UnifiedTile
