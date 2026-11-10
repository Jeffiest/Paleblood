// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.
#include <cstdint>

#include "offset_member_thunk.h"
#include "record_member_thunk.h"
#include "runtime/original.h"
#include "thunk_call_record.h"

namespace {

RT_ORIGINAL(0x02fbf228, fn_02fbf228, uint64_t(const uint16_t *text));
RT_ORIGINAL(0x02a2a310, fn_02a2a310, void(void *subject, const uint16_t *text, uint64_t length));

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 2;

/** The signature of the target: the adjusted object, the record and the 32-bit argument. */
using RecordTarget = void (*)(void *object, misc::ThunkCallRecord *record, uint32_t argument);

}  // namespace

/**
 *
 * Measures the thunk's text when its first unit is nonzero, hands the subject, the text and the length to the routine,
 * then calls the thunk's target on the adjusted object with a kind-two record that holds the subject.
 *
 * A zero target makes no call after the routine. The record's middle word is not written.
 */
extern "C" void bb_misc_call_member_with_text_record(misc::RecordMemberThunk *thunk, void *subject)
{
    const uint16_t *text = thunk->text_0x48;
    uint64_t length = 0;
    if (*text != 0) {
        length = fn_02fbf228(text);
    }
    fn_02a2a310(subject, text, length);
    const uint64_t target = thunk->target_0x58;
    if (target == 0) return;
    const uintptr_t self = thunk->object_0x50 + thunk->adjustment_0x60;
    uintptr_t callee = target;
    if ((target & misc::offset_thunk_virtual_bit) != 0) {
        const uintptr_t vtable = *reinterpret_cast<const uintptr_t *>(self);
        callee = *reinterpret_cast<const uintptr_t *>(vtable + (target - misc::offset_thunk_virtual_bit));
    }
    misc::ThunkCallRecord record;
    record.kind_0x00 = record_kind;
    record.value_0x08 = reinterpret_cast<uintptr_t>(subject);
    reinterpret_cast<RecordTarget>(callee)(reinterpret_cast<void *>(self), &record, thunk->argument_0x68);
}
