#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 15 member(s).
namespace StartDocked {
class LauncherFrameSizeController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineResizeableEdges@LauncherFrameSizeController@StartDocked@@QEAAXXZ
    void DetermineResizeableEdges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@LauncherFrameSizeController@StartDocked@@QEAAXPE$AAVFrameworkElement@Xaml@UI@Windows@@PE$AAUIPerFrameData@2@AEAVWeakReference@Platform@@@Z
    void Initialize(::Windows::UI::Xaml::FrameworkElement & *, WindissectOpaque & *, ::Platform::WeakReference &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowResizable@LauncherFrameSizeController@StartDocked@@SA_NPE$AAUIPerFrameData@2@@Z
    static bool IsWindowResizable(WindissectOpaque & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSize@LauncherFrameSizeController@StartDocked@@QEAA_NXZ
    bool RefreshSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSearchBoxUIElement@LauncherFrameSizeController@StartDocked@@QEAAXPE$AAVFrameworkElement@Xaml@UI@Windows@@@Z
    void RegisterSearchBoxUIElement(::Windows::UI::Xaml::FrameworkElement & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUndockedContent@LauncherFrameSizeController@StartDocked@@QEAAXPE$AAVControl@Controls@Xaml@UI@Windows@@@Z
    void RegisterUndockedContent(::Windows::UI::Xaml::Controls::Control & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMaximumSizes@LauncherFrameSizeController@StartDocked@@QEAAXXZ
    void UpdateMaximumSizes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSearchBoxOffset@LauncherFrameSizeController@StartDocked@@QEAAXPE$AAVFrameworkElement@Xaml@UI@Windows@@@Z
    void UpdateSearchBoxOffset(::Windows::UI::Xaml::FrameworkElement & *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LauncherFrameSizeController@StartDocked@@QEAA@XZ
    ~LauncherFrameSizeController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineDesiredSize@LauncherFrameSizeController@StartDocked@@AEAA?AVSize@Foundation@Windows@@H@Z
    ::Windows::Foundation::Size DetermineDesiredSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeHWNDSubclass@LauncherFrameSizeController@StartDocked@@AEAAXXZ
    void InitializeHWNDSubclass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadHeightFromModel@LauncherFrameSizeController@StartDocked@@AEAAHXZ
    int ReadHeightFromModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShellExperienceProperties@LauncherFrameSizeController@StartDocked@@AEAAX_N0@Z
    void UpdateShellExperienceProperties(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToDesiredSize@LauncherFrameSizeController@StartDocked@@AEAA_NVSize@Foundation@Windows@@_N@Z
    bool UpdateToDesiredSize(::Windows::Foundation::Size, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SubclassWndProc@LauncherFrameSizeController@StartDocked@@CA_JPEAUHWND__@@I_K_J11@Z
    static int64_t s_SubclassWndProc(HWND__*, unsigned int, uint64_t, int64_t, uint64_t, uint64_t);
};
} // namespace StartDocked
