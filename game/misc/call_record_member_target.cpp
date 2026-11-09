// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.
#include <cstddef>
#include <cstdint>

#include "member_thunk.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x056f3180, record_vtable, uint8_t);
RT_ORIGINAL(0x01400810, fn_01400810, void(void *record));
RT_ORIGINAL(0x013a75d0, fn_013a75d0, void(void *record));

/** A member-function thunk: the object at 0x08, the target at 0x10, the adjustment at 0x18 and a 32-bit argument at 0x20. */
struct RecordCallThunk {
    uint8_t unknown_0x00[0x08];
    uintptr_t object;        /**< The object the member lives in, before the adjustment. */
    uint64_t target;         /**< Function address, or the virtual slot offset plus the virtual bit. */
    uint64_t adjustment;     /**< Added to the object to give the object the target is called on. */
    uint32_t argument;       /**< The 32-bit argument passed to the target. */
};
static_assert(offsetof(RecordCallThunk, object) == 0x08);
static_assert(offsetof(RecordCallThunk, target) == 0x10);
static_assert(offsetof(RecordCallThunk, adjustment) == 0x18);
static_assert(offsetof(RecordCallThunk, argument) == 0x20);

/** The two source words, the second at 0x10 and the first at 0x00. */
struct RecordSourcePair {
    uintptr_t first;         /**< Copied into the record at 0x28. */
    uint8_t unknown_0x08[0x08];
    uintptr_t second;        /**< Copied into the record at 0x20. */
};
static_assert(offsetof(RecordSourcePair, second) == 0x10);

/** A record built on the stack: a vtable pointer, the second word at 0x20 and the first word at 0x28. */
struct StackCallRecord {
    const void *vtable;      /**< Set to the record's vtable block. */
    uint8_t unknown_0x08[0x18];
    uintptr_t second;        /**< The second source word. */
    uintptr_t first;         /**< The first source word. */
};
static_assert(offsetof(StackCallRecord, second) == 0x20);
static_assert(offsetof(StackCallRecord, first) == 0x28);

/** The signature of the targets: the adjusted object, the record and the 32-bit argument. */
using RecordCallTarget = uint64_t (*)(void *object, void *record, uint32_t argument);

}  // namespace

/**
 *
 * Builds a record on the stack from the source pair, calls the thunk's target with it, then destroys the record.
 *
 * The record is constructed first and its vtable is set afterwards; the target receives it with the
 * adjusted object, and the destructor is the last call. A virtual target is read from the adjusted object's vtable.
 */
extern "C" void bb_misc_call_record_member_target(RecordCallThunk *thunk, const RecordSourcePair *source)
{
    if (source == nullptr || source->second == 0 || source->first == 0 || thunk->object == 0) return;
    StackCallRecord record{};
    fn_01400810(&record);
    record.vtable = record_vtable.address();
    record.second = source->second;
    record.first = source->first;
    const uintptr_t self = thunk->object + thunk->adjustment;
    uintptr_t callee = thunk->target;
    if ((callee & misc::virtual_target_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (callee - misc::virtual_target_bit));
    }
    reinterpret_cast<RecordCallTarget>(callee)(reinterpret_cast<void *>(self), &record, thunk->argument);
    fn_013a75d0(&record);
}
