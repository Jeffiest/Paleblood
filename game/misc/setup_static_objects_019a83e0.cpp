// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the once-only setup of a constant table and two static objects, ending in a tail call on the second.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

constexpr int LANE_COUNT = 4;
constexpr int VECTOR_COUNT = 3;
constexpr int THIRD_VECTOR = VECTOR_COUNT - 1;

/** Four packed single-precision lanes of a constant vector. */
struct FloatLanes {
    float lane[LANE_COUNT];
};

/** The block of constants: three vectors copied from read-only data, four words, and the sum of all twelve lanes. */
struct ConstantBlock {
    FloatLanes vector[VECTOR_COUNT];
    int32_t first_word;
    int32_t second_word;
    int32_t third_word;
    int32_t fourth_word;
    float lane_sum;
};
static_assert(offsetof(ConstantBlock, lane_sum) == 0x40);

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct SetupObject {
    const void *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(SetupObject, flag) == 0x10);

/** The second static object: its vtable, cleared words, the target it forwards to, and two data pointers. */
struct ForwardingObject {
    const void *vtable;
    uint64_t word_0x08;
    uint64_t word_0x10;
    uint8_t unknown_0x18[0x08];
    uint64_t word_0x20;
    uint64_t word_0x28;
    uint64_t word_0x30;
    engine::Allocator *target;
    const void *first_data;
    const void *second_data;
};
static_assert(offsetof(ForwardingObject, target) == 0x38 && sizeof(ForwardingObject) == 0x50);

RT_GLOBAL(0x04cf7de0, constant_vector_first, const FloatLanes);
RT_GLOBAL(0x04cf7df0, constant_vector_second, const FloatLanes);
RT_GLOBAL(0x04cf7e00, constant_vector_third, const FloatLanes);
RT_GLOBAL(0x04cf7e10, sum_vector_first, const FloatLanes);
RT_GLOBAL(0x04cf7e20, sum_vector_second, const FloatLanes);
RT_GLOBAL(0x04cf7e30, sum_vector_third, const FloatLanes);
RT_GLOBAL(0x05958240, constant_block, ConstantBlock);
RT_GLOBAL(0x05aa5720, first_object, SetupObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05958340, second_guard, uint8_t);
RT_GLOBAL(0x059582e8, second_object, ForwardingObject);
RT_GLOBAL(0x059582e0, second_published, ForwardingObject *);
RT_GLOBAL(0x05940668, target_slot, engine::Allocator *);
RT_GLOBAL(0x056b6220, first_vtable, const uint8_t);
RT_GLOBAL(0x057b3ba0, building_vtable, const uint8_t);
RT_GLOBAL(0x05771ee0, second_vtable, const uint8_t);
RT_GLOBAL(0x04d30152, first_data_text, const char);
RT_GLOBAL(0x04d6b164, second_data_text, const char);
RT_GLOBAL(0x04b37dc0, invalid_heap_message, const char);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(SetupObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));
RT_ORIGINAL(0x0247bbf0, manager_instance, uint8_t *());
RT_ORIGINAL(0x024b7b10, finish_object, uint64_t(ForwardingObject *object));

/** The target is a sub-object of the manager, this far in. */
constexpr uint64_t manager_target_offset = 0x458;
constexpr int32_t line_invalid_heap = 0x3e;
constexpr int32_t first_word_value = -1;
constexpr int32_t second_word_value = -1;
constexpr int32_t third_word_value = 30;
constexpr int32_t fourth_word_value = -1;

/** Adds the four lanes the way two horizontal adds do: (lane 0 + lane 1) + (lane 2 + lane 3). */
float horizontal_sum(const FloatLanes &vector)
{
    const float low = vector.lane[0] + vector.lane[1];
    const float high = vector.lane[2] + vector.lane[3];
    return low + high;
}

}  // namespace

/**
 *
 * Fills the constant block, then sets up the first static object once (its flag cleared by the probes) and the
 * second, which takes the target held in the global slot (found from the manager when the slot is empty) and is
 * published last. Whatever object is published gets its two data pointers set and is handed to the tail call.
 *
 */
extern "C" uint64_t bb_misc_setup_static_objects_019a83e0()
{
    ConstantBlock &block = constant_block.get();
    block.vector[0] = constant_vector_first.get();
    block.vector[1] = constant_vector_second.get();
    block.vector[THIRD_VECTOR] = constant_vector_third.get();
    block.first_word = first_word_value;
    block.second_word = second_word_value;
    block.third_word = third_word_value;
    block.fourth_word = fourth_word_value;
    const float first_sum = horizontal_sum(sum_vector_first.get());
    const float second_sum = horizontal_sum(sum_vector_second.get());
    const float third_sum = horizontal_sum(sum_vector_third.get());
    block.lane_sum = (first_sum + second_sum) + third_sum;

    ForwardingObject *object = second_published.get();
    if (object == nullptr) {
        if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
            first_done.get() = 0;
            guard_release(first_guard.address());
        }
        if (first_done.get() == 0) {
            SetupObject &first = first_object.get();
            first.flag = 0;
            first.vtable = first_vtable.address() + engine::vtable_address_point;
            if (probe_first(&first) == 0 && probe_sub(first.unknown_0x08) == 0) first.flag = 1;
            first_done.get() = 1;
        }
        object = second_published.get();
    }
    if (object == nullptr) {
        if (second_guard.get() == 0 && guard_acquire(second_guard.address()) != 0) {
            guard_release(second_guard.address());
        }
        object = &second_object.get();
        object->vtable = building_vtable.address();
        object->word_0x10 = 0;
        object->word_0x08 = 0;
        if (target_slot.get() == nullptr) {
            target_slot.get() = reinterpret_cast<engine::Allocator *>(manager_instance() + manager_target_offset);
        }
        engine::Allocator *target = target_slot.get();
        engine::AllocatorInfo info{};
        target->vtable->info(&info, target, 0);
        if (!(info.flags & engine::allocator_info_valid)) {
            engine::fatal_error(nullptr, line_invalid_heap, invalid_heap_message.address());
        }
        object->word_0x30 = 0;
        object->word_0x28 = 0;
        object->word_0x20 = 0;
        object->target = target;
        object->vtable = second_vtable.address();
        object->second_data = nullptr;
        object->first_data = nullptr;
        second_published.get() = object;
    }
    object->first_data = first_data_text.address();
    object->second_data = second_data_text.address();
    return finish_object(object);
}
