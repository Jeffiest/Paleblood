// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases the holder's object when the pair singleton is on the holder's chain, through the singleton's chain.
#include <cstddef>
#include <cstdint>

#include "pair_singleton.h"
#include "runtime/original.h"

namespace {

struct ChainObject;
struct ChainTarget;

/** The chained object's vtable: its slot at zero releases the object. */
struct ChainObjectVtable {
    void (*slot_00)(ChainObject *object); /**< Releases the object. */
};
static_assert(offsetof(ChainObjectVtable, slot_00) == 0x00);

/** An object on the chain: its vtable, then the next object on the chain. */
struct ChainObject {
    const ChainObjectVtable *vtable; /**< The object's virtual functions. */
    ChainObject *next_0x08;          /**< The next object on the chain, or null at its end. */
};
static_assert(offsetof(ChainObject, next_0x08) == 0x08);

/** The target's vtable: its slot at 0x70 receives the target and the object it releases. */
struct ChainTargetVtable {
    uint8_t unknown_0x00[0x70];                                 /**< Slots not used by the routine. */
    void (*slot_70)(ChainTarget *target, ChainObject *object);  /**< Takes the object from the target. */
};
static_assert(offsetof(ChainTargetVtable, slot_70) == 0x70);

/** A target object, whose first word is its vtable. */
struct ChainTarget {
    const ChainTargetVtable *vtable; /**< The target's virtual functions. */
};

/** The holder: the chain's first object, then the object the routine releases, which is cleared at the end. */
struct ChainHolder {
    ChainObject *chain_0x00;  /**< The first object on the chain. */
    ChainObject *object_0x08; /**< The object released, cleared when the routine ends. */
};
static_assert(offsetof(ChainHolder, chain_0x00) == 0x00);
static_assert(offsetof(ChainHolder, object_0x08) == 0x08);

RT_ORIGINAL(0x024ede50, lazy_setup, void());
RT_ORIGINAL(0x0247b720, wrap_release_target, ChainTarget *(ChainObject *object));

RT_GLOBAL(0x05ac7600, pair_singleton_instance, misc::PairSingleton *);
RT_GLOBAL(0x05ac7608, pair_singleton_pending, uint8_t);
RT_GLOBAL(0x05ac7610, pair_singleton_storage, misc::PairSingleton);
RT_GLOBAL(0x05ac7660, pair_singleton_guard, uint8_t);
RT_GLOBAL(0x056c7a30, pair_singleton_vtable, uint8_t);

RT_ORIGINAL(0x024b6d00, construct, void(misc::PairSingleton *));
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *));

/** The offset of the usable vtable entry within the vtable block. */
constexpr uintptr_t vtable_address_point = 0x10;

/**
 *
 * Returns the pair singleton, building it in its storage when the instance pointer is still null.
 *
 * The build clears the pending flag when it is set, runs the one-time guard when the guard byte is clear, constructs
 * the singleton and then publishes it in the instance pointer.
 */
misc::PairSingleton *ensure_pair_singleton()
{
    misc::PairSingleton *singleton = pair_singleton_instance.get();
    if (singleton != nullptr) return singleton;
    lazy_setup();
    singleton = pair_singleton_instance.get();
    if (singleton != nullptr) return singleton;
    if (pair_singleton_pending.get() != 0) pair_singleton_pending.get() = 0;
    if (pair_singleton_guard.get() == 0 && guard_acquire(&pair_singleton_guard.get()) != 0) {
        guard_release(&pair_singleton_guard.get());
    }
    misc::PairSingleton *built = pair_singleton_storage.address();
    construct(built);
    built->vtable = pair_singleton_vtable.address() + vtable_address_point;
    built->value_0x48 = 0;
    built->value_0x40 = 0;
    pair_singleton_instance.get() = built;
    return built;
}

}  // namespace

/**
 *
 * Releases the holder's object when the pair singleton is on the holder's chain. The object is found when the chain
 * reaches the singleton, and then its slot 0 runs and the target's slot 0x70 takes it. A null target is replaced by
 * the one the wrap routine makes from the object. The holder's object word is cleared in every case but a null object.
 *
 * The routine returns nothing.
 */
extern "C" void bb_misc_release_chain_member_02b50b80(uint64_t /* never read */, ChainHolder *holder,
                                                    ChainTarget *target)
{
    ChainObject *object = holder->object_0x08;
    if (object == nullptr) return;
    ChainObject *chain = holder->chain_0x00;
    const misc::PairSingleton *singleton = ensure_pair_singleton();
    ChainObject *found = nullptr;
    if (chain != nullptr) {
        for (;;) {
            if (static_cast<const void *>(chain) == static_cast<const void *>(singleton)) {
                found = object;
                break;
            }
            chain = chain->next_0x08;
            if (chain == nullptr) break;
        }
    }
    if (target == nullptr) {
        if (found == nullptr) {
            holder->object_0x08 = nullptr;
            return;
        }
        target = wrap_release_target(found);
    } else if (found == nullptr) {
        holder->object_0x08 = nullptr;
        return;
    }
    found->vtable->slot_00(found);
    target->vtable->slot_70(target, found);
    holder->object_0x08 = nullptr;
}
