// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: give an object its vtable, clear its second word, then initialize its embedded sub-object
// with a scratch slot, all under the stack guard.
#include <cstddef>
#include <cstdint>
#include <cstdlib>

#include "runtime/original.h"

namespace {

/** A static vtable block: the object's vtable pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

/** The object: a vtable pointer, a cleared word, and an embedded sub-object at +0x10. */
struct VtableSubobjectHolder {
    static constexpr auto subobject_bytes = 0x10;
    const void *vtable;
    uint64_t value_0x08;
    uint8_t subobject_0x10[subobject_bytes];
};
static_assert(offsetof(VtableSubobjectHolder, value_0x08) == 0x08);
static_assert(offsetof(VtableSubobjectHolder, subobject_0x10) == 0x10);

RT_GLOBAL(0x056f1cb0, static_vtable, StaticVtable);
RT_GLOBAL(0x057e3be0, stack_guard_pointer, const uint64_t *);
RT_ORIGINAL(0x02fbe4f8, stack_check_failure, void());
RT_ORIGINAL(0x02d84b80, initialize_subobject, void(void *subobject, uint64_t *scratch));

}  // namespace

/**
 *
 * Gives the holder its vtable and clears its second word, then initializes its sub-object at +0x10.
 *
 * A scratch slot on the stack is passed to the sub-object's initializer, and the stack guard
 * copied on entry is compared again before returning. A guard mismatch reports the original's
 * stack check failure and aborts, as the original never returns from it.
 */
extern "C" void bb_misc_init_vtable_subobject(VtableSubobjectHolder *holder)
{
    const uint64_t *const guard = stack_guard_pointer.get();
    const uint64_t canary = *guard;
    holder->vtable = &static_vtable.address()->first_slot_0x0010;
    holder->value_0x08 = 0;
    uint64_t scratch;
    initialize_subobject(holder->subobject_0x10, &scratch);
    if (*guard != canary) {
        stack_check_failure();
        std::abort();
    }
}
