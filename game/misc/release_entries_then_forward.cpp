// SPDX-License-Identifier: GPL-2.0-or-later
#include "ref_entry_array.h"

#include <cstdint>

namespace {

RT_ORIGINAL(0x0247ec00, fn_0247ec00, int32_t(int32_t *references));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *object));

/**
 *
 * Drops the reference an entry holds, when the entry is of the counted kind.
 *
 * The count before the drop decides: one destroys the object through its first vtable slot, a count
 * above one leaves it alone, and zero or less is reported through the fatal error report.
 */
void release_entry(misc::RefEntry *entry)
{
    if (entry->kind != misc::ref_entry_kind_counted) return;
    engine::RefObject *object = entry->object;
    const int32_t before = fn_0247ec00(&object->references);
    if (before == 1) {
        object->vtable->destroy(object);
    } else if (before <= 0) {
        engine::fatal_error(nullptr, engine::line_invalid_unref, misc::message_entry_unref.address());
    }
}

}  // namespace

/**
 *
 * Releases every entry of an array, frees its storage, then forwards the array to the release routine
 * that the game runs last, and returns what that routine returns.
 *
 * The owner's vtable is set first. An array with no storage (a null begin) skips the entries and the
 * free, but is still forwarded. The forwarded call is a tail call in the original, so its result is
 * the result of this routine.
 */
extern "C" uint64_t bb_misc_release_entries_then_forward(misc::RefEntryArray *array)
{
    array->vtable = misc::ref_entry_array_vtable.address() + engine::vtable_address_point;
    if (array->begin != nullptr) {
        misc::RefEntry *const end = array->end;
        for (misc::RefEntry *entry = array->begin; entry != end; ++entry) release_entry(entry);
        array->allocator->free(array->begin);
    }
    return fn_02fbe588(array);
}
