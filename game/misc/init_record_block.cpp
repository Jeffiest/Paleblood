// SPDX-License-Identifier: GPL-2.0-or-later
// Initializes a record with the record vtable, a value of one and its kind, then takes an 8-byte block
// from the scratch service, zeroes its first word, stores it in the record and returns it.
#include "misc.h"

/**
 *
 * Initializes the record, takes its block from the scratch service, zeroes the block and returns it.
 *
 */
extern "C" void *bb_misc_init_record_block(misc::RecordObject *record)
{
    record->vtable = misc::record_vtable.address();
    record->value_0x08 = 1;
    record->kind_0x0c = misc::record_kind;

    misc::Service *service = misc::scratch_service.get();
    void *block = service->vtable->allocate(service, misc::record_block_size, 0);
    *static_cast<uint64_t *>(block) = 0;
    record->block_0x10 = block;
    return block;
}
