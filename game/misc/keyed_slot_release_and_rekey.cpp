// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases the object a cache slot holds, gives the slot a new key and pushes the slot onto the recent ring.
#include "../engine/allocator.h"
#include "keyed_slot_cache.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(void *block));

constexpr uint32_t kIndexFlag = 0x800000;           /**< Set in a word that names a slot. */
constexpr uint32_t kLow24Mask = 0xffffff;           /**< The part of a word that carries the flag and the index. */
constexpr uint32_t kNoIndex = 0xffffffff;           /**< Stands for a word whose low 24 bits are all ones. */
constexpr uint32_t kLow16Mask = 0xffff;             /**< The index part of a word; all ones means no slot. */
constexpr uint32_t kKeyNoIndex = 0xffffff;          /**< The key given to a slot whose old key names no slot. */
constexpr uint32_t kLargestKeyIndex = 0xfffe;       /**< The largest slot index a key can carry. */
constexpr uint32_t kKeyIndexBits = 0x7fffff;        /**< The bits of a key that hold its index. */
constexpr uint32_t kKeyGenerationStep = 0x10000;    /**< Added to an old key to change its generation bits. */
constexpr uint32_t kKeyGenerationMask = 0x7f0000;   /**< The generation bits of a key. */
constexpr uint32_t kFlagShift = 23;                 /**< Where the flag bit of an old key is shifted to bit zero. */
constexpr uint32_t kByteMask = 0xff;                /**< The low byte, which holds the flag once shifted. */
constexpr uint32_t kRingBias = 0xfff;               /**< Added to a negative position before it is rounded down. */
constexpr uint32_t kRingRoundMask = 0xfffff000;     /**< Clears the low twelve bits of a position. */

/**
 *
 * Advances a ring position by one, wrapping it into the ring's length the way the original does.
 *
 */
int32_t advance_ring_position(int32_t position)
{
    const int32_t next = position + 1;
    const uint32_t sign_bias = next < 0 ? kRingBias : 0;
    return next - static_cast<int32_t>((static_cast<uint32_t>(next) + sign_bias) & kRingRoundMask);
}

}  // namespace

/**
 *
 * Releases the object a slot holds, if any, and then gives the slot a new key and a zero count and pushes the slot
 * onto the ring. The slot comes from the low 16 bits of the word, and only slots up to the table's size count.
 *
 * The original leaves the return register holding a value nobody reads, so the routine returns nothing.
 *
 */
extern "C" void bb_misc_release_and_rekey_slot_01e86e60(misc::KeyedSlotCache *cache, uint32_t word)
{
    uint32_t index = word & kLow24Mask;
    if (index == kLow24Mask) index = kNoIndex;
    if ((index & kIndexFlag) == 0 || word == 0) return;
    index &= kLow16Mask;
    if (index > misc::kKeyedSlotCount - 1) return;
    const uint32_t slot = index;

    misc::SlotObject *object = cache->slots_0x0008[slot];
    if (object != nullptr) {
        engine::Allocator *allocator = allocator_of(object);
        object->vtable_0x00->destroy_0x00(object);
        allocator->free(object);
        cache->slots_0x0008[slot] = nullptr;
    }

    uint32_t old_key = cache->entries_0x8008[slot].key_0x00 & kLow24Mask;
    if (old_key == kLow24Mask) old_key = kNoIndex;
    uint32_t old_index = kNoIndex;
    if ((old_key & kLow16Mask) != kLow16Mask && ((old_key >> kFlagShift) & kByteMask) != 0) {
        old_index = old_key & kLow16Mask;
    }
    uint32_t new_key = kKeyNoIndex;
    if (old_index <= kLargestKeyIndex) {
        new_key = (old_index & kKeyIndexBits) | ((old_key + kKeyGenerationStep) & kKeyGenerationMask) | kIndexFlag;
    }
    cache->entries_0x8008[slot].key_0x00 = new_key;
    cache->entries_0x8008[slot].count_0x04 = 0;

    cache->ring_position_0x1400c = advance_ring_position(cache->ring_position_0x1400c);
    cache->ring_0x10008[cache->ring_position_0x1400c] = slot;
}
