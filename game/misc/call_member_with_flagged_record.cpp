// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.
#include <cstdint>

#include "offset_member_thunk.h"
#include "record_member_thunk.h"
#include "thunk_call_record.h"

namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 1;

/** The signature of the target: the adjusted object, the record and the 32-bit argument. */
using RecordTarget = void (*)(void *object, misc::ThunkCallRecord *record, uint32_t argument);

}  // namespace

/**
 *
 * Builds a record from the two values, then calls the thunk's target on the adjusted object with the record and the
 * thunk's 32-bit argument.
 *
 * A zero target makes no call. A virtual target is read from the adjusted object's vtable first.
 */
extern "C" void bb_misc_call_member_with_flagged_record(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
{
    const uint64_t target = thunk->target_0x58;
    if (target == 0) return;
    const uintptr_t self = thunk->object_0x50 + thunk->adjustment_0x60;
    uintptr_t callee = target;
    if ((target & misc::offset_thunk_virtual_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::offset_thunk_virtual_bit));
    }
    misc::ThunkCallRecord record{};
    record.kind_0x00 = record_kind;
    record.value_0x04 = value32;
    record.value_0x08 = value64;
    reinterpret_cast<RecordTarget>(callee)(reinterpret_cast<void *>(self), &record, thunk->argument_0x68);
}
