// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_setup_static_objects_02243d30, in game/misc/setup_static_objects_02243d30.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"

// auto_setup_static_objects_01a71c40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a71c40 {

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
RT_GLOBAL(0x0595d1a0, second_guard, uint8_t);
RT_GLOBAL(0x0595d148, second_object, TargetedObject);
RT_GLOBAL(0x0595d140, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577a4b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a71c40()
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

}  // namespace twin_01a71c40

// auto_setup_static_objects_01a72fe0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a72fe0 {

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
RT_GLOBAL(0x0595d258, second_guard, uint8_t);
RT_GLOBAL(0x0595d200, second_object, TargetedObject);
RT_GLOBAL(0x0595d1f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577a620, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a72fe0()
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

}  // namespace twin_01a72fe0

// auto_setup_static_objects_01a74600: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a74600 {

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
RT_GLOBAL(0x0595d310, second_guard, uint8_t);
RT_GLOBAL(0x0595d2b8, second_object, TargetedObject);
RT_GLOBAL(0x0595d2b0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577a790, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a74600()
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

}  // namespace twin_01a74600

// auto_setup_static_objects_01a75cd0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a75cd0 {

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
RT_GLOBAL(0x0595d448, second_guard, uint8_t);
RT_GLOBAL(0x0595d3f0, second_object, TargetedObject);
RT_GLOBAL(0x0595d3e8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577a930, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a75cd0()
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

}  // namespace twin_01a75cd0

// auto_setup_static_objects_01a77c40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a77c40 {

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
RT_GLOBAL(0x0595d500, second_guard, uint8_t);
RT_GLOBAL(0x0595d4a8, second_object, TargetedObject);
RT_GLOBAL(0x0595d4a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577aaa0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a77c40()
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

}  // namespace twin_01a77c40

// auto_setup_static_objects_01a79440: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a79440 {

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
RT_GLOBAL(0x0595d5c0, second_guard, uint8_t);
RT_GLOBAL(0x0595d568, second_object, TargetedObject);
RT_GLOBAL(0x0595d560, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577ac40, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a79440()
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

}  // namespace twin_01a79440

// auto_setup_static_objects_01a7a8e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a7a8e0 {

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
RT_GLOBAL(0x0595d678, second_guard, uint8_t);
RT_GLOBAL(0x0595d620, second_object, TargetedObject);
RT_GLOBAL(0x0595d618, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577add0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a7a8e0()
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

}  // namespace twin_01a7a8e0

// auto_setup_static_objects_01a7bd10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a7bd10 {

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
RT_GLOBAL(0x0595d748, second_guard, uint8_t);
RT_GLOBAL(0x0595d6f0, second_object, TargetedObject);
RT_GLOBAL(0x0595d6e8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577afe0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a7bd10()
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

}  // namespace twin_01a7bd10

// auto_setup_static_objects_01a800b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a800b0 {

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
RT_GLOBAL(0x0595d808, second_guard, uint8_t);
RT_GLOBAL(0x0595d7b0, second_object, TargetedObject);
RT_GLOBAL(0x0595d7a8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577b180, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a800b0()
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

}  // namespace twin_01a800b0

// auto_setup_static_objects_01a825a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a825a0 {

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
RT_GLOBAL(0x0595d8c8, second_guard, uint8_t);
RT_GLOBAL(0x0595d870, second_object, TargetedObject);
RT_GLOBAL(0x0595d868, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577b320, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a825a0()
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

}  // namespace twin_01a825a0

// auto_setup_static_objects_01a83ed0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a83ed0 {

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
RT_GLOBAL(0x0595d988, second_guard, uint8_t);
RT_GLOBAL(0x0595d930, second_object, TargetedObject);
RT_GLOBAL(0x0595d928, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577b490, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a83ed0()
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

}  // namespace twin_01a83ed0

// auto_setup_static_objects_01a854e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a854e0 {

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
RT_GLOBAL(0x0595da58, second_guard, uint8_t);
RT_GLOBAL(0x0595da00, second_object, TargetedObject);
RT_GLOBAL(0x0595d9f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577b6a0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a854e0()
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

}  // namespace twin_01a854e0

// auto_setup_static_objects_01a87ed0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a87ed0 {

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
RT_GLOBAL(0x0595dba0, second_guard, uint8_t);
RT_GLOBAL(0x0595db48, second_object, TargetedObject);
RT_GLOBAL(0x0595db40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577b9e0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a87ed0()
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

}  // namespace twin_01a87ed0

// auto_setup_static_objects_01a880b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a880b0 {

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
RT_GLOBAL(0x0595db30, second_guard, uint8_t);
RT_GLOBAL(0x0595dad8, second_object, TargetedObject);
RT_GLOBAL(0x0595dad0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577b960, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a880b0()
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

}  // namespace twin_01a880b0

// auto_setup_static_objects_01a8bca0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a8bca0 {

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
RT_GLOBAL(0x0595dc50, second_guard, uint8_t);
RT_GLOBAL(0x0595dbf8, second_object, TargetedObject);
RT_GLOBAL(0x0595dbf0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577bb80, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a8bca0()
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

}  // namespace twin_01a8bca0

// auto_setup_static_objects_01a8d540: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a8d540 {

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
RT_GLOBAL(0x0595dd48, second_guard, uint8_t);
RT_GLOBAL(0x0595dcf0, second_object, TargetedObject);
RT_GLOBAL(0x0595dce8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577bd20, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a8d540()
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

}  // namespace twin_01a8d540

// auto_setup_static_objects_01a8ea60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a8ea60 {

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
RT_GLOBAL(0x0595de18, second_guard, uint8_t);
RT_GLOBAL(0x0595ddc0, second_object, TargetedObject);
RT_GLOBAL(0x0595ddb8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577bec0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a8ea60()
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

}  // namespace twin_01a8ea60

// auto_setup_static_objects_01a90390: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a90390 {

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
RT_GLOBAL(0x0595ded8, second_guard, uint8_t);
RT_GLOBAL(0x0595de80, second_object, TargetedObject);
RT_GLOBAL(0x0595de78, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577c0b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a90390()
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

}  // namespace twin_01a90390

// auto_setup_static_objects_01a91a30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a91a30 {

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
RT_GLOBAL(0x0595df98, second_guard, uint8_t);
RT_GLOBAL(0x0595df40, second_object, TargetedObject);
RT_GLOBAL(0x0595df38, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577c2a0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a91a30()
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

}  // namespace twin_01a91a30

// auto_setup_static_objects_01a92f70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a92f70 {

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
RT_GLOBAL(0x0595e058, second_guard, uint8_t);
RT_GLOBAL(0x0595e000, second_object, TargetedObject);
RT_GLOBAL(0x0595dff8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577c490, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a92f70()
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

}  // namespace twin_01a92f70

// auto_setup_static_objects_01a93150: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a93150 {

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
RT_GLOBAL(0x0595e058, second_guard, uint8_t);
RT_GLOBAL(0x0595e000, second_object, TargetedObject);
RT_GLOBAL(0x0595dff8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577c490, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a93150()
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

}  // namespace twin_01a93150

// auto_setup_static_objects_01a95350: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a95350 {

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
RT_GLOBAL(0x0595e158, second_guard, uint8_t);
RT_GLOBAL(0x0595e100, second_object, TargetedObject);
RT_GLOBAL(0x0595e0f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577c630, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a95350()
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

}  // namespace twin_01a95350

// auto_setup_static_objects_01a96c90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a96c90 {

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
RT_GLOBAL(0x0595e2d0, second_guard, uint8_t);
RT_GLOBAL(0x0595e278, second_object, TargetedObject);
RT_GLOBAL(0x0595e270, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577c7d0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a96c90()
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

}  // namespace twin_01a96c90

// auto_setup_static_objects_01a98210: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a98210 {

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
RT_GLOBAL(0x0595e388, second_guard, uint8_t);
RT_GLOBAL(0x0595e330, second_object, TargetedObject);
RT_GLOBAL(0x0595e328, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577c970, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a98210()
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

}  // namespace twin_01a98210

// auto_setup_static_objects_01a99f70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a99f70 {

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
RT_GLOBAL(0x0595e458, second_guard, uint8_t);
RT_GLOBAL(0x0595e400, second_object, TargetedObject);
RT_GLOBAL(0x0595e3f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577cb40, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a99f70()
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

}  // namespace twin_01a99f70

// auto_setup_static_objects_01a9dc70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a9dc70 {

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
RT_GLOBAL(0x0595e528, second_guard, uint8_t);
RT_GLOBAL(0x0595e4d0, second_object, TargetedObject);
RT_GLOBAL(0x0595e4c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577ccf0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a9dc70()
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

}  // namespace twin_01a9dc70

// auto_setup_static_objects_01a9f1d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01a9f1d0 {

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
RT_GLOBAL(0x0595e5f8, second_guard, uint8_t);
RT_GLOBAL(0x0595e5a0, second_object, TargetedObject);
RT_GLOBAL(0x0595e598, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577ce90, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01a9f1d0()
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

}  // namespace twin_01a9f1d0

// auto_setup_static_objects_01aa1d20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01aa1d20 {

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
RT_GLOBAL(0x0595e6c8, second_guard, uint8_t);
RT_GLOBAL(0x0595e670, second_object, TargetedObject);
RT_GLOBAL(0x0595e668, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577d030, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01aa1d20()
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

}  // namespace twin_01aa1d20

// auto_setup_static_objects_01aa6060: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01aa6060 {

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
RT_GLOBAL(0x0595e798, second_guard, uint8_t);
RT_GLOBAL(0x0595e740, second_object, TargetedObject);
RT_GLOBAL(0x0595e738, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577d1d0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01aa6060()
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

}  // namespace twin_01aa6060

// auto_setup_static_objects_01aa83a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01aa83a0 {

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
RT_GLOBAL(0x0595e958, second_guard, uint8_t);
RT_GLOBAL(0x0595e900, second_object, TargetedObject);
RT_GLOBAL(0x0595e8f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577d370, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01aa83a0()
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

}  // namespace twin_01aa83a0

// auto_setup_static_objects_01aaa4b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01aaa4b0 {

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
RT_GLOBAL(0x0595ea58, second_guard, uint8_t);
RT_GLOBAL(0x0595ea00, second_object, TargetedObject);
RT_GLOBAL(0x0595e9f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577d510, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01aaa4b0()
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

}  // namespace twin_01aaa4b0

// auto_setup_static_objects_01aab960: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01aab960 {

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
RT_GLOBAL(0x0595eb20, second_guard, uint8_t);
RT_GLOBAL(0x0595eac8, second_object, TargetedObject);
RT_GLOBAL(0x0595eac0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577d6b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01aab960()
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

}  // namespace twin_01aab960

// auto_setup_static_objects_01aae0f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01aae0f0 {

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
RT_GLOBAL(0x0595ebd8, second_guard, uint8_t);
RT_GLOBAL(0x0595eb80, second_object, TargetedObject);
RT_GLOBAL(0x0595eb78, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577d850, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01aae0f0()
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

}  // namespace twin_01aae0f0

// auto_setup_static_objects_01aae2d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01aae2d0 {

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
RT_GLOBAL(0x0595ebd8, second_guard, uint8_t);
RT_GLOBAL(0x0595eb80, second_object, TargetedObject);
RT_GLOBAL(0x0595eb78, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577d850, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01aae2d0()
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

}  // namespace twin_01aae2d0

// auto_setup_static_objects_01aaf6b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01aaf6b0 {

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
RT_GLOBAL(0x0595ec98, second_guard, uint8_t);
RT_GLOBAL(0x0595ec40, second_object, TargetedObject);
RT_GLOBAL(0x0595ec38, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577d9f0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01aaf6b0()
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

}  // namespace twin_01aaf6b0

// auto_setup_static_objects_01ab0d40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ab0d40 {

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
RT_GLOBAL(0x0595ed58, second_guard, uint8_t);
RT_GLOBAL(0x0595ed00, second_object, TargetedObject);
RT_GLOBAL(0x0595ecf8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577dbc0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ab0d40()
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

}  // namespace twin_01ab0d40

// auto_setup_static_objects_01ab3110: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ab3110 {

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
RT_GLOBAL(0x0595ee18, second_guard, uint8_t);
RT_GLOBAL(0x0595edc0, second_object, TargetedObject);
RT_GLOBAL(0x0595edb8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577dd60, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ab3110()
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

}  // namespace twin_01ab3110

// auto_setup_static_objects_01ab4830: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ab4830 {

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
RT_GLOBAL(0x0595eef8, second_guard, uint8_t);
RT_GLOBAL(0x0595eea0, second_object, TargetedObject);
RT_GLOBAL(0x0595ee98, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577df70, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ab4830()
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

}  // namespace twin_01ab4830

// auto_setup_static_objects_01ab6cf0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ab6cf0 {

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
RT_GLOBAL(0x0595efb8, second_guard, uint8_t);
RT_GLOBAL(0x0595ef60, second_object, TargetedObject);
RT_GLOBAL(0x0595ef58, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577e100, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ab6cf0()
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

}  // namespace twin_01ab6cf0

// auto_setup_static_objects_01ab89b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ab89b0 {

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
RT_GLOBAL(0x0595f1c0, second_guard, uint8_t);
RT_GLOBAL(0x0595f168, second_object, TargetedObject);
RT_GLOBAL(0x0595f160, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577e440, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ab89b0()
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

}  // namespace twin_01ab89b0

// auto_setup_static_objects_01ab8b90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ab8b90 {

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
RT_GLOBAL(0x0595f150, second_guard, uint8_t);
RT_GLOBAL(0x0595f0f8, second_object, TargetedObject);
RT_GLOBAL(0x0595f0f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577e3c0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ab8b90()
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

}  // namespace twin_01ab8b90

// auto_setup_static_objects_01abf080: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01abf080 {

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
RT_GLOBAL(0x0595f388, second_guard, uint8_t);
RT_GLOBAL(0x0595f330, second_object, TargetedObject);
RT_GLOBAL(0x0595f328, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577e670, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01abf080()
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

}  // namespace twin_01abf080

// auto_setup_static_objects_01ac0540: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ac0540 {

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
RT_GLOBAL(0x0595f448, second_guard, uint8_t);
RT_GLOBAL(0x0595f3f0, second_object, TargetedObject);
RT_GLOBAL(0x0595f3e8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577e840, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ac0540()
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

}  // namespace twin_01ac0540

// auto_setup_static_objects_01ac32d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ac32d0 {

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
RT_GLOBAL(0x0595f508, second_guard, uint8_t);
RT_GLOBAL(0x0595f4b0, second_object, TargetedObject);
RT_GLOBAL(0x0595f4a8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577e9e0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ac32d0()
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

}  // namespace twin_01ac32d0

// auto_setup_static_objects_01ac5490: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ac5490 {

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
RT_GLOBAL(0x0595f5c8, second_guard, uint8_t);
RT_GLOBAL(0x0595f570, second_object, TargetedObject);
RT_GLOBAL(0x0595f568, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577ec20, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ac5490()
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

}  // namespace twin_01ac5490

// auto_setup_static_objects_01ac7450: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ac7450 {

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
RT_GLOBAL(0x0595f688, second_guard, uint8_t);
RT_GLOBAL(0x0595f630, second_object, TargetedObject);
RT_GLOBAL(0x0595f628, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577edc0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ac7450()
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

}  // namespace twin_01ac7450

// auto_setup_static_objects_01ac9a10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ac9a10 {

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
RT_GLOBAL(0x0595f748, second_guard, uint8_t);
RT_GLOBAL(0x0595f6f0, second_object, TargetedObject);
RT_GLOBAL(0x0595f6e8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577ef60, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ac9a10()
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

}  // namespace twin_01ac9a10

// auto_setup_static_objects_01acc460: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01acc460 {

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
RT_GLOBAL(0x0595f800, second_guard, uint8_t);
RT_GLOBAL(0x0595f7a8, second_object, TargetedObject);
RT_GLOBAL(0x0595f7a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577f100, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01acc460()
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

}  // namespace twin_01acc460

// auto_setup_static_objects_01acdab0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01acdab0 {

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
RT_GLOBAL(0x0595f8b0, second_guard, uint8_t);
RT_GLOBAL(0x0595f858, second_object, TargetedObject);
RT_GLOBAL(0x0595f850, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577f2a0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01acdab0()
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

}  // namespace twin_01acdab0

// auto_setup_static_objects_01acf340: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01acf340 {

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
RT_GLOBAL(0x0595f960, second_guard, uint8_t);
RT_GLOBAL(0x0595f908, second_object, TargetedObject);
RT_GLOBAL(0x0595f900, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577f440, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01acf340()
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

}  // namespace twin_01acf340

// auto_setup_static_objects_01ad0900: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ad0900 {

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
RT_GLOBAL(0x0595fa18, second_guard, uint8_t);
RT_GLOBAL(0x0595f9c0, second_object, TargetedObject);
RT_GLOBAL(0x0595f9b8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577f5e0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ad0900()
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

}  // namespace twin_01ad0900

// auto_setup_static_objects_01ad5140: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ad5140 {

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
RT_GLOBAL(0x0595fe78, second_guard, uint8_t);
RT_GLOBAL(0x0595fe20, second_object, TargetedObject);
RT_GLOBAL(0x0595fe18, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577f9f0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ad5140()
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

}  // namespace twin_01ad5140

// auto_setup_static_objects_01ad6710: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ad6710 {

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
RT_GLOBAL(0x0595ff38, second_guard, uint8_t);
RT_GLOBAL(0x0595fee0, second_object, TargetedObject);
RT_GLOBAL(0x0595fed8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577fb90, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ad6710()
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

}  // namespace twin_01ad6710

// auto_setup_static_objects_01ad8d50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ad8d50 {

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
RT_GLOBAL(0x05960048, second_guard, uint8_t);
RT_GLOBAL(0x0595fff0, second_object, TargetedObject);
RT_GLOBAL(0x0595ffe8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577fda0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ad8d50()
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

}  // namespace twin_01ad8d50

// auto_setup_static_objects_01addfe0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01addfe0 {

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
RT_GLOBAL(0x05960198, second_guard, uint8_t);
RT_GLOBAL(0x05960140, second_object, TargetedObject);
RT_GLOBAL(0x05960138, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0577ffd0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01addfe0()
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

}  // namespace twin_01addfe0

// auto_setup_static_objects_01adfa30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01adfa30 {

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
RT_GLOBAL(0x05960270, second_guard, uint8_t);
RT_GLOBAL(0x05960218, second_object, TargetedObject);
RT_GLOBAL(0x05960210, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057802b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01adfa30()
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

}  // namespace twin_01adfa30

// auto_setup_static_objects_01ae6b30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ae6b30 {

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
RT_GLOBAL(0x05960390, second_guard, uint8_t);
RT_GLOBAL(0x05960338, second_object, TargetedObject);
RT_GLOBAL(0x05960330, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05780470, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ae6b30()
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

}  // namespace twin_01ae6b30

// auto_setup_static_objects_01ae9630: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ae9630 {

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
RT_GLOBAL(0x05960458, second_guard, uint8_t);
RT_GLOBAL(0x05960400, second_object, TargetedObject);
RT_GLOBAL(0x059603f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05780610, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ae9630()
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

}  // namespace twin_01ae9630

// auto_setup_static_objects_01aeaef0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01aeaef0 {

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
RT_GLOBAL(0x05960518, second_guard, uint8_t);
RT_GLOBAL(0x059604c0, second_object, TargetedObject);
RT_GLOBAL(0x059604b8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057807b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01aeaef0()
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

}  // namespace twin_01aeaef0

// auto_setup_static_objects_01aec840: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01aec840 {

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
RT_GLOBAL(0x05960658, second_guard, uint8_t);
RT_GLOBAL(0x05960600, second_object, TargetedObject);
RT_GLOBAL(0x059605f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05780b90, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01aec840()
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

}  // namespace twin_01aec840

// auto_setup_static_objects_01aeca20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01aeca20 {

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
RT_GLOBAL(0x059605e8, second_guard, uint8_t);
RT_GLOBAL(0x05960590, second_object, TargetedObject);
RT_GLOBAL(0x05960588, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05780b10, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01aeca20()
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

}  // namespace twin_01aeca20

// auto_setup_static_objects_01af3290: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01af3290 {

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
RT_GLOBAL(0x05960718, second_guard, uint8_t);
RT_GLOBAL(0x059606c0, second_object, TargetedObject);
RT_GLOBAL(0x059606b8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05780d30, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01af3290()
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

}  // namespace twin_01af3290

// auto_setup_static_objects_01af5c80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01af5c80 {

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
RT_GLOBAL(0x059607d8, second_guard, uint8_t);
RT_GLOBAL(0x05960780, second_object, TargetedObject);
RT_GLOBAL(0x05960778, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05780ed0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01af5c80()
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

}  // namespace twin_01af5c80

// auto_setup_static_objects_01afd170: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01afd170 {

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
RT_GLOBAL(0x05960c58, second_guard, uint8_t);
RT_GLOBAL(0x05960c00, second_object, TargetedObject);
RT_GLOBAL(0x05960bf8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057810d0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01afd170()
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

}  // namespace twin_01afd170

// auto_setup_static_objects_01afe600: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01afe600 {

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
RT_GLOBAL(0x05960d58, second_guard, uint8_t);
RT_GLOBAL(0x05960d00, second_object, TargetedObject);
RT_GLOBAL(0x05960cf8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057812e0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01afe600()
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

}  // namespace twin_01afe600

// auto_setup_static_objects_01b01280: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b01280 {

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
RT_GLOBAL(0x05960e18, second_guard, uint8_t);
RT_GLOBAL(0x05960dc0, second_object, TargetedObject);
RT_GLOBAL(0x05960db8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05781560, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b01280()
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

}  // namespace twin_01b01280

// auto_setup_static_objects_01b05b20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b05b20 {

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
RT_GLOBAL(0x05960ed8, second_guard, uint8_t);
RT_GLOBAL(0x05960e80, second_object, TargetedObject);
RT_GLOBAL(0x05960e78, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05781770, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b05b20()
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

}  // namespace twin_01b05b20

// auto_setup_static_objects_01b098c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b098c0 {

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
RT_GLOBAL(0x05961058, second_guard, uint8_t);
RT_GLOBAL(0x05961000, second_object, TargetedObject);
RT_GLOBAL(0x05960ff8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05781980, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b098c0()
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

}  // namespace twin_01b098c0

// auto_setup_static_objects_01b0d6d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b0d6d0 {

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
RT_GLOBAL(0x05961118, second_guard, uint8_t);
RT_GLOBAL(0x059610c0, second_object, TargetedObject);
RT_GLOBAL(0x059610b8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05781bc0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b0d6d0()
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

}  // namespace twin_01b0d6d0

// auto_setup_static_objects_01b0fc40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b0fc40 {

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
RT_GLOBAL(0x059612d8, second_guard, uint8_t);
RT_GLOBAL(0x05961280, second_object, TargetedObject);
RT_GLOBAL(0x05961278, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05781e00, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b0fc40()
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

}  // namespace twin_01b0fc40

// auto_setup_static_objects_01b13730: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b13730 {

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
RT_GLOBAL(0x059613d8, second_guard, uint8_t);
RT_GLOBAL(0x05961380, second_object, TargetedObject);
RT_GLOBAL(0x05961378, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05781fa0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b13730()
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

}  // namespace twin_01b13730

// auto_setup_static_objects_01b14ec0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b14ec0 {

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
RT_GLOBAL(0x05961498, second_guard, uint8_t);
RT_GLOBAL(0x05961440, second_object, TargetedObject);
RT_GLOBAL(0x05961438, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05782220, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b14ec0()
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

}  // namespace twin_01b14ec0

// auto_setup_static_objects_01b19bd0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b19bd0 {

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
RT_GLOBAL(0x05961598, second_guard, uint8_t);
RT_GLOBAL(0x05961540, second_object, TargetedObject);
RT_GLOBAL(0x05961538, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057823f0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b19bd0()
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

}  // namespace twin_01b19bd0

// auto_setup_static_objects_01b1d0f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b1d0f0 {

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
RT_GLOBAL(0x05961698, second_guard, uint8_t);
RT_GLOBAL(0x05961640, second_object, TargetedObject);
RT_GLOBAL(0x05961638, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05782590, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b1d0f0()
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

}  // namespace twin_01b1d0f0

// auto_setup_static_objects_01b1f330: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b1f330 {

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
RT_GLOBAL(0x059617d8, second_guard, uint8_t);
RT_GLOBAL(0x05961780, second_object, TargetedObject);
RT_GLOBAL(0x05961778, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05782870, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b1f330()
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

}  // namespace twin_01b1f330

// auto_setup_static_objects_01b26ed0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b26ed0 {

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
RT_GLOBAL(0x059618b0, second_guard, uint8_t);
RT_GLOBAL(0x05961858, second_object, TargetedObject);
RT_GLOBAL(0x05961850, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05782a10, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b26ed0()
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

}  // namespace twin_01b26ed0

// auto_setup_static_objects_01b29a20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b29a20 {

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
RT_GLOBAL(0x05961970, second_guard, uint8_t);
RT_GLOBAL(0x05961918, second_object, TargetedObject);
RT_GLOBAL(0x05961910, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05782cf0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b29a20()
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

}  // namespace twin_01b29a20

// auto_setup_static_objects_01b2f620: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b2f620 {

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
RT_GLOBAL(0x05961a68, second_guard, uint8_t);
RT_GLOBAL(0x05961a10, second_object, TargetedObject);
RT_GLOBAL(0x05961a08, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05782ea0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b2f620()
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

}  // namespace twin_01b2f620

// auto_setup_static_objects_01b313b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b313b0 {

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
RT_GLOBAL(0x05961b78, second_guard, uint8_t);
RT_GLOBAL(0x05961b20, second_object, TargetedObject);
RT_GLOBAL(0x05961b18, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05783040, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b313b0()
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

}  // namespace twin_01b313b0

// auto_setup_static_objects_01b328a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b328a0 {

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
RT_GLOBAL(0x05961c50, second_guard, uint8_t);
RT_GLOBAL(0x05961bf8, second_object, TargetedObject);
RT_GLOBAL(0x05961bf0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05783320, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b328a0()
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

}  // namespace twin_01b328a0

// auto_setup_static_objects_01b3c160: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b3c160 {

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
RT_GLOBAL(0x05961d10, second_guard, uint8_t);
RT_GLOBAL(0x05961cb8, second_object, TargetedObject);
RT_GLOBAL(0x05961cb0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05783600, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b3c160()
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

}  // namespace twin_01b3c160

// auto_setup_static_objects_01b41420: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b41420 {

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
RT_GLOBAL(0x05961de0, second_guard, uint8_t);
RT_GLOBAL(0x05961d88, second_object, TargetedObject);
RT_GLOBAL(0x05961d80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057838e0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b41420()
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

}  // namespace twin_01b41420

// auto_setup_static_objects_01b461c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b461c0 {

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
RT_GLOBAL(0x05961e98, second_guard, uint8_t);
RT_GLOBAL(0x05961e40, second_object, TargetedObject);
RT_GLOBAL(0x05961e38, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05783ab0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b461c0()
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

}  // namespace twin_01b461c0

// auto_setup_static_objects_01b48480: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b48480 {

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
RT_GLOBAL(0x05961fd8, second_guard, uint8_t);
RT_GLOBAL(0x05961f80, second_object, TargetedObject);
RT_GLOBAL(0x05961f78, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05783c50, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b48480()
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

}  // namespace twin_01b48480

// auto_setup_static_objects_01b4a320: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b4a320 {

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
RT_GLOBAL(0x05962098, second_guard, uint8_t);
RT_GLOBAL(0x05962040, second_object, TargetedObject);
RT_GLOBAL(0x05962038, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05783df0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b4a320()
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

}  // namespace twin_01b4a320

// auto_setup_static_objects_01b4c0c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b4c0c0 {

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
RT_GLOBAL(0x05962168, second_guard, uint8_t);
RT_GLOBAL(0x05962110, second_object, TargetedObject);
RT_GLOBAL(0x05962108, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05783fa0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b4c0c0()
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

}  // namespace twin_01b4c0c0

// auto_setup_static_objects_01b4c2a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b4c2a0 {

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
RT_GLOBAL(0x05962168, second_guard, uint8_t);
RT_GLOBAL(0x05962110, second_object, TargetedObject);
RT_GLOBAL(0x05962108, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05783fa0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b4c2a0()
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

}  // namespace twin_01b4c2a0

// auto_setup_static_objects_01b4e8f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b4e8f0 {

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
RT_GLOBAL(0x059622a8, second_guard, uint8_t);
RT_GLOBAL(0x05962250, second_object, TargetedObject);
RT_GLOBAL(0x05962248, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05784160, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b4e8f0()
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

}  // namespace twin_01b4e8f0

// auto_setup_static_objects_01b56080: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b56080 {

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
RT_GLOBAL(0x059623c8, second_guard, uint8_t);
RT_GLOBAL(0x05962370, second_object, TargetedObject);
RT_GLOBAL(0x05962368, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057843a0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b56080()
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

}  // namespace twin_01b56080

// auto_setup_static_objects_01b58050: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b58050 {

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
RT_GLOBAL(0x05962498, second_guard, uint8_t);
RT_GLOBAL(0x05962440, second_object, TargetedObject);
RT_GLOBAL(0x05962438, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05784540, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b58050()
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

}  // namespace twin_01b58050

// auto_setup_static_objects_01b5f010: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b5f010 {

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
RT_GLOBAL(0x05962750, second_guard, uint8_t);
RT_GLOBAL(0x059626f8, second_object, TargetedObject);
RT_GLOBAL(0x059626f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057848b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b5f010()
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

}  // namespace twin_01b5f010

// auto_setup_static_objects_01b5f1f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b5f1f0 {

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
RT_GLOBAL(0x05962750, second_guard, uint8_t);
RT_GLOBAL(0x059626f8, second_object, TargetedObject);
RT_GLOBAL(0x059626f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057848b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b5f1f0()
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

}  // namespace twin_01b5f1f0

// auto_setup_static_objects_01b5f3d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b5f3d0 {

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
RT_GLOBAL(0x059626e0, second_guard, uint8_t);
RT_GLOBAL(0x05962688, second_object, TargetedObject);
RT_GLOBAL(0x05962680, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05784830, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b5f3d0()
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

}  // namespace twin_01b5f3d0

// auto_setup_static_objects_01b5f5b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b5f5b0 {

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
RT_GLOBAL(0x059626e0, second_guard, uint8_t);
RT_GLOBAL(0x05962688, second_object, TargetedObject);
RT_GLOBAL(0x05962680, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05784830, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b5f5b0()
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

}  // namespace twin_01b5f5b0

// auto_setup_static_objects_01b75ce0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b75ce0 {

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
RT_GLOBAL(0x05963158, second_guard, uint8_t);
RT_GLOBAL(0x05963100, second_object, TargetedObject);
RT_GLOBAL(0x059630f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05784ed0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b75ce0()
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

}  // namespace twin_01b75ce0

// auto_setup_static_objects_01b779a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b779a0 {

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
RT_GLOBAL(0x05963228, second_guard, uint8_t);
RT_GLOBAL(0x059631d0, second_object, TargetedObject);
RT_GLOBAL(0x059631c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05785070, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b779a0()
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

}  // namespace twin_01b779a0

// auto_setup_static_objects_01b79000: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b79000 {

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
RT_GLOBAL(0x059632e8, second_guard, uint8_t);
RT_GLOBAL(0x05963290, second_object, TargetedObject);
RT_GLOBAL(0x05963288, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05785240, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b79000()
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

}  // namespace twin_01b79000

// auto_setup_static_objects_01b7af60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b7af60 {

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
RT_GLOBAL(0x059633a8, second_guard, uint8_t);
RT_GLOBAL(0x05963350, second_object, TargetedObject);
RT_GLOBAL(0x05963348, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05785410, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b7af60()
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

}  // namespace twin_01b7af60

// auto_setup_static_objects_01b7d7b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b7d7b0 {

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
RT_GLOBAL(0x05963468, second_guard, uint8_t);
RT_GLOBAL(0x05963410, second_object, TargetedObject);
RT_GLOBAL(0x05963408, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057855b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b7d7b0()
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

}  // namespace twin_01b7d7b0

// auto_setup_static_objects_01b93320: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01b93320 {

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
RT_GLOBAL(0x0596a650, second_guard, uint8_t);
RT_GLOBAL(0x0596a5f8, second_object, TargetedObject);
RT_GLOBAL(0x0596a5f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057856b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01b93320()
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

}  // namespace twin_01b93320

// auto_setup_static_objects_01bfef60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01bfef60 {

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
RT_GLOBAL(0x0596c140, second_guard, uint8_t);
RT_GLOBAL(0x0596c0e8, second_object, TargetedObject);
RT_GLOBAL(0x0596c0e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0578d260, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01bfef60()
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

}  // namespace twin_01bfef60

// auto_setup_static_objects_01cb94c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01cb94c0 {

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
RT_GLOBAL(0x0596fb98, second_guard, uint8_t);
RT_GLOBAL(0x0596fb40, second_object, TargetedObject);
RT_GLOBAL(0x0596fb38, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0578e9a0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01cb94c0()
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

}  // namespace twin_01cb94c0

// auto_setup_static_objects_01cb96a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01cb96a0 {

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
RT_GLOBAL(0x0596fb98, second_guard, uint8_t);
RT_GLOBAL(0x0596fb40, second_object, TargetedObject);
RT_GLOBAL(0x0596fb38, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0578e9a0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01cb96a0()
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

}  // namespace twin_01cb96a0

// auto_setup_static_objects_01cdf2f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01cdf2f0 {

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
RT_GLOBAL(0x0596fe48, second_guard, uint8_t);
RT_GLOBAL(0x0596fdf0, second_object, TargetedObject);
RT_GLOBAL(0x0596fde8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0578eb40, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01cdf2f0()
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

}  // namespace twin_01cdf2f0

// auto_setup_static_objects_01ce4690: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ce4690 {

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
RT_GLOBAL(0x0596ff48, second_guard, uint8_t);
RT_GLOBAL(0x0596fef0, second_object, TargetedObject);
RT_GLOBAL(0x0596fee8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0578f290, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01ce4690()
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

}  // namespace twin_01ce4690

// auto_setup_static_objects_01cf1340: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01cf1340 {

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
RT_GLOBAL(0x05971598, second_guard, uint8_t);
RT_GLOBAL(0x05971540, second_object, TargetedObject);
RT_GLOBAL(0x05971538, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0578fa00, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01cf1340()
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

}  // namespace twin_01cf1340

// auto_setup_static_objects_01cf1520: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01cf1520 {

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
RT_GLOBAL(0x05971598, second_guard, uint8_t);
RT_GLOBAL(0x05971540, second_object, TargetedObject);
RT_GLOBAL(0x05971538, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0578fa00, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01cf1520()
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

}  // namespace twin_01cf1520

// auto_setup_static_objects_01d07e60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d07e60 {

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
RT_GLOBAL(0x05971660, second_guard, uint8_t);
RT_GLOBAL(0x05971608, second_object, TargetedObject);
RT_GLOBAL(0x05971600, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05790170, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d07e60()
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

}  // namespace twin_01d07e60

// auto_setup_static_objects_01d09150: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d09150 {

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
RT_GLOBAL(0x05971718, second_guard, uint8_t);
RT_GLOBAL(0x059716c0, second_object, TargetedObject);
RT_GLOBAL(0x059716b8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057901f0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d09150()
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

}  // namespace twin_01d09150

// auto_setup_static_objects_01d12300: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d12300 {

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
RT_GLOBAL(0x05971930, second_guard, uint8_t);
RT_GLOBAL(0x059718d8, second_object, TargetedObject);
RT_GLOBAL(0x059718d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05790360, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d12300()
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

}  // namespace twin_01d12300

// auto_setup_static_objects_01d25d40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d25d40 {

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
RT_GLOBAL(0x05971ba8, second_guard, uint8_t);
RT_GLOBAL(0x05971b50, second_object, TargetedObject);
RT_GLOBAL(0x05971b48, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05790460, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d25d40()
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

}  // namespace twin_01d25d40

// auto_setup_static_objects_01d27b10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d27b10 {

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
RT_GLOBAL(0x05971d80, second_guard, uint8_t);
RT_GLOBAL(0x05971d28, second_object, TargetedObject);
RT_GLOBAL(0x05971d20, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05790560, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d27b10()
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

}  // namespace twin_01d27b10

// auto_setup_static_objects_01d2d5e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d2d5e0 {

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
RT_GLOBAL(0x059720f8, second_guard, uint8_t);
RT_GLOBAL(0x059720a0, second_object, TargetedObject);
RT_GLOBAL(0x05972098, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05790760, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d2d5e0()
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

}  // namespace twin_01d2d5e0

// auto_setup_static_objects_01d32290: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d32290 {

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
RT_GLOBAL(0x059723d0, second_guard, uint8_t);
RT_GLOBAL(0x05972378, second_object, TargetedObject);
RT_GLOBAL(0x05972370, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05790960, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d32290()
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

}  // namespace twin_01d32290

// auto_setup_static_objects_01d33820: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d33820 {

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
RT_GLOBAL(0x059724e0, second_guard, uint8_t);
RT_GLOBAL(0x05972488, second_object, TargetedObject);
RT_GLOBAL(0x05972480, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05790a60, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d33820()
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

}  // namespace twin_01d33820

// auto_setup_static_objects_01d34ca0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d34ca0 {

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
RT_GLOBAL(0x059725f0, second_guard, uint8_t);
RT_GLOBAL(0x05972598, second_object, TargetedObject);
RT_GLOBAL(0x05972590, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05790b60, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d34ca0()
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

}  // namespace twin_01d34ca0

// auto_setup_static_objects_01d37390: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d37390 {

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
RT_GLOBAL(0x05972ee0, second_guard, uint8_t);
RT_GLOBAL(0x05972e88, second_object, TargetedObject);
RT_GLOBAL(0x05972e80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05790db0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d37390()
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

}  // namespace twin_01d37390

// auto_setup_static_objects_01d451d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d451d0 {

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
RT_GLOBAL(0x05973030, second_guard, uint8_t);
RT_GLOBAL(0x05972fd8, second_object, TargetedObject);
RT_GLOBAL(0x05972fd0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05790eb0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d451d0()
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

}  // namespace twin_01d451d0

// auto_setup_static_objects_01d46b00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d46b00 {

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
RT_GLOBAL(0x059731a8, second_guard, uint8_t);
RT_GLOBAL(0x05973150, second_object, TargetedObject);
RT_GLOBAL(0x05973148, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791020, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d46b00()
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

}  // namespace twin_01d46b00

// auto_setup_static_objects_01d48d50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d48d50 {

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
RT_GLOBAL(0x059732c0, second_guard, uint8_t);
RT_GLOBAL(0x05973268, second_object, TargetedObject);
RT_GLOBAL(0x05973260, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791120, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d48d50()
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

}  // namespace twin_01d48d50

// auto_setup_static_objects_01d4a2f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d4a2f0 {

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
RT_GLOBAL(0x059734a8, second_guard, uint8_t);
RT_GLOBAL(0x05973450, second_object, TargetedObject);
RT_GLOBAL(0x05973448, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791220, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d4a2f0()
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

}  // namespace twin_01d4a2f0

// auto_setup_static_objects_01d4fa50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d4fa50 {

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
RT_GLOBAL(0x05973600, second_guard, uint8_t);
RT_GLOBAL(0x059735a8, second_object, TargetedObject);
RT_GLOBAL(0x059735a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791320, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d4fa50()
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

}  // namespace twin_01d4fa50

// auto_setup_static_objects_01d51030: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d51030 {

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
RT_GLOBAL(0x05973710, second_guard, uint8_t);
RT_GLOBAL(0x059736b8, second_object, TargetedObject);
RT_GLOBAL(0x059736b0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791420, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d51030()
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

}  // namespace twin_01d51030

// auto_setup_static_objects_01d52780: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d52780 {

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
RT_GLOBAL(0x05973878, second_guard, uint8_t);
RT_GLOBAL(0x05973820, second_object, TargetedObject);
RT_GLOBAL(0x05973818, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791520, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d52780()
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

}  // namespace twin_01d52780

// auto_setup_static_objects_01d54790: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d54790 {

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
RT_GLOBAL(0x05973990, second_guard, uint8_t);
RT_GLOBAL(0x05973938, second_object, TargetedObject);
RT_GLOBAL(0x05973930, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791660, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d54790()
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

}  // namespace twin_01d54790

// auto_setup_static_objects_01d54970: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d54970 {

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
RT_GLOBAL(0x05973990, second_guard, uint8_t);
RT_GLOBAL(0x05973938, second_object, TargetedObject);
RT_GLOBAL(0x05973930, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791660, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d54970()
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

}  // namespace twin_01d54970

// auto_setup_static_objects_01d55080: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d55080 {

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
RT_GLOBAL(0x05973a30, second_guard, uint8_t);
RT_GLOBAL(0x059739d8, second_object, TargetedObject);
RT_GLOBAL(0x059739d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791710, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d55080()
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

}  // namespace twin_01d55080

// auto_setup_static_objects_01d55a60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d55a60 {

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
RT_GLOBAL(0x05973ad0, second_guard, uint8_t);
RT_GLOBAL(0x05973a78, second_object, TargetedObject);
RT_GLOBAL(0x05973a70, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791810, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d55a60()
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

}  // namespace twin_01d55a60

// auto_setup_static_objects_01d565d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d565d0 {

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
RT_GLOBAL(0x05973d70, second_guard, uint8_t);
RT_GLOBAL(0x05973d18, second_object, TargetedObject);
RT_GLOBAL(0x05973d10, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791ad0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d565d0()
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

}  // namespace twin_01d565d0

// auto_setup_static_objects_01d567b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d567b0 {

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
RT_GLOBAL(0x05973d00, second_guard, uint8_t);
RT_GLOBAL(0x05973ca8, second_object, TargetedObject);
RT_GLOBAL(0x05973ca0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791a50, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d567b0()
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

}  // namespace twin_01d567b0

// auto_setup_static_objects_01d56990: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d56990 {

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
RT_GLOBAL(0x05973c20, second_guard, uint8_t);
RT_GLOBAL(0x05973bc8, second_object, TargetedObject);
RT_GLOBAL(0x05973bc0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791950, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d56990()
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

}  // namespace twin_01d56990

// auto_setup_static_objects_01d59dd0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d59dd0 {

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
RT_GLOBAL(0x05973f78, second_guard, uint8_t);
RT_GLOBAL(0x05973f20, second_object, TargetedObject);
RT_GLOBAL(0x05973f18, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791b50, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d59dd0()
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

}  // namespace twin_01d59dd0

// auto_setup_static_objects_01d62010: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d62010 {

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
RT_GLOBAL(0x05974520, second_guard, uint8_t);
RT_GLOBAL(0x059744c8, second_object, TargetedObject);
RT_GLOBAL(0x059744c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792090, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d62010()
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

}  // namespace twin_01d62010

// auto_setup_static_objects_01d621f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d621f0 {

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
RT_GLOBAL(0x059744b0, second_guard, uint8_t);
RT_GLOBAL(0x05974458, second_object, TargetedObject);
RT_GLOBAL(0x05974450, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792010, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d621f0()
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

}  // namespace twin_01d621f0

// auto_setup_static_objects_01d623d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d623d0 {

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
RT_GLOBAL(0x059743d0, second_guard, uint8_t);
RT_GLOBAL(0x05974378, second_object, TargetedObject);
RT_GLOBAL(0x05974370, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05791f10, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d623d0()
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

}  // namespace twin_01d623d0

// auto_setup_static_objects_01d65e30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d65e30 {

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
RT_GLOBAL(0x059747a0, second_guard, uint8_t);
RT_GLOBAL(0x05974748, second_object, TargetedObject);
RT_GLOBAL(0x05974740, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792350, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d65e30()
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

}  // namespace twin_01d65e30

// auto_setup_static_objects_01d66010: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d66010 {

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
RT_GLOBAL(0x05974730, second_guard, uint8_t);
RT_GLOBAL(0x059746d8, second_object, TargetedObject);
RT_GLOBAL(0x059746d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057922d0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d66010()
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

}  // namespace twin_01d66010

// auto_setup_static_objects_01d661f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d661f0 {

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
RT_GLOBAL(0x05974650, second_guard, uint8_t);
RT_GLOBAL(0x059745f8, second_object, TargetedObject);
RT_GLOBAL(0x059745f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057921d0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d661f0()
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

}  // namespace twin_01d661f0

// auto_setup_static_objects_01d6a3d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d6a3d0 {

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
RT_GLOBAL(0x05974ca0, second_guard, uint8_t);
RT_GLOBAL(0x05974c48, second_object, TargetedObject);
RT_GLOBAL(0x05974c40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792710, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d6a3d0()
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

}  // namespace twin_01d6a3d0

// auto_setup_static_objects_01d6a5b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d6a5b0 {

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
RT_GLOBAL(0x05974c30, second_guard, uint8_t);
RT_GLOBAL(0x05974bd8, second_object, TargetedObject);
RT_GLOBAL(0x05974bd0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792690, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d6a5b0()
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

}  // namespace twin_01d6a5b0

// auto_setup_static_objects_01d6a790: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d6a790 {

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
RT_GLOBAL(0x05974b50, second_guard, uint8_t);
RT_GLOBAL(0x05974af8, second_object, TargetedObject);
RT_GLOBAL(0x05974af0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792590, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d6a790()
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

}  // namespace twin_01d6a790

// auto_setup_static_objects_01d6f450: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d6f450 {

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
RT_GLOBAL(0x05974f08, second_guard, uint8_t);
RT_GLOBAL(0x05974eb0, second_object, TargetedObject);
RT_GLOBAL(0x05974ea8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057929d0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d6f450()
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

}  // namespace twin_01d6f450

// auto_setup_static_objects_01d6f630: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d6f630 {

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
RT_GLOBAL(0x05974e98, second_guard, uint8_t);
RT_GLOBAL(0x05974e40, second_object, TargetedObject);
RT_GLOBAL(0x05974e38, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792950, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d6f630()
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

}  // namespace twin_01d6f630

// auto_setup_static_objects_01d6f810: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d6f810 {

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
RT_GLOBAL(0x05974db8, second_guard, uint8_t);
RT_GLOBAL(0x05974d60, second_object, TargetedObject);
RT_GLOBAL(0x05974d58, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792850, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d6f810()
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

}  // namespace twin_01d6f810

// auto_setup_static_objects_01d76f20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d76f20 {

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
RT_GLOBAL(0x059752b8, second_guard, uint8_t);
RT_GLOBAL(0x05975260, second_object, TargetedObject);
RT_GLOBAL(0x05975258, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792d00, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d76f20()
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

}  // namespace twin_01d76f20

// auto_setup_static_objects_01d77100: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d77100 {

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
RT_GLOBAL(0x05975248, second_guard, uint8_t);
RT_GLOBAL(0x059751f0, second_object, TargetedObject);
RT_GLOBAL(0x059751e8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792c80, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d77100()
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

}  // namespace twin_01d77100

// auto_setup_static_objects_01d772e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d772e0 {

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
RT_GLOBAL(0x05975168, second_guard, uint8_t);
RT_GLOBAL(0x05975110, second_object, TargetedObject);
RT_GLOBAL(0x05975108, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792b80, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d772e0()
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

}  // namespace twin_01d772e0

// auto_setup_static_objects_01d7b3e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d7b3e0 {

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
RT_GLOBAL(0x05975600, second_guard, uint8_t);
RT_GLOBAL(0x059755a8, second_object, TargetedObject);
RT_GLOBAL(0x059755a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792fc0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d7b3e0()
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

}  // namespace twin_01d7b3e0

// auto_setup_static_objects_01d7b5c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d7b5c0 {

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
RT_GLOBAL(0x05975590, second_guard, uint8_t);
RT_GLOBAL(0x05975538, second_object, TargetedObject);
RT_GLOBAL(0x05975530, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792f40, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d7b5c0()
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

}  // namespace twin_01d7b5c0

// auto_setup_static_objects_01d7b7a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d7b7a0 {

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
RT_GLOBAL(0x059754b0, second_guard, uint8_t);
RT_GLOBAL(0x05975458, second_object, TargetedObject);
RT_GLOBAL(0x05975450, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05792e40, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d7b7a0()
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

}  // namespace twin_01d7b7a0

// auto_setup_static_objects_01d80600: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d80600 {

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
RT_GLOBAL(0x059758d8, second_guard, uint8_t);
RT_GLOBAL(0x05975880, second_object, TargetedObject);
RT_GLOBAL(0x05975878, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793280, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d80600()
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

}  // namespace twin_01d80600

// auto_setup_static_objects_01d807e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d807e0 {

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
RT_GLOBAL(0x05975868, second_guard, uint8_t);
RT_GLOBAL(0x05975810, second_object, TargetedObject);
RT_GLOBAL(0x05975808, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793200, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d807e0()
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

}  // namespace twin_01d807e0

// auto_setup_static_objects_01d809c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d809c0 {

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
RT_GLOBAL(0x05975788, second_guard, uint8_t);
RT_GLOBAL(0x05975730, second_object, TargetedObject);
RT_GLOBAL(0x05975728, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793100, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d809c0()
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

}  // namespace twin_01d809c0

// auto_setup_static_objects_01d84ba0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d84ba0 {

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
RT_GLOBAL(0x05975bd8, second_guard, uint8_t);
RT_GLOBAL(0x05975b80, second_object, TargetedObject);
RT_GLOBAL(0x05975b78, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793540, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d84ba0()
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

}  // namespace twin_01d84ba0

// auto_setup_static_objects_01d84d80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d84d80 {

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
RT_GLOBAL(0x05975b68, second_guard, uint8_t);
RT_GLOBAL(0x05975b10, second_object, TargetedObject);
RT_GLOBAL(0x05975b08, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057934c0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d84d80()
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

}  // namespace twin_01d84d80

// auto_setup_static_objects_01d84f60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d84f60 {

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
RT_GLOBAL(0x05975a88, second_guard, uint8_t);
RT_GLOBAL(0x05975a30, second_object, TargetedObject);
RT_GLOBAL(0x05975a28, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057933c0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d84f60()
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

}  // namespace twin_01d84f60

// auto_setup_static_objects_01d89650: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d89650 {

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
RT_GLOBAL(0x05975ea8, second_guard, uint8_t);
RT_GLOBAL(0x05975e50, second_object, TargetedObject);
RT_GLOBAL(0x05975e48, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793800, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d89650()
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

}  // namespace twin_01d89650

// auto_setup_static_objects_01d89830: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d89830 {

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
RT_GLOBAL(0x05975e38, second_guard, uint8_t);
RT_GLOBAL(0x05975de0, second_object, TargetedObject);
RT_GLOBAL(0x05975dd8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793780, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d89830()
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

}  // namespace twin_01d89830

// auto_setup_static_objects_01d89a10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d89a10 {

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
RT_GLOBAL(0x05975d58, second_guard, uint8_t);
RT_GLOBAL(0x05975d00, second_object, TargetedObject);
RT_GLOBAL(0x05975cf8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793680, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d89a10()
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

}  // namespace twin_01d89a10

// auto_setup_static_objects_01d8d4e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d8d4e0 {

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
RT_GLOBAL(0x05976218, second_guard, uint8_t);
RT_GLOBAL(0x059761c0, second_object, TargetedObject);
RT_GLOBAL(0x059761b8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793b30, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d8d4e0()
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

}  // namespace twin_01d8d4e0

// auto_setup_static_objects_01d8d6c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d8d6c0 {

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
RT_GLOBAL(0x059761a8, second_guard, uint8_t);
RT_GLOBAL(0x05976150, second_object, TargetedObject);
RT_GLOBAL(0x05976148, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793ab0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d8d6c0()
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

}  // namespace twin_01d8d6c0

// auto_setup_static_objects_01d8d8a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d8d8a0 {

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
RT_GLOBAL(0x059760c8, second_guard, uint8_t);
RT_GLOBAL(0x05976070, second_object, TargetedObject);
RT_GLOBAL(0x05976068, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057939b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d8d8a0()
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

}  // namespace twin_01d8d8a0

// auto_setup_static_objects_01d927f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d927f0 {

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
RT_GLOBAL(0x05976558, second_guard, uint8_t);
RT_GLOBAL(0x05976500, second_object, TargetedObject);
RT_GLOBAL(0x059764f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793e60, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d927f0()
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

}  // namespace twin_01d927f0

// auto_setup_static_objects_01d929d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d929d0 {

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
RT_GLOBAL(0x059764e8, second_guard, uint8_t);
RT_GLOBAL(0x05976490, second_object, TargetedObject);
RT_GLOBAL(0x05976488, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793de0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d929d0()
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

}  // namespace twin_01d929d0

// auto_setup_static_objects_01d92bb0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d92bb0 {

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
RT_GLOBAL(0x05976408, second_guard, uint8_t);
RT_GLOBAL(0x059763b0, second_object, TargetedObject);
RT_GLOBAL(0x059763a8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793ce0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d92bb0()
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

}  // namespace twin_01d92bb0

// auto_setup_static_objects_01d977b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d977b0 {

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
RT_GLOBAL(0x05976828, second_guard, uint8_t);
RT_GLOBAL(0x059767d0, second_object, TargetedObject);
RT_GLOBAL(0x059767c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05794120, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d977b0()
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

}  // namespace twin_01d977b0

// auto_setup_static_objects_01d97990: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d97990 {

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
RT_GLOBAL(0x059767b8, second_guard, uint8_t);
RT_GLOBAL(0x05976760, second_object, TargetedObject);
RT_GLOBAL(0x05976758, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057940a0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d97990()
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

}  // namespace twin_01d97990

// auto_setup_static_objects_01d97b70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d97b70 {

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
RT_GLOBAL(0x059766d8, second_guard, uint8_t);
RT_GLOBAL(0x05976680, second_object, TargetedObject);
RT_GLOBAL(0x05976678, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05793fa0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d97b70()
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

}  // namespace twin_01d97b70

// auto_setup_static_objects_01d9dfb0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d9dfb0 {

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
RT_GLOBAL(0x05976da8, second_guard, uint8_t);
RT_GLOBAL(0x05976d50, second_object, TargetedObject);
RT_GLOBAL(0x05976d48, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05794650, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d9dfb0()
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

}  // namespace twin_01d9dfb0

// auto_setup_static_objects_01d9e190: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d9e190 {

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
RT_GLOBAL(0x05976d38, second_guard, uint8_t);
RT_GLOBAL(0x05976ce0, second_object, TargetedObject);
RT_GLOBAL(0x05976cd8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057945d0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d9e190()
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

}  // namespace twin_01d9e190

// auto_setup_static_objects_01d9e370: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01d9e370 {

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
RT_GLOBAL(0x05976c58, second_guard, uint8_t);
RT_GLOBAL(0x05976c00, second_object, TargetedObject);
RT_GLOBAL(0x05976bf8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057944d0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01d9e370()
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

}  // namespace twin_01d9e370

// auto_setup_static_objects_01da57c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01da57c0 {

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
RT_GLOBAL(0x05977060, second_guard, uint8_t);
RT_GLOBAL(0x05977008, second_object, TargetedObject);
RT_GLOBAL(0x05977000, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05794910, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01da57c0()
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

}  // namespace twin_01da57c0

// auto_setup_static_objects_01da59a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01da59a0 {

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
RT_GLOBAL(0x05976ff0, second_guard, uint8_t);
RT_GLOBAL(0x05976f98, second_object, TargetedObject);
RT_GLOBAL(0x05976f90, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05794890, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01da59a0()
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

}  // namespace twin_01da59a0

// auto_setup_static_objects_01da5b80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01da5b80 {

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
RT_GLOBAL(0x05976f10, second_guard, uint8_t);
RT_GLOBAL(0x05976eb8, second_object, TargetedObject);
RT_GLOBAL(0x05976eb0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05794790, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01da5b80()
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

}  // namespace twin_01da5b80

// auto_setup_static_objects_01dac120: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dac120 {

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
RT_GLOBAL(0x059773a0, second_guard, uint8_t);
RT_GLOBAL(0x05977348, second_object, TargetedObject);
RT_GLOBAL(0x05977340, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05794d30, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dac120()
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

}  // namespace twin_01dac120

// auto_setup_static_objects_01dac300: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dac300 {

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
RT_GLOBAL(0x059772c0, second_guard, uint8_t);
RT_GLOBAL(0x05977268, second_object, TargetedObject);
RT_GLOBAL(0x05977260, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05794c30, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dac300()
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

}  // namespace twin_01dac300

// auto_setup_static_objects_01dac4e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dac4e0 {

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
RT_GLOBAL(0x05977250, second_guard, uint8_t);
RT_GLOBAL(0x059771f8, second_object, TargetedObject);
RT_GLOBAL(0x059771f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05794bb0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dac4e0()
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

}  // namespace twin_01dac4e0

// auto_setup_static_objects_01db4a70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01db4a70 {

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
RT_GLOBAL(0x059776a0, second_guard, uint8_t);
RT_GLOBAL(0x05977648, second_object, TargetedObject);
RT_GLOBAL(0x05977640, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05794ff0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01db4a70()
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

}  // namespace twin_01db4a70

// auto_setup_static_objects_01db4c50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01db4c50 {

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
RT_GLOBAL(0x05977630, second_guard, uint8_t);
RT_GLOBAL(0x059775d8, second_object, TargetedObject);
RT_GLOBAL(0x059775d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05794f70, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01db4c50()
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

}  // namespace twin_01db4c50

// auto_setup_static_objects_01db4e30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01db4e30 {

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
RT_GLOBAL(0x05977550, second_guard, uint8_t);
RT_GLOBAL(0x059774f8, second_object, TargetedObject);
RT_GLOBAL(0x059774f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05794e70, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01db4e30()
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

}  // namespace twin_01db4e30

// auto_setup_static_objects_01db9b00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01db9b00 {

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
RT_GLOBAL(0x05977950, second_guard, uint8_t);
RT_GLOBAL(0x059778f8, second_object, TargetedObject);
RT_GLOBAL(0x059778f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057952b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01db9b00()
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

}  // namespace twin_01db9b00

// auto_setup_static_objects_01db9ce0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01db9ce0 {

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
RT_GLOBAL(0x059778e0, second_guard, uint8_t);
RT_GLOBAL(0x05977888, second_object, TargetedObject);
RT_GLOBAL(0x05977880, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05795230, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01db9ce0()
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

}  // namespace twin_01db9ce0

// auto_setup_static_objects_01db9ec0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01db9ec0 {

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
RT_GLOBAL(0x05977800, second_guard, uint8_t);
RT_GLOBAL(0x059777a8, second_object, TargetedObject);
RT_GLOBAL(0x059777a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05795130, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01db9ec0()
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

}  // namespace twin_01db9ec0

// auto_setup_static_objects_01dbdda0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dbdda0 {

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
RT_GLOBAL(0x05977bb8, second_guard, uint8_t);
RT_GLOBAL(0x05977b60, second_object, TargetedObject);
RT_GLOBAL(0x05977b58, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05795570, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dbdda0()
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

}  // namespace twin_01dbdda0

// auto_setup_static_objects_01dbdf80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dbdf80 {

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
RT_GLOBAL(0x05977b48, second_guard, uint8_t);
RT_GLOBAL(0x05977af0, second_object, TargetedObject);
RT_GLOBAL(0x05977ae8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057954f0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dbdf80()
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

}  // namespace twin_01dbdf80

// auto_setup_static_objects_01dbe160: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dbe160 {

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
RT_GLOBAL(0x05977a68, second_guard, uint8_t);
RT_GLOBAL(0x05977a10, second_object, TargetedObject);
RT_GLOBAL(0x05977a08, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057953f0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dbe160()
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

}  // namespace twin_01dbe160

// auto_setup_static_objects_01dc14f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dc14f0 {

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
RT_GLOBAL(0x05977e40, second_guard, uint8_t);
RT_GLOBAL(0x05977de8, second_object, TargetedObject);
RT_GLOBAL(0x05977de0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05795830, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dc14f0()
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

}  // namespace twin_01dc14f0

// auto_setup_static_objects_01dc16d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dc16d0 {

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
RT_GLOBAL(0x05977dd0, second_guard, uint8_t);
RT_GLOBAL(0x05977d78, second_object, TargetedObject);
RT_GLOBAL(0x05977d70, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057957b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dc16d0()
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

}  // namespace twin_01dc16d0

// auto_setup_static_objects_01dc18b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dc18b0 {

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
RT_GLOBAL(0x05977cf0, second_guard, uint8_t);
RT_GLOBAL(0x05977c98, second_object, TargetedObject);
RT_GLOBAL(0x05977c90, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057956b0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dc18b0()
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

}  // namespace twin_01dc18b0

// auto_setup_static_objects_01dc4960: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dc4960 {

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
RT_GLOBAL(0x05978128, second_guard, uint8_t);
RT_GLOBAL(0x059780d0, second_object, TargetedObject);
RT_GLOBAL(0x059780c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05795af0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dc4960()
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

}  // namespace twin_01dc4960

// auto_setup_static_objects_01dc4b40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dc4b40 {

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
RT_GLOBAL(0x059780b8, second_guard, uint8_t);
RT_GLOBAL(0x05978060, second_object, TargetedObject);
RT_GLOBAL(0x05978058, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05795a70, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dc4b40()
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

}  // namespace twin_01dc4b40

// auto_setup_static_objects_01dc4d20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dc4d20 {

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
RT_GLOBAL(0x05977fd8, second_guard, uint8_t);
RT_GLOBAL(0x05977f80, second_object, TargetedObject);
RT_GLOBAL(0x05977f78, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05795970, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dc4d20()
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

}  // namespace twin_01dc4d20

// auto_setup_static_objects_01dca580: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dca580 {

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
RT_GLOBAL(0x05978390, second_guard, uint8_t);
RT_GLOBAL(0x05978338, second_object, TargetedObject);
RT_GLOBAL(0x05978330, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05795c30, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dca580()
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

}  // namespace twin_01dca580

// auto_setup_static_objects_01dcb860: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dcb860 {

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
RT_GLOBAL(0x05978430, second_guard, uint8_t);
RT_GLOBAL(0x059783d8, second_object, TargetedObject);
RT_GLOBAL(0x059783d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05795d20, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dcb860()
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

}  // namespace twin_01dcb860

// auto_setup_static_objects_01dcc880: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dcc880 {

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
RT_GLOBAL(0x059784d0, second_guard, uint8_t);
RT_GLOBAL(0x05978478, second_object, TargetedObject);
RT_GLOBAL(0x05978470, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05795da0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dcc880()
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

}  // namespace twin_01dcc880

// auto_setup_static_objects_01dcd830: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dcd830 {

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
RT_GLOBAL(0x05978570, second_guard, uint8_t);
RT_GLOBAL(0x05978518, second_object, TargetedObject);
RT_GLOBAL(0x05978510, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05795e20, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dcd830()
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

}  // namespace twin_01dcd830

// auto_setup_static_objects_01dd11a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dd11a0 {

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
RT_GLOBAL(0x059786d0, second_guard, uint8_t);
RT_GLOBAL(0x05978678, second_object, TargetedObject);
RT_GLOBAL(0x05978670, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05795ea0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dd11a0()
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

}  // namespace twin_01dd11a0

// auto_setup_static_objects_01dd3980: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dd3980 {

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
RT_GLOBAL(0x05978bf0, second_guard, uint8_t);
RT_GLOBAL(0x05978b98, second_object, TargetedObject);
RT_GLOBAL(0x05978b90, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05796360, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dd3980()
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

}  // namespace twin_01dd3980

// auto_setup_static_objects_01dd3b60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dd3b60 {

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
RT_GLOBAL(0x05978b80, second_guard, uint8_t);
RT_GLOBAL(0x05978b28, second_object, TargetedObject);
RT_GLOBAL(0x05978b20, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057962e0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dd3b60()
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

}  // namespace twin_01dd3b60

// auto_setup_static_objects_01dd3d40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dd3d40 {

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
RT_GLOBAL(0x05978aa0, second_guard, uint8_t);
RT_GLOBAL(0x05978a48, second_object, TargetedObject);
RT_GLOBAL(0x05978a40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057961e0, second_vtable, const uint8_t);
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
extern "C" void bb_auto_setup_static_objects_01dd3d40()
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

}  // namespace twin_01dd3d40
