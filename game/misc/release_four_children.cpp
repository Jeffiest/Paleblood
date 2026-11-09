// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: notify and clear four child references of a holder that are set, in field order.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

struct Child;
struct Target;

/** The target's virtual function at slot 0x70, called with the target and the child. */
struct TargetVtable {
    uint8_t unknown_0x0000[0x70];
    void (*notify_0x70)(Target *target, Child *child);
};
static_assert(offsetof(TargetVtable, notify_0x70) == 0x70);

struct Target {
    const TargetVtable *vtable;
};

/** The holder: four child references at +0x10, +0x18, +0x30 and +0x38. */
struct ChildHolder {
    uint8_t unknown_0x0000[0x10];
    Child *first_child;
    Child *second_child;
    uint8_t unknown_0x0020[0x10];
    Child *third_child;
    Child *fourth_child;
};
static_assert(offsetof(ChildHolder, first_child) == 0x10);
static_assert(offsetof(ChildHolder, second_child) == 0x18);
static_assert(offsetof(ChildHolder, third_child) == 0x30);
static_assert(offsetof(ChildHolder, fourth_child) == 0x38);

RT_ORIGINAL(0x0247b720, target_of_child, Target *(Child *child));

/**
 *
 * Notifies the target of a child that is set through its notify slot, then clears the reference.
 *
 * Nothing happens when the reference is already null.
 */
void release_child(Child *&reference)
{
    if (reference == nullptr) return;
    Target *target = target_of_child(reference);
    target->vtable->notify_0x70(target, reference);
    reference = nullptr;
}

}  // namespace

/**
 *
 * Releases the four child references of a holder in field order, skipping the ones that are null.
 *
 * Each reference is read when its turn comes, so a notify that changes a later one is seen by it.
 */
extern "C" void bb_misc_release_four_children(ChildHolder *holder)
{
    release_child(holder->first_child);
    release_child(holder->second_child);
    release_child(holder->third_child);
    release_child(holder->fourth_child);
}
