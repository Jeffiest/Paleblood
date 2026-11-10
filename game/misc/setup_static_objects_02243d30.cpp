// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the once-only setup of two static objects. The first is built in place unless its probe accepts
// it; the second is built around the target held in a global slot, and is published last.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, and the target it forwards to at +0x38. */
struct TargetedObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    uint64_t word_0x40;
    uint64_t word_0x48;
};
static_assert(offsetof(TargetedObject, target) == 0x38 && sizeof(TargetedObject) == 0x50);

RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x0598e8b0, second_guard, uint8_t);
RT_GLOBAL(0x0598e858, second_object, TargetedObject);
RT_GLOBAL(0x0598e850, second_published, TargetedObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057a79a0, second_vtable, const uint8_t);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;

}  // namespace

/**
 *
 * Sets up the two static objects once. The first object is given its vtable and a flag, which the probes
 * may clear; it is marked done after its guard. The second object takes the target held in the global slot
 * (found from the manager when the slot is empty), its target's allocator info is checked, and the object
 * is published last, so the publish check comes after the first object's setup.
 *
 */
extern "C" void bb_misc_setup_static_objects_02243d30()
{
    if (second_published.get() != nullptr) return;
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        SetupObject &object = first_object.get();
        object.flag = 0;
        object.vtable = first_vtable.address() + engine::vtable_address_point;
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    if (second_published.get() != nullptr) return;
    if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) guard_release(second_guard.address());
    TargetedObject &object = second_object.get();
    object.word_0x08 = 0;
    object.word_0x10 = 0;
    if (target_slot.get() == nullptr) {
        target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
    }
    engine::Allocator *target = target_slot.get();
    engine::AllocatorInfo info{};
    target->vtable->info(&info, target, 0);
    if (!(info.flags & engine::allocator_info_valid)) {
        engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
    }
    object.word_0x30 = 0;
    object.word_0x28 = 0;
    object.word_0x20 = 0;
    object.target = target;
    object.vtable = second_vtable.address();
    object.word_0x48 = 0;
    object.word_0x40 = 0;
    second_published.get() = &object;
}
