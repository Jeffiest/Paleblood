// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_setup_static_objects_02243d30, in game/misc/setup_static_objects_02243d30.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"

// auto_setup_static_objects_021c9380: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021c9380 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598c5a0, second_guard, uint8_t);
RT_GLOBAL(0x0598c548, second_object, TargetedObject);
RT_GLOBAL(0x0598c540, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a5a00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021c9380()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021c9380

// auto_setup_static_objects_021ca970: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021ca970 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598c640, second_guard, uint8_t);
RT_GLOBAL(0x0598c5e8, second_object, TargetedObject);
RT_GLOBAL(0x0598c5e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a5a80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021ca970()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021ca970

// auto_setup_static_objects_021cc9e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021cc9e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598c738, second_guard, uint8_t);
RT_GLOBAL(0x0598c6e0, second_object, TargetedObject);
RT_GLOBAL(0x0598c6d8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a5b00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021cc9e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021cc9e0

// auto_setup_static_objects_021dbd20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021dbd20 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598c920, second_guard, uint8_t);
RT_GLOBAL(0x0598c8c8, second_object, TargetedObject);
RT_GLOBAL(0x0598c8c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a5f30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021dbd20()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021dbd20

// auto_setup_static_objects_021dc740: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021dc740 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598c9c0, second_guard, uint8_t);
RT_GLOBAL(0x0598c968, second_object, TargetedObject);
RT_GLOBAL(0x0598c960, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a6090, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021dc740()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021dc740

// auto_setup_static_objects_021dd750: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021dd750 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598cae8, second_guard, uint8_t);
RT_GLOBAL(0x0598ca90, second_object, TargetedObject);
RT_GLOBAL(0x0598ca88, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a6110, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021dd750()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021dd750

// auto_setup_static_objects_022033e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022033e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598cf88, second_guard, uint8_t);
RT_GLOBAL(0x0598cf30, second_object, TargetedObject);
RT_GLOBAL(0x0598cf28, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a6260, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022033e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022033e0

// auto_setup_static_objects_02204130: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02204130 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598d038, second_guard, uint8_t);
RT_GLOBAL(0x0598cfe0, second_object, TargetedObject);
RT_GLOBAL(0x0598cfd8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a62e0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02204130()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02204130

// auto_setup_static_objects_022053a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022053a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598d0e8, second_guard, uint8_t);
RT_GLOBAL(0x0598d090, second_object, TargetedObject);
RT_GLOBAL(0x0598d088, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a63d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022053a0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022053a0

// auto_setup_static_objects_02206a10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02206a10 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598d198, second_guard, uint8_t);
RT_GLOBAL(0x0598d140, second_object, TargetedObject);
RT_GLOBAL(0x0598d138, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a6450, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02206a10()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02206a10

// auto_setup_static_objects_02207770: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02207770 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598d248, second_guard, uint8_t);
RT_GLOBAL(0x0598d1f0, second_object, TargetedObject);
RT_GLOBAL(0x0598d1e8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a64d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02207770()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02207770

// auto_setup_static_objects_02208410: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02208410 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598d2f8, second_guard, uint8_t);
RT_GLOBAL(0x0598d2a0, second_object, TargetedObject);
RT_GLOBAL(0x0598d298, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a6550, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02208410()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02208410

// auto_setup_static_objects_02209180: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02209180 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598d3a8, second_guard, uint8_t);
RT_GLOBAL(0x0598d350, second_object, TargetedObject);
RT_GLOBAL(0x0598d348, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a65d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02209180()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02209180

// auto_setup_static_objects_02209e20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02209e20 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598d450, second_guard, uint8_t);
RT_GLOBAL(0x0598d3f8, second_object, TargetedObject);
RT_GLOBAL(0x0598d3f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a66c0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02209e20()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02209e20

// auto_setup_static_objects_0220ad70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0220ad70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598d4f0, second_guard, uint8_t);
RT_GLOBAL(0x0598d498, second_object, TargetedObject);
RT_GLOBAL(0x0598d490, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a6740, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0220ad70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0220ad70

// auto_setup_static_objects_0220bb00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0220bb00 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598d598, second_guard, uint8_t);
RT_GLOBAL(0x0598d540, second_object, TargetedObject);
RT_GLOBAL(0x0598d538, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a67c0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0220bb00()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0220bb00

// auto_setup_static_objects_022113f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022113f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598da40, second_guard, uint8_t);
RT_GLOBAL(0x0598d9e8, second_object, TargetedObject);
RT_GLOBAL(0x0598d9e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a6a80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022113f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022113f0

// auto_setup_static_objects_022115d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022115d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598d9d0, second_guard, uint8_t);
RT_GLOBAL(0x0598d978, second_object, TargetedObject);
RT_GLOBAL(0x0598d970, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a6a00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022115d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022115d0

// auto_setup_static_objects_022117b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022117b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598d8f0, second_guard, uint8_t);
RT_GLOBAL(0x0598d898, second_object, TargetedObject);
RT_GLOBAL(0x0598d890, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a6900, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022117b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022117b0

// auto_setup_static_objects_02218c30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02218c30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598ddd0, second_guard, uint8_t);
RT_GLOBAL(0x0598dd78, second_object, TargetedObject);
RT_GLOBAL(0x0598dd70, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a6fe0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02218c30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02218c30

// auto_setup_static_objects_02218e10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02218e10 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598dd60, second_guard, uint8_t);
RT_GLOBAL(0x0598dd08, second_object, TargetedObject);
RT_GLOBAL(0x0598dd00, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a6f60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02218e10()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02218e10

// auto_setup_static_objects_02218ff0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02218ff0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598dc80, second_guard, uint8_t);
RT_GLOBAL(0x0598dc28, second_object, TargetedObject);
RT_GLOBAL(0x0598dc20, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a6e60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02218ff0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02218ff0

// auto_setup_static_objects_02228120: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02228120 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598e128, second_guard, uint8_t);
RT_GLOBAL(0x0598e0d0, second_object, TargetedObject);
RT_GLOBAL(0x0598e0c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a7230, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02228120()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02228120

// auto_setup_static_objects_02228300: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02228300 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598e0b8, second_guard, uint8_t);
RT_GLOBAL(0x0598e060, second_object, TargetedObject);
RT_GLOBAL(0x0598e058, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a71b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02228300()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02228300

// auto_setup_static_objects_022334f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022334f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598e308, second_guard, uint8_t);
RT_GLOBAL(0x0598e2b0, second_object, TargetedObject);
RT_GLOBAL(0x0598e2a8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a75a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022334f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022334f0

// auto_setup_static_objects_022336d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022336d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598e298, second_guard, uint8_t);
RT_GLOBAL(0x0598e240, second_object, TargetedObject);
RT_GLOBAL(0x0598e238, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a7520, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022336d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022336d0

// auto_setup_static_objects_02238f30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02238f30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598e4c0, second_guard, uint8_t);
RT_GLOBAL(0x0598e468, second_object, TargetedObject);
RT_GLOBAL(0x0598e460, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a77c0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02238f30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02238f30

// auto_setup_static_objects_02244aa0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02244aa0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598e950, second_guard, uint8_t);
RT_GLOBAL(0x0598e8f8, second_object, TargetedObject);
RT_GLOBAL(0x0598e8f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a7a20, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02244aa0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02244aa0

// auto_setup_static_objects_02245920: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02245920 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598e9f0, second_guard, uint8_t);
RT_GLOBAL(0x0598e998, second_object, TargetedObject);
RT_GLOBAL(0x0598e990, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a7b50, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02245920()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02245920

// auto_setup_static_objects_02248940: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02248940 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598ea90, second_guard, uint8_t);
RT_GLOBAL(0x0598ea38, second_object, TargetedObject);
RT_GLOBAL(0x0598ea30, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a7bd0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02248940()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02248940

// auto_setup_static_objects_0224a8f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0224a8f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598edc8, second_guard, uint8_t);
RT_GLOBAL(0x0598ed70, second_object, TargetedObject);
RT_GLOBAL(0x0598ed68, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a7f20, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0224a8f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0224a8f0

// auto_setup_static_objects_0224aad0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0224aad0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598ece8, second_guard, uint8_t);
RT_GLOBAL(0x0598ec90, second_object, TargetedObject);
RT_GLOBAL(0x0598ec88, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a7e20, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0224aad0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0224aad0

// auto_setup_static_objects_0224acb0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0224acb0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598ec78, second_guard, uint8_t);
RT_GLOBAL(0x0598ec20, second_object, TargetedObject);
RT_GLOBAL(0x0598ec18, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a7da0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0224acb0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0224acb0

// auto_setup_static_objects_0224f450: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0224f450 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598f100, second_guard, uint8_t);
RT_GLOBAL(0x0598f0a8, second_object, TargetedObject);
RT_GLOBAL(0x0598f0a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a8270, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0224f450()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0224f450

// auto_setup_static_objects_0224f630: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0224f630 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598f090, second_guard, uint8_t);
RT_GLOBAL(0x0598f038, second_object, TargetedObject);
RT_GLOBAL(0x0598f030, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a81f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0224f630()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0224f630

// auto_setup_static_objects_0224f810: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0224f810 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598efb0, second_guard, uint8_t);
RT_GLOBAL(0x0598ef58, second_object, TargetedObject);
RT_GLOBAL(0x0598ef50, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a80f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0224f810()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0224f810

// auto_setup_static_objects_02256690: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02256690 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598f450, second_guard, uint8_t);
RT_GLOBAL(0x0598f3f8, second_object, TargetedObject);
RT_GLOBAL(0x0598f3f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a8610, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02256690()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02256690

// auto_setup_static_objects_02256870: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02256870 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598f3e0, second_guard, uint8_t);
RT_GLOBAL(0x0598f388, second_object, TargetedObject);
RT_GLOBAL(0x0598f380, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a8590, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02256870()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02256870

// auto_setup_static_objects_02256a50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02256a50 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598f300, second_guard, uint8_t);
RT_GLOBAL(0x0598f2a8, second_object, TargetedObject);
RT_GLOBAL(0x0598f2a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a8490, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02256a50()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02256a50

// auto_setup_static_objects_0225bf50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0225bf50 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598f6e0, second_guard, uint8_t);
RT_GLOBAL(0x0598f688, second_object, TargetedObject);
RT_GLOBAL(0x0598f680, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a8810, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0225bf50()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0225bf50

// auto_setup_static_objects_0225c130: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0225c130 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598f600, second_guard, uint8_t);
RT_GLOBAL(0x0598f5a8, second_object, TargetedObject);
RT_GLOBAL(0x0598f5a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a8710, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0225c130()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0225c130

// auto_setup_static_objects_0225c310: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0225c310 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598f590, second_guard, uint8_t);
RT_GLOBAL(0x0598f538, second_object, TargetedObject);
RT_GLOBAL(0x0598f530, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a8690, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0225c310()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0225c310

// auto_setup_static_objects_0225f150: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0225f150 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598f9a0, second_guard, uint8_t);
RT_GLOBAL(0x0598f948, second_object, TargetedObject);
RT_GLOBAL(0x0598f940, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a8b60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0225f150()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0225f150

// auto_setup_static_objects_0225f330: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0225f330 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598f8c0, second_guard, uint8_t);
RT_GLOBAL(0x0598f868, second_object, TargetedObject);
RT_GLOBAL(0x0598f860, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a8a60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0225f330()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0225f330

// auto_setup_static_objects_0225f510: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0225f510 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598f850, second_guard, uint8_t);
RT_GLOBAL(0x0598f7f8, second_object, TargetedObject);
RT_GLOBAL(0x0598f7f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a89e0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0225f510()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0225f510

// auto_setup_static_objects_02268fd0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02268fd0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05990150, second_guard, uint8_t);
RT_GLOBAL(0x059900f8, second_object, TargetedObject);
RT_GLOBAL(0x059900f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a8f10, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02268fd0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02268fd0

// auto_setup_static_objects_022691b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022691b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05990070, second_guard, uint8_t);
RT_GLOBAL(0x05990018, second_object, TargetedObject);
RT_GLOBAL(0x05990010, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a8e10, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022691b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022691b0

// auto_setup_static_objects_02269390: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02269390 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05990000, second_guard, uint8_t);
RT_GLOBAL(0x0598ffa8, second_object, TargetedObject);
RT_GLOBAL(0x0598ffa0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a8d90, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02269390()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02269390

// auto_setup_static_objects_02277420: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02277420 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05990550, second_guard, uint8_t);
RT_GLOBAL(0x059904f8, second_object, TargetedObject);
RT_GLOBAL(0x059904f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a92b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02277420()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02277420

// auto_setup_static_objects_02277600: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02277600 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05990470, second_guard, uint8_t);
RT_GLOBAL(0x05990418, second_object, TargetedObject);
RT_GLOBAL(0x05990410, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a91b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02277600()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02277600

// auto_setup_static_objects_022777e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022777e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05990400, second_guard, uint8_t);
RT_GLOBAL(0x059903a8, second_object, TargetedObject);
RT_GLOBAL(0x059903a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a9130, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022777e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022777e0

// auto_setup_static_objects_022cdfd0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022cdfd0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05990be8, second_guard, uint8_t);
RT_GLOBAL(0x05990b90, second_object, TargetedObject);
RT_GLOBAL(0x05990b88, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a96a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022cdfd0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022cdfd0

// auto_setup_static_objects_022ce1b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022ce1b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05990b08, second_guard, uint8_t);
RT_GLOBAL(0x05990ab0, second_object, TargetedObject);
RT_GLOBAL(0x05990aa8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a95a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022ce1b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022ce1b0

// auto_setup_static_objects_022ce390: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022ce390 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05990a98, second_guard, uint8_t);
RT_GLOBAL(0x05990a40, second_object, TargetedObject);
RT_GLOBAL(0x05990a38, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a9520, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022ce390()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022ce390

// auto_setup_static_objects_022dc130: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022dc130 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05991320, second_guard, uint8_t);
RT_GLOBAL(0x059912c8, second_object, TargetedObject);
RT_GLOBAL(0x059912c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a9b00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022dc130()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022dc130

// auto_setup_static_objects_022e03d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022e03d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059913c0, second_guard, uint8_t);
RT_GLOBAL(0x05991368, second_object, TargetedObject);
RT_GLOBAL(0x05991360, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a9c30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022e03d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022e03d0

// auto_setup_static_objects_022e1bf0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022e1bf0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05991478, second_guard, uint8_t);
RT_GLOBAL(0x05991420, second_object, TargetedObject);
RT_GLOBAL(0x05991418, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a9d60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022e1bf0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022e1bf0

// auto_setup_static_objects_022e4c70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022e4c70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05991520, second_guard, uint8_t);
RT_GLOBAL(0x059914c8, second_object, TargetedObject);
RT_GLOBAL(0x059914c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a9de0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022e4c70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022e4c70

// auto_setup_static_objects_022e5a90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022e5a90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059915c0, second_guard, uint8_t);
RT_GLOBAL(0x05991568, second_object, TargetedObject);
RT_GLOBAL(0x05991560, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a9e60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022e5a90()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022e5a90

// auto_setup_static_objects_022e7620: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022e7620 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059916e0, second_guard, uint8_t);
RT_GLOBAL(0x05991688, second_object, TargetedObject);
RT_GLOBAL(0x05991680, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a9f10, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022e7620()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022e7620

// auto_setup_static_objects_022e8d00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022e8d00 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05991800, second_guard, uint8_t);
RT_GLOBAL(0x059917a8, second_object, TargetedObject);
RT_GLOBAL(0x059917a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a9fc0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022e8d00()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022e8d00

// auto_setup_static_objects_022ea840: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022ea840 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05991920, second_guard, uint8_t);
RT_GLOBAL(0x059918c8, second_object, TargetedObject);
RT_GLOBAL(0x059918c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa0e0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022ea840()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022ea840

// auto_setup_static_objects_022ed4a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022ed4a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05991a00, second_guard, uint8_t);
RT_GLOBAL(0x059919a8, second_object, TargetedObject);
RT_GLOBAL(0x059919a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa160, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022ed4a0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022ed4a0

// auto_setup_static_objects_022ee2d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022ee2d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05991aa0, second_guard, uint8_t);
RT_GLOBAL(0x05991a48, second_object, TargetedObject);
RT_GLOBAL(0x05991a40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa1e0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022ee2d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022ee2d0

// auto_setup_static_objects_022eef60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022eef60 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05991b40, second_guard, uint8_t);
RT_GLOBAL(0x05991ae8, second_object, TargetedObject);
RT_GLOBAL(0x05991ae0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa260, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022eef60()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022eef60

// auto_setup_static_objects_022efb70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022efb70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05991be0, second_guard, uint8_t);
RT_GLOBAL(0x05991b88, second_object, TargetedObject);
RT_GLOBAL(0x05991b80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa2e0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022efb70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022efb70

// auto_setup_static_objects_022f08c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022f08c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05991c80, second_guard, uint8_t);
RT_GLOBAL(0x05991c28, second_object, TargetedObject);
RT_GLOBAL(0x05991c20, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa360, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022f08c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022f08c0

// auto_setup_static_objects_022f1950: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022f1950 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05991d60, second_guard, uint8_t);
RT_GLOBAL(0x05991d08, second_object, TargetedObject);
RT_GLOBAL(0x05991d00, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa410, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022f1950()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022f1950

// auto_setup_static_objects_022f3ab0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022f3ab0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05991fc0, second_guard, uint8_t);
RT_GLOBAL(0x05991f68, second_object, TargetedObject);
RT_GLOBAL(0x05991f60, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa490, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022f3ab0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022f3ab0

// auto_setup_static_objects_022f4940: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022f4940 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05992060, second_guard, uint8_t);
RT_GLOBAL(0x05992008, second_object, TargetedObject);
RT_GLOBAL(0x05992000, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa510, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022f4940()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022f4940

// auto_setup_static_objects_022f7ac0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022f7ac0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05992100, second_guard, uint8_t);
RT_GLOBAL(0x059920a8, second_object, TargetedObject);
RT_GLOBAL(0x059920a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa590, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022f7ac0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022f7ac0

// auto_setup_static_objects_022f8790: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_022f8790 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059921a0, second_guard, uint8_t);
RT_GLOBAL(0x05992148, second_object, TargetedObject);
RT_GLOBAL(0x05992140, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa610, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_022f8790()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_022f8790

// auto_setup_static_objects_02306da0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02306da0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05992440, second_guard, uint8_t);
RT_GLOBAL(0x059923e8, second_object, TargetedObject);
RT_GLOBAL(0x059923e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa7b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02306da0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02306da0

// auto_setup_static_objects_02307b10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02307b10 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059924e0, second_guard, uint8_t);
RT_GLOBAL(0x05992488, second_object, TargetedObject);
RT_GLOBAL(0x05992480, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa830, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02307b10()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02307b10

// auto_setup_static_objects_02308d60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02308d60 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05992580, second_guard, uint8_t);
RT_GLOBAL(0x05992528, second_object, TargetedObject);
RT_GLOBAL(0x05992520, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa8b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02308d60()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02308d60

// auto_setup_static_objects_02309af0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02309af0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05992620, second_guard, uint8_t);
RT_GLOBAL(0x059925c8, second_object, TargetedObject);
RT_GLOBAL(0x059925c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa930, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02309af0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02309af0

// auto_setup_static_objects_0230afd0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0230afd0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059926c0, second_guard, uint8_t);
RT_GLOBAL(0x05992668, second_object, TargetedObject);
RT_GLOBAL(0x05992660, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aa9b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0230afd0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0230afd0

// auto_setup_static_objects_0230be00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0230be00 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05992760, second_guard, uint8_t);
RT_GLOBAL(0x05992708, second_object, TargetedObject);
RT_GLOBAL(0x05992700, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aaa30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0230be00()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0230be00

// auto_setup_static_objects_0230cbe0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0230cbe0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05992800, second_guard, uint8_t);
RT_GLOBAL(0x059927a8, second_object, TargetedObject);
RT_GLOBAL(0x059927a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aaab0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0230cbe0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0230cbe0

// auto_setup_static_objects_0230de20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0230de20 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059928a0, second_guard, uint8_t);
RT_GLOBAL(0x05992848, second_object, TargetedObject);
RT_GLOBAL(0x05992840, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aab30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0230de20()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0230de20

// auto_setup_static_objects_0230fb50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0230fb50 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05992940, second_guard, uint8_t);
RT_GLOBAL(0x059928e8, second_object, TargetedObject);
RT_GLOBAL(0x059928e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aabb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0230fb50()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0230fb50

// auto_setup_static_objects_02310fa0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02310fa0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059929e0, second_guard, uint8_t);
RT_GLOBAL(0x05992988, second_object, TargetedObject);
RT_GLOBAL(0x05992980, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aac30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02310fa0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02310fa0

// auto_setup_static_objects_02327ce0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02327ce0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05993a30, second_guard, uint8_t);
RT_GLOBAL(0x059939d8, second_object, TargetedObject);
RT_GLOBAL(0x059939d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aacb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02327ce0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02327ce0

// auto_setup_static_objects_0232cbf0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0232cbf0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05993df0, second_guard, uint8_t);
RT_GLOBAL(0x05993d98, second_object, TargetedObject);
RT_GLOBAL(0x05993d90, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aad30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0232cbf0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0232cbf0

// auto_setup_static_objects_0232df00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0232df00 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05993ed0, second_guard, uint8_t);
RT_GLOBAL(0x05993e78, second_object, TargetedObject);
RT_GLOBAL(0x05993e70, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aade0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0232df00()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0232df00

// auto_setup_static_objects_02332790: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02332790 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059941a0, second_guard, uint8_t);
RT_GLOBAL(0x05994148, second_object, TargetedObject);
RT_GLOBAL(0x05994140, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ab1c0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02332790()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02332790

// auto_setup_static_objects_02332970: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02332970 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05994130, second_guard, uint8_t);
RT_GLOBAL(0x059940d8, second_object, TargetedObject);
RT_GLOBAL(0x059940d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ab140, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02332970()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02332970

// auto_setup_static_objects_02332b50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02332b50 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05994050, second_guard, uint8_t);
RT_GLOBAL(0x05993ff8, second_object, TargetedObject);
RT_GLOBAL(0x05993ff0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ab040, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02332b50()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02332b50

// auto_setup_static_objects_023372a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023372a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059942f0, second_guard, uint8_t);
RT_GLOBAL(0x05994298, second_object, TargetedObject);
RT_GLOBAL(0x05994290, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ab2b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023372a0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023372a0

// auto_setup_static_objects_0233eb80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0233eb80 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05994d48, second_guard, uint8_t);
RT_GLOBAL(0x05994cf0, second_object, TargetedObject);
RT_GLOBAL(0x05994ce8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ab330, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0233eb80()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0233eb80

// auto_setup_static_objects_023444b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023444b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059953a8, second_guard, uint8_t);
RT_GLOBAL(0x05995350, second_object, TargetedObject);
RT_GLOBAL(0x05995348, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ab960, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023444b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023444b0

// auto_setup_static_objects_02344690: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02344690 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059952c8, second_guard, uint8_t);
RT_GLOBAL(0x05995270, second_object, TargetedObject);
RT_GLOBAL(0x05995268, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ab860, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02344690()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02344690

// auto_setup_static_objects_02344870: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02344870 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05995258, second_guard, uint8_t);
RT_GLOBAL(0x05995200, second_object, TargetedObject);
RT_GLOBAL(0x059951f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ab7e0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02344870()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02344870

// auto_setup_static_objects_02349e90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02349e90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05995620, second_guard, uint8_t);
RT_GLOBAL(0x059955c8, second_object, TargetedObject);
RT_GLOBAL(0x059955c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057abcb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02349e90()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02349e90

// auto_setup_static_objects_0234a070: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0234a070 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05995540, second_guard, uint8_t);
RT_GLOBAL(0x059954e8, second_object, TargetedObject);
RT_GLOBAL(0x059954e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057abbb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0234a070()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0234a070

// auto_setup_static_objects_0234a250: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0234a250 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059954d0, second_guard, uint8_t);
RT_GLOBAL(0x05995478, second_object, TargetedObject);
RT_GLOBAL(0x05995470, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057abb30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0234a250()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0234a250

// auto_setup_static_objects_0234fb70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0234fb70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05995888, second_guard, uint8_t);
RT_GLOBAL(0x05995830, second_object, TargetedObject);
RT_GLOBAL(0x05995828, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac000, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0234fb70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0234fb70

// auto_setup_static_objects_0234fd50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0234fd50 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059957a8, second_guard, uint8_t);
RT_GLOBAL(0x05995750, second_object, TargetedObject);
RT_GLOBAL(0x05995748, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057abf00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0234fd50()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0234fd50

// auto_setup_static_objects_0234ff30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0234ff30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05995738, second_guard, uint8_t);
RT_GLOBAL(0x059956e0, second_object, TargetedObject);
RT_GLOBAL(0x059956d8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057abe80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0234ff30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0234ff30

// auto_setup_static_objects_02353ff0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02353ff0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05995b88, second_guard, uint8_t);
RT_GLOBAL(0x05995b30, second_object, TargetedObject);
RT_GLOBAL(0x05995b28, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac2c0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02353ff0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02353ff0

// auto_setup_static_objects_023541d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023541d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05995b18, second_guard, uint8_t);
RT_GLOBAL(0x05995ac0, second_object, TargetedObject);
RT_GLOBAL(0x05995ab8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac240, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023541d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023541d0

// auto_setup_static_objects_023543b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023543b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05995a38, second_guard, uint8_t);
RT_GLOBAL(0x059959e0, second_object, TargetedObject);
RT_GLOBAL(0x059959d8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac140, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023543b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023543b0

// auto_setup_static_objects_02357b10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02357b10 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05995c40, second_guard, uint8_t);
RT_GLOBAL(0x05995be8, second_object, TargetedObject);
RT_GLOBAL(0x05995be0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac340, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02357b10()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02357b10

// auto_setup_static_objects_02359b70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02359b70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996398, second_guard, uint8_t);
RT_GLOBAL(0x05996340, second_object, TargetedObject);
RT_GLOBAL(0x05996338, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac410, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02359b70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02359b70

// auto_setup_static_objects_02367aa0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02367aa0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996560, second_guard, uint8_t);
RT_GLOBAL(0x05996508, second_object, TargetedObject);
RT_GLOBAL(0x05996500, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac590, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02367aa0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02367aa0

// auto_setup_static_objects_02367c80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02367c80 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996560, second_guard, uint8_t);
RT_GLOBAL(0x05996508, second_object, TargetedObject);
RT_GLOBAL(0x05996500, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac590, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02367c80()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02367c80

// auto_setup_static_objects_02368400: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02368400 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996630, second_guard, uint8_t);
RT_GLOBAL(0x059965d8, second_object, TargetedObject);
RT_GLOBAL(0x059965d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac610, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02368400()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02368400

// auto_setup_static_objects_0236bb00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0236bb00 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996718, second_guard, uint8_t);
RT_GLOBAL(0x059966c0, second_object, TargetedObject);
RT_GLOBAL(0x059966b8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac690, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0236bb00()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0236bb00

// auto_setup_static_objects_0236fda0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0236fda0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996840, second_guard, uint8_t);
RT_GLOBAL(0x059967e8, second_object, TargetedObject);
RT_GLOBAL(0x059967e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac770, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0236fda0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0236fda0

// auto_setup_static_objects_02371360: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02371360 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059968e0, second_guard, uint8_t);
RT_GLOBAL(0x05996888, second_object, TargetedObject);
RT_GLOBAL(0x05996880, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac850, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02371360()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02371360

// auto_setup_static_objects_023734c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023734c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059969c0, second_guard, uint8_t);
RT_GLOBAL(0x05996968, second_object, TargetedObject);
RT_GLOBAL(0x05996960, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ac930, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023734c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023734c0

// auto_setup_static_objects_02374d90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02374d90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996ab0, second_guard, uint8_t);
RT_GLOBAL(0x05996a58, second_object, TargetedObject);
RT_GLOBAL(0x05996a50, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aca10, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02374d90()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02374d90

// auto_setup_static_objects_02374f70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02374f70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996ab0, second_guard, uint8_t);
RT_GLOBAL(0x05996a58, second_object, TargetedObject);
RT_GLOBAL(0x05996a50, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aca10, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02374f70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02374f70

// auto_setup_static_objects_02376190: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02376190 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996b50, second_guard, uint8_t);
RT_GLOBAL(0x05996af8, second_object, TargetedObject);
RT_GLOBAL(0x05996af0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057acaf0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02376190()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02376190

// auto_setup_static_objects_0237e460: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0237e460 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996d00, second_guard, uint8_t);
RT_GLOBAL(0x05996ca8, second_object, TargetedObject);
RT_GLOBAL(0x05996ca0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057accd0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0237e460()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0237e460

// auto_setup_static_objects_0237f210: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0237f210 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996da0, second_guard, uint8_t);
RT_GLOBAL(0x05996d48, second_object, TargetedObject);
RT_GLOBAL(0x05996d40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057acdc0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0237f210()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0237f210

// auto_setup_static_objects_0237ffc0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0237ffc0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996e40, second_guard, uint8_t);
RT_GLOBAL(0x05996de8, second_object, TargetedObject);
RT_GLOBAL(0x05996de0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aceb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0237ffc0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0237ffc0

// auto_setup_static_objects_02380d70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02380d70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996ee0, second_guard, uint8_t);
RT_GLOBAL(0x05996e88, second_object, TargetedObject);
RT_GLOBAL(0x05996e80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057acf90, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02380d70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02380d70

// auto_setup_static_objects_02381b80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02381b80 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05996f80, second_guard, uint8_t);
RT_GLOBAL(0x05996f28, second_object, TargetedObject);
RT_GLOBAL(0x05996f20, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad010, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02381b80()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02381b80

// auto_setup_static_objects_023825a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023825a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05997020, second_guard, uint8_t);
RT_GLOBAL(0x05996fc8, second_object, TargetedObject);
RT_GLOBAL(0x05996fc0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad090, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023825a0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023825a0

// auto_setup_static_objects_02383010: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02383010 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059970c0, second_guard, uint8_t);
RT_GLOBAL(0x05997068, second_object, TargetedObject);
RT_GLOBAL(0x05997060, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad110, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02383010()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02383010

// auto_setup_static_objects_023847c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023847c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05997160, second_guard, uint8_t);
RT_GLOBAL(0x05997108, second_object, TargetedObject);
RT_GLOBAL(0x05997100, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad190, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023847c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023847c0

// auto_setup_static_objects_02385b90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02385b90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05997410, second_guard, uint8_t);
RT_GLOBAL(0x059973b8, second_object, TargetedObject);
RT_GLOBAL(0x059973b0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad450, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02385b90()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02385b90

// auto_setup_static_objects_02385d70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02385d70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059973a0, second_guard, uint8_t);
RT_GLOBAL(0x05997348, second_object, TargetedObject);
RT_GLOBAL(0x05997340, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad3d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02385d70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02385d70

// auto_setup_static_objects_02385f50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02385f50 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059972c0, second_guard, uint8_t);
RT_GLOBAL(0x05997268, second_object, TargetedObject);
RT_GLOBAL(0x05997260, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad2d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02385f50()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02385f50

// auto_setup_static_objects_0238a660: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0238a660 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059974f0, second_guard, uint8_t);
RT_GLOBAL(0x05997498, second_object, TargetedObject);
RT_GLOBAL(0x05997490, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad4d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0238a660()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0238a660

// auto_setup_static_objects_0238b460: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0238b460 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059975d0, second_guard, uint8_t);
RT_GLOBAL(0x05997578, second_object, TargetedObject);
RT_GLOBAL(0x05997570, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad5b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0238b460()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0238b460

// auto_setup_static_objects_0238bf20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0238bf20 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05997670, second_guard, uint8_t);
RT_GLOBAL(0x05997618, second_object, TargetedObject);
RT_GLOBAL(0x05997610, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad690, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0238bf20()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0238bf20

// auto_setup_static_objects_0238caa0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0238caa0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05997710, second_guard, uint8_t);
RT_GLOBAL(0x059976b8, second_object, TargetedObject);
RT_GLOBAL(0x059976b0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad710, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0238caa0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0238caa0

// auto_setup_static_objects_02390bb0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02390bb0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05997aa0, second_guard, uint8_t);
RT_GLOBAL(0x05997a48, second_object, TargetedObject);
RT_GLOBAL(0x05997a40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad9d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02390bb0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02390bb0

// auto_setup_static_objects_02390d90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02390d90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05997a30, second_guard, uint8_t);
RT_GLOBAL(0x059979d8, second_object, TargetedObject);
RT_GLOBAL(0x059979d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad950, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02390d90()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02390d90

// auto_setup_static_objects_02390f70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02390f70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05997950, second_guard, uint8_t);
RT_GLOBAL(0x059978f8, second_object, TargetedObject);
RT_GLOBAL(0x059978f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ad850, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02390f70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02390f70

// auto_setup_static_objects_02394ab0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02394ab0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05997cd8, second_guard, uint8_t);
RT_GLOBAL(0x05997c80, second_object, TargetedObject);
RT_GLOBAL(0x05997c78, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ada50, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02394ab0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02394ab0

// auto_setup_static_objects_02398160: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02398160 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05997fb0, second_guard, uint8_t);
RT_GLOBAL(0x05997f58, second_object, TargetedObject);
RT_GLOBAL(0x05997f50, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057add50, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02398160()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02398160

// auto_setup_static_objects_02398340: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02398340 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05997f40, second_guard, uint8_t);
RT_GLOBAL(0x05997ee8, second_object, TargetedObject);
RT_GLOBAL(0x05997ee0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057adcd0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02398340()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02398340

// auto_setup_static_objects_02398520: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02398520 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05997e60, second_guard, uint8_t);
RT_GLOBAL(0x05997e08, second_object, TargetedObject);
RT_GLOBAL(0x05997e00, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057adbd0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02398520()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02398520

// auto_setup_static_objects_0239c480: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0239c480 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998258, second_guard, uint8_t);
RT_GLOBAL(0x05998200, second_object, TargetedObject);
RT_GLOBAL(0x059981f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ae010, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0239c480()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0239c480

// auto_setup_static_objects_0239c660: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0239c660 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059981e8, second_guard, uint8_t);
RT_GLOBAL(0x05998190, second_object, TargetedObject);
RT_GLOBAL(0x05998188, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057adf90, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0239c660()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0239c660

// auto_setup_static_objects_0239c840: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0239c840 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998108, second_guard, uint8_t);
RT_GLOBAL(0x059980b0, second_object, TargetedObject);
RT_GLOBAL(0x059980a8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ade90, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0239c840()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0239c840

// auto_setup_static_objects_023a11c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023a11c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998600, second_guard, uint8_t);
RT_GLOBAL(0x059985a8, second_object, TargetedObject);
RT_GLOBAL(0x059985a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ae2d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023a11c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023a11c0

// auto_setup_static_objects_023a13a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023a13a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998590, second_guard, uint8_t);
RT_GLOBAL(0x05998538, second_object, TargetedObject);
RT_GLOBAL(0x05998530, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ae250, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023a13a0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023a13a0

// auto_setup_static_objects_023a1580: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023a1580 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059984b0, second_guard, uint8_t);
RT_GLOBAL(0x05998458, second_object, TargetedObject);
RT_GLOBAL(0x05998450, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ae150, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023a1580()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023a1580

// auto_setup_static_objects_023a46d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023a46d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998950, second_guard, uint8_t);
RT_GLOBAL(0x059988f8, second_object, TargetedObject);
RT_GLOBAL(0x059988f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ae590, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023a46d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023a46d0

// auto_setup_static_objects_023a48b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023a48b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059988e0, second_guard, uint8_t);
RT_GLOBAL(0x05998888, second_object, TargetedObject);
RT_GLOBAL(0x05998880, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ae510, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023a48b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023a48b0

// auto_setup_static_objects_023a4a90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023a4a90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998800, second_guard, uint8_t);
RT_GLOBAL(0x059987a8, second_object, TargetedObject);
RT_GLOBAL(0x059987a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ae410, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023a4a90()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023a4a90

// auto_setup_static_objects_023aa6d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023aa6d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998a40, second_guard, uint8_t);
RT_GLOBAL(0x059989e8, second_object, TargetedObject);
RT_GLOBAL(0x059989e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ae610, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023aa6d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023aa6d0

// auto_setup_static_objects_023ab370: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023ab370 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998c90, second_guard, uint8_t);
RT_GLOBAL(0x05998c38, second_object, TargetedObject);
RT_GLOBAL(0x05998c30, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ae8d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023ab370()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023ab370

// auto_setup_static_objects_023ab550: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023ab550 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998c20, second_guard, uint8_t);
RT_GLOBAL(0x05998bc8, second_object, TargetedObject);
RT_GLOBAL(0x05998bc0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ae850, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023ab550()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023ab550

// auto_setup_static_objects_023ab730: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023ab730 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998b40, second_guard, uint8_t);
RT_GLOBAL(0x05998ae8, second_object, TargetedObject);
RT_GLOBAL(0x05998ae0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ae750, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023ab730()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023ab730

// auto_setup_static_objects_023af4c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023af4c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998fe0, second_guard, uint8_t);
RT_GLOBAL(0x05998f88, second_object, TargetedObject);
RT_GLOBAL(0x05998f80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aeb90, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023af4c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023af4c0

// auto_setup_static_objects_023af6a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023af6a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998f70, second_guard, uint8_t);
RT_GLOBAL(0x05998f18, second_object, TargetedObject);
RT_GLOBAL(0x05998f10, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aeb10, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023af6a0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023af6a0

// auto_setup_static_objects_023af880: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023af880 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05998e90, second_guard, uint8_t);
RT_GLOBAL(0x05998e38, second_object, TargetedObject);
RT_GLOBAL(0x05998e30, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aea10, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023af880()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023af880

// auto_setup_static_objects_023cc8d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023cc8d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9ded8, second_guard, uint8_t);
RT_GLOBAL(0x05a9de80, second_object, TargetedObject);
RT_GLOBAL(0x05a9de78, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057af770, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023cc8d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023cc8d0

// auto_setup_static_objects_023ccab0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023ccab0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9ddf8, second_guard, uint8_t);
RT_GLOBAL(0x05a9dda0, second_object, TargetedObject);
RT_GLOBAL(0x05a9dd98, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057af670, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023ccab0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023ccab0

// auto_setup_static_objects_023ccc90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023ccc90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9dd88, second_guard, uint8_t);
RT_GLOBAL(0x05a9dd30, second_object, TargetedObject);
RT_GLOBAL(0x05a9dd28, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057af5f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023ccc90()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023ccc90

// auto_setup_static_objects_023d4800: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023d4800 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9e278, second_guard, uint8_t);
RT_GLOBAL(0x05a9e220, second_object, TargetedObject);
RT_GLOBAL(0x05a9e218, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057afb30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023d4800()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023d4800

// auto_setup_static_objects_023d49e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023d49e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9e208, second_guard, uint8_t);
RT_GLOBAL(0x05a9e1b0, second_object, TargetedObject);
RT_GLOBAL(0x05a9e1a8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057afab0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023d49e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023d49e0

// auto_setup_static_objects_023d4bc0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023d4bc0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9e128, second_guard, uint8_t);
RT_GLOBAL(0x05a9e0d0, second_object, TargetedObject);
RT_GLOBAL(0x05a9e0c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057af9b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023d4bc0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023d4bc0

// auto_setup_static_objects_023df030: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023df030 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9e7e8, second_guard, uint8_t);
RT_GLOBAL(0x05a9e790, second_object, TargetedObject);
RT_GLOBAL(0x05a9e788, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b0070, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023df030()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023df030

// auto_setup_static_objects_023df210: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023df210 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9e708, second_guard, uint8_t);
RT_GLOBAL(0x05a9e6b0, second_object, TargetedObject);
RT_GLOBAL(0x05a9e6a8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057aff70, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023df210()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023df210

// auto_setup_static_objects_023df3f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023df3f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9e698, second_guard, uint8_t);
RT_GLOBAL(0x05a9e640, second_object, TargetedObject);
RT_GLOBAL(0x05a9e638, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057afef0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023df3f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023df3f0

// auto_setup_static_objects_023e3500: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023e3500 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9e890, second_guard, uint8_t);
RT_GLOBAL(0x05a9e838, second_object, TargetedObject);
RT_GLOBAL(0x05a9e830, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b0160, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023e3500()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023e3500

// auto_setup_static_objects_023e8020: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023e8020 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9e9c0, second_guard, uint8_t);
RT_GLOBAL(0x05a9e968, second_object, TargetedObject);
RT_GLOBAL(0x05a9e960, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b01e0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023e8020()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023e8020

// auto_setup_static_objects_023fa4c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023fa4c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9ed60, second_guard, uint8_t);
RT_GLOBAL(0x05a9ed08, second_object, TargetedObject);
RT_GLOBAL(0x05a9ed00, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b0370, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023fa4c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023fa4c0

// auto_setup_static_objects_023fad90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023fad90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9ef40, second_guard, uint8_t);
RT_GLOBAL(0x05a9eee8, second_object, TargetedObject);
RT_GLOBAL(0x05a9eee0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b05b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023fad90()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023fad90

// auto_setup_static_objects_023faf70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023faf70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9eed0, second_guard, uint8_t);
RT_GLOBAL(0x05a9ee78, second_object, TargetedObject);
RT_GLOBAL(0x05a9ee70, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b0530, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023faf70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023faf70

// auto_setup_static_objects_023fb150: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_023fb150 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9ee60, second_guard, uint8_t);
RT_GLOBAL(0x05a9ee08, second_object, TargetedObject);
RT_GLOBAL(0x05a9ee00, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b04b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_023fb150()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_023fb150

// auto_setup_static_objects_02403e70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02403e70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9f220, second_guard, uint8_t);
RT_GLOBAL(0x05a9f1c8, second_object, TargetedObject);
RT_GLOBAL(0x05a9f1c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b0730, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02403e70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02403e70

// auto_setup_static_objects_02406c80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02406c80 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9f420, second_guard, uint8_t);
RT_GLOBAL(0x05a9f3c8, second_object, TargetedObject);
RT_GLOBAL(0x05a9f3c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b08f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02406c80()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02406c80

// auto_setup_static_objects_0240f2f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0240f2f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9f6f0, second_guard, uint8_t);
RT_GLOBAL(0x05a9f698, second_object, TargetedObject);
RT_GLOBAL(0x05a9f690, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b0bb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0240f2f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0240f2f0

// auto_setup_static_objects_0240f4d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0240f4d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9f680, second_guard, uint8_t);
RT_GLOBAL(0x05a9f628, second_object, TargetedObject);
RT_GLOBAL(0x05a9f620, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b0b30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0240f4d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0240f4d0

// auto_setup_static_objects_0240f6b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0240f6b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9f5a0, second_guard, uint8_t);
RT_GLOBAL(0x05a9f548, second_object, TargetedObject);
RT_GLOBAL(0x05a9f540, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b0a30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0240f6b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0240f6b0

// auto_setup_static_objects_024139f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_024139f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9f8f0, second_guard, uint8_t);
RT_GLOBAL(0x05a9f898, second_object, TargetedObject);
RT_GLOBAL(0x05a9f890, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b0d70, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_024139f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_024139f0

// auto_setup_static_objects_02413bd0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02413bd0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9f880, second_guard, uint8_t);
RT_GLOBAL(0x05a9f828, second_object, TargetedObject);
RT_GLOBAL(0x05a9f820, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b0cf0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02413bd0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02413bd0

// auto_setup_static_objects_0241a430: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0241a430 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9fda8, second_guard, uint8_t);
RT_GLOBAL(0x05a9fd50, second_object, TargetedObject);
RT_GLOBAL(0x05a9fd48, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b1080, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0241a430()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0241a430

// auto_setup_static_objects_0241a610: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0241a610 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9fd38, second_guard, uint8_t);
RT_GLOBAL(0x05a9fce0, second_object, TargetedObject);
RT_GLOBAL(0x05a9fcd8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b1000, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0241a610()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0241a610

// auto_setup_static_objects_0241a7f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0241a7f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9fc58, second_guard, uint8_t);
RT_GLOBAL(0x05a9fc00, second_object, TargetedObject);
RT_GLOBAL(0x05a9fbf8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b0f00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0241a7f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0241a7f0

// auto_setup_static_objects_0241fc60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0241fc60 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa00a8, second_guard, uint8_t);
RT_GLOBAL(0x05aa0050, second_object, TargetedObject);
RT_GLOBAL(0x05aa0048, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b13d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0241fc60()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0241fc60

// auto_setup_static_objects_0241fe40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0241fe40 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9ffc8, second_guard, uint8_t);
RT_GLOBAL(0x05a9ff70, second_object, TargetedObject);
RT_GLOBAL(0x05a9ff68, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b12d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0241fe40()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0241fe40

// auto_setup_static_objects_02420020: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02420020 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05a9ff58, second_guard, uint8_t);
RT_GLOBAL(0x05a9ff00, second_object, TargetedObject);
RT_GLOBAL(0x05a9fef8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b1250, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02420020()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02420020

// auto_setup_static_objects_02426890: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02426890 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa04f0, second_guard, uint8_t);
RT_GLOBAL(0x05aa0498, second_object, TargetedObject);
RT_GLOBAL(0x05aa0490, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b1730, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02426890()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02426890

// auto_setup_static_objects_02426a70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02426a70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa0480, second_guard, uint8_t);
RT_GLOBAL(0x05aa0428, second_object, TargetedObject);
RT_GLOBAL(0x05aa0420, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b16b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02426a70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02426a70

// auto_setup_static_objects_02426c50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02426c50 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa03a0, second_guard, uint8_t);
RT_GLOBAL(0x05aa0348, second_object, TargetedObject);
RT_GLOBAL(0x05aa0340, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b15b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02426c50()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02426c50

// auto_setup_static_objects_0242db10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0242db10 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa0750, second_guard, uint8_t);
RT_GLOBAL(0x05aa06f8, second_object, TargetedObject);
RT_GLOBAL(0x05aa06f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b1930, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0242db10()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0242db10

// auto_setup_static_objects_0242dcf0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0242dcf0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa0750, second_guard, uint8_t);
RT_GLOBAL(0x05aa06f8, second_object, TargetedObject);
RT_GLOBAL(0x05aa06f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b1930, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0242dcf0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0242dcf0

// auto_setup_static_objects_0242fea0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0242fea0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa0870, second_guard, uint8_t);
RT_GLOBAL(0x05aa0818, second_object, TargetedObject);
RT_GLOBAL(0x05aa0810, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b19b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0242fea0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0242fea0

// auto_setup_static_objects_024574a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_024574a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa17f8, second_guard, uint8_t);
RT_GLOBAL(0x05aa17a0, second_object, TargetedObject);
RT_GLOBAL(0x05aa1798, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b2430, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_024574a0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_024574a0

// auto_setup_static_objects_02457680: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02457680 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa1788, second_guard, uint8_t);
RT_GLOBAL(0x05aa1730, second_object, TargetedObject);
RT_GLOBAL(0x05aa1728, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b23b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02457680()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02457680

// auto_setup_static_objects_02457860: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02457860 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa16a8, second_guard, uint8_t);
RT_GLOBAL(0x05aa1650, second_object, TargetedObject);
RT_GLOBAL(0x05aa1648, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b22b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02457860()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02457860

// auto_setup_static_objects_0245f970: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0245f970 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa19a0, second_guard, uint8_t);
RT_GLOBAL(0x05aa1948, second_object, TargetedObject);
RT_GLOBAL(0x05aa1940, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b2590, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0245f970()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0245f970

// auto_setup_static_objects_02460880: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02460880 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa1a40, second_guard, uint8_t);
RT_GLOBAL(0x05aa19e8, second_object, TargetedObject);
RT_GLOBAL(0x05aa19e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b2610, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02460880()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02460880

// auto_setup_static_objects_0248c310: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0248c310 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa2648, second_guard, uint8_t);
RT_GLOBAL(0x05aa25f0, second_object, TargetedObject);
RT_GLOBAL(0x05aa25e8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b32b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0248c310()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0248c310

// auto_setup_static_objects_02493580: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02493580 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa26d8, second_guard, uint8_t);
RT_GLOBAL(0x05aa2680, second_object, TargetedObject);
RT_GLOBAL(0x05aa2678, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b3380, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02493580()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02493580

// auto_setup_static_objects_02493760: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02493760 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa26d8, second_guard, uint8_t);
RT_GLOBAL(0x05aa2680, second_object, TargetedObject);
RT_GLOBAL(0x05aa2678, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b3380, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02493760()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02493760

// auto_setup_static_objects_02496950: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02496950 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa31a0, second_guard, uint8_t);
RT_GLOBAL(0x05aa3148, second_object, TargetedObject);
RT_GLOBAL(0x05aa3140, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b3470, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02496950()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02496950

// auto_setup_static_objects_02496b30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02496b30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa31a0, second_guard, uint8_t);
RT_GLOBAL(0x05aa3148, second_object, TargetedObject);
RT_GLOBAL(0x05aa3140, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b3470, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02496b30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02496b30

// auto_setup_static_objects_02499480: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02499480 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa3298, second_guard, uint8_t);
RT_GLOBAL(0x05aa3240, second_object, TargetedObject);
RT_GLOBAL(0x05aa3238, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b3560, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02499480()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02499480

// auto_setup_static_objects_0249d020: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0249d020 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa3348, second_guard, uint8_t);
RT_GLOBAL(0x05aa32f0, second_object, TargetedObject);
RT_GLOBAL(0x05aa32e8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b3730, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0249d020()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0249d020

// auto_setup_static_objects_0249f6b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0249f6b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa3410, second_guard, uint8_t);
RT_GLOBAL(0x05aa33b8, second_object, TargetedObject);
RT_GLOBAL(0x05aa33b0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b3830, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0249f6b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0249f6b0

// auto_setup_static_objects_0249f890: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0249f890 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa3410, second_guard, uint8_t);
RT_GLOBAL(0x05aa33b8, second_object, TargetedObject);
RT_GLOBAL(0x05aa33b0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b3830, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0249f890()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0249f890
