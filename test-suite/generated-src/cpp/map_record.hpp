// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#ifndef DJINNI_GENERATED_MAP_RECORD_HPP
#define DJINNI_GENERATED_MAP_RECORD_HPP

#include <cstdint>
#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>

namespace testsuite {

struct MapRecord final {
    std::unordered_map<std::string, int64_t> map;
    std::unordered_map<int32_t, int32_t> imap;

    MapRecord(std::unordered_map<std::string, int64_t> map_,
              std::unordered_map<int32_t, int32_t> imap_)
    : map(std::move(map_))
    , imap(std::move(imap_))
    {}

    MapRecord(const MapRecord& cpy) {
       this->map = cpy.map;
       this->imap = cpy.imap;
    }

    MapRecord() = default;


    MapRecord& operator=(const MapRecord& cpy) {
       this->map = cpy.map;
       this->imap = cpy.imap;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(map, imap);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(map, imap);
    }
};

}  // namespace testsuite
#endif //DJINNI_GENERATED_MAP_RECORD_HPP
