#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace StartDocked {
class CustomImageSetRenderer {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClippedImageElement@CustomImageSetRenderer@StartDocked@@CAPE$AAVUIElement@Xaml@UI@Windows@@PE$AAVImage@Controls@456@VThickness@456@VCornerRadius@456@@Z
    static ::Windows::UI::Xaml::UIElement & * CreateClippedImageElement(::Windows::UI::Xaml::Controls::Image & *, ::Windows::UI::Xaml::Thickness, ::Windows::UI::Xaml::CornerRadius);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClipMargin@CustomImageSetRenderer@StartDocked@@CA?AVThickness@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    static ::Windows::UI::Xaml::Thickness GetClipMargin(::Platform::String & *);
};
} // namespace StartDocked
