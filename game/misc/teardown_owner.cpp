// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tears an owner down: its object, its second list, its single pointer, then its first list.
#include <cstdint>

#include "../engine/allocator.h"
#include "destroyable_node.h"
#include "free_returning_vtable.h"
#include "runtime/original.h"
#include "teardown_owner.h"
#include "text_member_holder.h"

namespace {

/** The allocator an object was created with, found from the object's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *object));

/** Reports a text and two flags through an enabled holder's member. */
RT_ORIGINAL(0x013a3260, report_member_text,
            void(misc::TextMemberHolder *holder, const uint16_t *text, uint32_t first, uint32_t second));

/** The holder the teardown reports through, when one is set. */
RT_GLOBAL(0x058b3570, text_report_holder, misc::TextMemberHolder *);

/** The text the teardown reports. */
RT_GLOBAL(0x04da5c0e, text_report_text, const uint16_t);

/** The owner's vtable address point while the object and the second list are torn down. */
RT_GLOBAL(0x057a8be0, owner_vtable_before, const uint8_t);

/** The owner's vtable address point once the single pointer is released. */
RT_GLOBAL(0x0576da00, owner_vtable_after, const uint8_t);

}  // namespace

namespace {

/**
 *
 * Destroys an object through its destroy slot, then frees it through the allocator it was created with.
 *
 */
void destroy_and_free(misc::DestroyableNode *object)
{
    engine::Allocator *allocator = allocator_of(object);
    object->vtable->destroy(object);
    allocator->free(object);
}

/**
 *
 * Frees the nodes of a list from its first node up to its sentinel, through the list's allocator.
 *
 */
void free_nodes(engine::Allocator *allocator, misc::OwnedListNode *first, misc::OwnedListNode *sentinel)
{
    misc::OwnedListNode *node = first;
    while (node != sentinel) {
        misc::OwnedListNode *next = node->next;
        allocator->free(node);
        node = next;
    }
}

}  // namespace

/**
 *
 * Tears an owner down. The object is destroyed and freed, then every node of the second list has its object
 * destroyed and freed. The second list is emptied and its nodes are freed, and its sentinel is freed last
 * (the list was emptied before its sentinel is freed, so no node is left to free there). The single pointer is
 * released through the releaser and cleared, then the first list is emptied and its nodes and sentinel are freed.
 *
 * The result is the value the sentinel's free leaves in RAX, which the routine returns as a tail call.
 *
 */
extern "C" uint64_t bb_misc_teardown_owner_02264260(misc::TeardownOwner *owner)
{
    owner->vtable = owner_vtable_before.address();

    if (misc::DestroyableNode *object = owner->object) {
        destroy_and_free(object);
        owner->object = nullptr;
    }

    misc::OwnedListNode *second_sentinel = owner->second_sentinel;
    misc::OwnedListNode *second_first = second_sentinel->next;
    for (misc::OwnedListNode *node = second_first; node != second_sentinel; node = node->next) {
        if (node->object) destroy_and_free(node->object);
    }
    second_sentinel->next = second_sentinel;
    second_sentinel->prev = second_sentinel;
    owner->second_count = 0;
    free_nodes(owner->second_allocator, second_first, second_sentinel);

    owner->single_copy = owner->single;
    if (text_report_holder.get())
        report_member_text(text_report_holder.get(), text_report_text.address(), 1, 1);
    if (void *value = owner->single) {
        owner->releaser->vtable->release(owner->releaser, value);
        owner->single_cleared = 0;
        owner->single_copy = nullptr;
        owner->single = nullptr;
    }

    // The release may have relinked the list, so it is emptied and walked once more before its sentinel is freed.
    second_first = second_sentinel->next;
    second_sentinel->next = second_sentinel;
    second_sentinel->prev = second_sentinel;
    owner->second_count = 0;
    free_nodes(owner->second_allocator, second_first, second_sentinel);
    owner->second_allocator->free(second_sentinel);

    owner->vtable = owner_vtable_after.address();

    misc::OwnedListNode *first_sentinel = owner->first_sentinel;
    misc::OwnedListNode *first_first = first_sentinel->next;
    first_sentinel->next = first_sentinel;
    first_sentinel->prev = first_sentinel;
    owner->first_count = 0;
    free_nodes(owner->first_allocator, first_first, first_sentinel);

    return reinterpret_cast<const misc::FreeReturningVtable *>(owner->first_allocator->vtable)
        ->free(owner->first_allocator, first_sentinel);
}
