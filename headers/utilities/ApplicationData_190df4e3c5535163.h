#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 1 member(s).
namespace Windows::Storage {
class ApplicationData {
public:
    class Current;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUserAsync@ApplicationData@Storage@Windows@@SAPE$AAU?$IAsyncOperation@PE$AAVApplicationData@Storage@Windows@@@Foundation@3@PE$AAVUser@System@3@@Z
    static WindissectOpaque & * GetForUserAsync(::Windows::System::User & *);
};
} // namespace Windows::Storage
