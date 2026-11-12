// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: registers seventy-five pairs of listener tasks with a looked-up listener list, discarding a task the list refuses.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

using engine::Allocator;

struct ListenerTask;
struct TaskOwner;
struct ListenerList;

/** The vtable of the task built first: the destructor is slot 0. */
struct ListenerTaskVtable {
    void (*destroy)(ListenerTask *task);
};

/** The vtable of the list the tasks are offered to: offering a task is slot 0x68. */
struct ListenerListVtable {
    uint8_t unknown_0x0000[0x68];
    uint8_t (*offer)(ListenerList *list, ListenerTask *task, uint32_t mode);
};
static_assert(offsetof(ListenerListVtable, offer) == 0x68);

/** The vtable of the owner of a refused task: removing a task is slot 0x70. */
struct TaskOwnerVtable {
    uint8_t unknown_0x0000[0x70];
    void (*remove)(TaskOwner *owner, ListenerTask *task);
};
static_assert(offsetof(TaskOwnerVtable, remove) == 0x70);

/** A list that tasks are offered to. */
struct ListenerList {
    const ListenerListVtable *vtable;
};

/** The owner of a task. */
struct TaskOwner {
    const TaskOwnerVtable *vtable;
};

/** A 0x30-byte task: a vtable, the object it belongs to, a callback, two cleared words and a flag byte or index. */
struct ListenerTask {
    const ListenerTaskVtable *vtable;
    const void *target;
    const void *callback;
    uint64_t word_0x18;
    uint64_t word_0x20;
    union {
        uint32_t index;
        uint8_t flags;
    };
};
static_assert(offsetof(ListenerTask, word_0x20) == 0x20 && sizeof(ListenerTask) == 0x30);

/** The singleton whose allocator makes the tasks. */
struct ListenerManager {
    uint8_t unknown_0x00[0x08];
    Allocator *allocator;
};
static_assert(offsetof(ListenerManager, allocator) == 0x08);

RT_GLOBAL(0x058b3570, listener_manager, ListenerManager *);
RT_GLOBAL(0x04d3b41e, listener_manager_name, const char);
RT_GLOBAL(0x04dd85f0, empty_text, const char);
RT_GLOBAL(0x04d75bc2, list_name, const char);
RT_GLOBAL(0x056f1f70, first_task_vtable, const uint8_t);
RT_GLOBAL(0x0572af80, second_task_vtable, const uint8_t);
RT_GLOBAL(0x0572af50, third_task_vtable, const uint8_t);
RT_GLOBAL(0x01b55400, second_task_callback, const uint8_t);
RT_GLOBAL(0x01b55410, third_task_callback, const uint8_t);

RT_ORIGINAL(0x013a2a00, find_context, void *(ListenerManager *manager, uint64_t key));
RT_ORIGINAL(0x013aeaf0, start_scratch, void(void *scratch, const char *text));
RT_ORIGINAL(0x013aebc0, end_scratch, void(void *scratch));
RT_ORIGINAL(0x0139cd80, find_list, ListenerList *(void *context, const char *name, const char *same_name,
                                                   uint64_t *found_key));
RT_ORIGINAL(0x0139b5d0, construct_task, void(ListenerTask *task));
RT_ORIGINAL(0x0139b740, attach_task, void(ListenerTask *first, uint32_t kind, ListenerTask *second));
RT_ORIGINAL(0x0247b720, find_task_owner, TaskOwner *(ListenerTask *task));

constexpr uint32_t task_pair_count = 0x4b;
constexpr uint64_t task_size = 0x30;
constexpr uint64_t task_alignment = 8;
constexpr uint32_t offer_mode = 1;
constexpr uint8_t flag_mask_kept = 0xf8;
constexpr uint8_t flag_value_set = 0x2;
constexpr uint32_t second_attach_kind = 4;
constexpr uint32_t third_attach_kind = 5;

/** Reads the singleton, reporting it by name when it is missing, and reading it again as the game does. */
ListenerManager *manager_required()
{
    ListenerManager *manager = listener_manager.get();
    if (manager == nullptr) {
        engine::report_missing(listener_manager_name.address());
        manager = listener_manager.get();
    }
    return manager;
}

/** Makes one 0x30-byte task from the manager's allocator (null when the allocation fails). */
ListenerTask *allocate_task()
{
    return static_cast<ListenerTask *>(manager_required()->allocator->allocate(task_size, task_alignment));
}

/** Reads a vtable block of the executable as a task vtable. */
const ListenerTaskVtable *as_task_vtable(const uint8_t *block)
{
    return reinterpret_cast<const ListenerTaskVtable *>(block);
}

/** Fills a task made for the owner: its vtable, callback and the loop index. */
void fill_attached_task(ListenerTask *task, const uint8_t *vtable, const uint8_t *callback, void *target,
                        uint32_t index)
{
    task->vtable = as_task_vtable(vtable);
    task->target = target;
    task->callback = callback;
    task->word_0x18 = 0;
    task->word_0x20 = 0;
    task->index = index;
}

}  // namespace

/**
 *
 * Looks up a named list and offers it one task for each of seventy-five slots; a list that takes the task gets two
 * more tasks attached to it, one that refuses has its task destroyed and removed from its owner.
 *
 * Nothing is returned: the original leaves the stack-guard word in RAX.
 */
extern "C" void bb_misc_register_listener_tasks_01b55140(void *target, uint64_t key)
{
    if (listener_manager.get() == nullptr || key == 0) return;
    void *context = find_context(listener_manager.get(), key);
    if (context == nullptr) return;
    uint64_t found_key = 0;
    uint64_t scratch = 0;
    start_scratch(&scratch, empty_text.address());
    ListenerList *list = find_list(context, list_name.address(), list_name.address(), &found_key);
    end_scratch(&scratch);
    if (list == nullptr) return;
    for (uint32_t index = 0; index != task_pair_count; ++index) {
        ListenerTask *first = allocate_task();
        ListenerTask *offered = nullptr;
        if (first != nullptr) {
            construct_task(first);
            first->vtable = as_task_vtable(first_task_vtable.address() + engine::vtable_address_point);
            first->word_0x20 = 0;
            first->flags = static_cast<uint8_t>((first->flags & flag_mask_kept) | flag_value_set);
            offered = first;
        }
        if (list->vtable->offer(list, offered, offer_mode) != 0) {
            ListenerTask *second = allocate_task();
            ListenerTask *second_result = nullptr;
            if (second != nullptr) {
                fill_attached_task(second, second_task_vtable.address(), second_task_callback.address(), target, index);
                second_result = second;
            }
            attach_task(offered, second_attach_kind, second_result);
            ListenerTask *third = allocate_task();
            ListenerTask *third_result = nullptr;
            if (third != nullptr) {
                fill_attached_task(third, third_task_vtable.address(), third_task_callback.address(), target, index);
                third_result = third;
            }
            attach_task(offered, third_attach_kind, third_result);
        } else if (offered != nullptr) {
            TaskOwner *owner = find_task_owner(offered);
            offered->vtable->destroy(offered);
            owner->vtable->remove(owner, offered);
        }
    }
}
