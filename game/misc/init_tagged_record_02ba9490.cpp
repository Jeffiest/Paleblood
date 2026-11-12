// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: give a tagged record its vtable, clear its body and store the tag word.
#include <cstring>

#include "tagged_record.h"

#include "runtime/original.h"

namespace {

RT_GLOBAL(0x05ac5f5b, record_vtable, uint8_t);

}  // namespace

/**
 *
 * Initializes a tagged record and returns zero.
 *
 * The vtable pointer is set first, then the body from +0x08 to +0x78 is cleared and the tag word
 * is stored last. The original leaves RAX at zero, which is the return value.
 */
extern "C" uint64_t bb_misc_init_tagged_record_02ba9490(uint64_t tag, TaggedRecord *record)
{
    constexpr uint64_t no_error = 0;
    record->vtable = record_vtable.address();
    std::memset(record->unknown_0x0008, 0, sizeof(record->unknown_0x0008));
    record->tag_0x0078 = tag;
    return no_error;
}
