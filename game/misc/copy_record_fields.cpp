// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: copies the fields of a source record into a destination record, with a key and a flag from the caller.
#include <cstring>

#include "copy_record_destination.h"
#include "copy_record_source.h"

/**
 *
 * Copies a source record's fields into a destination record and stores the caller's key and flag.
 *
 * Only the low 32 bits of the key and the low byte of the flag are used. The source's first identifier,
 * second identifier, pointer, count, link word and extra word are copied, and the mode byte is copied as well.
 * The routine returns the source's second identifier, zero-extended: that word is the last value loaded
 * into RAX before the return.
 *
 */
extern "C" uint64_t bb_misc_copy_record_fields(misc::CopyRecordDestination *destination, uint32_t key,
                                               const misc::CopyRecordSource *source, uint8_t flag)
{
    destination->key_0x00 = key;
    destination->mode_0x04 = source->mode_0x08;
    std::memcpy(destination->link_0x14, source->link_0x4c, sizeof(destination->link_0x14));
    destination->pointer_0x08 = source->pointer_0x40;
    destination->count_0x10 = source->count_0x48;
    destination->extra_0x1c = source->extra_0x54;
    destination->id_a_0x20 = source->id_a_0x38;
    destination->id_b_0x24 = source->id_b_0x3c;
    destination->flag_0x28 = flag;
    return source->id_b_0x3c;
}
