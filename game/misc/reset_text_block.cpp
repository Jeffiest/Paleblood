// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"
#include "text_block_record.h"

namespace {

using misc::TextBlockRecord;
using misc::TextBlockSlot;
using misc::text_block_first_slot;
using misc::text_block_inline_capacity;
using misc::text_block_second_slot;
using misc::text_block_third_slot;

RT_GLOBAL(0x0574fa10, text_block_vtable, uint8_t);
RT_GLOBAL(0x04d3a323, text_block_fatal_file, const char);
RT_GLOBAL(0x04d40300, text_block_fatal_message, const char);
RT_ORIGINAL(0x024b55b0, text_block_fatal_report, uint64_t(const char *file, int32_t line, const char *format, ...));

// A heap capacity whose check result (capacity plus one) reaches this limit goes to the fatal report.
constexpr uint64_t heap_capacity_limit = 0x41;
constexpr int32_t text_block_fatal_line = 0x120;
constexpr uint8_t heap_owned_flag = 0x02;
constexpr uint64_t empty_text_capacity = text_block_inline_capacity - 1;

/**
 *
 * Empties one text slot: a heap buffer it owns is dropped from ownership (its memory is left as it
 * is), then the slot is set to an empty inline string.
 *
 * Returns the value the original leaves in RAX: the capacity, one more when the slot held a heap
 * buffer, or the fatal report's result when that capacity reached the limit.
 *
 */
uint64_t reset_text_slot(TextBlockSlot *slot)
{
    uint64_t result = slot->capacity;
    if (slot->capacity >= text_block_inline_capacity) {
        result = slot->capacity + 1;
        if (result >= heap_capacity_limit)
            result = text_block_fatal_report(text_block_fatal_file.address(), text_block_fatal_line,
                                             text_block_fatal_message.address());
        slot->flags = static_cast<uint8_t>(slot->flags & static_cast<uint8_t>(~heap_owned_flag));
    }
    slot->capacity = empty_text_capacity;
    slot->size = 0;
    slot->inline_text[0] = u'\0';
    return result;
}

}  // namespace

/**
 *
 * Resets a text block: sets its vtable, then empties its three text slots in the order third, second,
 * first.
 *
 * The result is the value the original leaves in RAX: the first slot's reset result.
 *
 */
extern "C" uint64_t bb_misc_reset_text_block(TextBlockRecord *record)
{
    record->vtable = reinterpret_cast<uintptr_t>(text_block_vtable.address());
    reset_text_slot(&record->slots[text_block_third_slot]);
    reset_text_slot(&record->slots[text_block_second_slot]);
    return reset_text_slot(&record->slots[text_block_first_slot]);
}
