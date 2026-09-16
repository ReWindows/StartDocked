#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace Windows::Internal::Shell::StartUI {
class StartExperience {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@StartExperience@StartUI@Shell@Internal@Windows@@SAPE$AAV12345@XZ
    static ::Windows::Internal::Shell::StartUI::StartExperience & * GetForCurrentView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIfNoCurrentView@StartExperience@StartUI@Shell@Internal@Windows@@SAPE$AAV12345@XZ
    static ::Windows::Internal::Shell::StartUI::StartExperience & * GetIfNoCurrentView();
};
} // namespace Windows::Internal::Shell::StartUI
