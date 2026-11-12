// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills a key clone record from a clone source's key word, in the record it is given or in a new block when it is given none.
#include <cstdint>

#include "clone_source.h"
#include "key_clone_record.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x05724bd0, key_clone_vtable, const uint8_t);

RT_ORIGINAL(0x02fbe9a8, allocate_block, void *(uint64_t size));
RT_ORIGINAL(0x02fbf188, throw_allocation_failure, void());

/** The size of a key clone record block. */
constexpr uint64_t key_clone_size = sizeof(misc::KeyCloneRecord);

}  // namespace

/**
 *
 * Fills a key clone record from the source's key word and sets its virtual table. The record given is used; when none
 * is given a new block is allocated, and a failed allocation throws. The record's address is returned.
 *
 */
extern "C" uint64_t bb_misc_copy_key_clone_record_alt(const misc::CloneSource *source, misc::KeyCloneRecord *given)
{
    misc::KeyCloneRecord *record = given;
    if (record == nullptr) {
        record = static_cast<misc::KeyCloneRecord *>(allocate_block(key_clone_size));
        if (record == nullptr) {
            throw_allocation_failure();
            __builtin_unreachable();
        }
    }
    record->vtable = key_clone_vtable.address();
    record->key_0x08 = source->word_0x08;
    return reinterpret_cast<uint64_t>(record);
}
