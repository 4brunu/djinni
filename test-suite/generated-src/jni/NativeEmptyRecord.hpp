// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#ifndef DJINNI_GENERATED_NATIVEEMPTYRECORD_HPP_JNI_
#define DJINNI_GENERATED_NATIVEEMPTYRECORD_HPP_JNI_

#include "djinni_support.hpp"
#include "empty_record.hpp"

namespace djinni_generated {

class NativeEmptyRecord final {
public:
    using CppType = ::testsuite::EmptyRecord;
    using JniType = jobject;

    using Boxed = NativeEmptyRecord;

    ~NativeEmptyRecord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeEmptyRecord();
    friend ::djinni::JniClass<NativeEmptyRecord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/EmptyRecord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "()V") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_NATIVEEMPTYRECORD_HPP_JNI_
