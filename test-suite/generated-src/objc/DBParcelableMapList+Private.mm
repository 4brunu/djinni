// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from parcelable.djinni

#import "DBParcelableMapList+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto ParcelableMapList::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Map<::djinni::String, ::djinni::List<::djinni::String>>::toCpp(obj.mapSet)};
}

auto ParcelableMapList::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[DBParcelableMapList alloc] initWithMapSet:(::djinni::Map<::djinni::String, ::djinni::List<::djinni::String>>::fromCpp(cpp.map_set))];
}

}  // namespace djinni_generated
