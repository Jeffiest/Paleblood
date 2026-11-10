// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_call_record_member_target, in game/misc/call_record_member_target.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../misc/member_thunk.h"
#include "runtime/original.h"

// auto_call_record_member_target_0162ebd0: misc_call_record_member_target with other addresses.
namespace twin_0162ebd0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_0162ebd0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_0162ebd0

// auto_call_record_member_target_0162ed00: misc_call_record_member_target with other addresses.
namespace twin_0162ed00 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_0162ed00(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_0162ed00

// auto_call_record_member_target_0167d220: misc_call_record_member_target with other addresses.
namespace twin_0167d220 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_0167d220(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_0167d220

// auto_call_record_member_target_0179d440: misc_call_record_member_target with other addresses.
namespace twin_0179d440 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_0179d440(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_0179d440

// auto_call_record_member_target_0179ea40: misc_call_record_member_target with other addresses.
namespace twin_0179ea40 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_0179ea40(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_0179ea40

// auto_call_record_member_target_017a7740: misc_call_record_member_target with other addresses.
namespace twin_017a7740 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_017a7740(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_017a7740

// auto_call_record_member_target_017a9190: misc_call_record_member_target with other addresses.
namespace twin_017a9190 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_017a9190(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_017a9190

// auto_call_record_member_target_017a9360: misc_call_record_member_target with other addresses.
namespace twin_017a9360 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_017a9360(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_017a9360

// auto_call_record_member_target_017b3d90: misc_call_record_member_target with other addresses.
namespace twin_017b3d90 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_017b3d90(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_017b3d90

// auto_call_record_member_target_018566b0: misc_call_record_member_target with other addresses.
namespace twin_018566b0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018566b0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018566b0

// auto_call_record_member_target_01860150: misc_call_record_member_target with other addresses.
namespace twin_01860150 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01860150(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01860150

// auto_call_record_member_target_01863620: misc_call_record_member_target with other addresses.
namespace twin_01863620 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01863620(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01863620

// auto_call_record_member_target_0186b0c0: misc_call_record_member_target with other addresses.
namespace twin_0186b0c0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_0186b0c0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_0186b0c0

// auto_call_record_member_target_0186f2c0: misc_call_record_member_target with other addresses.
namespace twin_0186f2c0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_0186f2c0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_0186f2c0

// auto_call_record_member_target_0187f840: misc_call_record_member_target with other addresses.
namespace twin_0187f840 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_0187f840(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_0187f840

// auto_call_record_member_target_0188e320: misc_call_record_member_target with other addresses.
namespace twin_0188e320 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_0188e320(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_0188e320

// auto_call_record_member_target_0189e2f0: misc_call_record_member_target with other addresses.
namespace twin_0189e2f0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_0189e2f0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_0189e2f0

// auto_call_record_member_target_018a0100: misc_call_record_member_target with other addresses.
namespace twin_018a0100 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018a0100(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018a0100

// auto_call_record_member_target_018ad4b0: misc_call_record_member_target with other addresses.
namespace twin_018ad4b0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018ad4b0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018ad4b0

// auto_call_record_member_target_018afd10: misc_call_record_member_target with other addresses.
namespace twin_018afd10 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018afd10(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018afd10

// auto_call_record_member_target_018c10b0: misc_call_record_member_target with other addresses.
namespace twin_018c10b0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018c10b0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018c10b0

// auto_call_record_member_target_018c64f0: misc_call_record_member_target with other addresses.
namespace twin_018c64f0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018c64f0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018c64f0

// auto_call_record_member_target_018c8110: misc_call_record_member_target with other addresses.
namespace twin_018c8110 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018c8110(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018c8110

// auto_call_record_member_target_018d7c00: misc_call_record_member_target with other addresses.
namespace twin_018d7c00 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018d7c00(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018d7c00

// auto_call_record_member_target_018dd4a0: misc_call_record_member_target with other addresses.
namespace twin_018dd4a0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018dd4a0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018dd4a0

// auto_call_record_member_target_018dfb10: misc_call_record_member_target with other addresses.
namespace twin_018dfb10 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018dfb10(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018dfb10

// auto_call_record_member_target_018e1a00: misc_call_record_member_target with other addresses.
namespace twin_018e1a00 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018e1a00(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018e1a00

// auto_call_record_member_target_018ec670: misc_call_record_member_target with other addresses.
namespace twin_018ec670 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018ec670(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018ec670

// auto_call_record_member_target_018ed7e0: misc_call_record_member_target with other addresses.
namespace twin_018ed7e0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018ed7e0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018ed7e0

// auto_call_record_member_target_018ee710: misc_call_record_member_target with other addresses.
namespace twin_018ee710 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018ee710(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018ee710

// auto_call_record_member_target_018f0b30: misc_call_record_member_target with other addresses.
namespace twin_018f0b30 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018f0b30(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018f0b30

// auto_call_record_member_target_018f5f60: misc_call_record_member_target with other addresses.
namespace twin_018f5f60 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_018f5f60(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_018f5f60

// auto_call_record_member_target_0193e920: misc_call_record_member_target with other addresses.
namespace twin_0193e920 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_0193e920(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_0193e920

// auto_call_record_member_target_0196f470: misc_call_record_member_target with other addresses.
namespace twin_0196f470 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_0196f470(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_0196f470

// auto_call_record_member_target_01984d50: misc_call_record_member_target with other addresses.
namespace twin_01984d50 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01984d50(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01984d50

// auto_call_record_member_target_019bf790: misc_call_record_member_target with other addresses.
namespace twin_019bf790 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_019bf790(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_019bf790

// auto_call_record_member_target_019c1360: misc_call_record_member_target with other addresses.
namespace twin_019c1360 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_019c1360(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_019c1360

// auto_call_record_member_target_019c2ce0: misc_call_record_member_target with other addresses.
namespace twin_019c2ce0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_019c2ce0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_019c2ce0

// auto_call_record_member_target_019c6150: misc_call_record_member_target with other addresses.
namespace twin_019c6150 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_019c6150(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_019c6150

// auto_call_record_member_target_019c7230: misc_call_record_member_target with other addresses.
namespace twin_019c7230 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_019c7230(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_019c7230

// auto_call_record_member_target_019c95f0: misc_call_record_member_target with other addresses.
namespace twin_019c95f0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_019c95f0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_019c95f0

// auto_call_record_member_target_01b902c0: misc_call_record_member_target with other addresses.
namespace twin_01b902c0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01b902c0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01b902c0

// auto_call_record_member_target_01bc9a50: misc_call_record_member_target with other addresses.
namespace twin_01bc9a50 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01bc9a50(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01bc9a50

// auto_call_record_member_target_01bcc600: misc_call_record_member_target with other addresses.
namespace twin_01bcc600 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01bcc600(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01bcc600

// auto_call_record_member_target_01bce3e0: misc_call_record_member_target with other addresses.
namespace twin_01bce3e0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01bce3e0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01bce3e0

// auto_call_record_member_target_01bfe210: misc_call_record_member_target with other addresses.
namespace twin_01bfe210 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01bfe210(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01bfe210

// auto_call_record_member_target_01c27200: misc_call_record_member_target with other addresses.
namespace twin_01c27200 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01c27200(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01c27200

// auto_call_record_member_target_01c55ac0: misc_call_record_member_target with other addresses.
namespace twin_01c55ac0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01c55ac0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01c55ac0

// auto_call_record_member_target_01c625d0: misc_call_record_member_target with other addresses.
namespace twin_01c625d0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01c625d0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01c625d0

// auto_call_record_member_target_01c67200: misc_call_record_member_target with other addresses.
namespace twin_01c67200 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01c67200(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01c67200

// auto_call_record_member_target_01c6ce60: misc_call_record_member_target with other addresses.
namespace twin_01c6ce60 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01c6ce60(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01c6ce60

// auto_call_record_member_target_01c7c6e0: misc_call_record_member_target with other addresses.
namespace twin_01c7c6e0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01c7c6e0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01c7c6e0

// auto_call_record_member_target_01c85900: misc_call_record_member_target with other addresses.
namespace twin_01c85900 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01c85900(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01c85900

// auto_call_record_member_target_01c933b0: misc_call_record_member_target with other addresses.
namespace twin_01c933b0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01c933b0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01c933b0

// auto_call_record_member_target_01cde9b0: misc_call_record_member_target with other addresses.
namespace twin_01cde9b0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01cde9b0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01cde9b0

// auto_call_record_member_target_01ce2f70: misc_call_record_member_target with other addresses.
namespace twin_01ce2f70 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01ce2f70(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01ce2f70

// auto_call_record_member_target_01d75cf0: misc_call_record_member_target with other addresses.
namespace twin_01d75cf0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01d75cf0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01d75cf0

// auto_call_record_member_target_01d915f0: misc_call_record_member_target with other addresses.
namespace twin_01d915f0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01d915f0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01d915f0

// auto_call_record_member_target_01d965b0: misc_call_record_member_target with other addresses.
namespace twin_01d965b0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01d965b0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01d965b0

// auto_call_record_member_target_01da41d0: misc_call_record_member_target with other addresses.
namespace twin_01da41d0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01da41d0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01da41d0

// auto_call_record_member_target_01df3630: misc_call_record_member_target with other addresses.
namespace twin_01df3630 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01df3630(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01df3630

// auto_call_record_member_target_01dfff20: misc_call_record_member_target with other addresses.
namespace twin_01dfff20 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01dfff20(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01dfff20

// auto_call_record_member_target_01e04d80: misc_call_record_member_target with other addresses.
namespace twin_01e04d80 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_01e04d80(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_01e04d80

// auto_call_record_member_target_020daca0: misc_call_record_member_target with other addresses.
namespace twin_020daca0 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_020daca0(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_020daca0

// auto_call_record_member_target_02155250: misc_call_record_member_target with other addresses.
namespace twin_02155250 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_02155250(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_02155250

// auto_call_record_member_target_02435f70: misc_call_record_member_target with other addresses.
namespace twin_02435f70 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_02435f70(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_02435f70

// auto_call_record_member_target_02439320: misc_call_record_member_target with other addresses.
namespace twin_02439320 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_02439320(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_02439320

// auto_call_record_member_target_02dcb440: misc_call_record_member_target with other addresses.
namespace twin_02dcb440 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_02dcb440(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_02dcb440

// auto_call_record_member_target_02de3830: misc_call_record_member_target with other addresses.
namespace twin_02de3830 {

// Misc: builds a record on the stack from two source words, passes it to a member thunk's target, then destroys it.


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
extern "C" void bb_auto_call_record_member_target_02de3830(RecordCallThunk *thunk, const RecordSourcePair *source)
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

}  // namespace twin_02de3830
