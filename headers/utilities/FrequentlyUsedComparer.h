#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 6 member(s).
namespace StartDocked {
class FrequentlyUsedComparer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@FrequentlyUsedComparer@StartDocked@@UEAA_NPE$AAUIAppItemViewModel@2@0@Z
    virtual bool Compare(WindissectOpaque & *, WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIncludeApp@FrequentlyUsedComparer@StartDocked@@UEAA_NPE$AAUIAppItemViewModel@2@@Z
    virtual bool ShouldIncludeApp(WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIncludeAppByRank@FrequentlyUsedComparer@StartDocked@@SA_NPE$AAUIAppItemViewModel@2@@Z
    static bool ShouldIncludeAppByRank(WindissectOpaque & *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldIncludeAppByUIExclusion@FrequentlyUsedComparer@StartDocked@@AEAA_NPE$AAUIAppItemViewModel@2@@Z
    bool ShouldIncludeAppByUIExclusion(WindissectOpaque & *);
};
} // namespace StartDocked
