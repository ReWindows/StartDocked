#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 10 member(s).
namespace StartDocked::NavigationPaneView {
class NavigationPaneView_obj3_Bindings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@NavigationPaneView_obj3_Bindings@NavigationPaneView@StartDocked@@UEAAXHPE$AAVObject@Platform@@@Z
    virtual void Connect(int, ::Platform::Object & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUnloadedObject@NavigationPaneView_obj3_Bindings@NavigationPaneView@StartDocked@@UEAAXH@Z
    virtual void DisconnectUnloadedObject(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBindings@NavigationPaneView_obj3_Bindings@NavigationPaneView@StartDocked@@UEAAXPE$AAVObject@Platform@@HHPEAH@Z
    virtual void ProcessBindings(::Platform::Object & *, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Recycle@NavigationPaneView_obj3_Bindings@NavigationPaneView@StartDocked@@UEAAXXZ
    virtual void Recycle();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationPaneView_obj3_Bindings@NavigationPaneView@StartDocked@@UEAA@XZ
    virtual ~NavigationPaneView_obj3_Bindings();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Windows_UI_Xaml_Controls_FontIcon_Glyph@NavigationPaneView_obj3_Bindings@NavigationPaneView@StartDocked@@CAXPE$AAVFontIcon@Controls@Xaml@UI@Windows@@PE$AAVString@Platform@@1@Z
    static void Set_Windows_UI_Xaml_Controls_FontIcon_Glyph(::Windows::UI::Xaml::Controls::FontIcon & *, ::Platform::String & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_@NavigationPaneView_obj3_Bindings@NavigationPaneView@StartDocked@@EEAAXPE$AAUIAppItemViewModel@3@H@Z
    virtual void Update_(WindissectOpaque & *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_PlacesGlyph@NavigationPaneView_obj3_Bindings@NavigationPaneView@StartDocked@@AEAAXPE$AAVString@Platform@@H@Z
    void Update_PlacesGlyph(::Platform::String & *, int);
};
} // namespace StartDocked::NavigationPaneView
