// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from extended_record.djinni

#ifndef DJINNI_GENERATED_RECORD_USING_EXTENDED_RECORD_HPP
#define DJINNI_GENERATED_RECORD_USING_EXTENDED_RECORD_HPP

#include "../../handwritten-src/cpp/extended_record.hpp"
#include <iostream>
#include <utility>

namespace testsuite {

struct RecordUsingExtendedRecord final {

    static RecordUsingExtendedRecord const CR;
    ExtendedRecord er;

    RecordUsingExtendedRecord(ExtendedRecord er_)
    : er(std::move(er_))
    {}

    RecordUsingExtendedRecord(const RecordUsingExtendedRecord& cpy) {
       this->er = cpy.er;
    }

    RecordUsingExtendedRecord() = default;


    RecordUsingExtendedRecord& operator=(const RecordUsingExtendedRecord& cpy) {
       this->er = cpy.er;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(er);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(er);
    }
};

}  // namespace testsuite
#endif //DJINNI_GENERATED_RECORD_USING_EXTENDED_RECORD_HPP
