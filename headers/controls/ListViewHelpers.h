#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartDocked {
class ListViewHelpers {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppItemClick@ListViewHelpers@StartDocked@@YAXPE$AAVListView@Controls@Xaml@UI@Windows@@PE$AAVItemClickEventArgs@4567@W4VerbSource@2@@Z
    void AppItemClick(::Windows::UI::Xaml::Controls::ListView & *, ::Windows::UI::Xaml::Controls::ItemClickEventArgs & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedContainer@ListViewHelpers@StartDocked@@YAPE$AAVListViewItem@Controls@Xaml@UI@Windows@@XZ
    ::Windows::UI::Xaml::Controls::ListViewItem & * GetFocusedContainer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedItem@ListViewHelpers@StartDocked@@YAPE$AAVObject@Platform@@PE$AAVListView@Controls@Xaml@UI@Windows@@@Z
    ::Platform::Object & * GetFocusedItem(::Windows::UI::Xaml::Controls::ListView & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewModel@ListViewHelpers@StartDocked@@YAPE$AAUIItemViewModel@2@PE$AAVListViewItem@Controls@Xaml@UI@Windows@@@Z
    WindissectOpaque & * GetViewModel(::Windows::UI::Xaml::Controls::ListViewItem & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenuForItem@ListViewHelpers@StartDocked@@YAXPE$AAUShowContextMenuEventPayload@2@PE$AAUEvents@2@@Z
    void ShowContextMenuForItem(WindissectOpaque & *, WindissectOpaque & *);
};
} // namespace StartDocked
