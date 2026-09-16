#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace StartDocked {
class DragDropHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteDrop@DragDropHelper@StartDocked@@SAXPE$AAU?$IVectorView@PE$AAVObject@Platform@@@Collections@Foundation@Windows@@@Z
    static void CompleteDrop(WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillDataPackageWithItems@DragDropHelper@StartDocked@@SA_NPE$AAVDataPackage@DataTransfer@ApplicationModel@Windows@@PE$AAU?$IVector@PE$AAVObject@Platform@@@Collections@Foundation@6@@Z
    static bool FillDataPackageWithItems(::Windows::ApplicationModel::DataTransfer::DataPackage & *, WindissectOpaque & *);
};
} // namespace StartDocked
