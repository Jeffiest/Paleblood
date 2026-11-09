// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that gives out a key through the provider it holds at +0x60.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct KeyProvider;

/**
 *
 * A key source: the provider at +0x60 that is asked for the key.
 *
 */
struct KeySource {
    uint8_t unknown_0x00[0x60];
    KeyProvider *provider_0x60; /**< The provider asked for the key. */
};
static_assert(offsetof(KeySource, provider_0x60) == 0x60);

}  // namespace misc
