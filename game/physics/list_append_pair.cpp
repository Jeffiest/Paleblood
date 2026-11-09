// SPDX-License-Identifier: GPL-2.0-or-later
// Physics: appends the second body's parent to an owned list when the pair's instances are ready.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../misc/owned_list.h"
#include "runtime/original.h"

namespace {

/** The instance kind that a body's owner must have to take part in a pair. */
constexpr uint16_t ready_kind = 2;

/** The state a parent object must be in once its query reports it ready. */
constexpr int32_t ready_state = 2;

/** Alignment of the list nodes the pair appends. */
constexpr uint64_t node_alignment = 8;

/** Body index that marks a reference as having no body. */
constexpr int32_t no_body = 0x7fffffff;

struct Instance;
struct ParentObject;

/**
 *
 * The vtable of a parent object, of which only the readiness query slot is used.
 *
 */
struct ParentVtable {
    uint8_t unknown_0x00[0x1a8];
    bool (*query)(ParentObject *self); /**< Slot at 0x1a8. True when the parent is ready. */
};
static_assert(offsetof(ParentVtable, query) == 0x1a8);

/**
 *
 * The parent object of an instance: its vtable, then a state word the readiness check compares.
 *
 */
struct ParentObject {
    const ParentVtable *vtable;
    uint8_t unknown_0x08[0x70];
    int32_t state; /**< Compared with ready_state once the query reports ready. */
};
static_assert(offsetof(ParentObject, state) == 0x78);

/**
 *
 * An instance that owns bodies: its kind at 0x08 and its parent object at 0x10.
 *
 */
struct Instance {
    uint8_t unknown_0x00[0x8];
    uint16_t kind;        /**< Instance kind; only ready_kind instances take part in a pair. */
    uint8_t unknown_0x0a[0x6];
    ParentObject *parent; /**< The instance's parent object, or null. */
};
static_assert(offsetof(Instance, kind) == 0x08 && offsetof(Instance, parent) == 0x10);

/**
 *
 * The link a body keeps back to the instance that owns it.
 *
 */
struct BackLink {
    Instance *owner; /**< The owning instance, or null. */
};

/**
 *
 * An entry of the world's body table, 0x90 bytes each, whose link back to its owner sits at 0x88.
 *
 */
struct BodyEntry {
    uint8_t unknown_0x00[0x88];
    BackLink *link; /**< The body's link back to its owner, or null. */
};
static_assert(offsetof(BodyEntry, link) == 0x88 && sizeof(BodyEntry) == 0x90);

struct PhysicsWorld {
    uint8_t unknown_0x00[0x20];
    BodyEntry *bodies; /**< The body table, indexed by body index. */
};
static_assert(offsetof(PhysicsWorld, bodies) == 0x20);

struct WorldHolder {
    uint8_t unknown_0x00[0x8];
    PhysicsWorld *world;
};
static_assert(offsetof(WorldHolder, world) == 0x8);

struct PhysicsManager {
    uint8_t unknown_0x00[0x28];
    WorldHolder *holder;
};
static_assert(offsetof(PhysicsManager, holder) == 0x28);

/**
 *
 * A reference to one body of a pair: the body's index in the world's table at 0x30.
 *
 */
struct BodyReference {
    uint8_t unknown_0x00[0x30];
    int32_t body_index; /**< Index into the body table, or no_body. */
};
static_assert(offsetof(BodyReference, body_index) == 0x30);

RT_GLOBAL(0x0593d700, physics_manager_instance, PhysicsManager *);
RT_GLOBAL(0x05940420, allocator_instance, engine::Allocator *);

}  // namespace

/**
 *
 * Appends the second body's parent object to the list when both bodies have an owner with the ready kind
 * and a parent, and one of the two parents is ready (the first is tried first, the second only if needed).
 *
 * A node holding the second parent is allocated and linked at the tail. Nothing is done when a body has no
 * index, a link, an owner or a parent, when neither parent is ready, or when the allocation fails.
 */
extern "C" void bb_physics_list_append_pair(misc::OwnedList *list, const BodyReference *first,
                                            const BodyReference *second)
{
    if (first->body_index == no_body || second->body_index == no_body) return;

    const PhysicsWorld *world = physics_manager_instance.get()->holder->world;
    BackLink *first_link = world->bodies[first->body_index].link;
    Instance *first_owner = first_link != nullptr ? first_link->owner : nullptr;
    BackLink *second_link = world->bodies[second->body_index].link;
    if (second_link == nullptr || first_owner == nullptr) return;
    Instance *second_owner = second_link->owner;
    if (second_owner == nullptr) return;

    ParentObject *first_parent = nullptr;
    if (first_owner->kind == ready_kind) first_parent = first_owner->parent;
    if (second_owner->kind != ready_kind || first_parent == nullptr) return;
    ParentObject *second_parent = second_owner->parent;
    if (second_parent == nullptr) return;

    if (!(first_parent->vtable->query(first_parent) && first_parent->state == ready_state)) {
        if (!second_parent->vtable->query(second_parent)) return;
        if (second_parent->state != ready_state) return;
    }

    auto *node = static_cast<misc::OwnedNode *>(
        allocator_instance.get()->allocate(sizeof(misc::OwnedNode), node_alignment));
    if (node == nullptr) return;
    node->object = second_parent;
    node->next = nullptr;
    if (list->head == nullptr) list->head = node;
    if (list->tail != nullptr) list->tail->next = node;
    list->tail = node;
}
