// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

struct TaggedEntry {
    uint8_t unknown_0x00[0x10];
    uint64_t tagged_text;   /**< pointer to the text, low two bits are tags */
    uint8_t unknown_0x18[0x20];
    uint64_t identity;   /**< compared when the texts are not both comparable */
    uint32_t key_and_tag;   /**< low 24 bits are the key, the top byte a tag */
    float weight;   /**< compared after scaling */
    uint16_t level;   /**< compared after scaling */
    uint8_t option_bits;   /**< bit 3 must match */
    uint8_t unknown_0x4b;
    uint16_t flags;   /**< bit 2: text is comparable, bit 11: identity is compared */
};
static_assert(offsetof(TaggedEntry, tagged_text) == 0x10);
static_assert(offsetof(TaggedEntry, identity) == 0x38);
static_assert(offsetof(TaggedEntry, key_and_tag) == 0x40);
static_assert(offsetof(TaggedEntry, weight) == 0x44);
static_assert(offsetof(TaggedEntry, level) == 0x48);
static_assert(offsetof(TaggedEntry, option_bits) == 0x4a);
static_assert(offsetof(TaggedEntry, flags) == 0x4c);

constexpr uint16_t flag_text_comparable = 0x4;
constexpr uint16_t flag_identity_compared = 0x800;
constexpr uint8_t option_bit_must_match = 0x8;
constexpr uint32_t key_mask = 0xffffff;
constexpr unsigned tag_shift = 24;
constexpr uint64_t tag_bits_mask = 0x3;
constexpr uint64_t text_offset = 0xc;

RT_ORIGINAL(0x0045e440, fn_0045e440, int32_t(uint64_t first_text, uint64_t second_text));
RT_GLOBAL(0x04b3e538, scale, const float);

uint64_t text_address(const TaggedEntry *entry)
{
    return (entry->tagged_text & ~tag_bits_mask) + text_offset;
}

}  // namespace

/**
 *
 * Tells whether two tagged entries describe the same thing: equal text or identity, key, tag, level and weight.
 *
 * Returns 1 when everything matches and 0 at the first difference.
 */
extern "C" uint32_t bb_misc_tagged_entry_equal(const TaggedEntry *first, const TaggedEntry *second)
{
    bool text_equal = false;
    if ((first->flags & flag_text_comparable) && (second->flags & flag_text_comparable))
        text_equal = fn_0045e440(text_address(first), text_address(second)) == 0;

    if (!text_equal) {
        if (!(first->flags & flag_identity_compared)) return 0;
        if (!(second->flags & flag_identity_compared)) return 0;
        if (first->identity != second->identity) return 0;
    }

    const uint32_t first_key = first->key_and_tag;
    const uint32_t second_key = second->key_and_tag;
    if ((first_key ^ second_key) & key_mask) return 0;
    if (static_cast<uint8_t>(first_key >> tag_shift) != static_cast<uint8_t>(second_key >> tag_shift)) return 0;

    const float first_level = static_cast<float>(first->level) * scale.get();
    const float second_level = static_cast<float>(second->level) * scale.get();
    if (first_level != second_level) return 0;
    if ((first->option_bits ^ second->option_bits) & option_bit_must_match) return 0;

    const float first_weight = scale.get() * first->weight;
    const float second_weight = scale.get() * second->weight;
    return first_weight == second_weight ? 1 : 0;
}
