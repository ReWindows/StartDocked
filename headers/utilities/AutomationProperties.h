#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 10 member(s).
namespace Windows::UI::Xaml::Automation {
class AutomationProperties {
public:
    class AccessibilityViewProperty;
    class AutomationIdProperty;
    class NameProperty;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLandmarkType@AutomationProperties@Automation@Xaml@UI@Windows@@SA?AW4AutomationLandmarkType@Peers@2345@PE$AAVDependencyObject@345@@Z
    static int GetLandmarkType(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@AutomationProperties@Automation@Xaml@UI@Windows@@SAPE$AAVString@Platform@@PE$AAVDependencyObject@345@@Z
    static ::Platform::String & * GetName(::Windows::UI::Xaml::DependencyObject & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccessKey@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVDependencyObject@345@PE$AAVString@Platform@@@Z
    static void SetAccessKey(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAccessibilityView@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVDependencyObject@345@W4AccessibilityView@Peers@2345@@Z
    static void SetAccessibilityView(::Windows::UI::Xaml::DependencyObject & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationControlType@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVUIElement@345@W4AutomationControlType@Peers@2345@@Z
    static void SetAutomationControlType(::Windows::UI::Xaml::UIElement & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutomationId@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVDependencyObject@345@PE$AAVString@Platform@@@Z
    static void SetAutomationId(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeadingLevel@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVDependencyObject@345@W4AutomationHeadingLevel@Peers@2345@@Z
    static void SetHeadingLevel(::Windows::UI::Xaml::DependencyObject & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHelpText@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVDependencyObject@345@PE$AAVString@Platform@@@Z
    static void SetHelpText(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLandmarkType@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVDependencyObject@345@W4AutomationLandmarkType@Peers@2345@@Z
    static void SetLandmarkType(::Windows::UI::Xaml::DependencyObject & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@AutomationProperties@Automation@Xaml@UI@Windows@@SAXPE$AAVDependencyObject@345@PE$AAVString@Platform@@@Z
    static void SetName(::Windows::UI::Xaml::DependencyObject & *, ::Platform::String & *);
};
} // namespace Windows::UI::Xaml::Automation
