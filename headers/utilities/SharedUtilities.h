#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 6 member(s).
class SharedUtilities {
public:
    class ApplicationResourceLoader;
    class BatteryService;
    class LocalizationService;
    class ThemeManager;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationResourceLoader@SharedUtilities@@YAPE$AAUIResourceLoaderInternal@1@XZ
    WindissectOpaque & * GetApplicationResourceLoader();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullFileResourcePath@SharedUtilities@@YAPE$AAVString@Platform@@PE$AAV23@@Z
    ::Platform::String & * GetFullFileResourcePath(::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAccentColorEnabled@SharedUtilities@@YA_NXZ
    bool IsAccentColorEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUIThread@SharedUtilities@@YA_NXZ
    bool IsUIThread();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowsLite@SharedUtilities@@YA_NXZ
    bool IsWindowsLite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSystemUseDarkMode@SharedUtilities@@YA_NXZ
    bool ShouldSystemUseDarkMode();
};
