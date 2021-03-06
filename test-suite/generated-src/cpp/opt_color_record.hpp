// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#pragma once

#include "color.hpp"
#include <experimental/optional>
#include <utility>

namespace testsuite {

struct OptColorRecord final {
    std::experimental::optional<color> my_color;

    OptColorRecord(std::experimental::optional<color> my_color_)
    : my_color(std::move(my_color_))
    {}
};

}  // namespace testsuite
