// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: for each body in a list, takes its motion's type and adds it to the owner's id vector when
// the type is a listed one and the vector does not hold it yet, reading the physics world's tables.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** A vector of 32-bit ids, with its begin, end and capacity end (the heap is not used here). */
struct IdVector {
    uint8_t unknown_0x00[0x08];
    uint32_t *begin;        /**< First id. */
    uint32_t *end;          /**< One past the last id. */
    uint32_t *capacity_end; /**< One past the last reserved slot. */
};
static_assert(offsetof(IdVector, begin) == 0x08 && offsetof(IdVector, end) == 0x10);

/** An owner of an id vector: its vtable, then the vector at +0x08. */
struct IdOwner {
    const void *vtable; /**< The owner's vtable, stored as is. */
    IdVector ids;       /**< The ids the owner keeps. */
};
static_assert(offsetof(IdOwner, ids) == 0x08);

/** A list of body indices: the indices at +0x20 and how many there are at +0x28. */
struct BodyIndexList {
    uint8_t unknown_0x00[0x20];
    const int32_t *indices; /**< The body indices, in order. */
    int32_t count;          /**< How many indices the list holds. */
};
static_assert(offsetof(BodyIndexList, indices) == 0x20 && offsetof(BodyIndexList, count) == 0x28);

/** An entry of the world's body table, 0x90 bytes each, whose motion index sits at 0x68. */
struct BodyEntry {
    uint8_t unknown_0x00[0x68];
    int32_t motion_index; /**< Index of the body's motion in the world's motion table. */
    uint8_t unknown_0x6c[0x24];
};
static_assert(offsetof(BodyEntry, motion_index) == 0x68 && sizeof(BodyEntry) == 0x90);

/** An entry of the world's motion table, 0x80 bytes each, whose type sits at 0x38. */
struct MotionEntry {
    uint8_t unknown_0x00[0x38];
    uint16_t type; /**< The motion's type. */
    uint8_t unknown_0x3a[0x46];
};
static_assert(offsetof(MotionEntry, type) == 0x38 && sizeof(MotionEntry) == 0x80);

/** The physics world: its body table at +0x20 and its motion table at +0xe0. */
struct PhysicsWorld {
    uint8_t unknown_0x00[0x20];
    BodyEntry *bodies;
    uint8_t unknown_0x28[0xb8];
    MotionEntry *motions;
};
static_assert(offsetof(PhysicsWorld, bodies) == 0x20 && offsetof(PhysicsWorld, motions) == 0xe0);

/** The holder that keeps the world at +0x8. */
struct WorldHolder {
    uint8_t unknown_0x00[0x08];
    PhysicsWorld *world;
};
static_assert(offsetof(WorldHolder, world) == 0x08);

/** The physics manager, which keeps its holder at +0x28. */
struct PhysicsManager {
    uint8_t unknown_0x00[0x28];
    WorldHolder *holder;
};
static_assert(offsetof(PhysicsManager, holder) == 0x28);

/** Motion types from this value up are the listed ones that go into the id vector. */
constexpr uint32_t first_listed_motion_type = 5;

RT_GLOBAL(0x0593d700, physics_manager_instance, PhysicsManager *);
RT_ORIGINAL(0x02bc1bb0, push_id, void(IdVector *ids, uint32_t *id));

/** Whether the vector already holds the id. */
bool holds_id(const IdVector &ids, uint32_t id)
{
    for (const uint32_t *slot = ids.begin; slot != ids.end; ++slot) {
        if (*slot == id) return true;
    }
    return false;
}

}  // namespace

/**
 *
 * Collects the motion types of the listed bodies: for each index in the list, the body's motion's type
 * is added to the owner's id vector when it is a listed type and the vector does not hold it yet.
 * An empty list does not read the physics world.
 *
 */
extern "C" void bb_misc_collect_motion_types_02242f30(IdOwner *owner, BodyIndexList *list)
{
    const int32_t count = list->count;
    if (count == 0) return;
    PhysicsWorld *world = physics_manager_instance.get()->holder->world;
    for (int32_t i = 0; i < count; i++) {
        const int32_t body_index = list->indices[i];
        const int32_t motion_index = world->bodies[body_index].motion_index;
        uint32_t type = world->motions[motion_index].type;
        if (type < first_listed_motion_type) continue;
        if (holds_id(owner->ids, type)) continue;
        push_id(&owner->ids, &type);
    }
}
