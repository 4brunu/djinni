// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constant_enum.djinni

#ifndef DJINNI_GENERATED_NATIVECONSTANTWITHENUM_HPP_JNI_
#define DJINNI_GENERATED_NATIVECONSTANTWITHENUM_HPP_JNI_

#include "constant_with_enum.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeConstantWithEnum final {
public:
    using CppType = ::testsuite::ConstantWithEnum;
    using JniType = jobject;

    using Boxed = NativeConstantWithEnum;

    ~NativeConstantWithEnum();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeConstantWithEnum();
    friend ::djinni::JniClass<NativeConstantWithEnum>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/ConstantWithEnum") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "()V") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_NATIVECONSTANTWITHENUM_HPP_JNI_
