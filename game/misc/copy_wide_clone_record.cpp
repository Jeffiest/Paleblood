// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills a wide clone record from a clone source, in the record it is given or in a new block when it is given none.
#include <cstdint>

#include "clone_source.h"
#include "runtime/original.h"
#include "wide_clone_record.h"

namespace {

RT_GLOBAL(0x05724b30, wide_clone_vtable, const uint8_t);

RT_ORIGINAL(0x02fbe9a8, allocate_block, void *(uint64_t size));
RT_ORIGINAL(0x02fbf188, throw_allocation_failure, void());

/** The size of a wide clone record block. */
constexpr uint64_t wide_clone_size = sizeof(misc::WideCloneRecord);

}  // namespace

/**
 *
 * Fills a wide clone record from the source's four words and sets its virtual table. The record given is used; when
 * none is given a new block is allocated, and a failed allocation throws. The record's address is returned.
 *
 */
extern "C" uint64_t bb_misc_copy_wide_clone_record(const misc::CloneSource *source, misc::WideCloneRecord *given)
{
    misc::WideCloneRecord *record = given;
    if (record == nullptr) {
        record = static_cast<misc::WideCloneRecord *>(allocate_block(wide_clone_size));
        if (record == nullptr) {
            throw_allocation_failure();
            __builtin_unreachable();
        }
    }
    record->vtable = wide_clone_vtable.address();
    record->word_0x08 = source->word_0x08;
    record->word_0x10 = source->word_0x10;
    record->word_0x20 = source->word_0x20;
    record->word_0x28 = source->word_0x28;
    return reinterpret_cast<uint64_t>(record);
}
