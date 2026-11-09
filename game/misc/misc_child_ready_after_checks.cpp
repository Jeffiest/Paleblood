// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

/** Owner flag bit that answers true before any global is checked. */
constexpr uint8_t owner_flag_bypass = 0x4;

/** Answer for a true result. */
constexpr uint8_t answer_true = 1;

/** Answer for a false result. */
constexpr uint8_t answer_false = 0;

RT_GLOBAL(0x0593e880, ready_registry, void *);
RT_GLOBAL(0x0593e890, bypass_latch, uint8_t);
RT_GLOBAL(0x0593e888, final_latch, uint8_t);
RT_GLOBAL(0x04d35c4a, ready_registry_name, const char);

struct ReadyChild;

struct ReadyChildVtable {
    uint8_t unknown_0x0000[0x1b8];
    uint8_t (*ready)(ReadyChild *child);
};
static_assert(offsetof(ReadyChildVtable, ready) == 0x1b8);

struct ReadyChild {
    const ReadyChildVtable *vtable;
};

struct ReadyOwner {
    uint8_t unknown_0x0000[0x8];
    ReadyChild *child;
    uint8_t unknown_0x0010[0x1f0];
    uint8_t flags_0x0200;
};
static_assert(offsetof(ReadyOwner, child) == 0x8);
static_assert(offsetof(ReadyOwner, flags_0x0200) == 0x200);

}  // namespace

/**
 *
 * Answers whether the owner's child is ready, after the registry and latch globals are checked.
 *
 * An owner with the bypass flag answers true at once. Otherwise a missing registry is reported by
 * name and the call goes on. A set bypass latch answers true. Otherwise the child's ready query
 * decides: a false answer is returned, and a true one is followed by the same registry report and
 * the final latch's value as the answer. The reports return, so the checks go on after them.
 */
extern "C" uint8_t bb_misc_child_ready_after_checks(ReadyOwner *owner)
{
    if ((owner->flags_0x0200 & owner_flag_bypass) != 0) return answer_true;

    if (ready_registry.get() == nullptr) engine::report_missing(ready_registry_name.address());
    if (bypass_latch.get() != 0) return answer_true;

    ReadyChild *child = owner->child;
    if (child->vtable->ready(child) == 0) return answer_false;

    if (ready_registry.get() == nullptr) engine::report_missing(ready_registry_name.address());
    return final_latch.get() != 0 ? answer_true : answer_false;
}
