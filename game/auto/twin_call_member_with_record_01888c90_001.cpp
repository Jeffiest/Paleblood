// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_call_member_with_record, in game/misc/call_member_with_record.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "../misc/offset_member_thunk.h"
#include "../misc/record_member_thunk.h"
#include "../misc/thunk_call_record.h"

// auto_call_member_with_record_017991f0: misc_call_member_with_record with other addresses.
namespace twin_017991f0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_017991f0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_017991f0

// auto_call_member_with_record_017993a0: misc_call_member_with_record with other addresses.
namespace twin_017993a0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_017993a0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_017993a0

// auto_call_member_with_record_017a7ad0: misc_call_member_with_record with other addresses.
namespace twin_017a7ad0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_017a7ad0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_017a7ad0

// auto_call_member_with_record_0184f1b0: misc_call_member_with_record with other addresses.
namespace twin_0184f1b0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_0184f1b0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_0184f1b0

// auto_call_member_with_record_01850320: misc_call_member_with_record with other addresses.
namespace twin_01850320 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01850320(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01850320

// auto_call_member_with_record_01850e80: misc_call_member_with_record with other addresses.
namespace twin_01850e80 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01850e80(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01850e80

// auto_call_member_with_record_018518e0: misc_call_member_with_record with other addresses.
namespace twin_018518e0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018518e0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018518e0

// auto_call_member_with_record_01852490: misc_call_member_with_record with other addresses.
namespace twin_01852490 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01852490(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01852490

// auto_call_member_with_record_01852f90: misc_call_member_with_record with other addresses.
namespace twin_01852f90 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01852f90(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01852f90

// auto_call_member_with_record_01853b90: misc_call_member_with_record with other addresses.
namespace twin_01853b90 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01853b90(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01853b90

// auto_call_member_with_record_01854620: misc_call_member_with_record with other addresses.
namespace twin_01854620 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01854620(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01854620

// auto_call_member_with_record_01855220: misc_call_member_with_record with other addresses.
namespace twin_01855220 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01855220(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01855220

// auto_call_member_with_record_01859000: misc_call_member_with_record with other addresses.
namespace twin_01859000 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01859000(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01859000

// auto_call_member_with_record_0186b3f0: misc_call_member_with_record with other addresses.
namespace twin_0186b3f0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_0186b3f0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_0186b3f0

// auto_call_member_with_record_01872a40: misc_call_member_with_record with other addresses.
namespace twin_01872a40 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01872a40(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01872a40

// auto_call_member_with_record_01874e70: misc_call_member_with_record with other addresses.
namespace twin_01874e70 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01874e70(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01874e70

// auto_call_member_with_record_018771a0: misc_call_member_with_record with other addresses.
namespace twin_018771a0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018771a0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018771a0

// auto_call_member_with_record_01878830: misc_call_member_with_record with other addresses.
namespace twin_01878830 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01878830(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01878830

// auto_call_member_with_record_01879950: misc_call_member_with_record with other addresses.
namespace twin_01879950 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01879950(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01879950

// auto_call_member_with_record_0187fb20: misc_call_member_with_record with other addresses.
namespace twin_0187fb20 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_0187fb20(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_0187fb20

// auto_call_member_with_record_01883b20: misc_call_member_with_record with other addresses.
namespace twin_01883b20 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01883b20(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01883b20

// auto_call_member_with_record_018a03e0: misc_call_member_with_record with other addresses.
namespace twin_018a03e0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018a03e0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018a03e0

// auto_call_member_with_record_018a40f0: misc_call_member_with_record with other addresses.
namespace twin_018a40f0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018a40f0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018a40f0

// auto_call_member_with_record_018aa5e0: misc_call_member_with_record with other addresses.
namespace twin_018aa5e0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018aa5e0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018aa5e0

// auto_call_member_with_record_018ad730: misc_call_member_with_record with other addresses.
namespace twin_018ad730 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018ad730(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018ad730

// auto_call_member_with_record_018ae510: misc_call_member_with_record with other addresses.
namespace twin_018ae510 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018ae510(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018ae510

// auto_call_member_with_record_018afef0: misc_call_member_with_record with other addresses.
namespace twin_018afef0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018afef0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018afef0

// auto_call_member_with_record_018b2440: misc_call_member_with_record with other addresses.
namespace twin_018b2440 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018b2440(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018b2440

// auto_call_member_with_record_018b4120: misc_call_member_with_record with other addresses.
namespace twin_018b4120 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018b4120(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018b4120

// auto_call_member_with_record_018c1390: misc_call_member_with_record with other addresses.
namespace twin_018c1390 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018c1390(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018c1390

// auto_call_member_with_record_018c83f0: misc_call_member_with_record with other addresses.
namespace twin_018c83f0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018c83f0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018c83f0

// auto_call_member_with_record_018cc2d0: misc_call_member_with_record with other addresses.
namespace twin_018cc2d0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_018cc2d0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_018cc2d0

// auto_call_member_with_record_01950490: misc_call_member_with_record with other addresses.
namespace twin_01950490 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01950490(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01950490

// auto_call_member_with_record_019588f0: misc_call_member_with_record with other addresses.
namespace twin_019588f0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_019588f0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_019588f0

// auto_call_member_with_record_019631c0: misc_call_member_with_record with other addresses.
namespace twin_019631c0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_019631c0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_019631c0

// auto_call_member_with_record_019c1640: misc_call_member_with_record with other addresses.
namespace twin_019c1640 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_019c1640(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_019c1640

// auto_call_member_with_record_01b9bac0: misc_call_member_with_record with other addresses.
namespace twin_01b9bac0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01b9bac0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01b9bac0

// auto_call_member_with_record_01b9c6f0: misc_call_member_with_record with other addresses.
namespace twin_01b9c6f0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01b9c6f0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01b9c6f0

// auto_call_member_with_record_01b9d340: misc_call_member_with_record with other addresses.
namespace twin_01b9d340 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01b9d340(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01b9d340

// auto_call_member_with_record_01b9dfa0: misc_call_member_with_record with other addresses.
namespace twin_01b9dfa0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01b9dfa0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01b9dfa0

// auto_call_member_with_record_01b9ebf0: misc_call_member_with_record with other addresses.
namespace twin_01b9ebf0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01b9ebf0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01b9ebf0

// auto_call_member_with_record_01b9f7e0: misc_call_member_with_record with other addresses.
namespace twin_01b9f7e0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01b9f7e0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01b9f7e0

// auto_call_member_with_record_01ba0810: misc_call_member_with_record with other addresses.
namespace twin_01ba0810 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ba0810(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba0810

// auto_call_member_with_record_01ba14a0: misc_call_member_with_record with other addresses.
namespace twin_01ba14a0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ba14a0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba14a0

// auto_call_member_with_record_01ba2110: misc_call_member_with_record with other addresses.
namespace twin_01ba2110 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ba2110(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba2110

// auto_call_member_with_record_01ba2dd0: misc_call_member_with_record with other addresses.
namespace twin_01ba2dd0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ba2dd0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba2dd0

// auto_call_member_with_record_01ba3a90: misc_call_member_with_record with other addresses.
namespace twin_01ba3a90 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ba3a90(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba3a90

// auto_call_member_with_record_01ba4630: misc_call_member_with_record with other addresses.
namespace twin_01ba4630 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ba4630(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba4630

// auto_call_member_with_record_01ba51c0: misc_call_member_with_record with other addresses.
namespace twin_01ba51c0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ba51c0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba51c0

// auto_call_member_with_record_01ba60a0: misc_call_member_with_record with other addresses.
namespace twin_01ba60a0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ba60a0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba60a0

// auto_call_member_with_record_01ba6f30: misc_call_member_with_record with other addresses.
namespace twin_01ba6f30 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ba6f30(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba6f30

// auto_call_member_with_record_01ba7bb0: misc_call_member_with_record with other addresses.
namespace twin_01ba7bb0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ba7bb0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba7bb0

// auto_call_member_with_record_01ba87f0: misc_call_member_with_record with other addresses.
namespace twin_01ba87f0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ba87f0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba87f0

// auto_call_member_with_record_01ba9370: misc_call_member_with_record with other addresses.
namespace twin_01ba9370 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ba9370(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ba9370

// auto_call_member_with_record_01baa020: misc_call_member_with_record with other addresses.
namespace twin_01baa020 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01baa020(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01baa020

// auto_call_member_with_record_01baac20: misc_call_member_with_record with other addresses.
namespace twin_01baac20 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01baac20(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01baac20

// auto_call_member_with_record_01bab840: misc_call_member_with_record with other addresses.
namespace twin_01bab840 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bab840(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bab840

// auto_call_member_with_record_01bac4d0: misc_call_member_with_record with other addresses.
namespace twin_01bac4d0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bac4d0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bac4d0

// auto_call_member_with_record_01bad080: misc_call_member_with_record with other addresses.
namespace twin_01bad080 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bad080(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bad080

// auto_call_member_with_record_01badf60: misc_call_member_with_record with other addresses.
namespace twin_01badf60 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01badf60(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01badf60

// auto_call_member_with_record_01baec10: misc_call_member_with_record with other addresses.
namespace twin_01baec10 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01baec10(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01baec10

// auto_call_member_with_record_01bafaf0: misc_call_member_with_record with other addresses.
namespace twin_01bafaf0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bafaf0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bafaf0

// auto_call_member_with_record_01bb05e0: misc_call_member_with_record with other addresses.
namespace twin_01bb05e0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bb05e0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb05e0

// auto_call_member_with_record_01bb1230: misc_call_member_with_record with other addresses.
namespace twin_01bb1230 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bb1230(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb1230

// auto_call_member_with_record_01bb1fa0: misc_call_member_with_record with other addresses.
namespace twin_01bb1fa0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bb1fa0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb1fa0

// auto_call_member_with_record_01bb2e20: misc_call_member_with_record with other addresses.
namespace twin_01bb2e20 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bb2e20(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb2e20

// auto_call_member_with_record_01bb3980: misc_call_member_with_record with other addresses.
namespace twin_01bb3980 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bb3980(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb3980

// auto_call_member_with_record_01bb4550: misc_call_member_with_record with other addresses.
namespace twin_01bb4550 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bb4550(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb4550

// auto_call_member_with_record_01bb5460: misc_call_member_with_record with other addresses.
namespace twin_01bb5460 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bb5460(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb5460

// auto_call_member_with_record_01bb6210: misc_call_member_with_record with other addresses.
namespace twin_01bb6210 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bb6210(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb6210

// auto_call_member_with_record_01bb6e70: misc_call_member_with_record with other addresses.
namespace twin_01bb6e70 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bb6e70(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb6e70

// auto_call_member_with_record_01bb81d0: misc_call_member_with_record with other addresses.
namespace twin_01bb81d0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bb81d0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb81d0

// auto_call_member_with_record_01bb8e40: misc_call_member_with_record with other addresses.
namespace twin_01bb8e40 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01bb8e40(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01bb8e40

// auto_call_member_with_record_01c2a950: misc_call_member_with_record with other addresses.
namespace twin_01c2a950 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01c2a950(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01c2a950

// auto_call_member_with_record_01ce3250: misc_call_member_with_record with other addresses.
namespace twin_01ce3250 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_01ce3250(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_01ce3250

// auto_call_member_with_record_022482c0: misc_call_member_with_record with other addresses.
namespace twin_022482c0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_022482c0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_022482c0

// auto_call_member_with_record_022e17f0: misc_call_member_with_record with other addresses.
namespace twin_022e17f0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_022e17f0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_022e17f0

// auto_call_member_with_record_022e4730: misc_call_member_with_record with other addresses.
namespace twin_022e4730 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_022e4730(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_022e4730

// auto_call_member_with_record_02d6d2d0: misc_call_member_with_record with other addresses.
namespace twin_02d6d2d0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_02d6d2d0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_02d6d2d0

// auto_call_member_with_record_02dbbc50: misc_call_member_with_record with other addresses.
namespace twin_02dbbc50 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_02dbbc50(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_02dbbc50

// auto_call_member_with_record_02dbc9d0: misc_call_member_with_record with other addresses.
namespace twin_02dbc9d0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_02dbc9d0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_02dbc9d0

// auto_call_member_with_record_02de3ab0: misc_call_member_with_record with other addresses.
namespace twin_02de3ab0 {

// Misc: calls the member thunk's target with a kind-zero record on the stack and the thunk's 32-bit argument.


namespace {

/** The kind word of the record this routine passes to its target. */
constexpr uint32_t record_kind = 0;

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
extern "C" void bb_auto_call_member_with_record_02de3ab0(misc::RecordMemberThunk *thunk, uint32_t value32, uint64_t value64)
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

}  // namespace twin_02de3ab0
