// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#ifndef DJINNI_GENERATED_NATIVEMAPRECORD_HPP_JNI_
#define DJINNI_GENERATED_NATIVEMAPRECORD_HPP_JNI_

#include "djinni_support.hpp"
#include "map_record.hpp"

namespace djinni_generated {

class NativeMapRecord final {
public:
    using CppType = ::testsuite::MapRecord;
    using JniType = jobject;

    using Boxed = NativeMapRecord;

    ~NativeMapRecord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeMapRecord();
    friend ::djinni::JniClass<NativeMapRecord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/MapRecord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/HashMap;Ljava/util/HashMap;)V") };
    const jfieldID field_mMap { ::djinni::jniGetFieldID(clazz.get(), "mMap", "Ljava/util/HashMap;") };
    const jfieldID field_mImap { ::djinni::jniGetFieldID(clazz.get(), "mImap", "Ljava/util/HashMap;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_NATIVEMAPRECORD_HPP_JNI_
