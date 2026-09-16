#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 7 member(s).
namespace StartDocked {
class AppItemTemplateApplicator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppItemTemplateApplicator@StartDocked@@QEAA@XZ
    AppItemTemplateApplicator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplateToItem@AppItemTemplateApplicator@StartDocked@@QEAAXPE$AAVListViewItem@Controls@Xaml@UI@Windows@@PE$AAUIAppItemViewModel@2@PE$AAVString@Platform@@@Z
    void ApplyTemplateToItem(::Windows::UI::Xaml::Controls::ListViewItem & *, WindissectOpaque & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshAll@AppItemTemplateApplicator@StartDocked@@QEAAXPE$AAU?$IObservableVector@PE$AAUIAppItemViewModel@StartDocked@@@Collections@Foundation@Windows@@PE$AAVListView@Controls@Xaml@UI@6@@Z
    void RefreshAll(WindissectOpaque & *, ::Windows::UI::Xaml::Controls::ListView & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemVisualState@AppItemTemplateApplicator@StartDocked@@QEAAXW4AppItemVisualState@2@@Z
    void SetItemVisualState(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLogoOverlay@AppItemTemplateApplicator@StartDocked@@AEBAPE$AAVGrid@Controls@Xaml@UI@Windows@@NAEBVThickness@567@@Z
    ::Windows::UI::Xaml::Controls::Grid & * CreateLogoOverlay(double, ::Windows::UI::Xaml::Thickness const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStatusText@AppItemTemplateApplicator@StartDocked@@AEBAPE$AAVTextBlock@Controls@Xaml@UI@Windows@@AEBUhstring@winrt@@PEB_W_N@Z
    ::Windows::UI::Xaml::Controls::TextBlock & * CreateStatusText(WindissectOpaque const &, wchar_t const *, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialized@AppItemTemplateApplicator@StartDocked@@CAXXZ
    static void EnsureInitialized();
};
} // namespace StartDocked
