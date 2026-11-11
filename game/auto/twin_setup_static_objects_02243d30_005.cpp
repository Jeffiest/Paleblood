// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_setup_static_objects_02243d30, in game/misc/setup_static_objects_02243d30.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"

// auto_setup_static_objects_024a2510: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_024a2510 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa3490, second_guard, uint8_t);
RT_GLOBAL(0x05aa3438, second_object, TargetedObject);
RT_GLOBAL(0x05aa3430, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b3920, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_024a2510()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_024a2510

// auto_setup_static_objects_024a3930: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_024a3930 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa3510, second_guard, uint8_t);
RT_GLOBAL(0x05aa34b8, second_object, TargetedObject);
RT_GLOBAL(0x05aa34b0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b3a20, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_024a3930()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_024a3930

// auto_setup_static_objects_024a4d60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_024a4d60 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa3608, second_guard, uint8_t);
RT_GLOBAL(0x05aa35b0, second_object, TargetedObject);
RT_GLOBAL(0x05aa35a8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b3aa0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_024a4d60()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_024a4d60

// auto_setup_static_objects_024fb890: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_024fb890 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5860, second_guard, uint8_t);
RT_GLOBAL(0x05aa5808, second_object, TargetedObject);
RT_GLOBAL(0x05aa5800, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5320, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_024fb890()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_024fb890

// auto_setup_static_objects_024fba70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_024fba70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5860, second_guard, uint8_t);
RT_GLOBAL(0x05aa5808, second_object, TargetedObject);
RT_GLOBAL(0x05aa5800, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5320, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_024fba70()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_024fba70

// auto_setup_static_objects_02503a60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02503a60 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa58d0, second_guard, uint8_t);
RT_GLOBAL(0x05aa5878, second_object, TargetedObject);
RT_GLOBAL(0x05aa5870, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b53a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02503a60()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02503a60

// auto_setup_static_objects_02505d20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02505d20 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5940, second_guard, uint8_t);
RT_GLOBAL(0x05aa58e8, second_object, TargetedObject);
RT_GLOBAL(0x05aa58e0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5420, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02505d20()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02505d20

// auto_setup_static_objects_025069f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_025069f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa59b0, second_guard, uint8_t);
RT_GLOBAL(0x05aa5958, second_object, TargetedObject);
RT_GLOBAL(0x05aa5950, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b54d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_025069f0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_025069f0

// auto_setup_static_objects_02506bd0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02506bd0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa59b0, second_guard, uint8_t);
RT_GLOBAL(0x05aa5958, second_object, TargetedObject);
RT_GLOBAL(0x05aa5950, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b54d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02506bd0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02506bd0

// auto_setup_static_objects_02540b20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02540b20 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5a30, second_guard, uint8_t);
RT_GLOBAL(0x05aa59d8, second_object, TargetedObject);
RT_GLOBAL(0x05aa59d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5550, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02540b20()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02540b20

// auto_setup_static_objects_02540d00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02540d00 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5a30, second_guard, uint8_t);
RT_GLOBAL(0x05aa59d8, second_object, TargetedObject);
RT_GLOBAL(0x05aa59d0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5550, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02540d00()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02540d00

// auto_setup_static_objects_02542d00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02542d00 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5aa0, second_guard, uint8_t);
RT_GLOBAL(0x05aa5a48, second_object, TargetedObject);
RT_GLOBAL(0x05aa5a40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b55d0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02542d00()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02542d00

// auto_setup_static_objects_025437b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_025437b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5b20, second_guard, uint8_t);
RT_GLOBAL(0x05aa5ac8, second_object, TargetedObject);
RT_GLOBAL(0x05aa5ac0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5650, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_025437b0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_025437b0

// auto_setup_static_objects_02543990: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02543990 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5b20, second_guard, uint8_t);
RT_GLOBAL(0x05aa5ac8, second_object, TargetedObject);
RT_GLOBAL(0x05aa5ac0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5650, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02543990()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02543990

// auto_setup_static_objects_025451a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_025451a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5b90, second_guard, uint8_t);
RT_GLOBAL(0x05aa5b38, second_object, TargetedObject);
RT_GLOBAL(0x05aa5b30, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5710, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_025451a0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_025451a0

// auto_setup_static_objects_02545cf0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02545cf0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5c10, second_guard, uint8_t);
RT_GLOBAL(0x05aa5bb8, second_object, TargetedObject);
RT_GLOBAL(0x05aa5bb0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b57f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02545cf0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02545cf0

// auto_setup_static_objects_02545ed0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02545ed0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5c10, second_guard, uint8_t);
RT_GLOBAL(0x05aa5bb8, second_object, TargetedObject);
RT_GLOBAL(0x05aa5bb0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b57f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02545ed0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02545ed0

// auto_setup_static_objects_025475d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_025475d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5c80, second_guard, uint8_t);
RT_GLOBAL(0x05aa5c28, second_object, TargetedObject);
RT_GLOBAL(0x05aa5c20, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5870, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_025475d0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_025475d0

// auto_setup_static_objects_025482d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_025482d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5d00, second_guard, uint8_t);
RT_GLOBAL(0x05aa5ca8, second_object, TargetedObject);
RT_GLOBAL(0x05aa5ca0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b58f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_025482d0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_025482d0

// auto_setup_static_objects_025484b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_025484b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5d00, second_guard, uint8_t);
RT_GLOBAL(0x05aa5ca8, second_object, TargetedObject);
RT_GLOBAL(0x05aa5ca0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b58f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_025484b0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_025484b0

// auto_setup_static_objects_02549db0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02549db0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5d70, second_guard, uint8_t);
RT_GLOBAL(0x05aa5d18, second_object, TargetedObject);
RT_GLOBAL(0x05aa5d10, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b59b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02549db0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02549db0

// auto_setup_static_objects_0254ade0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0254ade0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5de0, second_guard, uint8_t);
RT_GLOBAL(0x05aa5d88, second_object, TargetedObject);
RT_GLOBAL(0x05aa5d80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5a60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0254ade0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0254ade0

// auto_setup_static_objects_0254afc0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0254afc0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5de0, second_guard, uint8_t);
RT_GLOBAL(0x05aa5d88, second_object, TargetedObject);
RT_GLOBAL(0x05aa5d80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5a60, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0254afc0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0254afc0

// auto_setup_static_objects_0254e170: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0254e170 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5e50, second_guard, uint8_t);
RT_GLOBAL(0x05aa5df8, second_object, TargetedObject);
RT_GLOBAL(0x05aa5df0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5ae0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0254e170()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0254e170

// auto_setup_static_objects_0254eeb0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0254eeb0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5ed0, second_guard, uint8_t);
RT_GLOBAL(0x05aa5e78, second_object, TargetedObject);
RT_GLOBAL(0x05aa5e70, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5bc0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0254eeb0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0254eeb0

// auto_setup_static_objects_02550220: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02550220 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5f50, second_guard, uint8_t);
RT_GLOBAL(0x05aa5ef8, second_object, TargetedObject);
RT_GLOBAL(0x05aa5ef0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5c40, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02550220()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02550220

// auto_setup_static_objects_02550400: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02550400 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5f50, second_guard, uint8_t);
RT_GLOBAL(0x05aa5ef8, second_object, TargetedObject);
RT_GLOBAL(0x05aa5ef0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5c40, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02550400()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02550400

// auto_setup_static_objects_02551be0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02551be0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa5fc0, second_guard, uint8_t);
RT_GLOBAL(0x05aa5f68, second_object, TargetedObject);
RT_GLOBAL(0x05aa5f60, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5d00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02551be0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02551be0

// auto_setup_static_objects_02552730: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02552730 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa6040, second_guard, uint8_t);
RT_GLOBAL(0x05aa5fe8, second_object, TargetedObject);
RT_GLOBAL(0x05aa5fe0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5d80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02552730()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02552730

// auto_setup_static_objects_02552910: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02552910 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa6040, second_guard, uint8_t);
RT_GLOBAL(0x05aa5fe8, second_object, TargetedObject);
RT_GLOBAL(0x05aa5fe0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5d80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02552910()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02552910

// auto_setup_static_objects_02554320: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02554320 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa60b0, second_guard, uint8_t);
RT_GLOBAL(0x05aa6058, second_object, TargetedObject);
RT_GLOBAL(0x05aa6050, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5e40, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02554320()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02554320

// auto_setup_static_objects_02555570: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02555570 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa6120, second_guard, uint8_t);
RT_GLOBAL(0x05aa60c8, second_object, TargetedObject);
RT_GLOBAL(0x05aa60c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5ec0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02555570()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02555570

// auto_setup_static_objects_02555f70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02555f70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa6200, second_guard, uint8_t);
RT_GLOBAL(0x05aa61a8, second_object, TargetedObject);
RT_GLOBAL(0x05aa61a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b6060, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02555f70()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02555f70

// auto_setup_static_objects_02556150: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02556150 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa6200, second_guard, uint8_t);
RT_GLOBAL(0x05aa61a8, second_object, TargetedObject);
RT_GLOBAL(0x05aa61a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b6060, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02556150()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02556150

// auto_setup_static_objects_02556330: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02556330 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa6190, second_guard, uint8_t);
RT_GLOBAL(0x05aa6138, second_object, TargetedObject);
RT_GLOBAL(0x05aa6130, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5fe0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02556330()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02556330

// auto_setup_static_objects_02556510: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02556510 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa6190, second_guard, uint8_t);
RT_GLOBAL(0x05aa6138, second_object, TargetedObject);
RT_GLOBAL(0x05aa6130, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b5fe0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02556510()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02556510

// auto_setup_static_objects_025b9b80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_025b9b80 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa6c98, second_guard, uint8_t);
RT_GLOBAL(0x05aa6c40, second_object, TargetedObject);
RT_GLOBAL(0x05aa6c38, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b6d00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_025b9b80()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_025b9b80

// auto_setup_static_objects_025b9d60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_025b9d60 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05aa6c98, second_guard, uint8_t);
RT_GLOBAL(0x05aa6c40, second_object, TargetedObject);
RT_GLOBAL(0x05aa6c38, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b6d00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_025b9d60()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_025b9d60

// auto_setup_static_objects_0264a4a0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0264a4a0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac3db0, second_guard, uint8_t);
RT_GLOBAL(0x05ac3d58, second_object, TargetedObject);
RT_GLOBAL(0x05ac3d50, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b7800, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0264a4a0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0264a4a0

// auto_setup_static_objects_02719810: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02719810 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac42b0, second_guard, uint8_t);
RT_GLOBAL(0x05ac4258, second_object, TargetedObject);
RT_GLOBAL(0x05ac4250, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b9270, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02719810()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02719810

// auto_setup_static_objects_0271a210: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0271a210 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4320, second_guard, uint8_t);
RT_GLOBAL(0x05ac42c8, second_object, TargetedObject);
RT_GLOBAL(0x05ac42c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b9330, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0271a210()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0271a210

// auto_setup_static_objects_0271a3f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0271a3f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4320, second_guard, uint8_t);
RT_GLOBAL(0x05ac42c8, second_object, TargetedObject);
RT_GLOBAL(0x05ac42c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b9330, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0271a3f0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0271a3f0

// auto_setup_static_objects_0271ada0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0271ada0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4390, second_guard, uint8_t);
RT_GLOBAL(0x05ac4338, second_object, TargetedObject);
RT_GLOBAL(0x05ac4330, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b93f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0271ada0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0271ada0

// auto_setup_static_objects_0271af80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0271af80 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4390, second_guard, uint8_t);
RT_GLOBAL(0x05ac4338, second_object, TargetedObject);
RT_GLOBAL(0x05ac4330, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b93f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0271af80()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0271af80

// auto_setup_static_objects_0271d990: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0271d990 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4420, second_guard, uint8_t);
RT_GLOBAL(0x05ac43c8, second_object, TargetedObject);
RT_GLOBAL(0x05ac43c0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b9570, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0271d990()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0271d990

// auto_setup_static_objects_0271eba0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0271eba0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac45a0, second_guard, uint8_t);
RT_GLOBAL(0x05ac4548, second_object, TargetedObject);
RT_GLOBAL(0x05ac4540, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b9a30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0271eba0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0271eba0

// auto_setup_static_objects_0271ed80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0271ed80 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac45a0, second_guard, uint8_t);
RT_GLOBAL(0x05ac4548, second_object, TargetedObject);
RT_GLOBAL(0x05ac4540, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b9a30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0271ed80()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0271ed80

// auto_setup_static_objects_02728220: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02728220 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4688, second_guard, uint8_t);
RT_GLOBAL(0x05ac4630, second_object, TargetedObject);
RT_GLOBAL(0x05ac4628, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b9ca0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02728220()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02728220

// auto_setup_static_objects_02728400: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02728400 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4688, second_guard, uint8_t);
RT_GLOBAL(0x05ac4630, second_object, TargetedObject);
RT_GLOBAL(0x05ac4628, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b9ca0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02728400()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02728400

// auto_setup_static_objects_02735c40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02735c40 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4728, second_guard, uint8_t);
RT_GLOBAL(0x05ac46d0, second_object, TargetedObject);
RT_GLOBAL(0x05ac46c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ba030, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02735c40()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02735c40

// auto_setup_static_objects_02735e20: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02735e20 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4728, second_guard, uint8_t);
RT_GLOBAL(0x05ac46d0, second_object, TargetedObject);
RT_GLOBAL(0x05ac46c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ba030, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02735e20()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02735e20

// auto_setup_static_objects_02739700: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02739700 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4798, second_guard, uint8_t);
RT_GLOBAL(0x05ac4740, second_object, TargetedObject);
RT_GLOBAL(0x05ac4738, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ba2e0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02739700()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02739700

// auto_setup_static_objects_027398e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_027398e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4798, second_guard, uint8_t);
RT_GLOBAL(0x05ac4740, second_object, TargetedObject);
RT_GLOBAL(0x05ac4738, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ba2e0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_027398e0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_027398e0

// auto_setup_static_objects_02740e90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02740e90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4808, second_guard, uint8_t);
RT_GLOBAL(0x05ac47b0, second_object, TargetedObject);
RT_GLOBAL(0x05ac47a8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ba3a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02740e90()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02740e90

// auto_setup_static_objects_02741070: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02741070 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4808, second_guard, uint8_t);
RT_GLOBAL(0x05ac47b0, second_object, TargetedObject);
RT_GLOBAL(0x05ac47a8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ba3a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02741070()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02741070

// auto_setup_static_objects_02742340: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02742340 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac48e8, second_guard, uint8_t);
RT_GLOBAL(0x05ac4890, second_object, TargetedObject);
RT_GLOBAL(0x05ac4888, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ba710, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02742340()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02742340

// auto_setup_static_objects_02742520: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02742520 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4878, second_guard, uint8_t);
RT_GLOBAL(0x05ac4820, second_object, TargetedObject);
RT_GLOBAL(0x05ac4818, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ba690, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02742520()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02742520

// auto_setup_static_objects_027440f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_027440f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4990, second_guard, uint8_t);
RT_GLOBAL(0x05ac4938, second_object, TargetedObject);
RT_GLOBAL(0x05ac4930, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057ba9b0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_027440f0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_027440f0

// auto_setup_static_objects_02747a00: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02747a00 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4a00, second_guard, uint8_t);
RT_GLOBAL(0x05ac49a8, second_object, TargetedObject);
RT_GLOBAL(0x05ac49a0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bac50, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02747a00()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02747a00

// auto_setup_static_objects_0274a5e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0274a5e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4a70, second_guard, uint8_t);
RT_GLOBAL(0x05ac4a18, second_object, TargetedObject);
RT_GLOBAL(0x05ac4a10, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bad40, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0274a5e0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0274a5e0

// auto_setup_static_objects_0274af90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0274af90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4b00, second_guard, uint8_t);
RT_GLOBAL(0x05ac4aa8, second_object, TargetedObject);
RT_GLOBAL(0x05ac4aa0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bafe0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0274af90()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0274af90

// auto_setup_static_objects_0274e130: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0274e130 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4b70, second_guard, uint8_t);
RT_GLOBAL(0x05ac4b18, second_object, TargetedObject);
RT_GLOBAL(0x05ac4b10, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bb0c0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0274e130()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0274e130

// auto_setup_static_objects_02750180: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02750180 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4be0, second_guard, uint8_t);
RT_GLOBAL(0x05ac4b88, second_object, TargetedObject);
RT_GLOBAL(0x05ac4b80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bb1a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02750180()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02750180

// auto_setup_static_objects_02750b80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02750b80 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4c50, second_guard, uint8_t);
RT_GLOBAL(0x05ac4bf8, second_object, TargetedObject);
RT_GLOBAL(0x05ac4bf0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bb280, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02750b80()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02750b80

// auto_setup_static_objects_02751770: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02751770 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4ce0, second_guard, uint8_t);
RT_GLOBAL(0x05ac4c88, second_object, TargetedObject);
RT_GLOBAL(0x05ac4c80, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bb350, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02751770()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02751770

// auto_setup_static_objects_02753190: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02753190 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4d50, second_guard, uint8_t);
RT_GLOBAL(0x05ac4cf8, second_object, TargetedObject);
RT_GLOBAL(0x05ac4cf0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bb5f0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02753190()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02753190

// auto_setup_static_objects_02754550: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02754550 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4dc0, second_guard, uint8_t);
RT_GLOBAL(0x05ac4d68, second_object, TargetedObject);
RT_GLOBAL(0x05ac4d60, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bb890, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02754550()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02754550

// auto_setup_static_objects_02756330: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02756330 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4e30, second_guard, uint8_t);
RT_GLOBAL(0x05ac4dd8, second_object, TargetedObject);
RT_GLOBAL(0x05ac4dd0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bb960, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02756330()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02756330

// auto_setup_static_objects_02757450: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02757450 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4ea0, second_guard, uint8_t);
RT_GLOBAL(0x05ac4e48, second_object, TargetedObject);
RT_GLOBAL(0x05ac4e40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bba30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02757450()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02757450

// auto_setup_static_objects_027584f0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_027584f0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4f10, second_guard, uint8_t);
RT_GLOBAL(0x05ac4eb8, second_object, TargetedObject);
RT_GLOBAL(0x05ac4eb0, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bbcb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_027584f0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_027584f0

// auto_setup_static_objects_027594c0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_027594c0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac4fa0, second_guard, uint8_t);
RT_GLOBAL(0x05ac4f48, second_object, TargetedObject);
RT_GLOBAL(0x05ac4f40, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bbd90, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_027594c0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_027594c0

// auto_setup_static_objects_0275ac60: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0275ac60 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac5048, second_guard, uint8_t);
RT_GLOBAL(0x05ac4ff0, second_object, TargetedObject);
RT_GLOBAL(0x05ac4fe8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bc030, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0275ac60()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0275ac60

// auto_setup_static_objects_0275d950: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0275d950 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac50d8, second_guard, uint8_t);
RT_GLOBAL(0x05ac5080, second_object, TargetedObject);
RT_GLOBAL(0x05ac5078, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bc100, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0275d950()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0275d950

// auto_setup_static_objects_0275ffc0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0275ffc0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac5148, second_guard, uint8_t);
RT_GLOBAL(0x05ac50f0, second_object, TargetedObject);
RT_GLOBAL(0x05ac50e8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bc3a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0275ffc0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0275ffc0

// auto_setup_static_objects_02761dc0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02761dc0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac51b8, second_guard, uint8_t);
RT_GLOBAL(0x05ac5160, second_object, TargetedObject);
RT_GLOBAL(0x05ac5158, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bc470, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02761dc0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02761dc0

// auto_setup_static_objects_02761fa0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02761fa0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac51b8, second_guard, uint8_t);
RT_GLOBAL(0x05ac5160, second_object, TargetedObject);
RT_GLOBAL(0x05ac5158, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bc470, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02761fa0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02761fa0

// auto_setup_static_objects_02762b10: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02762b10 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac5248, second_guard, uint8_t);
RT_GLOBAL(0x05ac51f0, second_object, TargetedObject);
RT_GLOBAL(0x05ac51e8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bc710, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02762b10()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02762b10

// auto_setup_static_objects_027665d0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_027665d0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac52b8, second_guard, uint8_t);
RT_GLOBAL(0x05ac5260, second_object, TargetedObject);
RT_GLOBAL(0x05ac5258, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bcb90, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_027665d0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_027665d0

// auto_setup_static_objects_0276ac90: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0276ac90 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac5398, second_guard, uint8_t);
RT_GLOBAL(0x05ac5340, second_object, TargetedObject);
RT_GLOBAL(0x05ac5338, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bcd30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0276ac90()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0276ac90

// auto_setup_static_objects_0276ae70: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0276ae70 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac5398, second_guard, uint8_t);
RT_GLOBAL(0x05ac5340, second_object, TargetedObject);
RT_GLOBAL(0x05ac5338, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bcd30, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0276ae70()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0276ae70

// auto_setup_static_objects_0276b0b0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0276b0b0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac5328, second_guard, uint8_t);
RT_GLOBAL(0x05ac52d0, second_object, TargetedObject);
RT_GLOBAL(0x05ac52c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bccb0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0276b0b0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0276b0b0

// auto_setup_static_objects_0276dd80: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0276dd80 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac5428, second_guard, uint8_t);
RT_GLOBAL(0x05ac53d0, second_object, TargetedObject);
RT_GLOBAL(0x05ac53c8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bce00, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0276dd80()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0276dd80

// auto_setup_static_objects_0276f9e0: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_0276f9e0 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac5498, second_guard, uint8_t);
RT_GLOBAL(0x05ac5440, second_object, TargetedObject);
RT_GLOBAL(0x05ac5438, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bcec0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_0276f9e0()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_0276f9e0

// auto_setup_static_objects_02770c40: misc_setup_static_objects_02243d30 with other addresses.
namespace twin_02770c40 {

// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.


namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05ac5508, second_guard, uint8_t);
RT_GLOBAL(0x05ac54b0, second_object, TargetedObject);
RT_GLOBAL(0x05ac54a8, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057bcf80, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup. The published object is
 * returned on every path: the callers go on to fill it in.
 *
 */
extern "C" void *bb_auto_setup_static_objects_02770c40()
{
    if (second_published.get() != nullptr) return second_published.get();
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return second_published.get();
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
    return &object;
}

}  // namespace twin_02770c40
