// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#ifndef DJINNI_GENERATED_RETURN_TWO_HPP
#define DJINNI_GENERATED_RETURN_TWO_HPP

#include <cstdint>
#include <memory>

namespace testsuite {

/** Used for C++ multiple inheritance tests */
class ReturnTwo {
public:
    virtual ~ReturnTwo() {}

    static std::shared_ptr<ReturnTwo> get_instance();

    virtual int8_t return_two() = 0;
};

}  // namespace testsuite
#endif //DJINNI_GENERATED_RETURN_TWO_HPP
