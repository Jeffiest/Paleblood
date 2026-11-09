// SPDX-License-Identifier: GPL-2.0-or-later
// Looks up the record with the lookup id. Its tagged word has the tag bits cleared and the payload
// offset added, and the record is released afterwards. A missing record gives zero and releases nothing.
#include "misc.h"

/**
 *
 * Looks up the id's record, returns its tag-cleared word plus the payload offset, and releases the record.
 *
 */
extern "C" uint64_t bb_misc_lookup_record_payload(misc::LookupTable *table)
{
    misc::LookupRecord *record = table->vtable->find(table, misc::lookup_record_id);
    if (record == nullptr) return 0;

    const uint64_t payload = (record->tagged_word_10 & ~misc::tag_bits_mask) + misc::payload_offset;
    misc::release_record(record);
    return payload;
}
