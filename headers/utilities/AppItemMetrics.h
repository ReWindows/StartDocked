#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 8 member(s).
namespace StartDocked {
class AppItemMetrics {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateAppsViewColumnCount@AppItemMetrics@StartDocked@@YAHMPE$AAUStartProperties@2@@Z
    int CalculateAppsViewColumnCount(float, WindissectOpaque & *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllAppsGridFolderRegionElementsPadding@AppItemMetrics@StartDocked@@YA?AVThickness@Xaml@UI@Windows@@W4AppsViewVisualState@2@@Z
    ::Windows::UI::Xaml::Thickness GetAllAppsGridFolderRegionElementsPadding(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllAppsGridHeaderWidth@AppItemMetrics@StartDocked@@YANXZ
    double GetAllAppsGridHeaderWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllAppsGridItemSize@AppItemMetrics@StartDocked@@YA?AVSize@Foundation@Windows@@PE$AAUStartProperties@2@W4AppsViewVisualState@2@@Z
    ::Windows::Foundation::Size GetAllAppsGridItemSize(WindissectOpaque & *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllAppsGridSystemGroupPadding@AppItemMetrics@StartDocked@@YA?AVThickness@Xaml@UI@Windows@@W4AppsViewVisualState@2@@Z
    ::Windows::UI::Xaml::Thickness GetAllAppsGridSystemGroupPadding(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllAppsListViewPadding@AppItemMetrics@StartDocked@@YA?AVThickness@Xaml@UI@Windows@@W4AppsViewVisualState@2@@Z
    ::Windows::UI::Xaml::Thickness GetAllAppsListViewPadding(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStackWidth@AppItemMetrics@StartDocked@@YAMM@Z
    float GetStackWidth(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemGroupSeparatorHeight@AppItemMetrics@StartDocked@@YANW4AppsViewVisualState@2@@Z
    double GetSystemGroupSeparatorHeight(int);
};
} // namespace StartDocked
