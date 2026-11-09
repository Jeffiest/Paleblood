// SPDX-License-Identifier: GPL-2.0-or-later
#include "record_holder.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x018873c0, fn_018873c0, void(void *owner, uint32_t key));

}  // namespace

/**
 *
 * Hands a holder's record to the notifier when the record is still pending, then returns the holder.
 *
 * The second argument is not read. A null holder, or one without a record, does nothing; a record whose
 * flag byte is not zero is skipped. Otherwise the notifier receives the owner and the record's key.
 */
extern "C" misc::RecordHolder *bb_misc_notify_unflagged_record(void *owner, uint64_t /*unused*/,
                                                               misc::RecordHolder *holder)
{
    if (holder != nullptr && holder->record != nullptr && holder->record->pending_0x01 == 0)
        fn_018873c0(owner, holder->record->key_0x04);
    return holder;
}
