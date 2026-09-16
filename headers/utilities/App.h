#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 8 member(s).
namespace StartDocked {
class App {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePerFrameData@App@StartDocked@@SAPE$AAVPerFrameData@2@XZ
    static WindissectOpaque & * InitializePerFrameData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadExperience@App@StartDocked@@SAPE$AAVObject@Platform@@XZ
    static ::Platform::Object & * LoadExperience();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyShellForWindowTitle@App@StartDocked@@SAXXZ
    static void NotifyShellForWindowTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateSharedResources@App@StartDocked@@SAXXZ
    static void PopulateSharedResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDependencyProperties@App@StartDocked@@SAXXZ
    static void RegisterDependencyProperties();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildUndockedContentAsync@App@StartDocked@@CA?AU?$IAsyncOperation@UUserControl@Controls@Xaml@UI@Windows@winrt@@@Foundation@Windows@winrt@@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@6@@Z
    static WindissectOpaque BuildUndockedContentAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildUndockedContentAsyncNoThrow@App@StartDocked@@CA?AU?$IAsyncOperation@UUserControl@Controls@Xaml@UI@Windows@winrt@@@Foundation@Windows@winrt@@UDockedStartController@Implementation@StartScreen@UI@WindowsUdk@6@V?$tip_test@V?$merged_data@U_tip_StartMenuActivationTest@@U1@@details@tip2@@@tip2@@@Z
    static WindissectOpaque BuildUndockedContentAsyncNoThrow(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeStartModelForStartMenu@App@StartDocked@@CAXXZ
    static void InitializeStartModelForStartMenu();
};
} // namespace StartDocked
