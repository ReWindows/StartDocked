#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace StartDocked {
class TileDataCollectionFactory {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollection@TileDataCollectionFactory@StartDocked@@YAPE$AAUITileDataCollection@2@W4CollectionType@12@@Z
    WindissectOpaque & * GetCollection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnifiedTileManagerObject@TileDataCollectionFactory@StartDocked@@YAPE$AAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@XZ
    ::WindowsInternal::Shell::UnifiedTile::UnifiedTileManager & * GetUnifiedTileManagerObject();
};
} // namespace StartDocked
