// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: builds a text object from a scratch record: takes its allocator and flag, copies the text, and frees the record's block when it is heap-held.
#include <cstdint>

#include "../engine/allocator.h"
#include "runtime/original.h"
#include "scratch_text_object.h"
#include "scratch_text_record.h"

namespace {

/** The three constants the record is filled from: a narrow text, a second narrow text and a wide text. */
RT_GLOBAL(0x04dbf980, scratch_first_text, const char);
RT_GLOBAL(0x04d5625e, scratch_second_text, const char);
RT_GLOBAL(0x04da5c0e, scratch_wide_text, const uint16_t);

/** Fills the scratch record from the three constants. */
RT_ORIGINAL(0x016e6cf0, fill_scratch_record,
            void(misc::ScratchTextRecord *record, const char *first, const char *second, const uint16_t *wide));

/** Copies the record's text into the object; the count of all bytes is the largest 64-bit value. */
RT_ORIGINAL(0x02a38fa0, copy_scratch_text, void(misc::ScratchTextObject *object, misc::ScratchTextRecord *record,
                                                 uint32_t mode, uint64_t count));

/** The capacity the object starts with, before its text is copied. */
constexpr uint64_t initial_capacity = 7;

/** A record block of this many bytes or more is held on the heap and freed through its allocator. */
constexpr uint64_t heap_capacity_threshold = 8;

/** The copy's mode argument, and its count of all bytes. */
constexpr uint32_t copy_mode = 0;
constexpr uint64_t copy_all_bytes = ~static_cast<uint64_t>(0);

}  // namespace

/**
 *
 * Builds the text object from a scratch record filled on the stack: the object takes the record's allocator, its
 * short word and count are cleared, and the record's text is copied in. Then the object takes the record's flag
 * byte, and the record's block is freed through its allocator when the block is heap-held.
 *
 * The result is the object's address.
 *
 */
extern "C" misc::ScratchTextObject *bb_misc_init_scratch_text_02265a80(misc::ScratchTextObject *object)
{
    misc::ScratchTextRecord record;
    fill_scratch_record(&record, scratch_first_text.address(), scratch_second_text.address(),
                        scratch_wide_text.address());

    object->allocator = record.allocator;
    object->capacity = initial_capacity;
    object->count = 0;
    object->short_word = 0;

    copy_scratch_text(object, &record, copy_mode, copy_all_bytes);
    object->flag = record.flag;

    if (record.capacity >= heap_capacity_threshold) record.allocator->free(record.data);
    return object;
}
