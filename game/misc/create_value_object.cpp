// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: create a value object for a source record, with both of its sub-objects set from the candidate word the selector picks.
#include <cstddef>
#include <cstdint>

#include "object_source.h"

#include "runtime/original.h"

namespace {

/** The created object: its vtable, a sub-object at +0x08 and a second sub-object at +0x40. */
struct ValueObject {
    const void *vtable;
    static constexpr auto sub_object_bytes = 0x38;
    uint8_t unknown_0x08[sub_object_bytes];
    uint8_t unknown_0x40[sub_object_bytes];
};
static_assert(offsetof(ValueObject, unknown_0x40) == 0x40 && sizeof(ValueObject) == 0x78);

RT_GLOBAL(0x056c74c0, object_vtable, uint8_t);
RT_ORIGINAL(0x0247c4e0, fn_0247c4e0, void *(uint32_t, uint32_t, uint64_t));
RT_ORIGINAL(0x02bb7990, fn_02bb7990, void(ValueObject *));
RT_ORIGINAL(0x02baa950, fn_02baa950, void(void *, uint64_t));

/** The offset of the usable vtable entry within the vtable block. */
constexpr uintptr_t vtable_address_point = 0x10;

}  // namespace

/**
 *
 * Creates a value object for a source record and returns it, or null when no object could be allocated.
 *
 * The selector's low bit, read before the allocation, chooses the candidate word that initializes
 * both sub-objects. The sub-objects are initialized after the base initializer and the vtable
 * pointer is set last.
 */
extern "C" ValueObject *bb_misc_create_value_object(uint64_t /* first argument: never read */, ObjectSource *source)
{
    constexpr uint8_t selector_bit = 1;
    constexpr uint32_t object_bytes = 0x78;
    constexpr uint32_t object_alignment = 8;
    const bool use_first_candidate = (source->selector_0x45a & selector_bit) != 0;
    ValueObject *const created = static_cast<ValueObject *>(
        fn_0247c4e0(object_bytes, object_alignment, source->alloc_arg_0x460));
    if (created == nullptr) return nullptr;
    const uint64_t candidate = use_first_candidate ? source->field_0x118 : source->field_0x210;
    fn_02bb7990(created);
    created->vtable = object_vtable.address() + vtable_address_point;
    fn_02baa950(created->unknown_0x08, candidate);
    fn_02baa950(created->unknown_0x40, candidate);
    return created;
}
