// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "ref_item.h"

namespace {

/**
 *
 * An object that holds one reference item at +0x20, with a count word beside it at +0x28 that is cleared
 * along with the item.
 *
 */
struct SingleItemHolder {
    uint8_t unknown_0x00[0x20];
    misc::RefItem *item_0x20;     /**< The held reference item, or null. */
    int32_t item_count_0x28;      /**< Cleared when the item is released. */
};
static_assert(offsetof(SingleItemHolder, item_0x20) == 0x20 && offsetof(SingleItemHolder, item_count_0x28) == 0x28);

}  // namespace

/**
 *
 * Releases the object's held item: drops its reference when the item is counted, destroys it when that
 * was the last reference, then clears the item pointer and its count.
 *
 * The original's RAX is not part of the result: the function is reached through a virtual slot whose
 * callers take no value, so it returns nothing.
 */
extern "C" void bb_misc_release_single_item(SingleItemHolder *self)
{
    misc::RefItem *item = self->item_0x20;
    if (item != nullptr && item->refcount_word >= misc::ref_counted_threshold) {
        if (misc::decrement_ref_count(&item->refcount_word) == 0) item->vtable->destroy(item);
    }
    self->item_0x20 = nullptr;
    self->item_count_0x28 = 0;
}
