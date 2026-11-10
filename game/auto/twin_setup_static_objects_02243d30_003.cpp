// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_setup_static_objects_02243d30, in game/misc/setup_static_objects_02243d30.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"

// auto_setup_static_objects_01dd7da0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dd7da0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05978ec0, second_guard, uint8_t);
RT_GLOBAL(0x05978e68, second_object, TargetedObject);
RT_GLOBAL(0x05978e60, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05796620, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01dd7da0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01dd7da0

// auto_setup_static_objects_01dd7f80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dd7f80 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05978e50, second_guard, uint8_t);
RT_GLOBAL(0x05978df8, second_object, TargetedObject);
RT_GLOBAL(0x05978df0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057965a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01dd7f80()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01dd7f80

// auto_setup_static_objects_01dd8160: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01dd8160 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05978d70, second_guard, uint8_t);
RT_GLOBAL(0x05978d18, second_object, TargetedObject);
RT_GLOBAL(0x05978d10, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057964a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01dd8160()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01dd8160

// auto_setup_static_objects_01ddb990: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ddb990 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05979190, second_guard, uint8_t);
RT_GLOBAL(0x05979138, second_object, TargetedObject);
RT_GLOBAL(0x05979130, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057968e0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01ddb990()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01ddb990

// auto_setup_static_objects_01ddbb70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ddbb70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05979120, second_guard, uint8_t);
RT_GLOBAL(0x059790c8, second_object, TargetedObject);
RT_GLOBAL(0x059790c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05796860, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01ddbb70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01ddbb70

// auto_setup_static_objects_01ddbd50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ddbd50 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05979040, second_guard, uint8_t);
RT_GLOBAL(0x05978fe8, second_object, TargetedObject);
RT_GLOBAL(0x05978fe0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05796760, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01ddbd50()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01ddbd50

// auto_setup_static_objects_01ddf9f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ddf9f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059793e0, second_guard, uint8_t);
RT_GLOBAL(0x05979388, second_object, TargetedObject);
RT_GLOBAL(0x05979380, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05796ba0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01ddf9f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01ddf9f0

// auto_setup_static_objects_01ddfbd0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ddfbd0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05979370, second_guard, uint8_t);
RT_GLOBAL(0x05979318, second_object, TargetedObject);
RT_GLOBAL(0x05979310, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05796b20, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01ddfbd0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01ddfbd0

// auto_setup_static_objects_01ddfdb0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ddfdb0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05979290, second_guard, uint8_t);
RT_GLOBAL(0x05979238, second_object, TargetedObject);
RT_GLOBAL(0x05979230, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05796a20, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01ddfdb0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01ddfdb0

// auto_setup_static_objects_01de2d90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01de2d90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059796a8, second_guard, uint8_t);
RT_GLOBAL(0x05979650, second_object, TargetedObject);
RT_GLOBAL(0x05979648, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05796ef0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01de2d90()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01de2d90

// auto_setup_static_objects_01de2f70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01de2f70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059795c8, second_guard, uint8_t);
RT_GLOBAL(0x05979570, second_object, TargetedObject);
RT_GLOBAL(0x05979568, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05796df0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01de2f70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01de2f70

// auto_setup_static_objects_01de3150: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01de3150 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05979558, second_guard, uint8_t);
RT_GLOBAL(0x05979500, second_object, TargetedObject);
RT_GLOBAL(0x059794f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05796d70, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01de3150()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01de3150

// auto_setup_static_objects_01df61e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01df61e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05979c88, second_guard, uint8_t);
RT_GLOBAL(0x05979c30, second_object, TargetedObject);
RT_GLOBAL(0x05979c28, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057971a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01df61e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01df61e0

// auto_setup_static_objects_01e09330: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e09330 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597a010, second_guard, uint8_t);
RT_GLOBAL(0x05979fb8, second_object, TargetedObject);
RT_GLOBAL(0x05979fb0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057975b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e09330()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e09330

// auto_setup_static_objects_01e09510: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e09510 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05979fa0, second_guard, uint8_t);
RT_GLOBAL(0x05979f48, second_object, TargetedObject);
RT_GLOBAL(0x05979f40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797530, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e09510()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e09510

// auto_setup_static_objects_01e096f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e096f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05979ec0, second_guard, uint8_t);
RT_GLOBAL(0x05979e68, second_object, TargetedObject);
RT_GLOBAL(0x05979e60, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797430, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e096f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e096f0

// auto_setup_static_objects_01e0dbf0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e0dbf0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597a158, second_guard, uint8_t);
RT_GLOBAL(0x0597a100, second_object, TargetedObject);
RT_GLOBAL(0x0597a0f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797630, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e0dbf0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e0dbf0

// auto_setup_static_objects_01e0f5f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e0f5f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597a218, second_guard, uint8_t);
RT_GLOBAL(0x0597a1c0, second_object, TargetedObject);
RT_GLOBAL(0x0597a1b8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057976b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e0f5f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e0f5f0

// auto_setup_static_objects_01e173f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e173f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597a398, second_guard, uint8_t);
RT_GLOBAL(0x0597a340, second_object, TargetedObject);
RT_GLOBAL(0x0597a338, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797730, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e173f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e173f0

// auto_setup_static_objects_01e1cf70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e1cf70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597a458, second_guard, uint8_t);
RT_GLOBAL(0x0597a400, second_object, TargetedObject);
RT_GLOBAL(0x0597a3f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057977b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e1cf70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e1cf70

// auto_setup_static_objects_01e1dcf0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e1dcf0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597a518, second_guard, uint8_t);
RT_GLOBAL(0x0597a4c0, second_object, TargetedObject);
RT_GLOBAL(0x0597a4b8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797830, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e1dcf0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e1dcf0

// auto_setup_static_objects_01e27330: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e27330 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597a628, second_guard, uint8_t);
RT_GLOBAL(0x0597a5d0, second_object, TargetedObject);
RT_GLOBAL(0x0597a5c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057978b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e27330()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e27330

// auto_setup_static_objects_01e28e50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e28e50 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597a8b8, second_guard, uint8_t);
RT_GLOBAL(0x0597a860, second_object, TargetedObject);
RT_GLOBAL(0x0597a858, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797a20, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e28e50()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e28e50

// auto_setup_static_objects_01e29030: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e29030 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597a8b8, second_guard, uint8_t);
RT_GLOBAL(0x0597a860, second_object, TargetedObject);
RT_GLOBAL(0x0597a858, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797a20, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e29030()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e29030

// auto_setup_static_objects_01e313e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e313e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597a978, second_guard, uint8_t);
RT_GLOBAL(0x0597a920, second_object, TargetedObject);
RT_GLOBAL(0x0597a918, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797b90, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e313e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e313e0

// auto_setup_static_objects_01e32420: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e32420 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597acf0, second_guard, uint8_t);
RT_GLOBAL(0x0597ac98, second_object, TargetedObject);
RT_GLOBAL(0x0597ac90, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797d00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e32420()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e32420

// auto_setup_static_objects_01e32600: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e32600 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597acf0, second_guard, uint8_t);
RT_GLOBAL(0x0597ac98, second_object, TargetedObject);
RT_GLOBAL(0x0597ac90, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797d00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e32600()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e32600

// auto_setup_static_objects_01e35610: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e35610 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597ada8, second_guard, uint8_t);
RT_GLOBAL(0x0597ad50, second_object, TargetedObject);
RT_GLOBAL(0x0597ad48, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797db0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e35610()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e35610

// auto_setup_static_objects_01e357f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e357f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597ada8, second_guard, uint8_t);
RT_GLOBAL(0x0597ad50, second_object, TargetedObject);
RT_GLOBAL(0x0597ad48, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797db0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e357f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e357f0

// auto_setup_static_objects_01e368a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e368a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597ae68, second_guard, uint8_t);
RT_GLOBAL(0x0597ae10, second_object, TargetedObject);
RT_GLOBAL(0x0597ae08, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797e30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e368a0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e368a0

// auto_setup_static_objects_01e37440: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e37440 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597af28, second_guard, uint8_t);
RT_GLOBAL(0x0597aed0, second_object, TargetedObject);
RT_GLOBAL(0x0597aec8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797eb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e37440()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e37440

// auto_setup_static_objects_01e38020: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e38020 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597afe8, second_guard, uint8_t);
RT_GLOBAL(0x0597af90, second_object, TargetedObject);
RT_GLOBAL(0x0597af88, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797f60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e38020()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e38020

// auto_setup_static_objects_01e38200: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e38200 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597afe8, second_guard, uint8_t);
RT_GLOBAL(0x0597af90, second_object, TargetedObject);
RT_GLOBAL(0x0597af88, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797f60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e38200()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e38200

// auto_setup_static_objects_01e38cf0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e38cf0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b0a8, second_guard, uint8_t);
RT_GLOBAL(0x0597b050, second_object, TargetedObject);
RT_GLOBAL(0x0597b048, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05797fe0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e38cf0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e38cf0

// auto_setup_static_objects_01e39820: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e39820 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b168, second_guard, uint8_t);
RT_GLOBAL(0x0597b110, second_object, TargetedObject);
RT_GLOBAL(0x0597b108, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798060, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e39820()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e39820

// auto_setup_static_objects_01e3a350: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e3a350 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b330, second_guard, uint8_t);
RT_GLOBAL(0x0597b2d8, second_object, TargetedObject);
RT_GLOBAL(0x0597b2d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798120, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e3a350()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e3a350

// auto_setup_static_objects_01e3a530: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e3a530 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b330, second_guard, uint8_t);
RT_GLOBAL(0x0597b2d8, second_object, TargetedObject);
RT_GLOBAL(0x0597b2d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798120, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e3a530()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e3a530

// auto_setup_static_objects_01e3b570: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e3b570 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b3e8, second_guard, uint8_t);
RT_GLOBAL(0x0597b390, second_object, TargetedObject);
RT_GLOBAL(0x0597b388, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057981a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e3b570()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e3b570

// auto_setup_static_objects_01e3c170: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e3c170 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b4a8, second_guard, uint8_t);
RT_GLOBAL(0x0597b450, second_object, TargetedObject);
RT_GLOBAL(0x0597b448, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798220, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e3c170()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e3c170

// auto_setup_static_objects_01e3c350: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e3c350 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b4a8, second_guard, uint8_t);
RT_GLOBAL(0x0597b450, second_object, TargetedObject);
RT_GLOBAL(0x0597b448, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798220, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e3c350()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e3c350

// auto_setup_static_objects_01e3cd40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e3cd40 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b568, second_guard, uint8_t);
RT_GLOBAL(0x0597b510, second_object, TargetedObject);
RT_GLOBAL(0x0597b508, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057982d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e3cd40()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e3cd40

// auto_setup_static_objects_01e3cf20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e3cf20 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b568, second_guard, uint8_t);
RT_GLOBAL(0x0597b510, second_object, TargetedObject);
RT_GLOBAL(0x0597b508, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057982d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e3cf20()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e3cf20

// auto_setup_static_objects_01e3e670: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e3e670 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b628, second_guard, uint8_t);
RT_GLOBAL(0x0597b5d0, second_object, TargetedObject);
RT_GLOBAL(0x0597b5c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798350, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e3e670()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e3e670

// auto_setup_static_objects_01e3f190: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e3f190 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b6e8, second_guard, uint8_t);
RT_GLOBAL(0x0597b690, second_object, TargetedObject);
RT_GLOBAL(0x0597b688, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057983d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e3f190()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e3f190

// auto_setup_static_objects_01e3fcb0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e3fcb0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b7a8, second_guard, uint8_t);
RT_GLOBAL(0x0597b750, second_object, TargetedObject);
RT_GLOBAL(0x0597b748, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057984a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e3fcb0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e3fcb0

// auto_setup_static_objects_01e3fe90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e3fe90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b7a8, second_guard, uint8_t);
RT_GLOBAL(0x0597b750, second_object, TargetedObject);
RT_GLOBAL(0x0597b748, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057984a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e3fe90()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e3fe90

// auto_setup_static_objects_01e411c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e411c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b868, second_guard, uint8_t);
RT_GLOBAL(0x0597b810, second_object, TargetedObject);
RT_GLOBAL(0x0597b808, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798520, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e411c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e411c0

// auto_setup_static_objects_01e41ce0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e41ce0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b910, second_guard, uint8_t);
RT_GLOBAL(0x0597b8b8, second_object, TargetedObject);
RT_GLOBAL(0x0597b8b0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057985a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e41ce0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e41ce0

// auto_setup_static_objects_01e42570: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e42570 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597b9c8, second_guard, uint8_t);
RT_GLOBAL(0x0597b970, second_object, TargetedObject);
RT_GLOBAL(0x0597b968, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798620, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e42570()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e42570

// auto_setup_static_objects_01e433e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e433e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597ba88, second_guard, uint8_t);
RT_GLOBAL(0x0597ba30, second_object, TargetedObject);
RT_GLOBAL(0x0597ba28, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057986d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e433e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e433e0

// auto_setup_static_objects_01e435c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e435c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597ba88, second_guard, uint8_t);
RT_GLOBAL(0x0597ba30, second_object, TargetedObject);
RT_GLOBAL(0x0597ba28, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057986d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e435c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e435c0

// auto_setup_static_objects_01e44350: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e44350 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597bb48, second_guard, uint8_t);
RT_GLOBAL(0x0597baf0, second_object, TargetedObject);
RT_GLOBAL(0x0597bae8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798750, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e44350()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e44350

// auto_setup_static_objects_01e44ef0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e44ef0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597bc08, second_guard, uint8_t);
RT_GLOBAL(0x0597bbb0, second_object, TargetedObject);
RT_GLOBAL(0x0597bba8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057987d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e44ef0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e44ef0

// auto_setup_static_objects_01e45ab0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e45ab0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597bcc0, second_guard, uint8_t);
RT_GLOBAL(0x0597bc68, second_object, TargetedObject);
RT_GLOBAL(0x0597bc60, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798850, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e45ab0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e45ab0

// auto_setup_static_objects_01e467e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e467e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597bd60, second_guard, uint8_t);
RT_GLOBAL(0x0597bd08, second_object, TargetedObject);
RT_GLOBAL(0x0597bd00, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057988d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e467e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e467e0

// auto_setup_static_objects_01e47b10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e47b10 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597be18, second_guard, uint8_t);
RT_GLOBAL(0x0597bdc0, second_object, TargetedObject);
RT_GLOBAL(0x0597bdb8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798950, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e47b10()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e47b10

// auto_setup_static_objects_01e48e00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e48e00 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c170, second_guard, uint8_t);
RT_GLOBAL(0x0597c118, second_object, TargetedObject);
RT_GLOBAL(0x0597c110, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057989d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e48e00()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e48e00

// auto_setup_static_objects_01e50630: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e50630 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c228, second_guard, uint8_t);
RT_GLOBAL(0x0597c1d0, second_object, TargetedObject);
RT_GLOBAL(0x0597c1c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798a80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e50630()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e50630

// auto_setup_static_objects_01e50810: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e50810 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c228, second_guard, uint8_t);
RT_GLOBAL(0x0597c1d0, second_object, TargetedObject);
RT_GLOBAL(0x0597c1c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798a80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e50810()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e50810

// auto_setup_static_objects_01e532e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e532e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c2e8, second_guard, uint8_t);
RT_GLOBAL(0x0597c290, second_object, TargetedObject);
RT_GLOBAL(0x0597c288, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798b00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e532e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e532e0

// auto_setup_static_objects_01e53e30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e53e30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c3a8, second_guard, uint8_t);
RT_GLOBAL(0x0597c350, second_object, TargetedObject);
RT_GLOBAL(0x0597c348, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798b80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e53e30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e53e30

// auto_setup_static_objects_01e54950: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e54950 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c468, second_guard, uint8_t);
RT_GLOBAL(0x0597c410, second_object, TargetedObject);
RT_GLOBAL(0x0597c408, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798c00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e54950()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e54950

// auto_setup_static_objects_01e55ed0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e55ed0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c528, second_guard, uint8_t);
RT_GLOBAL(0x0597c4d0, second_object, TargetedObject);
RT_GLOBAL(0x0597c4c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798c80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e55ed0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e55ed0

// auto_setup_static_objects_01e58e40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e58e40 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c5f0, second_guard, uint8_t);
RT_GLOBAL(0x0597c598, second_object, TargetedObject);
RT_GLOBAL(0x0597c590, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798d00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e58e40()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e58e40

// auto_setup_static_objects_01e59f50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e59f50 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c6a8, second_guard, uint8_t);
RT_GLOBAL(0x0597c650, second_object, TargetedObject);
RT_GLOBAL(0x0597c648, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798db0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e59f50()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e59f50

// auto_setup_static_objects_01e5a130: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e5a130 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c6a8, second_guard, uint8_t);
RT_GLOBAL(0x0597c650, second_object, TargetedObject);
RT_GLOBAL(0x0597c648, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798db0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e5a130()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e5a130

// auto_setup_static_objects_01e5bfd0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e5bfd0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c810, second_guard, uint8_t);
RT_GLOBAL(0x0597c7b8, second_object, TargetedObject);
RT_GLOBAL(0x0597c7b0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798e30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e5bfd0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e5bfd0

// auto_setup_static_objects_01e5d680: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e5d680 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c8c8, second_guard, uint8_t);
RT_GLOBAL(0x0597c870, second_object, TargetedObject);
RT_GLOBAL(0x0597c868, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798eb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e5d680()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e5d680

// auto_setup_static_objects_01e5e380: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e5e380 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597c988, second_guard, uint8_t);
RT_GLOBAL(0x0597c930, second_object, TargetedObject);
RT_GLOBAL(0x0597c928, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798f30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e5e380()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e5e380

// auto_setup_static_objects_01e5f030: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e5f030 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597ca48, second_guard, uint8_t);
RT_GLOBAL(0x0597c9f0, second_object, TargetedObject);
RT_GLOBAL(0x0597c9e8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05798fb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e5f030()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e5f030

// auto_setup_static_objects_01e5fb40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e5fb40 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597cb10, second_guard, uint8_t);
RT_GLOBAL(0x0597cab8, second_object, TargetedObject);
RT_GLOBAL(0x0597cab0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05799030, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e5fb40()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e5fb40

// auto_setup_static_objects_01e62250: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e62250 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597cbb0, second_guard, uint8_t);
RT_GLOBAL(0x0597cb58, second_object, TargetedObject);
RT_GLOBAL(0x0597cb50, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057990b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e62250()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e62250

// auto_setup_static_objects_01e63080: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e63080 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597cc50, second_guard, uint8_t);
RT_GLOBAL(0x0597cbf8, second_object, TargetedObject);
RT_GLOBAL(0x0597cbf0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05799130, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e63080()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e63080

// auto_setup_static_objects_01e63e90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e63e90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597ccf8, second_guard, uint8_t);
RT_GLOBAL(0x0597cca0, second_object, TargetedObject);
RT_GLOBAL(0x0597cc98, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057991b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e63e90()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e63e90

// auto_setup_static_objects_01e64880: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e64880 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597cdb8, second_guard, uint8_t);
RT_GLOBAL(0x0597cd60, second_object, TargetedObject);
RT_GLOBAL(0x0597cd58, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05799230, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e64880()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e64880

// auto_setup_static_objects_01e67640: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e67640 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597d2d8, second_guard, uint8_t);
RT_GLOBAL(0x0597d280, second_object, TargetedObject);
RT_GLOBAL(0x0597d278, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05799680, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e67640()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e67640

// auto_setup_static_objects_01e67820: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e67820 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597d1f8, second_guard, uint8_t);
RT_GLOBAL(0x0597d1a0, second_object, TargetedObject);
RT_GLOBAL(0x0597d198, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05799580, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e67820()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e67820

// auto_setup_static_objects_01e67a00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01e67a00 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597d188, second_guard, uint8_t);
RT_GLOBAL(0x0597d130, second_object, TargetedObject);
RT_GLOBAL(0x0597d128, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05799500, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01e67a00()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01e67a00

// auto_setup_static_objects_01ea2b70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ea2b70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597e6f8, second_guard, uint8_t);
RT_GLOBAL(0x0597e6a0, second_object, TargetedObject);
RT_GLOBAL(0x0597e698, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05799b30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01ea2b70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01ea2b70

// auto_setup_static_objects_01ea2d50: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ea2d50 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597e618, second_guard, uint8_t);
RT_GLOBAL(0x0597e5c0, second_object, TargetedObject);
RT_GLOBAL(0x0597e5b8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05799a30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01ea2d50()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01ea2d50

// auto_setup_static_objects_01ea2f30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01ea2f30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597e5a8, second_guard, uint8_t);
RT_GLOBAL(0x0597e550, second_object, TargetedObject);
RT_GLOBAL(0x0597e548, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057999b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01ea2f30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01ea2f30

// auto_setup_static_objects_01eb3dd0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01eb3dd0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597ec48, second_guard, uint8_t);
RT_GLOBAL(0x0597ebf0, second_object, TargetedObject);
RT_GLOBAL(0x0597ebe8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05799ed0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01eb3dd0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01eb3dd0

// auto_setup_static_objects_01eb3fb0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01eb3fb0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597eb68, second_guard, uint8_t);
RT_GLOBAL(0x0597eb10, second_object, TargetedObject);
RT_GLOBAL(0x0597eb08, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05799dd0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01eb3fb0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01eb3fb0

// auto_setup_static_objects_01eb4190: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_01eb4190 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0597eaf8, second_guard, uint8_t);
RT_GLOBAL(0x0597eaa0, second_object, TargetedObject);
RT_GLOBAL(0x0597ea98, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x05799d50, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_01eb4190()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_01eb4190

// auto_setup_static_objects_02095730: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02095730 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059832a0, second_guard, uint8_t);
RT_GLOBAL(0x05983248, second_object, TargetedObject);
RT_GLOBAL(0x05983240, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579ce10, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02095730()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02095730

// auto_setup_static_objects_0209bb20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0209bb20 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05983350, second_guard, uint8_t);
RT_GLOBAL(0x059832f8, second_object, TargetedObject);
RT_GLOBAL(0x059832f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579ce90, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0209bb20()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0209bb20

// auto_setup_static_objects_020a85e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020a85e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059836b0, second_guard, uint8_t);
RT_GLOBAL(0x05983658, second_object, TargetedObject);
RT_GLOBAL(0x05983650, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579d1a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020a85e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020a85e0

// auto_setup_static_objects_020a87c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020a87c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059836b0, second_guard, uint8_t);
RT_GLOBAL(0x05983658, second_object, TargetedObject);
RT_GLOBAL(0x05983650, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579d1a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020a87c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020a87c0

// auto_setup_static_objects_020aaf90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020aaf90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05983800, second_guard, uint8_t);
RT_GLOBAL(0x059837a8, second_object, TargetedObject);
RT_GLOBAL(0x059837a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579d2d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020aaf90()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020aaf90

// auto_setup_static_objects_020ab170: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020ab170 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05983800, second_guard, uint8_t);
RT_GLOBAL(0x059837a8, second_object, TargetedObject);
RT_GLOBAL(0x059837a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579d2d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020ab170()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020ab170

// auto_setup_static_objects_020b2750: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020b2750 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059838a0, second_guard, uint8_t);
RT_GLOBAL(0x05983848, second_object, TargetedObject);
RT_GLOBAL(0x05983840, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579d3a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020b2750()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020b2750

// auto_setup_static_objects_020b2930: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020b2930 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059838a0, second_guard, uint8_t);
RT_GLOBAL(0x05983848, second_object, TargetedObject);
RT_GLOBAL(0x05983840, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579d3a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020b2930()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020b2930

// auto_setup_static_objects_020b5db0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020b5db0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05983a60, second_guard, uint8_t);
RT_GLOBAL(0x05983a08, second_object, TargetedObject);
RT_GLOBAL(0x05983a00, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579d420, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020b5db0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020b5db0

// auto_setup_static_objects_020b8830: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020b8830 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05983ce0, second_guard, uint8_t);
RT_GLOBAL(0x05983c88, second_object, TargetedObject);
RT_GLOBAL(0x05983c80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579d620, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020b8830()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020b8830

// auto_setup_static_objects_020b97c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020b97c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05984060, second_guard, uint8_t);
RT_GLOBAL(0x05984008, second_object, TargetedObject);
RT_GLOBAL(0x05984000, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579da80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020b97c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020b97c0

// auto_setup_static_objects_020b99a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020b99a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05983f80, second_guard, uint8_t);
RT_GLOBAL(0x05983f28, second_object, TargetedObject);
RT_GLOBAL(0x05983f20, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579d980, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020b99a0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020b99a0

// auto_setup_static_objects_020b9b80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020b9b80 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05983f10, second_guard, uint8_t);
RT_GLOBAL(0x05983eb8, second_object, TargetedObject);
RT_GLOBAL(0x05983eb0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579d900, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020b9b80()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020b9b80

// auto_setup_static_objects_020bfdd0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020bfdd0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05984110, second_guard, uint8_t);
RT_GLOBAL(0x059840b8, second_object, TargetedObject);
RT_GLOBAL(0x059840b0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579db00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020bfdd0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020bfdd0

// auto_setup_static_objects_020c11e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020c11e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059841c0, second_guard, uint8_t);
RT_GLOBAL(0x05984168, second_object, TargetedObject);
RT_GLOBAL(0x05984160, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579db80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020c11e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020c11e0

// auto_setup_static_objects_020c20f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020c20f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05984278, second_guard, uint8_t);
RT_GLOBAL(0x05984220, second_object, TargetedObject);
RT_GLOBAL(0x05984218, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579dc00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020c20f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020c20f0

// auto_setup_static_objects_020c33c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020c33c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05984320, second_guard, uint8_t);
RT_GLOBAL(0x059842c8, second_object, TargetedObject);
RT_GLOBAL(0x059842c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579dc80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020c33c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020c33c0

// auto_setup_static_objects_020c52b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020c52b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059843c0, second_guard, uint8_t);
RT_GLOBAL(0x05984368, second_object, TargetedObject);
RT_GLOBAL(0x05984360, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579dd00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020c52b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020c52b0

// auto_setup_static_objects_020c5f20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020c5f20 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05984a30, second_guard, uint8_t);
RT_GLOBAL(0x059849d8, second_object, TargetedObject);
RT_GLOBAL(0x059849d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579e050, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020c5f20()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020c5f20

// auto_setup_static_objects_020c6100: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020c6100 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05984950, second_guard, uint8_t);
RT_GLOBAL(0x059848f8, second_object, TargetedObject);
RT_GLOBAL(0x059848f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579df50, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020c6100()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020c6100

// auto_setup_static_objects_020c62e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020c62e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059848e0, second_guard, uint8_t);
RT_GLOBAL(0x05984888, second_object, TargetedObject);
RT_GLOBAL(0x05984880, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579ded0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020c62e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020c62e0

// auto_setup_static_objects_020d0230: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020d0230 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05984d00, second_guard, uint8_t);
RT_GLOBAL(0x05984ca8, second_object, TargetedObject);
RT_GLOBAL(0x05984ca0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579e250, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020d0230()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020d0230

// auto_setup_static_objects_020d0410: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020d0410 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05984c20, second_guard, uint8_t);
RT_GLOBAL(0x05984bc8, second_object, TargetedObject);
RT_GLOBAL(0x05984bc0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579e150, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020d0410()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020d0410

// auto_setup_static_objects_020d05f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020d05f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05984bb0, second_guard, uint8_t);
RT_GLOBAL(0x05984b58, second_object, TargetedObject);
RT_GLOBAL(0x05984b50, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579e0d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020d05f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020d05f0

// auto_setup_static_objects_020d34a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020d34a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05984da0, second_guard, uint8_t);
RT_GLOBAL(0x05984d48, second_object, TargetedObject);
RT_GLOBAL(0x05984d40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579e2d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020d34a0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020d34a0

// auto_setup_static_objects_020d4900: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020d4900 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05985078, second_guard, uint8_t);
RT_GLOBAL(0x05985020, second_object, TargetedObject);
RT_GLOBAL(0x05985018, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579e6a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020d4900()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020d4900

// auto_setup_static_objects_020d4ae0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020d4ae0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05984f98, second_guard, uint8_t);
RT_GLOBAL(0x05984f40, second_object, TargetedObject);
RT_GLOBAL(0x05984f38, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579e5a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020d4ae0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020d4ae0

// auto_setup_static_objects_020d4cc0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020d4cc0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05984f28, second_guard, uint8_t);
RT_GLOBAL(0x05984ed0, second_object, TargetedObject);
RT_GLOBAL(0x05984ec8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579e520, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020d4cc0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020d4cc0

// auto_setup_static_objects_020d8790: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020d8790 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05985120, second_guard, uint8_t);
RT_GLOBAL(0x059850c8, second_object, TargetedObject);
RT_GLOBAL(0x059850c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579e720, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020d8790()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020d8790

// auto_setup_static_objects_020f3c30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020f3c30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05985a20, second_guard, uint8_t);
RT_GLOBAL(0x059859c8, second_object, TargetedObject);
RT_GLOBAL(0x059859c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579f300, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020f3c30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020f3c30

// auto_setup_static_objects_020f3e10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020f3e10 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05985940, second_guard, uint8_t);
RT_GLOBAL(0x059858e8, second_object, TargetedObject);
RT_GLOBAL(0x059858e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579f200, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020f3e10()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020f3e10

// auto_setup_static_objects_020f3ff0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020f3ff0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059858d0, second_guard, uint8_t);
RT_GLOBAL(0x05985878, second_object, TargetedObject);
RT_GLOBAL(0x05985870, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579f180, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020f3ff0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020f3ff0

// auto_setup_static_objects_020f87f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020f87f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05985d08, second_guard, uint8_t);
RT_GLOBAL(0x05985cb0, second_object, TargetedObject);
RT_GLOBAL(0x05985ca8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579f650, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020f87f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020f87f0

// auto_setup_static_objects_020f89d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020f89d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05985c28, second_guard, uint8_t);
RT_GLOBAL(0x05985bd0, second_object, TargetedObject);
RT_GLOBAL(0x05985bc8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579f550, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020f89d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020f89d0

// auto_setup_static_objects_020f8bb0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020f8bb0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05985bb8, second_guard, uint8_t);
RT_GLOBAL(0x05985b60, second_object, TargetedObject);
RT_GLOBAL(0x05985b58, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579f4d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020f8bb0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020f8bb0

// auto_setup_static_objects_020ffa30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020ffa30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986090, second_guard, uint8_t);
RT_GLOBAL(0x05986038, second_object, TargetedObject);
RT_GLOBAL(0x05986030, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579f9a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020ffa30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020ffa30

// auto_setup_static_objects_020ffc10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020ffc10 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986020, second_guard, uint8_t);
RT_GLOBAL(0x05985fc8, second_object, TargetedObject);
RT_GLOBAL(0x05985fc0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579f920, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020ffc10()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020ffc10

// auto_setup_static_objects_020ffdf0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_020ffdf0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05985f40, second_guard, uint8_t);
RT_GLOBAL(0x05985ee8, second_object, TargetedObject);
RT_GLOBAL(0x05985ee0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579f820, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_020ffdf0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_020ffdf0

// auto_setup_static_objects_02108370: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02108370 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059863a0, second_guard, uint8_t);
RT_GLOBAL(0x05986348, second_object, TargetedObject);
RT_GLOBAL(0x05986340, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579fc60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02108370()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02108370

// auto_setup_static_objects_02108550: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02108550 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986330, second_guard, uint8_t);
RT_GLOBAL(0x059862d8, second_object, TargetedObject);
RT_GLOBAL(0x059862d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579fbe0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02108550()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02108550

// auto_setup_static_objects_02108730: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02108730 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986250, second_guard, uint8_t);
RT_GLOBAL(0x059861f8, second_object, TargetedObject);
RT_GLOBAL(0x059861f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579fae0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02108730()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02108730

// auto_setup_static_objects_0210b6b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0210b6b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986440, second_guard, uint8_t);
RT_GLOBAL(0x059863e8, second_object, TargetedObject);
RT_GLOBAL(0x059863e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579fd50, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0210b6b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0210b6b0

// auto_setup_static_objects_021135e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021135e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986720, second_guard, uint8_t);
RT_GLOBAL(0x059866c8, second_object, TargetedObject);
RT_GLOBAL(0x059866c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579fe70, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021135e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021135e0

// auto_setup_static_objects_021137c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021137c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986720, second_guard, uint8_t);
RT_GLOBAL(0x059866c8, second_object, TargetedObject);
RT_GLOBAL(0x059866c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579fe70, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021137c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021137c0

// auto_setup_static_objects_02114130: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02114130 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059867c0, second_guard, uint8_t);
RT_GLOBAL(0x05986768, second_object, TargetedObject);
RT_GLOBAL(0x05986760, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579ff30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02114130()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02114130

// auto_setup_static_objects_02116010: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02116010 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986860, second_guard, uint8_t);
RT_GLOBAL(0x05986808, second_object, TargetedObject);
RT_GLOBAL(0x05986800, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579fff0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02116010()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02116010

// auto_setup_static_objects_021161f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021161f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986860, second_guard, uint8_t);
RT_GLOBAL(0x05986808, second_object, TargetedObject);
RT_GLOBAL(0x05986800, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x0579fff0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021161f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021161f0

// auto_setup_static_objects_02118f40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02118f40 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986980, second_guard, uint8_t);
RT_GLOBAL(0x05986928, second_object, TargetedObject);
RT_GLOBAL(0x05986920, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a01f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02118f40()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02118f40

// auto_setup_static_objects_02119120: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02119120 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986980, second_guard, uint8_t);
RT_GLOBAL(0x05986928, second_object, TargetedObject);
RT_GLOBAL(0x05986920, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a01f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02119120()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02119120

// auto_setup_static_objects_021198c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021198c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986a20, second_guard, uint8_t);
RT_GLOBAL(0x059869c8, second_object, TargetedObject);
RT_GLOBAL(0x059869c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a0270, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021198c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021198c0

// auto_setup_static_objects_02119f70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02119f70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986ac0, second_guard, uint8_t);
RT_GLOBAL(0x05986a68, second_object, TargetedObject);
RT_GLOBAL(0x05986a60, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a04e0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02119f70()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02119f70

// auto_setup_static_objects_0211e6b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0211e6b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986b60, second_guard, uint8_t);
RT_GLOBAL(0x05986b08, second_object, TargetedObject);
RT_GLOBAL(0x05986b00, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a0560, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0211e6b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0211e6b0

// auto_setup_static_objects_0211f140: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0211f140 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986c00, second_guard, uint8_t);
RT_GLOBAL(0x05986ba8, second_object, TargetedObject);
RT_GLOBAL(0x05986ba0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a06a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0211f140()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0211f140

// auto_setup_static_objects_0211f320: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0211f320 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986c00, second_guard, uint8_t);
RT_GLOBAL(0x05986ba8, second_object, TargetedObject);
RT_GLOBAL(0x05986ba0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a06a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0211f320()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0211f320

// auto_setup_static_objects_0211fbc0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0211fbc0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986ca0, second_guard, uint8_t);
RT_GLOBAL(0x05986c48, second_object, TargetedObject);
RT_GLOBAL(0x05986c40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a0720, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0211fbc0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0211fbc0

// auto_setup_static_objects_021230d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021230d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986e20, second_guard, uint8_t);
RT_GLOBAL(0x05986dc8, second_object, TargetedObject);
RT_GLOBAL(0x05986dc0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a0ba0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021230d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021230d0

// auto_setup_static_objects_021272d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021272d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05986ec0, second_guard, uint8_t);
RT_GLOBAL(0x05986e68, second_object, TargetedObject);
RT_GLOBAL(0x05986e60, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a0c20, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021272d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021272d0

// auto_setup_static_objects_0213e210: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0213e210 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05987ca0, second_guard, uint8_t);
RT_GLOBAL(0x05987c48, second_object, TargetedObject);
RT_GLOBAL(0x05987c40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a1c30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0213e210()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0213e210

// auto_setup_static_objects_0213e3f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0213e3f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05987c30, second_guard, uint8_t);
RT_GLOBAL(0x05987bd8, second_object, TargetedObject);
RT_GLOBAL(0x05987bd0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a1bb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0213e3f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0213e3f0

// auto_setup_static_objects_0213e5d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0213e5d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05987b50, second_guard, uint8_t);
RT_GLOBAL(0x05987af8, second_object, TargetedObject);
RT_GLOBAL(0x05987af0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a1ab0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0213e5d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0213e5d0

// auto_setup_static_objects_021454c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021454c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05987f40, second_guard, uint8_t);
RT_GLOBAL(0x05987ee8, second_object, TargetedObject);
RT_GLOBAL(0x05987ee0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a1dc0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021454c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021454c0

// auto_setup_static_objects_02146ee0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02146ee0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05987fe0, second_guard, uint8_t);
RT_GLOBAL(0x05987f88, second_object, TargetedObject);
RT_GLOBAL(0x05987f80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a1e40, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02146ee0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02146ee0

// auto_setup_static_objects_02148a30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02148a30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05988100, second_guard, uint8_t);
RT_GLOBAL(0x059880a8, second_object, TargetedObject);
RT_GLOBAL(0x059880a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a1f40, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02148a30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02148a30

// auto_setup_static_objects_021495e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021495e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059881a0, second_guard, uint8_t);
RT_GLOBAL(0x05988148, second_object, TargetedObject);
RT_GLOBAL(0x05988140, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a1fc0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021495e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021495e0

// auto_setup_static_objects_0214a1f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0214a1f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05988420, second_guard, uint8_t);
RT_GLOBAL(0x059883c8, second_object, TargetedObject);
RT_GLOBAL(0x059883c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2280, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0214a1f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0214a1f0

// auto_setup_static_objects_0214a3d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0214a3d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059883b0, second_guard, uint8_t);
RT_GLOBAL(0x05988358, second_object, TargetedObject);
RT_GLOBAL(0x05988350, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2200, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0214a3d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0214a3d0

// auto_setup_static_objects_0214a5b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0214a5b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059882d0, second_guard, uint8_t);
RT_GLOBAL(0x05988278, second_object, TargetedObject);
RT_GLOBAL(0x05988270, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2100, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0214a5b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0214a5b0

// auto_setup_static_objects_0214dca0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0214dca0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059884c0, second_guard, uint8_t);
RT_GLOBAL(0x05988468, second_object, TargetedObject);
RT_GLOBAL(0x05988460, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2350, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0214dca0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0214dca0

// auto_setup_static_objects_021589a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021589a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05988960, second_guard, uint8_t);
RT_GLOBAL(0x05988908, second_object, TargetedObject);
RT_GLOBAL(0x05988900, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a27a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021589a0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021589a0

// auto_setup_static_objects_0215f770: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0215f770 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05988a40, second_guard, uint8_t);
RT_GLOBAL(0x059889e8, second_object, TargetedObject);
RT_GLOBAL(0x059889e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2820, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0215f770()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0215f770

// auto_setup_static_objects_02160320: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02160320 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05988ae0, second_guard, uint8_t);
RT_GLOBAL(0x05988a88, second_object, TargetedObject);
RT_GLOBAL(0x05988a80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a28a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02160320()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02160320

// auto_setup_static_objects_021624c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021624c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05988b80, second_guard, uint8_t);
RT_GLOBAL(0x05988b28, second_object, TargetedObject);
RT_GLOBAL(0x05988b20, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2920, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021624c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021624c0

// auto_setup_static_objects_021735e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021735e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989480, second_guard, uint8_t);
RT_GLOBAL(0x05989428, second_object, TargetedObject);
RT_GLOBAL(0x05989420, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2c30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021735e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021735e0

// auto_setup_static_objects_021746b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021746b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989520, second_guard, uint8_t);
RT_GLOBAL(0x059894c8, second_object, TargetedObject);
RT_GLOBAL(0x059894c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2cb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021746b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021746b0

// auto_setup_static_objects_021753f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021753f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059895c0, second_guard, uint8_t);
RT_GLOBAL(0x05989568, second_object, TargetedObject);
RT_GLOBAL(0x05989560, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2d30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021753f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021753f0

// auto_setup_static_objects_02176160: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02176160 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989660, second_guard, uint8_t);
RT_GLOBAL(0x05989608, second_object, TargetedObject);
RT_GLOBAL(0x05989600, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2db0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02176160()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02176160

// auto_setup_static_objects_02176d30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02176d30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989700, second_guard, uint8_t);
RT_GLOBAL(0x059896a8, second_object, TargetedObject);
RT_GLOBAL(0x059896a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2e30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02176d30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02176d30

// auto_setup_static_objects_02177aa0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02177aa0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059897a0, second_guard, uint8_t);
RT_GLOBAL(0x05989748, second_object, TargetedObject);
RT_GLOBAL(0x05989740, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2eb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02177aa0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02177aa0

// auto_setup_static_objects_02178670: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02178670 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989840, second_guard, uint8_t);
RT_GLOBAL(0x059897e8, second_object, TargetedObject);
RT_GLOBAL(0x059897e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2f30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02178670()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02178670

// auto_setup_static_objects_02179300: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02179300 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x059898e0, second_guard, uint8_t);
RT_GLOBAL(0x05989888, second_object, TargetedObject);
RT_GLOBAL(0x05989880, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a2fb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02179300()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02179300

// auto_setup_static_objects_0217a050: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0217a050 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989980, second_guard, uint8_t);
RT_GLOBAL(0x05989928, second_object, TargetedObject);
RT_GLOBAL(0x05989920, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3030, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0217a050()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0217a050

// auto_setup_static_objects_0217add0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0217add0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989a20, second_guard, uint8_t);
RT_GLOBAL(0x059899c8, second_object, TargetedObject);
RT_GLOBAL(0x059899c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a30b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0217add0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0217add0

// auto_setup_static_objects_0217b9b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0217b9b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989ac0, second_guard, uint8_t);
RT_GLOBAL(0x05989a68, second_object, TargetedObject);
RT_GLOBAL(0x05989a60, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3130, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0217b9b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0217b9b0

// auto_setup_static_objects_0217c720: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0217c720 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989b60, second_guard, uint8_t);
RT_GLOBAL(0x05989b08, second_object, TargetedObject);
RT_GLOBAL(0x05989b00, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a31b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0217c720()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0217c720

// auto_setup_static_objects_0217d2f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0217d2f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989c00, second_guard, uint8_t);
RT_GLOBAL(0x05989ba8, second_object, TargetedObject);
RT_GLOBAL(0x05989ba0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3230, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0217d2f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0217d2f0

// auto_setup_static_objects_0217e060: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0217e060 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989ca0, second_guard, uint8_t);
RT_GLOBAL(0x05989c48, second_object, TargetedObject);
RT_GLOBAL(0x05989c40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a32b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0217e060()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0217e060

// auto_setup_static_objects_0217ec30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0217ec30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989d40, second_guard, uint8_t);
RT_GLOBAL(0x05989ce8, second_object, TargetedObject);
RT_GLOBAL(0x05989ce0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3360, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0217ec30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0217ec30

// auto_setup_static_objects_0217ee10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0217ee10 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989d40, second_guard, uint8_t);
RT_GLOBAL(0x05989ce8, second_object, TargetedObject);
RT_GLOBAL(0x05989ce0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3360, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0217ee10()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0217ee10

// auto_setup_static_objects_0217fa30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0217fa30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989de0, second_guard, uint8_t);
RT_GLOBAL(0x05989d88, second_object, TargetedObject);
RT_GLOBAL(0x05989d80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a33e0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0217fa30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0217fa30

// auto_setup_static_objects_021807b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021807b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05989e80, second_guard, uint8_t);
RT_GLOBAL(0x05989e28, second_object, TargetedObject);
RT_GLOBAL(0x05989e20, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3460, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021807b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021807b0

// auto_setup_static_objects_021859b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021859b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598a220, second_guard, uint8_t);
RT_GLOBAL(0x0598a1c8, second_object, TargetedObject);
RT_GLOBAL(0x0598a1c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3b20, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021859b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021859b0

// auto_setup_static_objects_02186590: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02186590 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598a2c0, second_guard, uint8_t);
RT_GLOBAL(0x0598a268, second_object, TargetedObject);
RT_GLOBAL(0x0598a260, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3ba0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02186590()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02186590

// auto_setup_static_objects_0218b420: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0218b420 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598a3b0, second_guard, uint8_t);
RT_GLOBAL(0x0598a358, second_object, TargetedObject);
RT_GLOBAL(0x0598a350, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3c60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0218b420()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0218b420

// auto_setup_static_objects_0218b600: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0218b600 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598a3b0, second_guard, uint8_t);
RT_GLOBAL(0x0598a358, second_object, TargetedObject);
RT_GLOBAL(0x0598a350, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3c60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0218b600()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0218b600

// auto_setup_static_objects_0218d170: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0218d170 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598a450, second_guard, uint8_t);
RT_GLOBAL(0x0598a3f8, second_object, TargetedObject);
RT_GLOBAL(0x0598a3f0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3ce0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0218d170()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0218d170

// auto_setup_static_objects_0218dee0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0218dee0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598a4f0, second_guard, uint8_t);
RT_GLOBAL(0x0598a498, second_object, TargetedObject);
RT_GLOBAL(0x0598a490, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3d60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_0218dee0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_0218dee0

// auto_setup_static_objects_02191410: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02191410 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598a880, second_guard, uint8_t);
RT_GLOBAL(0x0598a828, second_object, TargetedObject);
RT_GLOBAL(0x0598a820, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a40a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02191410()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02191410

// auto_setup_static_objects_021915f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021915f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598a810, second_guard, uint8_t);
RT_GLOBAL(0x0598a7b8, second_object, TargetedObject);
RT_GLOBAL(0x0598a7b0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a4020, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021915f0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021915f0

// auto_setup_static_objects_021917d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021917d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598a730, second_guard, uint8_t);
RT_GLOBAL(0x0598a6d8, second_object, TargetedObject);
RT_GLOBAL(0x0598a6d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a3f20, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021917d0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021917d0

// auto_setup_static_objects_02199450: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02199450 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598aca8, second_guard, uint8_t);
RT_GLOBAL(0x0598ac50, second_object, TargetedObject);
RT_GLOBAL(0x0598ac48, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a4490, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02199450()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02199450

// auto_setup_static_objects_02199630: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02199630 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598ac38, second_guard, uint8_t);
RT_GLOBAL(0x0598abe0, second_object, TargetedObject);
RT_GLOBAL(0x0598abd8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a4410, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02199630()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02199630

// auto_setup_static_objects_02199810: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02199810 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598ab58, second_guard, uint8_t);
RT_GLOBAL(0x0598ab00, second_object, TargetedObject);
RT_GLOBAL(0x0598aaf8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a4310, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_02199810()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_02199810

// auto_setup_static_objects_021a2590: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021a2590 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598b158, second_guard, uint8_t);
RT_GLOBAL(0x0598b100, second_object, TargetedObject);
RT_GLOBAL(0x0598b0f8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a4810, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021a2590()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021a2590

// auto_setup_static_objects_021a2770: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021a2770 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598b0e8, second_guard, uint8_t);
RT_GLOBAL(0x0598b090, second_object, TargetedObject);
RT_GLOBAL(0x0598b088, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a4790, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021a2770()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021a2770

// auto_setup_static_objects_021a8f80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021a8f80 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598b528, second_guard, uint8_t);
RT_GLOBAL(0x0598b4d0, second_object, TargetedObject);
RT_GLOBAL(0x0598b4c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a4d90, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021a8f80()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021a8f80

// auto_setup_static_objects_021a9160: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021a9160 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598b448, second_guard, uint8_t);
RT_GLOBAL(0x0598b3f0, second_object, TargetedObject);
RT_GLOBAL(0x0598b3e8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a4c90, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021a9160()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021a9160

// auto_setup_static_objects_021a9340: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021a9340 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598b3d8, second_guard, uint8_t);
RT_GLOBAL(0x0598b380, second_object, TargetedObject);
RT_GLOBAL(0x0598b378, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a4c10, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021a9340()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021a9340

// auto_setup_static_objects_021c0e30: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021c0e30 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598be80, second_guard, uint8_t);
RT_GLOBAL(0x0598be28, second_object, TargetedObject);
RT_GLOBAL(0x0598be20, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a5400, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021c0e30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021c0e30

// auto_setup_static_objects_021c2c60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021c2c60 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598bfc0, second_guard, uint8_t);
RT_GLOBAL(0x0598bf68, second_object, TargetedObject);
RT_GLOBAL(0x0598bf60, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a5500, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021c2c60()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021c2c60

// auto_setup_static_objects_021c3a00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021c3a00 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598c060, second_guard, uint8_t);
RT_GLOBAL(0x0598c008, second_object, TargetedObject);
RT_GLOBAL(0x0598c000, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a55c0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021c3a00()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021c3a00

// auto_setup_static_objects_021c44b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021c44b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598c100, second_guard, uint8_t);
RT_GLOBAL(0x0598c0a8, second_object, TargetedObject);
RT_GLOBAL(0x0598c0a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a5640, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021c44b0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021c44b0

// auto_setup_static_objects_021c5160: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021c5160 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598c1a0, second_guard, uint8_t);
RT_GLOBAL(0x0598c148, second_object, TargetedObject);
RT_GLOBAL(0x0598c140, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a5700, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021c5160()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021c5160

// auto_setup_static_objects_021c66c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021c66c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598c340, second_guard, uint8_t);
RT_GLOBAL(0x0598c2e8, second_object, TargetedObject);
RT_GLOBAL(0x0598c2e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a5850, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021c66c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021c66c0

// auto_setup_static_objects_021c72e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021c72e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598c3e0, second_guard, uint8_t);
RT_GLOBAL(0x0598c388, second_object, TargetedObject);
RT_GLOBAL(0x0598c380, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a5900, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021c72e0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021c72e0

// auto_setup_static_objects_021c74c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021c74c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598c3e0, second_guard, uint8_t);
RT_GLOBAL(0x0598c388, second_object, TargetedObject);
RT_GLOBAL(0x0598c380, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a5900, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021c74c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021c74c0

// auto_setup_static_objects_021c84c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_021c84c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598c4c0, second_guard, uint8_t);
RT_GLOBAL(0x0598c468, second_object, TargetedObject);
RT_GLOBAL(0x0598c460, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a5980, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_auto_setup_static_objects_021c84c0()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}

}  // namespace twin_021c84c0
