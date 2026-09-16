#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 3 member(s).
namespace StartDocked {
class AppSortHelper {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareNames@AppSortHelper@StartDocked@@YA_NPE$AAUIAppItemViewModel@2@0@Z
    bool CompareNames(WindissectOpaque & *, WindissectOpaque & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortName@AppSortHelper@StartDocked@@YAPE$AAVString@Platform@@PE$AAUIAppItemViewModel@2@@Z
    ::Platform::String & * GetSortName(WindissectOpaque & *);
};
} // namespace StartDocked
