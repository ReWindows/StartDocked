#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 5 member(s).
namespace StartDocked {
class CustomRendererUtils {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyButtonTextBlockForegroundBrush@CustomRendererUtils@StartDocked@@YAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    void ApplyButtonTextBlockForegroundBrush(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCornerRadius@CustomRendererUtils@StartDocked@@YA?AVCornerRadius@Xaml@UI@Windows@@PE$AAVString@Platform@@@Z
    ::Windows::UI::Xaml::CornerRadius GetCornerRadius(::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLookupBrush@CustomRendererUtils@StartDocked@@YAPE$AAVSolidColorBrush@Media@Xaml@UI@Windows@@PE$AAVResourceDictionary@567@PE$AAVString@Platform@@@Z
    ::Windows::UI::Xaml::Media::SolidColorBrush & * TryLookupBrush(::Windows::UI::Xaml::ResourceDictionary & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLookupStyle@CustomRendererUtils@StartDocked@@YAPE$AAVStyle@Xaml@UI@Windows@@PE$AAVResourceDictionary@456@PE$AAVString@Platform@@@Z
    ::Windows::UI::Xaml::Style & * TryLookupStyle(::Windows::UI::Xaml::ResourceDictionary & *, ::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetToolTip@CustomRendererUtils@StartDocked@@YAXPE$AAUIAdaptiveCardElement@Uwp@Rendering@AdaptiveCards@Internal@Windows@@PE$AAVDependencyObject@Xaml@UI@8@@Z
    void TrySetToolTip(::Windows::Internal::AdaptiveCards::Rendering::Uwp::IAdaptiveCardElement & *, ::Windows::UI::Xaml::DependencyObject & *);
};
} // namespace StartDocked
