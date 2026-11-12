// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases a destructible record and frees the record's block: the base sub-object is finished, the flagged helper runs, the text's heap block is freed, then the block is freed.
#include <cstdint>

#include "destructible_record.h"
#include "formatted_name.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x0576e9c0, destructible_record_vtable, const uint8_t);

RT_ORIGINAL(0x013882e0, dispose_base, void(void *base));
RT_ORIGINAL(0x01387620, finish_base, uint64_t(void *base));
RT_ORIGINAL(0x018bf7b0, release_flagged_helper, void(misc::DestructibleRecord *record));
RT_ORIGINAL(0x02fbe588, free_block, uint64_t(void *block));

}  // namespace

/**
 *
 * Releases the record like misc_release_record_base, then frees the record's own block and returns the free's result.
 * The base's finish result is not used.
 *
 */
extern "C" uint64_t bb_misc_release_record_and_free(misc::DestructibleRecord *record)
{
    record->vtable = destructible_record_vtable.address();
    dispose_base(record->base_subobject);
    if (record->release_flag) {
        release_flagged_helper(record);
    }
    if (record->capacity >= misc::formatted_name_heap_capacity) {
        record->allocator->free(record->text.heap_text);
    }
    record->capacity = misc::formatted_name_inline_capacity;
    record->size = 0;
    record->text.inline_text[0] = '\0';
    record->text.inline_text[1] = '\0';
    finish_base(record->base_subobject);
    return free_block(record);
}
