// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constant_enum.djinni

#include "constant_enum.hpp"  // my header
#include "enum_from_string.hpp"

namespace testsuite {

std::string to_string(const constant_enum& constant_enum) {
    switch (constant_enum) {
        case constant_enum::SOME_VALUE: return "SOME_VALUE";
        case constant_enum::SOME_OTHER_VALUE: return "SOME_OTHER_VALUE";
    };
};
template <>
constant_enum from_string(const std::string& constant_enum) {
    if (constant_enum == "SOME_VALUE") return constant_enum::SOME_VALUE;
    else return constant_enum::SOME_OTHER_VALUE;
};

std::ostream &operator<<(std::ostream &os, const constant_enum &o)
{
    switch (o) {
        case constant_enum::SOME_VALUE:  return os << "SOME_VALUE";
        case constant_enum::SOME_OTHER_VALUE:  return os << "SOME_OTHER_VALUE";
    }
}

}  // namespace testsuite
