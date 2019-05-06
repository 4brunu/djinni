// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from set.djinni

#ifndef DJINNI_GENERATED_SET_RECORD_HPP
#define DJINNI_GENERATED_SET_RECORD_HPP

#include <cstdint>
#include <iostream>
#include <string>
#include <unordered_set>
#include <utility>

namespace testsuite {

struct SetRecord final {
    std::unordered_set<std::string> set;
    std::unordered_set<int32_t> iset;

    SetRecord(std::unordered_set<std::string> set_,
              std::unordered_set<int32_t> iset_)
    : set(std::move(set_))
    , iset(std::move(iset_))
    {}

    SetRecord(const SetRecord& cpy) {
       this->set = cpy.set;
       this->iset = cpy.iset;
    }

    SetRecord() = default;


    SetRecord& operator=(const SetRecord& cpy) {
       this->set = cpy.set;
       this->iset = cpy.iset;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(set, iset);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(set, iset);
    }
};

}  // namespace testsuite
#endif //DJINNI_GENERATED_SET_RECORD_HPP
