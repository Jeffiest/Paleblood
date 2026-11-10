// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_call_member_with_text_record, in game/misc/call_member_with_text_record.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "../misc/offset_member_thunk.h"
#include "../misc/record_member_thunk.h"
#include "runtime/original.h"
#include "../misc/thunk_call_record.h"

// auto_call_member_with_text_record_01799150: misc_call_member_with_text_record with other addresses.
namespace twin_01799150 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01799150(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01799150

// auto_call_member_with_text_record_01799300: misc_call_member_with_text_record with other addresses.
namespace twin_01799300 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01799300(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01799300

// auto_call_member_with_text_record_017a7a30: misc_call_member_with_text_record with other addresses.
namespace twin_017a7a30 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_017a7a30(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_017a7a30

// auto_call_member_with_text_record_0184f110: misc_call_member_with_text_record with other addresses.
namespace twin_0184f110 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_0184f110(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_0184f110

// auto_call_member_with_text_record_01850280: misc_call_member_with_text_record with other addresses.
namespace twin_01850280 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01850280(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01850280

// auto_call_member_with_text_record_01850de0: misc_call_member_with_text_record with other addresses.
namespace twin_01850de0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01850de0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01850de0

// auto_call_member_with_text_record_01851840: misc_call_member_with_text_record with other addresses.
namespace twin_01851840 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01851840(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01851840

// auto_call_member_with_text_record_018523f0: misc_call_member_with_text_record with other addresses.
namespace twin_018523f0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018523f0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018523f0

// auto_call_member_with_text_record_01852ef0: misc_call_member_with_text_record with other addresses.
namespace twin_01852ef0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01852ef0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01852ef0

// auto_call_member_with_text_record_01853af0: misc_call_member_with_text_record with other addresses.
namespace twin_01853af0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01853af0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01853af0

// auto_call_member_with_text_record_01854580: misc_call_member_with_text_record with other addresses.
namespace twin_01854580 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01854580(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01854580

// auto_call_member_with_text_record_01855180: misc_call_member_with_text_record with other addresses.
namespace twin_01855180 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01855180(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01855180

// auto_call_member_with_text_record_01858f60: misc_call_member_with_text_record with other addresses.
namespace twin_01858f60 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01858f60(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01858f60

// auto_call_member_with_text_record_0186b350: misc_call_member_with_text_record with other addresses.
namespace twin_0186b350 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_0186b350(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_0186b350

// auto_call_member_with_text_record_018729a0: misc_call_member_with_text_record with other addresses.
namespace twin_018729a0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018729a0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018729a0

// auto_call_member_with_text_record_01874dd0: misc_call_member_with_text_record with other addresses.
namespace twin_01874dd0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01874dd0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01874dd0

// auto_call_member_with_text_record_01877100: misc_call_member_with_text_record with other addresses.
namespace twin_01877100 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01877100(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01877100

// auto_call_member_with_text_record_01878790: misc_call_member_with_text_record with other addresses.
namespace twin_01878790 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01878790(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01878790

// auto_call_member_with_text_record_018798b0: misc_call_member_with_text_record with other addresses.
namespace twin_018798b0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018798b0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018798b0

// auto_call_member_with_text_record_0187fa80: misc_call_member_with_text_record with other addresses.
namespace twin_0187fa80 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_0187fa80(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_0187fa80

// auto_call_member_with_text_record_01883a80: misc_call_member_with_text_record with other addresses.
namespace twin_01883a80 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01883a80(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01883a80

// auto_call_member_with_text_record_018a0340: misc_call_member_with_text_record with other addresses.
namespace twin_018a0340 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018a0340(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018a0340

// auto_call_member_with_text_record_018a4050: misc_call_member_with_text_record with other addresses.
namespace twin_018a4050 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018a4050(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018a4050

// auto_call_member_with_text_record_018aa540: misc_call_member_with_text_record with other addresses.
namespace twin_018aa540 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018aa540(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018aa540

// auto_call_member_with_text_record_018ad690: misc_call_member_with_text_record with other addresses.
namespace twin_018ad690 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018ad690(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018ad690

// auto_call_member_with_text_record_018ae470: misc_call_member_with_text_record with other addresses.
namespace twin_018ae470 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018ae470(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018ae470

// auto_call_member_with_text_record_018afe50: misc_call_member_with_text_record with other addresses.
namespace twin_018afe50 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018afe50(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018afe50

// auto_call_member_with_text_record_018b23a0: misc_call_member_with_text_record with other addresses.
namespace twin_018b23a0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018b23a0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018b23a0

// auto_call_member_with_text_record_018b4080: misc_call_member_with_text_record with other addresses.
namespace twin_018b4080 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018b4080(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018b4080

// auto_call_member_with_text_record_018c12f0: misc_call_member_with_text_record with other addresses.
namespace twin_018c12f0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018c12f0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018c12f0

// auto_call_member_with_text_record_018c8350: misc_call_member_with_text_record with other addresses.
namespace twin_018c8350 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018c8350(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018c8350

// auto_call_member_with_text_record_018cc230: misc_call_member_with_text_record with other addresses.
namespace twin_018cc230 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_018cc230(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_018cc230

// auto_call_member_with_text_record_019503f0: misc_call_member_with_text_record with other addresses.
namespace twin_019503f0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_019503f0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_019503f0

// auto_call_member_with_text_record_01958850: misc_call_member_with_text_record with other addresses.
namespace twin_01958850 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01958850(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01958850

// auto_call_member_with_text_record_01963120: misc_call_member_with_text_record with other addresses.
namespace twin_01963120 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01963120(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01963120

// auto_call_member_with_text_record_019c15a0: misc_call_member_with_text_record with other addresses.
namespace twin_019c15a0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_019c15a0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_019c15a0

// auto_call_member_with_text_record_01b9ba20: misc_call_member_with_text_record with other addresses.
namespace twin_01b9ba20 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01b9ba20(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01b9ba20

// auto_call_member_with_text_record_01b9c650: misc_call_member_with_text_record with other addresses.
namespace twin_01b9c650 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01b9c650(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01b9c650

// auto_call_member_with_text_record_01b9d2a0: misc_call_member_with_text_record with other addresses.
namespace twin_01b9d2a0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01b9d2a0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01b9d2a0

// auto_call_member_with_text_record_01b9df00: misc_call_member_with_text_record with other addresses.
namespace twin_01b9df00 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01b9df00(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01b9df00

// auto_call_member_with_text_record_01b9eb50: misc_call_member_with_text_record with other addresses.
namespace twin_01b9eb50 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01b9eb50(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01b9eb50

// auto_call_member_with_text_record_01b9f740: misc_call_member_with_text_record with other addresses.
namespace twin_01b9f740 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01b9f740(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01b9f740

// auto_call_member_with_text_record_01ba0770: misc_call_member_with_text_record with other addresses.
namespace twin_01ba0770 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba0770(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba0770

// auto_call_member_with_text_record_01ba1400: misc_call_member_with_text_record with other addresses.
namespace twin_01ba1400 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba1400(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba1400

// auto_call_member_with_text_record_01ba2070: misc_call_member_with_text_record with other addresses.
namespace twin_01ba2070 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba2070(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba2070

// auto_call_member_with_text_record_01ba2d30: misc_call_member_with_text_record with other addresses.
namespace twin_01ba2d30 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba2d30(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba2d30

// auto_call_member_with_text_record_01ba39f0: misc_call_member_with_text_record with other addresses.
namespace twin_01ba39f0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba39f0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba39f0

// auto_call_member_with_text_record_01ba4590: misc_call_member_with_text_record with other addresses.
namespace twin_01ba4590 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba4590(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba4590

// auto_call_member_with_text_record_01ba5120: misc_call_member_with_text_record with other addresses.
namespace twin_01ba5120 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba5120(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba5120

// auto_call_member_with_text_record_01ba6000: misc_call_member_with_text_record with other addresses.
namespace twin_01ba6000 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba6000(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba6000

// auto_call_member_with_text_record_01ba6e90: misc_call_member_with_text_record with other addresses.
namespace twin_01ba6e90 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba6e90(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba6e90

// auto_call_member_with_text_record_01ba7b10: misc_call_member_with_text_record with other addresses.
namespace twin_01ba7b10 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba7b10(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba7b10

// auto_call_member_with_text_record_01ba8750: misc_call_member_with_text_record with other addresses.
namespace twin_01ba8750 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba8750(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba8750

// auto_call_member_with_text_record_01ba92d0: misc_call_member_with_text_record with other addresses.
namespace twin_01ba92d0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba92d0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba92d0

// auto_call_member_with_text_record_01ba9f80: misc_call_member_with_text_record with other addresses.
namespace twin_01ba9f80 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ba9f80(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ba9f80

// auto_call_member_with_text_record_01baab80: misc_call_member_with_text_record with other addresses.
namespace twin_01baab80 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01baab80(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01baab80

// auto_call_member_with_text_record_01bab7a0: misc_call_member_with_text_record with other addresses.
namespace twin_01bab7a0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bab7a0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bab7a0

// auto_call_member_with_text_record_01bac430: misc_call_member_with_text_record with other addresses.
namespace twin_01bac430 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bac430(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bac430

// auto_call_member_with_text_record_01bacfe0: misc_call_member_with_text_record with other addresses.
namespace twin_01bacfe0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bacfe0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bacfe0

// auto_call_member_with_text_record_01badec0: misc_call_member_with_text_record with other addresses.
namespace twin_01badec0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01badec0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01badec0

// auto_call_member_with_text_record_01baeb70: misc_call_member_with_text_record with other addresses.
namespace twin_01baeb70 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01baeb70(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01baeb70

// auto_call_member_with_text_record_01bafa50: misc_call_member_with_text_record with other addresses.
namespace twin_01bafa50 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bafa50(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bafa50

// auto_call_member_with_text_record_01bb0540: misc_call_member_with_text_record with other addresses.
namespace twin_01bb0540 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bb0540(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bb0540

// auto_call_member_with_text_record_01bb1190: misc_call_member_with_text_record with other addresses.
namespace twin_01bb1190 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bb1190(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bb1190

// auto_call_member_with_text_record_01bb1f00: misc_call_member_with_text_record with other addresses.
namespace twin_01bb1f00 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bb1f00(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bb1f00

// auto_call_member_with_text_record_01bb2d80: misc_call_member_with_text_record with other addresses.
namespace twin_01bb2d80 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bb2d80(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bb2d80

// auto_call_member_with_text_record_01bb38e0: misc_call_member_with_text_record with other addresses.
namespace twin_01bb38e0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bb38e0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bb38e0

// auto_call_member_with_text_record_01bb44b0: misc_call_member_with_text_record with other addresses.
namespace twin_01bb44b0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bb44b0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bb44b0

// auto_call_member_with_text_record_01bb53c0: misc_call_member_with_text_record with other addresses.
namespace twin_01bb53c0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bb53c0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bb53c0

// auto_call_member_with_text_record_01bb6170: misc_call_member_with_text_record with other addresses.
namespace twin_01bb6170 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bb6170(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bb6170

// auto_call_member_with_text_record_01bb6dd0: misc_call_member_with_text_record with other addresses.
namespace twin_01bb6dd0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bb6dd0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bb6dd0

// auto_call_member_with_text_record_01bb8130: misc_call_member_with_text_record with other addresses.
namespace twin_01bb8130 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bb8130(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bb8130

// auto_call_member_with_text_record_01bb8da0: misc_call_member_with_text_record with other addresses.
namespace twin_01bb8da0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01bb8da0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01bb8da0

// auto_call_member_with_text_record_01c2a8b0: misc_call_member_with_text_record with other addresses.
namespace twin_01c2a8b0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01c2a8b0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01c2a8b0

// auto_call_member_with_text_record_01ce31b0: misc_call_member_with_text_record with other addresses.
namespace twin_01ce31b0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_01ce31b0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_01ce31b0

// auto_call_member_with_text_record_02248220: misc_call_member_with_text_record with other addresses.
namespace twin_02248220 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_02248220(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_02248220

// auto_call_member_with_text_record_022e1750: misc_call_member_with_text_record with other addresses.
namespace twin_022e1750 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_022e1750(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_022e1750

// auto_call_member_with_text_record_022e4690: misc_call_member_with_text_record with other addresses.
namespace twin_022e4690 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_022e4690(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_022e4690

// auto_call_member_with_text_record_02d6d230: misc_call_member_with_text_record with other addresses.
namespace twin_02d6d230 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_02d6d230(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_02d6d230

// auto_call_member_with_text_record_02dbbbb0: misc_call_member_with_text_record with other addresses.
namespace twin_02dbbbb0 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_02dbbbb0(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_02dbbbb0

// auto_call_member_with_text_record_02dbc930: misc_call_member_with_text_record with other addresses.
namespace twin_02dbc930 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_02dbc930(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_02dbc930

// auto_call_member_with_text_record_02de3a10: misc_call_member_with_text_record with other addresses.
namespace twin_02de3a10 {

// Misc: measures the thunk's text when it is not empty, passes the subject and the length to a routine, then calls the member target.


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
extern "C" void bb_auto_call_member_with_text_record_02de3a10(misc::RecordMemberThunk *thunk, void *subject)
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

}  // namespace twin_02de3a10
