#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 3 member(s).
namespace Windows::System {
class User {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWatcher@User@System@Windows@@SAPE$AAVUserWatcher@23@XZ
    static ::Windows::System::UserWatcher & * CreateWatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllAsync@User@System@Windows@@SAPE$AAU?$IAsyncOperation@PE$AAU?$IVectorView@PE$AAVUser@System@Windows@@@Collections@Foundation@Windows@@@Foundation@3@XZ
    static WindissectOpaque & * FindAllAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefault@User@System@Windows@@SAPE$AAV123@XZ
    static ::Windows::System::User & * GetDefault();
};
} // namespace Windows::System
