// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the shared forwarding singleton kept at fixed globals, and the holder that forwards through it.
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace misc {

struct ForwardingSingleton;
struct ForwardingHolder;

/**
 *
 * The vtable slots the forwarding routine calls: two that return a value from the singleton, and the
 * slot it tail-calls with both values.
 *
 */
struct ForwardingSingletonVtable {
    uint8_t unknown_0x00[0x10];
    uint64_t (*slot_10)(ForwardingSingleton *singleton);
    uint64_t (*slot_18)(ForwardingSingleton *singleton);
    uint8_t unknown_0x20[0x40];
    uint64_t (*slot_60)(ForwardingSingleton *singleton, ForwardingHolder *holder, uint64_t first, uint64_t second);
};
static_assert(offsetof(ForwardingSingletonVtable, slot_10) == 0x10);
static_assert(offsetof(ForwardingSingletonVtable, slot_18) == 0x18);
static_assert(offsetof(ForwardingSingletonVtable, slot_60) == 0x60);

/**
 *
 * The singleton object: its vtable, then two words that its builder clears.
 *
 */
struct ForwardingSingleton {
    const ForwardingSingletonVtable *vtable;  /**< The object's vtable. */
    uint8_t unknown_0x08[0x38];               /**< Not read by the forwarding routine. */
    uint64_t value_0x40;                      /**< Set to zero when the singleton is built. */
    uint64_t value_0x48;                      /**< Set to zero when the singleton is built. */
};
static_assert(offsetof(ForwardingSingleton, value_0x40) == 0x40);
static_assert(offsetof(ForwardingSingleton, value_0x48) == 0x48);
static_assert(sizeof(ForwardingSingleton) == 0x50);

/**
 *
 * The holder the forwarding routine is given: its first word is its vtable, stored by the routine.
 *
 */
struct ForwardingHolder {
    const void *vtable;                       /**< The holder's vtable, stored as is. */
};
static_assert(offsetof(ForwardingHolder, vtable) == 0x0);

/** The singleton pointer; null until the singleton is built. */
RT_GLOBAL(0x05ac7520, forwarding_singleton_instance, ForwardingSingleton *);
/** A flag the builder clears before it constructs the singleton. */
RT_GLOBAL(0x05ac7528, forwarding_singleton_pending, uint8_t);
/** The storage the singleton is built in. */
RT_GLOBAL(0x05ac7530, forwarding_singleton_storage, ForwardingSingleton);
/** The guard byte the builder tests and sets around its one-time setup. */
RT_GLOBAL(0x05ac7580, forwarding_singleton_guard, uint8_t);
/** The vtable the singleton is built with. */
RT_GLOBAL(0x056c7670, forwarding_singleton_vtable, ForwardingSingletonVtable);
/** The vtable the holder is given. */
RT_GLOBAL(0x056c7620, forwarding_holder_vtable, uint8_t);

namespace forwarding_singleton_calls {

/** The one-time set-up the builder calls before it re-reads the singleton pointer. */
RT_ORIGINAL(0x024ede50, lazy_setup, void());
/** The constructor the builder runs on the singleton storage. */
RT_ORIGINAL(0x024b6d00, construct, void(ForwardingSingleton *));
/** The guard acquire: nonzero when the one-time guard must be released. */
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *));
/** The guard release. */
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *));

}  // namespace forwarding_singleton_calls

/**
 *
 * Returns the shared singleton, building it in its storage when the instance pointer is still null.
 *
 * The build clears the pending flag when it is set, runs the one-time guard when the guard byte is
 * clear, constructs the singleton and then publishes it in the instance pointer.
 */
inline ForwardingSingleton *ensure_forwarding_singleton()
{
    ForwardingSingleton *singleton = forwarding_singleton_instance.get();
    if (singleton != nullptr) return singleton;
    forwarding_singleton_calls::lazy_setup();
    singleton = forwarding_singleton_instance.get();
    if (singleton != nullptr) return singleton;
    if (forwarding_singleton_pending.get() != 0) forwarding_singleton_pending.get() = 0;
    if (forwarding_singleton_guard.get() == 0
        && forwarding_singleton_calls::guard_acquire(&forwarding_singleton_guard.get()) != 0) {
        forwarding_singleton_calls::guard_release(&forwarding_singleton_guard.get());
    }
    ForwardingSingleton *built = forwarding_singleton_storage.address();
    forwarding_singleton_calls::construct(built);
    built->vtable = forwarding_singleton_vtable.address();
    built->value_0x48 = 0;
    built->value_0x40 = 0;
    forwarding_singleton_instance.get() = built;
    return built;
}

}  // namespace misc
