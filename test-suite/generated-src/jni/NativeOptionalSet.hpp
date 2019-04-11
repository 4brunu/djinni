// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from parcelable.djinni

#pragma once

#include "djinni_support.hpp"
#include "optional_set.hpp"

namespace djinni_generated {

class NativeOptionalSet final {
public:
    using CppType = ::testsuite::OptionalSet;
    using JniType = jobject;

    using Boxed = NativeOptionalSet;

    ~NativeOptionalSet();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeOptionalSet();
    friend ::djinni::JniClass<NativeOptionalSet>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/OptionalSet") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/HashSet;)V") };
    const jfieldID field_mOptionalSet { ::djinni::jniGetFieldID(clazz.get(), "mOptionalSet", "Ljava/util/HashSet;") };
};

}  // namespace djinni_generated
