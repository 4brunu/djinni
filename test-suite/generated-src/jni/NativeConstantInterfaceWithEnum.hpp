// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constant_enum.djinni

#ifndef DJINNI_GENERATED_NATIVECONSTANTINTERFACEWITHENUM_HPP_JNI_
#define DJINNI_GENERATED_NATIVECONSTANTINTERFACEWITHENUM_HPP_JNI_

#include "constant_interface_with_enum.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeConstantInterfaceWithEnum final : ::djinni::JniInterface<::testsuite::ConstantInterfaceWithEnum, NativeConstantInterfaceWithEnum> {
public:
    using CppType = std::shared_ptr<::testsuite::ConstantInterfaceWithEnum>;
    using CppOptType = std::shared_ptr<::testsuite::ConstantInterfaceWithEnum>;
    using JniType = jobject;

    using Boxed = NativeConstantInterfaceWithEnum;

    ~NativeConstantInterfaceWithEnum();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeConstantInterfaceWithEnum>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeConstantInterfaceWithEnum>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeConstantInterfaceWithEnum();
    friend ::djinni::JniClass<NativeConstantInterfaceWithEnum>;
    friend ::djinni::JniInterface<::testsuite::ConstantInterfaceWithEnum, NativeConstantInterfaceWithEnum>;

};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_NATIVECONSTANTINTERFACEWITHENUM_HPP_JNI_
