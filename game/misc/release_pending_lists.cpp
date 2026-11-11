// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "misc.h"
#include "pending_lists.h"
#include "runtime/original.h"

namespace {

/** The two low bits of a tagged reference are tags, not part of the pointer. */
constexpr uint64_t reference_tag_mask = 0x3;
/** The count at which a reference is the last one, and so releases its object. */
constexpr int32_t last_reference = 1;

RT_ORIGINAL(0x0045a4c0, release_item_object, void(void *object));

/**
 *
 * Releases the object through the scratch service's release routine.
 */
void release_through_scratch(void *object)
{
    misc::Service *scratch = misc::scratch_service.get();
    scratch->vtable->release(scratch, object);
}

/**
 *
 * Drops one reference held through a tagged pointer, and releases the object through the scratch service when it
 * was the last one.
 */
void drop_tagged_reference(uint64_t tagged_ref)
{
    misc::RefCountedHeader *object =
        reinterpret_cast<misc::RefCountedHeader *>(tagged_ref & ~reference_tag_mask);
    const int32_t previous = __atomic_fetch_sub(&object->references, 1, __ATOMIC_SEQ_CST);
    if (previous == last_reference) release_through_scratch(object);
}

/**
 *
 * Releases a pending entry: its own reference, then each element's reference from the last element to the first,
 * then its element array.
 */
void release_entry(misc::PendingEntry *entry)
{
    drop_tagged_reference(entry->tagged_ref);
    for (uint64_t index = entry->count; index != 0; --index) {
        drop_tagged_reference(entry->elements[index - 1].tagged_ref);
    }
    release_through_scratch(entry->elements);
}

}  // namespace

/**
 *
 * Clears the holder's chain word and releases every pending list: first the entries, then the callbacks, which
 * each have their object's slot called with their argument, and last the items, whose objects are released.
 *
 * The chain word is cleared without following the chain it held: the walk over that chain reads nothing it keeps.
 */
extern "C" void bb_misc_release_pending_lists(misc::PendingLists *lists)
{
    lists->chain_0x00 = 0;
    while (lists->entries != nullptr) {
        misc::PendingEntry *entry = lists->entries;
        lists->entries = entry->next;
        release_entry(entry);
    }
    while (lists->callbacks != nullptr) {
        misc::PendingCallback *callback = lists->callbacks;
        lists->callbacks = callback->next;
        if (callback->object != nullptr) {
            callback->object->vtable->slot_0x18(callback->object, callback->argument);
        }
    }
    while (lists->items != nullptr) {
        misc::PendingItem *item = lists->items;
        lists->items = item->next;
        if (item->object != nullptr) release_item_object(item->object);
    }
}
