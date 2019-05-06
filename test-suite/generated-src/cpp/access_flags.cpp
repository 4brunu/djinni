// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum_flags.djinni

#include "access_flags.hpp"  // my header
#include "enum_from_string.hpp"

namespace testsuite {

std::string to_string(const access_flags& access_flags) {
    switch (access_flags) {
        case access_flags::NOBODY: return "NOBODY";
        case access_flags::OWNER_READ: return "OWNER_READ";
        case access_flags::OWNER_WRITE: return "OWNER_WRITE";
        case access_flags::OWNER_EXECUTE: return "OWNER_EXECUTE";
        case access_flags::GROUP_READ: return "GROUP_READ";
        case access_flags::GROUP_WRITE: return "GROUP_WRITE";
        case access_flags::GROUP_EXECUTE: return "GROUP_EXECUTE";
        case access_flags::SYSTEM_READ: return "SYSTEM_READ";
        case access_flags::SYSTEM_WRITE: return "SYSTEM_WRITE";
        case access_flags::SYSTEM_EXECUTE: return "SYSTEM_EXECUTE";
        case access_flags::EVERYBODY: return "EVERYBODY";
    };
};
template <>
access_flags from_string(const std::string& access_flags) {
    if (access_flags == "NOBODY") return access_flags::NOBODY;
    else if (access_flags == "OWNER_READ") return access_flags::OWNER_READ;
    else if (access_flags == "OWNER_WRITE") return access_flags::OWNER_WRITE;
    else if (access_flags == "OWNER_EXECUTE") return access_flags::OWNER_EXECUTE;
    else if (access_flags == "GROUP_READ") return access_flags::GROUP_READ;
    else if (access_flags == "GROUP_WRITE") return access_flags::GROUP_WRITE;
    else if (access_flags == "GROUP_EXECUTE") return access_flags::GROUP_EXECUTE;
    else if (access_flags == "SYSTEM_READ") return access_flags::SYSTEM_READ;
    else if (access_flags == "SYSTEM_WRITE") return access_flags::SYSTEM_WRITE;
    else if (access_flags == "SYSTEM_EXECUTE") return access_flags::SYSTEM_EXECUTE;
    else return access_flags::EVERYBODY;
};

std::ostream &operator<<(std::ostream &os, const access_flags &o)
{
    switch (o) {
        case access_flags::NOBODY:  return os << "NOBODY";
        case access_flags::OWNER_READ:  return os << "OWNER_READ";
        case access_flags::OWNER_WRITE:  return os << "OWNER_WRITE";
        case access_flags::OWNER_EXECUTE:  return os << "OWNER_EXECUTE";
        case access_flags::GROUP_READ:  return os << "GROUP_READ";
        case access_flags::GROUP_WRITE:  return os << "GROUP_WRITE";
        case access_flags::GROUP_EXECUTE:  return os << "GROUP_EXECUTE";
        case access_flags::SYSTEM_READ:  return os << "SYSTEM_READ";
        case access_flags::SYSTEM_WRITE:  return os << "SYSTEM_WRITE";
        case access_flags::SYSTEM_EXECUTE:  return os << "SYSTEM_EXECUTE";
        case access_flags::EVERYBODY:  return os << "EVERYBODY";
    }
}

}  // namespace testsuite
