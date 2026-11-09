// SPDX-License-Identifier: GPL-2.0-or-later
#include "task_object.h"

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

struct TaskSharedObject;

/** The shared object's vtable; its flag query is the slot at 0x20. */
struct TaskSharedVtable {
    uint8_t unknown_0x0000[0x20];
    void (*flag_query_0x0020)(uint64_t *flags, TaskSharedObject *object, uint32_t selector);
};
static_assert(offsetof(TaskSharedVtable, flag_query_0x0020) == 0x20);

/** The shared object, whose first word is its vtable. */
struct TaskSharedObject {
    const TaskSharedVtable *vtable; /**< The object's vtable. */
};

/** The lazily created shared object. */
RT_GLOBAL(0x05940670, task_shared_object, TaskSharedObject *);
/** The message that the fatal report receives. */
RT_GLOBAL(0x04b37dc0, task_fatal_message, uint8_t);

RT_ORIGINAL(0x02b9a3f0, fn_02b9a3f0, void(misc::TaskObject *self, uint64_t context));
RT_ORIGINAL(0x02b3d2c0, fn_02b3d2c0, void(void *dst, const void *src, uint64_t size));
RT_ORIGINAL(0x02b46280, fn_02b46280, void(void *sub, uint64_t zero, const void *source));
RT_ORIGINAL(0x02fa2b10, fn_02fa2b10, TaskSharedObject *(void));
RT_ORIGINAL(0x024b55b0, fn_024b55b0, void(void *, uint32_t, const uint8_t *));

/** The bit of the flag query's record that must be set. */
constexpr uint64_t flag_query_required_bit = 0x20;
/** The selector passed to the flag query. */
constexpr uint32_t flag_query_selector = 0;
/** The line number that the fatal report receives. */
constexpr uint32_t fatal_report_line = 0x3e;
/** Size in bytes of each word copied from the source. */
constexpr uint64_t copied_word_bytes = 8;
/** The limit written when the object is built. */
constexpr int32_t object_limit = 0x7fffffff;
/** The state written when the object is built. */
constexpr int32_t object_state = 2;
/** The kind written when the object is built. */
constexpr int32_t object_kind = 4;
/** The index written when the object is built: no index. */
constexpr int32_t no_index = -1;

}  // namespace

/**
 *
 * Builds a task object from a source word, a flag byte and two values, and attaches the shared object.
 *
 * The base initialisation runs first, then the object takes the source's words and the caller's
 * values. The shared object is created on first use, and its flag must have a set bit, or a fatal
 * report is made and the build goes on. The source is kept as given and the flag's low byte is stored.
 */
extern "C" void bb_misc_task_object_construct(misc::TaskObject *self, const uint64_t *source,
                                              uint64_t value_0x128, uint64_t context,
                                              uint64_t value_0x28, uint8_t flag)
{
    fn_02b9a3f0(self, context);
    self->vtable = misc::task_object_vtable.address() + engine::vtable_address_point;
    self->source_0x10 = source;
    self->flag_0x18 = flag;
    self->zero_0x19 = 0;
    self->zero_0x1a = 0;
    self->zero_0x20 = 0;
    self->value_0x28 = value_0x28;
    self->zero_0x30 = 0;
    fn_02b3d2c0(self->copy_0x38, source, copied_word_bytes);
    self->zero_0x68 = 0;
    fn_02b3d2c0(self->copy_0x70, source, copied_word_bytes);
    self->state_0xa8 = object_state;
    self->limit_0xa0 = object_limit;

    TaskSharedObject *shared = task_shared_object.get();
    if (shared == nullptr) {
        shared = fn_02fa2b10();
        task_shared_object.get() = shared;
    }
    uint64_t flags = 0;
    shared->vtable->flag_query_0x0020(&flags, shared, flag_query_selector);
    if ((flags & flag_query_required_bit) == 0) {
        fn_024b55b0(nullptr, fatal_report_line, task_fatal_message.address());
    }

    self->zero_0xb8 = 0;
    self->zero_0xc0 = 0;
    self->zero_0xc8 = 0;
    self->shared_0xd0 = shared;
    fn_02b46280(self->sub_0xd8, 0, source);
    self->zero_0x118 = 0;
    self->zero_0x110 = 0;
    self->zero_0x108 = 0;
    self->kind_0x120 = object_kind;
    self->value_0x128 = value_0x128;
    self->index_0x130 = no_index;
    self->zero_0x138 = 0;
}
