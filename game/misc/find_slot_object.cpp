// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: finds the object in the slot a word names, when that object's key equals the whole word.
#include "keyed_slot_cache.h"

namespace {

constexpr uint32_t kIndexFlag = 0x800000;     /**< Set in a word that names a slot. */
constexpr uint32_t kLow24Mask = 0xffffff;     /**< The part of a word that carries the flag and the index. */
constexpr uint32_t kNoIndex = 0xffffffff;     /**< Stands for a word whose low 24 bits are all ones. */
constexpr uint32_t kLow16Mask = 0xffff;       /**< The index part of a word; all ones means no slot. */

}  // namespace

/**
 *
 * Returns the object in the slot the word names, when the object's key equals the whole word, and null otherwise.
 *
 * The slot is taken from the low 16 bits of the word and is not checked against the cache's size.
 *
 */
extern "C" misc::CachedSlotObject *bb_misc_find_slot_object_01e86fa0(const misc::SlotLookupTable *table, const uint32_t *word)
{
    const uint32_t value = *word;
    uint32_t index = value & kLow24Mask;
    if (index == kLow24Mask) index = kNoIndex;
    if ((index & kIndexFlag) == 0 || value == 0) return nullptr;
    index &= kLow16Mask;
    if (index == kLow16Mask) return nullptr;
    misc::CachedSlotObject *object = table->slots_0x0008[index];
    if (object == nullptr) return nullptr;
    if (object->key_0x08 != value) return nullptr;
    return object;
}
