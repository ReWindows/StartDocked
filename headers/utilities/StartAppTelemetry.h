#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 106 member(s).
class StartAppTelemetry {
public:
    class AccountControlCreateHostFlyout;
    class AccountControlLoadReactView;
    class AccountDisplayNameUpdate;
    class AccountPictureUpdate;
    class AllAppsPane_Activation;
    class AllAppsPane_CollectionView_ExpandCollapseFolder;
    class AllAppsPane_ContextMenu;
    class AllAppsPane_Realization;
    class AllAppsPane_RecentlyAdded_ExpandCollapse;
    class AllAppsPane_RecentlyAdded_InitialItemsAdded;
    class AllAppsPane_ViewModel_Folder_ItemUpdated;
    class AllAppsPane_ViewModel_Folder_ItemsAdded;
    class AllAppsPane_ViewModel_Folder_ItemsRemoved;
    class AllAppsPane_ViewModel_InitialItemsAdded;
    class AllAppsPane_ViewModel_ItemsAdded;
    class AllAppsPane_ViewModel_ItemsRemoved;
    class AppListItem_ViewModel_ExtractFromModel;
    class AppListItem_ViewModel_ItemUpdated;
    class AppViewModelBase_Enumerate;
    class ClickShutdownActivity;
    class ClickUserTileActivity;
    class CommandingVerbActivation;
    class CommandingVerbAggregation;
    class ContextMenuSessionData;
    class LocalSettings_Initialization;
    class MoveFocusToSearch;
    class NavigationPane_ContextMenu;
    class OtherUserAccountPictureUpdate;
    class ShutdownChoiceTappedActivity;
    class ShutdownConfirmOKClickActivity;
    class ShutdownReasonOKClickActivity;
    class ShutdownUpdateSelectedReasonActivity;
    class StartActivationPerfTracker;
    class StartInitializationActivity;
    class StartSizingFrameArrange;
    class StartSizingFrameDrag;
    class StartSizingFrameMeasure;
    class StartUnifiedTileInitializationActivity;
    class SystemListItemEnumeration;
    class SystemPane_ViewModel_RemovedFromList;
    class ThemeManager_SystemThemeUpdate;
    class TileDataCollection;
    class WaitingForSignedInUser;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllAppsPane_RecentlyAdded_ClearAllButton@StartAppTelemetry@@SAXXZ
    static void AllAppsPane_RecentlyAdded_ClearAllButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllAppsSessionCompleted_@StartAppTelemetry@@QEAAXUAllAppsSessionData@1@@Z
    void AllAppsSessionCompleted_(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppListItemAdded_@StartAppTelemetry@@QEAAXAEBUAppListItem@LauncherTelemetry@@@Z
    void AppListItemAdded_(::LauncherTelemetry::AppListItem const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppListItemInvoked_@StartAppTelemetry@@QEAAXAEBUAppListItem@LauncherTelemetry@@W4InvokeResult@3@@Z
    void AppListItemInvoked_(::LauncherTelemetry::AppListItem const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppListItemMissingLogo@StartAppTelemetry@@SAXAEBUAppListItem@LauncherTelemetry@@@Z
    static void AppListItemMissingLogo(::LauncherTelemetry::AppListItem const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppListItemRemoved_@StartAppTelemetry@@QEAAXAEBUAppListItem@LauncherTelemetry@@W4AppListItemRemovedReason@3@@Z
    void AppListItemRemoved_(::LauncherTelemetry::AppListItem const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppListItemUnfriendlyDisplayNameEvent@StartAppTelemetry@@SAXAEBUAppListItem@LauncherTelemetry@@@Z
    static void AppListItemUnfriendlyDisplayNameEvent(::LauncherTelemetry::AppListItem const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompanionManager_RegisterWatcherRootFailed@StartAppTelemetry@@SAXXZ
    static void CompanionManager_RegisterWatcherRootFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextMenuSessionCompleted_@StartAppTelemetry@@QEAAXAEAUContextMenuSessionData@1@@Z
    void ContextMenuSessionCompleted_(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@StartAppTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSettingsSignInOptions@StartAppTelemetry@@SAXXZ
    static void LaunchSettingsSignInOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFocusToSearch_RequestTakeFocus@StartAppTelemetry@@SAXXZ
    static void MoveFocusToSearch_RequestTakeFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFocusToSearch_SkipRequestTakeFocus@StartAppTelemetry@@SAXXZ
    static void MoveFocusToSearch_SkipRequestTakeFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersonalizePlacesContextMenuItemSelected@StartAppTelemetry@@SAXXZ
    static void PersonalizePlacesContextMenuItemSelected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondUndockedInitAttemptedWhileInitializing@StartAppTelemetry@@SAXXZ
    static void SecondUndockedInitAttemptedWhileInitializing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCloseTriggered@StartAppTelemetry@@SAXXZ
    static void StartCloseTriggered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDismissAnimationCompleted@StartAppTelemetry@@SAXXZ
    static void StartDismissAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartEntranceAnimationCompleted@StartAppTelemetry@@SAXXZ
    static void StartEntranceAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFlickAnimationCompletedByStop@StartAppTelemetry@@SAXXZ
    static void StartFlickAnimationCompletedByStop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFlickAnimationStopping@StartAppTelemetry@@SAXXZ
    static void StartFlickAnimationStopping();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartMenuSettingsMigrated@StartAppTelemetry@@SAXXZ
    static void StartMenuSettingsMigrated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSizingFramePendingWindowSizeInvalid@StartAppTelemetry@@SAXXZ
    static void StartSizingFramePendingWindowSizeInvalid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSizingFrameVisible@StartAppTelemetry@@SAXXZ
    static void StartSizingFrameVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSizingFrameWindowRgnUnset@StartAppTelemetry@@SAXXZ
    static void StartSizingFrameWindowRgnUnset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSizingFrameWorkAreaHeightInvalid@StartAppTelemetry@@SAXXZ
    static void StartSizingFrameWorkAreaHeightInvalid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateSelfBecauseExplorerExited@StartAppTelemetry@@SAXXZ
    static void TerminateSelfBecauseExplorerExited();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserTileAccountBadgingFlyoutImpression@StartAppTelemetry@@SAXXZ
    static void UserTileAccountBadgingFlyoutImpression();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UsingProcessTokenForCurrentUser@StartAppTelemetry@@SAXXZ
    static void UsingProcessTokenForCurrentUser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerbOnAppItemInvoked_@StartAppTelemetry@@QEAAXAEBUAppItem@LauncherTelemetry@@AEBU_GUID@@1@Z
    void VerbOnAppItemInvoked_(::LauncherTelemetry::AppItem const &, _GUID const &, _GUID const &);
};
