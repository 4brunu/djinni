// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#ifndef DJINNI_GENERATED_NATIVEDATERECORD_HPP_JNI_
#define DJINNI_GENERATED_NATIVEDATERECORD_HPP_JNI_

#include "date_record.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeDateRecord final {
public:
    using CppType = ::testsuite::DateRecord;
    using JniType = jobject;

    using Boxed = NativeDateRecord;

    ~NativeDateRecord();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeDateRecord();
    friend ::djinni::JniClass<NativeDateRecord>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/DateRecord") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/util/Date;)V") };
    const jfieldID field_mCreatedAt { ::djinni::jniGetFieldID(clazz.get(), "mCreatedAt", "Ljava/util/Date;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_NATIVEDATERECORD_HPP_JNI_
