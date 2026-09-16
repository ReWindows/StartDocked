#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StartDocked.dll by Windissect. 6 member(s).
namespace Windows::Foundation {
class PropertyValue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBoolean@PropertyValue@Foundation@Windows@@SAPE$AAVObject@Platform@@_N@Z
    static ::Platform::Object & * CreateBoolean(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDateTime@PropertyValue@Foundation@Windows@@SAPE$AAVObject@Platform@@VDateTime@23@@Z
    static ::Platform::Object & * CreateDateTime(::Windows::Foundation::DateTime);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInt32@PropertyValue@Foundation@Windows@@SAPE$AAVObject@Platform@@H@Z
    static ::Platform::Object & * CreateInt32(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateString@PropertyValue@Foundation@Windows@@SAPE$AAVObject@Platform@@PE$AAVString@5@@Z
    static ::Platform::Object & * CreateString(::Platform::String & *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUInt32@PropertyValue@Foundation@Windows@@SAPE$AAVObject@Platform@@I@Z
    static ::Platform::Object & * CreateUInt32(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUInt64@PropertyValue@Foundation@Windows@@SAPE$AAVObject@Platform@@_K@Z
    static ::Platform::Object & * CreateUInt64(uint64_t);
};
} // namespace Windows::Foundation
