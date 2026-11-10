// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_call_member_with_flagged_record, in game/misc/call_member_with_flagged_record.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "../misc/offset_member_thunk.h"
#include "../misc/record_member_thunk.h"
#include "../misc/thunk_call_record.h"

// auto_call_member_with_flagged_record_01799260: misc_call_member_with_flagged_record with other addresses.
namespace twin_01799260 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01799260(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01799260

// auto_call_member_with_flagged_record_01799410: misc_call_member_with_flagged_record with other addresses.
namespace twin_01799410 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01799410(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01799410

// auto_call_member_with_flagged_record_017a7b40: misc_call_member_with_flagged_record with other addresses.
namespace twin_017a7b40 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_017a7b40(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_017a7b40

// auto_call_member_with_flagged_record_0184f220: misc_call_member_with_flagged_record with other addresses.
namespace twin_0184f220 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_0184f220(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_0184f220

// auto_call_member_with_flagged_record_01850390: misc_call_member_with_flagged_record with other addresses.
namespace twin_01850390 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01850390(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01850390

// auto_call_member_with_flagged_record_01850ef0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01850ef0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01850ef0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01850ef0

// auto_call_member_with_flagged_record_01851950: misc_call_member_with_flagged_record with other addresses.
namespace twin_01851950 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01851950(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01851950

// auto_call_member_with_flagged_record_01852500: misc_call_member_with_flagged_record with other addresses.
namespace twin_01852500 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01852500(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01852500

// auto_call_member_with_flagged_record_01853000: misc_call_member_with_flagged_record with other addresses.
namespace twin_01853000 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01853000(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01853000

// auto_call_member_with_flagged_record_01853c00: misc_call_member_with_flagged_record with other addresses.
namespace twin_01853c00 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01853c00(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01853c00

// auto_call_member_with_flagged_record_01854690: misc_call_member_with_flagged_record with other addresses.
namespace twin_01854690 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01854690(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01854690

// auto_call_member_with_flagged_record_01855290: misc_call_member_with_flagged_record with other addresses.
namespace twin_01855290 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01855290(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01855290

// auto_call_member_with_flagged_record_01859070: misc_call_member_with_flagged_record with other addresses.
namespace twin_01859070 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01859070(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01859070

// auto_call_member_with_flagged_record_0186b460: misc_call_member_with_flagged_record with other addresses.
namespace twin_0186b460 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_0186b460(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_0186b460

// auto_call_member_with_flagged_record_01872ab0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01872ab0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01872ab0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01872ab0

// auto_call_member_with_flagged_record_01874ee0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01874ee0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01874ee0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01874ee0

// auto_call_member_with_flagged_record_01877210: misc_call_member_with_flagged_record with other addresses.
namespace twin_01877210 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01877210(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01877210

// auto_call_member_with_flagged_record_018788a0: misc_call_member_with_flagged_record with other addresses.
namespace twin_018788a0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018788a0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018788a0

// auto_call_member_with_flagged_record_018799c0: misc_call_member_with_flagged_record with other addresses.
namespace twin_018799c0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018799c0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018799c0

// auto_call_member_with_flagged_record_0187fb90: misc_call_member_with_flagged_record with other addresses.
namespace twin_0187fb90 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_0187fb90(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_0187fb90

// auto_call_member_with_flagged_record_01883b90: misc_call_member_with_flagged_record with other addresses.
namespace twin_01883b90 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01883b90(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01883b90

// auto_call_member_with_flagged_record_018a0450: misc_call_member_with_flagged_record with other addresses.
namespace twin_018a0450 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018a0450(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018a0450

// auto_call_member_with_flagged_record_018a4160: misc_call_member_with_flagged_record with other addresses.
namespace twin_018a4160 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018a4160(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018a4160

// auto_call_member_with_flagged_record_018aa650: misc_call_member_with_flagged_record with other addresses.
namespace twin_018aa650 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018aa650(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018aa650

// auto_call_member_with_flagged_record_018ad7a0: misc_call_member_with_flagged_record with other addresses.
namespace twin_018ad7a0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018ad7a0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018ad7a0

// auto_call_member_with_flagged_record_018ae580: misc_call_member_with_flagged_record with other addresses.
namespace twin_018ae580 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018ae580(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018ae580

// auto_call_member_with_flagged_record_018aff60: misc_call_member_with_flagged_record with other addresses.
namespace twin_018aff60 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018aff60(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018aff60

// auto_call_member_with_flagged_record_018b24b0: misc_call_member_with_flagged_record with other addresses.
namespace twin_018b24b0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018b24b0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018b24b0

// auto_call_member_with_flagged_record_018b4190: misc_call_member_with_flagged_record with other addresses.
namespace twin_018b4190 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018b4190(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018b4190

// auto_call_member_with_flagged_record_018c1400: misc_call_member_with_flagged_record with other addresses.
namespace twin_018c1400 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018c1400(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018c1400

// auto_call_member_with_flagged_record_018c8460: misc_call_member_with_flagged_record with other addresses.
namespace twin_018c8460 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018c8460(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018c8460

// auto_call_member_with_flagged_record_018cc340: misc_call_member_with_flagged_record with other addresses.
namespace twin_018cc340 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_018cc340(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018cc340

// auto_call_member_with_flagged_record_01950500: misc_call_member_with_flagged_record with other addresses.
namespace twin_01950500 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01950500(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01950500

// auto_call_member_with_flagged_record_01958960: misc_call_member_with_flagged_record with other addresses.
namespace twin_01958960 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01958960(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01958960

// auto_call_member_with_flagged_record_01963230: misc_call_member_with_flagged_record with other addresses.
namespace twin_01963230 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01963230(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01963230

// auto_call_member_with_flagged_record_019c16b0: misc_call_member_with_flagged_record with other addresses.
namespace twin_019c16b0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_019c16b0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_019c16b0

// auto_call_member_with_flagged_record_01b9bb30: misc_call_member_with_flagged_record with other addresses.
namespace twin_01b9bb30 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01b9bb30(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01b9bb30

// auto_call_member_with_flagged_record_01b9c760: misc_call_member_with_flagged_record with other addresses.
namespace twin_01b9c760 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01b9c760(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01b9c760

// auto_call_member_with_flagged_record_01b9d3b0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01b9d3b0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01b9d3b0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01b9d3b0

// auto_call_member_with_flagged_record_01b9e010: misc_call_member_with_flagged_record with other addresses.
namespace twin_01b9e010 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01b9e010(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01b9e010

// auto_call_member_with_flagged_record_01b9ec60: misc_call_member_with_flagged_record with other addresses.
namespace twin_01b9ec60 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01b9ec60(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01b9ec60

// auto_call_member_with_flagged_record_01b9f850: misc_call_member_with_flagged_record with other addresses.
namespace twin_01b9f850 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01b9f850(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01b9f850

// auto_call_member_with_flagged_record_01ba0880: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ba0880 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ba0880(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba0880

// auto_call_member_with_flagged_record_01ba1510: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ba1510 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ba1510(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba1510

// auto_call_member_with_flagged_record_01ba2180: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ba2180 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ba2180(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba2180

// auto_call_member_with_flagged_record_01ba2e40: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ba2e40 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ba2e40(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba2e40

// auto_call_member_with_flagged_record_01ba3b00: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ba3b00 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ba3b00(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba3b00

// auto_call_member_with_flagged_record_01ba46a0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ba46a0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ba46a0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba46a0

// auto_call_member_with_flagged_record_01ba5230: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ba5230 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ba5230(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba5230

// auto_call_member_with_flagged_record_01ba6110: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ba6110 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ba6110(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba6110

// auto_call_member_with_flagged_record_01ba6fa0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ba6fa0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ba6fa0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba6fa0

// auto_call_member_with_flagged_record_01ba7c20: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ba7c20 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ba7c20(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba7c20

// auto_call_member_with_flagged_record_01ba8860: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ba8860 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ba8860(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba8860

// auto_call_member_with_flagged_record_01ba93e0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ba93e0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ba93e0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba93e0

// auto_call_member_with_flagged_record_01baa090: misc_call_member_with_flagged_record with other addresses.
namespace twin_01baa090 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01baa090(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01baa090

// auto_call_member_with_flagged_record_01baac90: misc_call_member_with_flagged_record with other addresses.
namespace twin_01baac90 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01baac90(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01baac90

// auto_call_member_with_flagged_record_01bab8b0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bab8b0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bab8b0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bab8b0

// auto_call_member_with_flagged_record_01bac540: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bac540 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bac540(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bac540

// auto_call_member_with_flagged_record_01bad0f0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bad0f0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bad0f0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bad0f0

// auto_call_member_with_flagged_record_01badfd0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01badfd0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01badfd0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01badfd0

// auto_call_member_with_flagged_record_01baec80: misc_call_member_with_flagged_record with other addresses.
namespace twin_01baec80 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01baec80(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01baec80

// auto_call_member_with_flagged_record_01bafb60: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bafb60 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bafb60(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bafb60

// auto_call_member_with_flagged_record_01bb0650: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bb0650 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bb0650(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb0650

// auto_call_member_with_flagged_record_01bb12a0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bb12a0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bb12a0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb12a0

// auto_call_member_with_flagged_record_01bb2010: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bb2010 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bb2010(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb2010

// auto_call_member_with_flagged_record_01bb2e90: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bb2e90 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bb2e90(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb2e90

// auto_call_member_with_flagged_record_01bb39f0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bb39f0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bb39f0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb39f0

// auto_call_member_with_flagged_record_01bb45c0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bb45c0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bb45c0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb45c0

// auto_call_member_with_flagged_record_01bb54d0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bb54d0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bb54d0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb54d0

// auto_call_member_with_flagged_record_01bb6280: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bb6280 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bb6280(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb6280

// auto_call_member_with_flagged_record_01bb6ee0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bb6ee0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bb6ee0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb6ee0

// auto_call_member_with_flagged_record_01bb8240: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bb8240 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bb8240(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb8240

// auto_call_member_with_flagged_record_01bb8eb0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01bb8eb0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01bb8eb0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb8eb0

// auto_call_member_with_flagged_record_01c2a9c0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01c2a9c0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01c2a9c0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01c2a9c0

// auto_call_member_with_flagged_record_01ce32c0: misc_call_member_with_flagged_record with other addresses.
namespace twin_01ce32c0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_01ce32c0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ce32c0

// auto_call_member_with_flagged_record_02248330: misc_call_member_with_flagged_record with other addresses.
namespace twin_02248330 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_02248330(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_02248330

// auto_call_member_with_flagged_record_022e1860: misc_call_member_with_flagged_record with other addresses.
namespace twin_022e1860 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_022e1860(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_022e1860

// auto_call_member_with_flagged_record_022e47a0: misc_call_member_with_flagged_record with other addresses.
namespace twin_022e47a0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_022e47a0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_022e47a0

// auto_call_member_with_flagged_record_02d6d340: misc_call_member_with_flagged_record with other addresses.
namespace twin_02d6d340 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_02d6d340(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_02d6d340

// auto_call_member_with_flagged_record_02dbbcc0: misc_call_member_with_flagged_record with other addresses.
namespace twin_02dbbcc0 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_02dbbcc0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_02dbbcc0

// auto_call_member_with_flagged_record_02dbca40: misc_call_member_with_flagged_record with other addresses.
namespace twin_02dbca40 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_02dbca40(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_02dbca40

// auto_call_member_with_flagged_record_02de3b20: misc_call_member_with_flagged_record with other addresses.
namespace twin_02de3b20 {

// Misc: calls the member thunk's target with a kind-one record on the stack and the thunk's 32-bit argument.


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
extern "C" void bb_auto_call_member_with_flagged_record_02de3b20(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_02de3b20
