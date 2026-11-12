// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases a destructible record: its base sub-object is finished, the flagged helper runs, the text's heap block is freed, then the base's result is returned.
#include <cstdint>

#include "destructible_record.h"
#include "formatted_name.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x0576e9c0, destructible_record_vtable, const uint8_t);

RT_ORIGINAL(0x013882e0, dispose_base, void(void *base));
RT_ORIGINAL(0x01387620, finish_base, uint64_t(void *base));
RT_ORIGINAL(0x018bf7b0, release_flagged_helper, void(misc::DestructibleRecord *record));

}  // namespace

/**
 *
 * Releases the record: sets its virtual table, disposes its base sub-object, runs the flagged helper when the flag is set,
 * frees the text's heap block when it outgrew the inline buffer, and clears the text. The base's finish result is returned.
 *
 */
extern "C" uint64_t bb_misc_release_record_base(misc::DestructibleRecord *record)
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
    return finish_base(record->base_subobject);
}
