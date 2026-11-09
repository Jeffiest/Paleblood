// SPDX-License-Identifier: GPL-2.0-or-later
#include "ref_entry_array.h"

#include <cstdint>

namespace {

RT_ORIGINAL(0x0247ec00, fn_0247ec00, int32_t(int32_t *references));

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
 * Releases every entry of an array, frees its storage and clears the array's range and its word.
 *
 * An array with no storage (a null begin) is left as it is. Otherwise each entry in the range is
 * released in order, the storage is freed through the owner's allocator, and the begin and end
 * pointers and the word at +0x20 are set to zero. The owner's vtable is set first.
 */
extern "C" void bb_misc_release_entries_and_clear(misc::RefEntryArray *array)
{
    array->vtable = misc::ref_entry_array_vtable.address() + engine::vtable_address_point;
    if (array->begin == nullptr) return;
    misc::RefEntry *const end = array->end;
    for (misc::RefEntry *entry = array->begin; entry != end; ++entry) release_entry(entry);
    array->allocator->free(array->begin);
    array->begin = nullptr;
    array->end = nullptr;
    array->word_0x0020 = 0;
}
