// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The world's context, which the id handler is given. */
struct World {
    uint8_t unknown_0x000[0x5d0];
    void *context_0x5d0; /**< Passed to the id handler as its first argument. */
};
static_assert(offsetof(World, context_0x5d0) == 0x5d0);

/** The holder that keeps the world at +0x8. */
struct WorldHolder {
    uint8_t unknown_0x00[0x08];
    World *world;
};
static_assert(offsetof(WorldHolder, world) == 0x08);

/** The physics manager, which keeps its holder at +0x28. */
struct PhysicsManager {
    uint8_t unknown_0x00[0x28];
    WorldHolder *holder;
};
static_assert(offsetof(PhysicsManager, holder) == 0x28);

/** A list of 32-bit ids: its first id at +0x10 and its end at +0x18. */
struct IdList {
    uint8_t unknown_0x00[0x10];
    uint32_t *begin; /**< First id. */
    uint32_t *end;   /**< One past the last id; set to the first id once the ids are handled. */
};
static_assert(offsetof(IdList, begin) == 0x10 && offsetof(IdList, end) == 0x18);

RT_GLOBAL(0x0593d700, physics_manager_instance, PhysicsManager *);
RT_ORIGINAL(0x00f24b30, handle_id, void(void *context, uint32_t id));

}  // namespace

/**
 *
 * Hands each id of the list to the physics world's id handler, then empties the list by making its end
 * its first id. An empty list calls nothing and does not read the physics manager.
 *
 */
extern "C" void bb_misc_clear_id_list_022430f0(IdList *list)
{
    uint32_t *const first = list->begin;
    uint32_t *const last = list->end;
    if (first != last) {
        World *world = physics_manager_instance.get()->holder->world;
        for (uint32_t *id = first; id != last; ++id) handle_id(world->context_0x5d0, *id);
    }
    list->end = list->begin;
}
