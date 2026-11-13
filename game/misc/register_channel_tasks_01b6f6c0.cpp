// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: finds a node from a source and offers tasks to two of its lists: thirty-five numbered tasks to the first
// list, and eighty-nine tasks named after a table of values to the second.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "../engine/thread.h"
#include "../engine/thread_heap.h"
#include "formatted_name.h"
#include "record_factory.h"
#include "runtime/original.h"

namespace {

struct ChannelNode;

/** The node's vtable: offering a task to it is slot 0x78. */
struct ChannelNodeVtable {
    uint8_t unknown_0x0000[0x78];
    void (*offer)(ChannelNode *node, void *task, uint32_t flag);
};
static_assert(offsetof(ChannelNodeVtable, offer) == 0x78);

/** A node that tasks are offered to. */
struct ChannelNode {
    const ChannelNodeVtable *vtable;
};

/** The holder that receives the root node; the tasks keep a pointer to it. */
struct ChannelHolder {
    ChannelNode *root;
};

/** A numbered task of the first list. */
struct NumberedTask {
    const void *vtable;
    uint8_t unknown_0x08[0x10];
    ChannelHolder *holder;
    const void *callback;
    uint64_t word_0x28;
    const void *second_callback;
    uint64_t word_0x38;
    uint32_t number;
};
static_assert(offsetof(NumberedTask, number) == 0x40 && offsetof(NumberedTask, holder) == 0x18);

/** A named task of the second list. */
struct NamedTask {
    const void *vtable;
    uint8_t unknown_0x08[0x48];
    ChannelHolder *holder;
    const void *callback;
    uint64_t word_0x60;
    uint32_t number;
};
static_assert(offsetof(NamedTask, holder) == 0x50 && offsetof(NamedTask, number) == 0x68);

constexpr int NUMBERED_TASK_COUNT = 0x23;
constexpr int NAMED_TASK_COUNT = 0x59;

/** The values the names of the second list are formatted from. */
struct NameValues {
    uint64_t value[NAMED_TASK_COUNT];
};

RT_GLOBAL(0x04d77b78, root_name, const char);
RT_GLOBAL(0x04d77b92, first_list_name, const char);
RT_GLOBAL(0x04d77bb4, second_list_name, const char);
RT_GLOBAL(0x04d7866e, task_name_format, const char);
RT_GLOBAL(0x0572b590, name_values, NameValues);
RT_GLOBAL(0x05784c60, numbered_task_vtable, const uint8_t);
RT_GLOBAL(0x05784bf0, named_task_vtable, const uint8_t);
RT_GLOBAL(0x01b6f950, numbered_task_callback, const uint8_t);
RT_GLOBAL(0x01b70280, numbered_task_second_callback, const uint8_t);
RT_GLOBAL(0x01b70600, named_task_callback, const uint8_t);
RT_GLOBAL(0x04b37dc0, message_invalid_allocator, const char);

RT_ORIGINAL(0x0140a1f0, find_root, ChannelNode *(void *source, const char *name));
RT_ORIGINAL(0x0140a410, find_list, ChannelNode *(ChannelNode *node, const char *name));
RT_ORIGINAL(0x0140ce80, task_factory, misc::RecordFactory *());
RT_ORIGINAL(0x014015d0, construct_numbered_task, void(NumberedTask *task));
RT_ORIGINAL(0x01401c90, construct_named_task, void(NamedTask *task, const char *name));
RT_ORIGINAL(0x0247d250, thread_heap_init, void());
RT_ORIGINAL(0x02b62d00, format_name, void(misc::FormattedName *name, const char *format, ...));

constexpr uint32_t numbered_task_size = 0x48;
constexpr uint32_t named_task_size = 0x70;
constexpr uint32_t task_alignment = 8;
constexpr uint32_t offer_flag = 1;
constexpr int32_t line_invalid_allocator = 0x3e;

/** Allocates a task from the factory, which is looked up again for each one. */
void *allocate_task(uint32_t size)
{
    misc::RecordFactory *factory = task_factory();
    return factory->vtable->allocate(factory, size, task_alignment);
}

/** Offers the numbered tasks to the first list, each built when its allocation succeeded. */
void offer_numbered_tasks(ChannelNode *list, ChannelHolder *holder)
{
    for (uint32_t number = 0; number != NUMBERED_TASK_COUNT; ++number) {
        NumberedTask *task = static_cast<NumberedTask *>(allocate_task(numbered_task_size));
        if (task != nullptr) {
            construct_numbered_task(task);
            task->vtable = numbered_task_vtable.address();
            task->holder = holder;
            task->callback = numbered_task_callback.address();
            task->word_0x28 = 0;
            task->second_callback = numbered_task_second_callback.address();
            task->word_0x38 = 0;
            task->number = number;
        }
        list->vtable->offer(list, task, offer_flag);
    }
}

/** Makes the name allocator-backed from the thread's heap, as the formatter needs it. */
engine::Allocator *thread_allocator()
{
    const int64_t heap_offset = engine::thread_heap_offset.get();
    engine::ThreadHeap *heap = *reinterpret_cast<engine::ThreadHeap **>(engine::thread_pointer() + heap_offset);
    if (heap == nullptr) {
        thread_heap_init();
        heap = *reinterpret_cast<engine::ThreadHeap **>(engine::thread_pointer() + heap_offset);
    }
    engine::Allocator *allocator = &heap->allocator;
    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, line_invalid_allocator, message_invalid_allocator.address());
    }
    return allocator;
}

}  // namespace

/**
 *
 * Finds the root node of the source into the holder, then its first list, and offers that list thirty-five
 * numbered tasks. Then the second list is found from the root again and offered eighty-nine tasks, each named by
 * formatting one value of the table into a name that keeps the thread's allocator; a name that outgrew its inline
 * text is freed at the end. A missing source, root or second list ends it early.
 *
 * Nothing is returned: the original leaves the stack-guard word in RAX.
 */
extern "C" void bb_misc_register_channel_tasks_01b6f6c0(ChannelHolder *holder, void *source)
{
    if (source == nullptr) return;
    holder->root = find_root(source, root_name.address());
    if (holder->root == nullptr) return;
    ChannelNode *first_list = find_list(holder->root, first_list_name.address());
    if (first_list != nullptr) offer_numbered_tasks(first_list, holder);
    ChannelNode *second_list = find_list(holder->root, second_list_name.address());
    if (second_list == nullptr) return;

    engine::Allocator *allocator = thread_allocator();
    misc::FormattedName name;
    name.text_0x08.inline_text[0] = '\0';
    name.text_0x08.inline_text[1] = '\0';
    name.size_0x18 = 0;
    name.capacity_0x20 = misc::formatted_name_inline_capacity;
    name.allocator_0x28 = allocator;
    name.flag_0x30 = true;
    for (uint32_t number = 0; number != NAMED_TASK_COUNT; ++number) {
        format_name(&name, task_name_format.address(), name_values.get().value[number]);
        char *text = name.text();
        NamedTask *task = static_cast<NamedTask *>(allocate_task(named_task_size));
        if (task != nullptr) {
            construct_named_task(task, text);
            task->vtable = named_task_vtable.address();
            task->holder = holder;
            task->callback = named_task_callback.address();
            task->word_0x60 = 0;
            task->number = number;
        }
        second_list->vtable->offer(second_list, task, offer_flag);
    }
    if (name.on_heap()) name.allocator_0x28->free(name.text_0x08.heap_text);
}
