#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 2 member(s).
namespace StartDocked {
class LayoutUtils {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorInformationForHWND@LayoutUtils@StartDocked@@YA?AUtagMONITORINFO@@PEAUHWND__@@@Z
    tagMONITORINFO GetMonitorInformationForHWND(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformToStartSize@LayoutUtils@StartDocked@@YA?AVSize@Foundation@Windows@@VPoint@45@V345@0@Z
    ::Windows::Foundation::Size TransformToStartSize(::Windows::Foundation::Point, ::Windows::Foundation::Size, ::Windows::Foundation::Point);
};
} // namespace StartDocked
