// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: give a holder its vtable, release its child if it has one, then run the manager's
// sequence of calls and return the result of the last one.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** A static vtable block: the holder's vtable pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

struct Child;
struct Target;

/** The child's only virtual function, the release at slot 0. */
struct ChildVtable {
    void (*release)(Child *child);
};

struct Child {
    const ChildVtable *vtable;
};

/** The target's virtual function at slot 0x70, called with the target and the child. */
struct TargetVtable {
    uint8_t unknown_0x0000[0x70];
    void (*notify_0x70)(Target *target, Child *child);
};
static_assert(offsetof(TargetVtable, notify_0x70) == 0x70);

struct Target {
    const TargetVtable *vtable;
};

/** The manager: the sub-object at +0x8 is the address the game's calls receive. */
struct Manager {
    static constexpr auto word_bytes = 0x8;
    uint8_t unknown_0x0000[word_bytes];
    uint8_t subobject[word_bytes];
};
static_assert(offsetof(Manager, subobject) == Manager::word_bytes);

/** The holder: the vtable at +0, the child at +0x8 and two values passed to the manager. */
struct Holder {
    const void *vtable;
    Child *child;
    uint64_t value_0x10;
    uint64_t value_0x18;
};
static_assert(offsetof(Holder, child) == 0x8);
static_assert(offsetof(Holder, value_0x10) == 0x10);
static_assert(offsetof(Holder, value_0x18) == 0x18);

RT_GLOBAL(0x056f1c90, holder_vtable, StaticVtable);
RT_GLOBAL(0x05acebd8, manager_slot, Manager *);
RT_ORIGINAL(0x02d77030, create_manager, Manager *());
RT_ORIGINAL(0x0247b720, target_of_child, Target *(Child *child));
RT_ORIGINAL(0x0247ee90, fn_0247ee90, void(void *subobject, int32_t value));
RT_ORIGINAL(0x02fa6460, fn_02fa6460, void(Manager *manager, uint64_t value));
RT_ORIGINAL(0x02fa63e0, fn_02fa63e0, void(Manager *manager, uint64_t value));
RT_ORIGINAL(0x0247f070, fn_0247f070, uint64_t(void *subobject));

/** Mirrors the reload of the manager slot at each use: the created manager is not stored. */
Manager *manager_or_create()
{
    Manager *manager = manager_slot.get();
    if (manager == nullptr) manager = create_manager();
    return manager;
}

}  // namespace

/**
 *
 * Releases the holder's child, if there is one, then runs the manager's calls in order.
 *
 * The vtable is set first and the child reference is cleared after the child's release. Each
 * manager call reloads the manager slot, and the last call's result is returned.
 */
extern "C" uint64_t bb_misc_release_holder_child(Holder *holder)
{
    holder->vtable = &holder_vtable.address()->first_slot_0x0010;
    if (holder->child != nullptr) {
        Child *child = holder->child;
        Target *target = target_of_child(child);
        child->vtable->release(child);
        target->vtable->notify_0x70(target, child);
        holder->child = nullptr;
    }
    Manager *manager = manager_or_create();
    fn_0247ee90(&manager->subobject, -1);
    manager = manager_or_create();
    fn_02fa6460(manager, holder->value_0x18);
    manager = manager_or_create();
    fn_0247f070(&manager->subobject);
    manager = manager_or_create();
    fn_0247ee90(&manager->subobject, -1);
    manager = manager_or_create();
    fn_02fa63e0(manager, holder->value_0x10);
    manager = manager_or_create();
    return fn_0247f070(&manager->subobject);
}
