// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct FlaggedTextEntryShared {
    uint8_t unknown_0x00[0x8];
    int32_t reference_count;   /**< the owner count of the shared block */
};
static_assert(offsetof(FlaggedTextEntryShared, reference_count) == 0x8);

struct FlaggedTextEntry {
    uint8_t unknown_0x00[0x10];
    uint64_t tagged_text;   /**< pointer to the text, low two bits are tags */
    uint8_t unknown_0x18[0x8];
    uint64_t second_text;   /**< a second tagged text */
    uint8_t unknown_0x28[0x8];
    FlaggedTextEntryShared *shared;   /**< reference-counted block */
    void *identity;   /**< reference-counted object, compared by address */
    uint32_t key_and_tag;   /**< low 24 bits are the key, the top byte a tag */
    float weight;   /**< compared after scaling */
    uint16_t level;   /**< compared after scaling */
    uint8_t option_bits;   /**< one bit per optional setting */
    uint8_t unknown_0x4b;
    uint16_t flags;   /**< which fields are present */
};
static_assert(offsetof(FlaggedTextEntry, tagged_text) == 0x10);
static_assert(offsetof(FlaggedTextEntry, second_text) == 0x20);
static_assert(offsetof(FlaggedTextEntry, shared) == 0x30);
static_assert(offsetof(FlaggedTextEntry, identity) == 0x38);
static_assert(offsetof(FlaggedTextEntry, key_and_tag) == 0x40);
static_assert(offsetof(FlaggedTextEntry, weight) == 0x44);
static_assert(offsetof(FlaggedTextEntry, level) == 0x48);
static_assert(offsetof(FlaggedTextEntry, option_bits) == 0x4a);
static_assert(offsetof(FlaggedTextEntry, flags) == 0x4c);

}  // namespace misc
