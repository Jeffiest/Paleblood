// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills a narrow clone record from a clone source, in the record it is given or in a new block when it is given none.
#include <cstdint>

#include "clone_source.h"
#include "narrow_clone_record.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x05724b80, narrow_clone_vtable, const uint8_t);

RT_ORIGINAL(0x02fbe9a8, allocate_block, void *(uint64_t size));
RT_ORIGINAL(0x02fbf188, throw_allocation_failure, void());

/** The size of a narrow clone record block. */
constexpr uint64_t narrow_clone_size = sizeof(misc::NarrowCloneRecord);

}  // namespace

/**
 *
 * Fills a narrow clone record from the source's three words and sets its virtual table. The record given is used; when
 * none is given a new block is allocated, and a failed allocation throws. The record's address is returned.
 *
 */
extern "C" uint64_t bb_misc_copy_narrow_clone_record_alt(const misc::CloneSource *source, misc::NarrowCloneRecord *given)
{
    misc::NarrowCloneRecord *record = given;
    if (record == nullptr) {
        record = static_cast<misc::NarrowCloneRecord *>(allocate_block(narrow_clone_size));
        if (record == nullptr) {
            throw_allocation_failure();
            __builtin_unreachable();
        }
    }
    record->vtable = narrow_clone_vtable.address();
    record->word_0x08 = source->word_0x08;
    record->word_0x10 = source->word_0x10;
    record->word_0x20 = source->word_0x20;
    return reinterpret_cast<uint64_t>(record);
}
