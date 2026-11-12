// SPDX-License-Identifier: GPL-2.0-or-later
#include "streamed_record.h"

namespace {

/** The owner a child is registered with, found from the child's address. */
RT_ORIGINAL(0x0247b720, owner_of, misc::StreamedRecordOwner *(misc::RecordChild *child));

/** Releases the record's member, which sits inside the record. */
RT_ORIGINAL(0x01ec5880, member_release, void(void *member));

/** Releases the record's body and returns what that release returns. */
RT_ORIGINAL(0x01c93990, body_release, uint64_t(void *body));

/**
 *
 * Releases a child: its owner is found first, the child then releases itself through its first vtable
 * slot, and last the owner removes the child through its remove slot.
 *
 */
void release_child(misc::RecordChild *child)
{
    misc::StreamedRecordOwner *owner = owner_of(child);
    child->vtable->release(child);
    owner->vtable->remove_child(owner, child);
}

}  // namespace

/**
 *
 * Releases a streamed record: stores its vtable address, releases and clears the second child and then
 * the first, stores the member's vtable address and releases the member, and ends by releasing the body.
 *
 * The body release is a tail call in the original, so its result is returned as it is. A missing child
 * is skipped.
 *
 */
extern "C" uint64_t bb_misc_streamed_record_release(misc::StreamedRecord *record)
{
    record->vtable = misc::streamed_record_vtable.address();
    if (record->second_child != nullptr) {
        release_child(record->second_child);
        record->second_child = nullptr;
    }
    if (record->first_child != nullptr) {
        release_child(record->first_child);
        record->first_child = nullptr;
    }
    record->member_vtable = misc::streamed_member_vtable.address();
    member_release(record->member);
    return body_release(record->body);
}
