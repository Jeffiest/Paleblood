// SPDX-License-Identifier: GPL-2.0-or-later
#include "task_object.h"

#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "runtime/original.h"

namespace {

/** The message that the fatal report receives when a waiter's count is not positive. */
RT_GLOBAL(0x04c77a39, task_waiter_fatal_message, uint8_t);

RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));
RT_ORIGINAL(0x02b41230, fn_02b41230, void(void *record, misc::TaskObject *self));
RT_ORIGINAL(0x02b41260, fn_02b41260, void(void *record));
RT_ORIGINAL(0x02b46380, fn_02b46380, void(void *sub));
RT_ORIGINAL(0x0247ec00, fn_0247ec00, int32_t(void *counter));
RT_ORIGINAL(0x024b55b0, fn_024b55b0, void(void *, uint32_t, const uint8_t *));
RT_ORIGINAL(0x02b3d3f0, fn_02b3d3f0, void(void *member));
RT_ORIGINAL(0x02b9a420, fn_02b9a420, void(misc::TaskObject *self));

/** Size in bytes of the record that the handler is given. */
constexpr size_t handler_record_bytes = 0x18;
/** The state in which the object holds a waiter. */
constexpr int32_t waiting_state = 3;
/** The waiter counter result that releases the waiter. */
constexpr int32_t waiter_released = 1;
/** The line number that the fatal report receives. */
constexpr uint32_t fatal_report_line = 0x3e;

/** Releases a node: its allocator is looked up, its first slot is called, then the allocator frees it. */
void release_node(misc::DestroyableNode *node)
{
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace

/**
 *
 * Tears a task object down: releases the nodes it owns, hands its handler a record, releases its shared
 * object and its waiter, and clears the references it held.
 *
 * The object's vtable is stored first. A waiter whose counter is not positive is reported as a fatal
 * error, and the teardown goes on regardless, as the report returns.
 */
extern "C" void bb_misc_task_object_destroy(misc::TaskObject *self)
{
    self->vtable = misc::task_object_vtable.address() + engine::vtable_address_point;
    if (self->node_0x68 != nullptr) {
        release_node(self->node_0x68);
        self->node_0x68 = nullptr;
    }
    misc::TaskHandler *handler = self->handler_0x118;
    if (handler != nullptr) {
        void (*const slot_18)(misc::TaskHandler *, void *) = handler->vtable->slot_18;
        uint8_t record[handler_record_bytes];
        fn_02b41230(record, self);
        slot_18(handler, record);
        fn_02b41260(record);
    }
    if (self->node_0x30 != nullptr) {
        release_node(self->node_0x30);
        self->node_0x30 = nullptr;
    }
    fn_02b46380(self->sub_0xd8);
    if (self->shared_flag_0xb8 != 0) {
        misc::TaskSharedObject *shared = self->shared_0xd0;
        shared->vtable->release_0x70(shared);
        self->zero_0xc8 = 0;
        self->zero_0xc0 = 0;
        self->shared_flag_0xb8 = 0;
    }
    if (self->state_0xa8 == waiting_state) {
        misc::TaskWaiter *waiter = self->waiter_0xa0;
        const int32_t counter_result = fn_0247ec00(&waiter->counter_0x08);
        if (counter_result == waiter_released) {
            waiter->vtable->slot_00(waiter);
        } else if (counter_result <= 0) {
            fn_024b55b0(nullptr, fatal_report_line, task_waiter_fatal_message.address());
        }
    }
    fn_02b3d3f0(self->copy_0x70);
    fn_02b3d3f0(self->copy_0x38);
    fn_02b9a420(self);
}
