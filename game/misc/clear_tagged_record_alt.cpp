// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: clear a tagged record's vtable pointer and body, then store the tag word.
#include <cstring>

#include "tagged_record.h"

/**
 *
 * Clears a tagged record and stores the tag word, returning zero.
 *
 * The vtable pointer and the body from +0x08 to +0x78 are set to zero, and the tag word is stored
 * last. The original leaves RAX at zero, which is the return value.
 */
extern "C" uint64_t bb_misc_clear_tagged_record_alt(uint64_t tag, TaggedRecord *record)
{
    constexpr uint64_t no_error = 0;
    record->vtable = nullptr;
    std::memset(record->unknown_0x0008, 0, sizeof(record->unknown_0x0008));
    record->tag_0x0078 = tag;
    return no_error;
}
