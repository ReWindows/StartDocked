#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 12 member(s).
namespace StartDocked {
class StartSizingFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDependencyProperties@StartSizingFrame@StartDocked@@SAXXZ
    static void RegisterDependencyProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDependencyProperties@StartSizingFrame@StartDocked@@SAXXZ
    static void UnregisterDependencyProperties();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEdgeProperty@StartSizingFrame@StartDocked@@CAPE$AAVDependencyProperty@Xaml@UI@Windows@@XZ
    static ::Windows::UI::Xaml::DependencyProperty & * InitializeEdgeProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeIsFlyoutOpenProperty@StartSizingFrame@StartDocked@@CAPE$AAVDependencyProperty@Xaml@UI@Windows@@XZ
    static ::Windows::UI::Xaml::DependencyProperty & * InitializeIsFlyoutOpenProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeIsHorizontalResizeEnabledProperty@StartSizingFrame@StartDocked@@CAPE$AAVDependencyProperty@Xaml@UI@Windows@@XZ
    static ::Windows::UI::Xaml::DependencyProperty & * InitializeIsHorizontalResizeEnabledProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMaxAvailableWidthProperty@StartSizingFrame@StartDocked@@CAPE$AAVDependencyProperty@Xaml@UI@Windows@@XZ
    static ::Windows::UI::Xaml::DependencyProperty & * InitializeMaxAvailableWidthProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentMaxWidthPropertyChangedImpl@StartSizingFrame@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@456@@Z
    static void OnContentMaxWidthPropertyChangedImpl(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentMinWidthPropertyChangedImpl@StartSizingFrame@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@456@@Z
    static void OnContentMinWidthPropertyChangedImpl(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEdgePropertyChangedImpl@StartSizingFrame@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@456@@Z
    static void OnEdgePropertyChangedImpl(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsFlyoutOpenPropertyChangedImpl@StartSizingFrame@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@456@@Z
    static void OnIsFlyoutOpenPropertyChangedImpl(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsHorizontalResizeEnabledPropertyChangedImpl@StartSizingFrame@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@456@@Z
    static void OnIsHorizontalResizeEnabledPropertyChangedImpl(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsTabletModePropertyChangedImpl@StartSizingFrame@StartDocked@@CAXPE$AAVDependencyObject@Xaml@UI@Windows@@PE$AAVDependencyPropertyChangedEventArgs@456@@Z
    static void OnIsTabletModePropertyChangedImpl(::Windows::UI::Xaml::DependencyObject & *, ::Windows::UI::Xaml::DependencyPropertyChangedEventArgs & *);
};
} // namespace StartDocked
