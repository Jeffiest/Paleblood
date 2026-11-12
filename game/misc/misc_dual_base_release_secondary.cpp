// SPDX-License-Identifier: GPL-2.0-or-later
#include "dual_base_object.h"

namespace {

/**
 *
 * The virtual functions of a counted item whose destroy slot gives back the result register.
 *
 */
struct ResultItemVtable {
    uint8_t unknown_0x0000[0x20];
    uint64_t (*destroy_with_result)(misc::RefItem *item); /**< Slot 0x20: destroys the item and gives back its result. */
};

}  // namespace

/**
 *
 * The same release as bb_misc_dual_base_release, entered through the object's secondary base.
 *
 * The object is found from the secondary base pointer. The result register holds the secondary vtable
 * when the object holds no counted item, the item's word that was read when it is released, or the
 * result of the item's destroy when that release leaves no references.
 */
extern "C" uint64_t bb_misc_dual_base_release_secondary(uint8_t *secondary)
{
    misc::DualBaseObject *object = misc::dual_base_from_secondary(secondary);
    object->primary_vtable = misc::dual_base_vtable.address() + engine::vtable_address_point;
    object->secondary_vtable = misc::dual_base_vtable.address() + misc::dual_base_secondary_vtable_offset;
    uint64_t result = reinterpret_cast<uint64_t>(object->secondary_vtable);

    misc::RefItem *held = object->held;
    if (held != nullptr && held->refcount_word >= misc::ref_counted_threshold) {
        const uint32_t word_read = held->refcount_word;
        result = word_read;
        if (misc::decrement_ref_count(&held->refcount_word) == 0) {
            const auto *vtable = reinterpret_cast<const ResultItemVtable *>(held->vtable);
            result = vtable->destroy_with_result(held);
        }
    }
    object->held = nullptr;
    return result;
}
