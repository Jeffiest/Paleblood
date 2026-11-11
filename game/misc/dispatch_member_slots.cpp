// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls the member-function slot at the object's current index, again while the callee leaves a pending flag set.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The low bit of a slot's function field: the function is a vtable slot at (value - 1). */
constexpr uint64_t virtual_flag = 1;

/** The most slots one call of the dispatcher visits. */
constexpr uint32_t visit_limit = 0x80;

/** The status word the dispatcher sets on the record it was given when a slot cannot be called. */
constexpr uint32_t status_failed = 3;

/** One slot: a member function pointer, the function or vtable offset and the adjustment of its object. */
struct MemberSlot {
    uint64_t function;       /**< A function address, or a vtable offset plus the virtual flag; zero when empty. */
    uintptr_t adjustment;    /**< The byte offset added to the object's address for the call. */
};
static_assert(offsetof(MemberSlot, adjustment) == 0x08);

/** The dispatcher's object: the current slot index, a pending flag, the slot table and a cleared byte. */
struct SlotTableObject {
    uint8_t unknown_0x0000[0x0c];
    int32_t current_index;   /**< The slot the next call uses; the callee may change it. */
    uint8_t unknown_0x0010[0x08];
    uint8_t pending;         /**< Set by a callee that wants the next slot visited. */
    uint8_t unknown_0x0019[0x07];
    MemberSlot *table;       /**< The slots, indexed by the current index. */
    uint8_t unknown_0x0028;
    uint8_t cleared_0x29;    /**< Cleared on entry. */
};
static_assert(offsetof(SlotTableObject, current_index) == 0x0c);
static_assert(offsetof(SlotTableObject, pending) == 0x18);
static_assert(offsetof(SlotTableObject, table) == 0x20);
static_assert(offsetof(SlotTableObject, cleared_0x29) == 0x29);

/** The record the dispatcher reports a failed slot in: a status word at 0x0c. */
struct SlotStatus {
    uint8_t unknown_0x0000[0x0c];
    uint32_t state_0x0c;     /**< Set to failed when a slot is empty or the index went negative. */
};
static_assert(offsetof(SlotStatus, state_0x0c) == 0x0c);

/** The signature of a slot's function: the adjusted object, the status record and a float step. */
using SlotFunction = void (*)(void *object, SlotStatus *status, float step);

}  // namespace

/**
 *
 * Visits the slots from the current index, calling each with the status record and the step, and stops when no pending flag is set.
 *
 * The result is the index the last visit left, or zero when the slot was empty. A failed slot records the failure in the status.
 */
extern "C" uint64_t bb_misc_dispatch_member_slots(SlotTableObject *object, SlotStatus *status, float step)
{
    object->cleared_0x29 = 0;
    uint64_t result = 0;
    for (uint32_t visits = 0; visits < visit_limit; ++visits) {
        int32_t index = object->current_index;
        MemberSlot slot = object->table[index];
        if (slot.function == 0) {
            status->state_0x0c = status_failed;
            return 0;
        }
        uintptr_t this_address = reinterpret_cast<uintptr_t>(object) + slot.adjustment;
        uint64_t target = slot.function;
        if ((target & virtual_flag) != 0) {
            uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(this_address);
            target = *reinterpret_cast<const uint64_t *>(vtable + (target - virtual_flag));
        }
        SlotFunction function = reinterpret_cast<SlotFunction>(target);
        function(reinterpret_cast<void *>(this_address), status, step);
        result = static_cast<uint32_t>(object->current_index);
        if (object->current_index < 0) {
            status->state_0x0c = status_failed;
            return result;
        }
        if (object->pending == 0) {
            return result;
        }
        object->pending = 0;
    }
    return result;
}
