// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores the pair dispatch holder's vtable, takes the pair singleton, and tail-calls its slot 0x60.
#include <cstddef>
#include <cstdint>

#include "pair_singleton.h"
#include "runtime/original.h"

namespace {

struct PairDispatchHolder;

/** The pair singleton's vtable slots the dispatch calls: two values and the tail routine. */
struct PairDispatchVtable {
    uint8_t unknown_0x00[0x10];
    uint64_t (*slot_10)(misc::PairSingleton *singleton);
    uint64_t (*slot_18)(misc::PairSingleton *singleton);
    uint8_t unknown_0x20[0x40];
    uint64_t (*slot_60)(misc::PairSingleton *singleton, PairDispatchHolder *holder, uint64_t first, uint64_t second);
};
static_assert(offsetof(PairDispatchVtable, slot_10) == 0x10);
static_assert(offsetof(PairDispatchVtable, slot_18) == 0x18);
static_assert(offsetof(PairDispatchVtable, slot_60) == 0x60);

/** The holder the dispatch is given: its first word is its vtable. */
struct PairDispatchHolder {
    const void *vtable; /**< The holder's vtable, stored by the dispatch. */
};
static_assert(offsetof(PairDispatchHolder, vtable) == 0x0);

RT_GLOBAL(0x05ac7670, pair_singleton_instance, misc::PairSingleton *);
RT_GLOBAL(0x05ac7678, pair_singleton_pending, uint8_t);
RT_GLOBAL(0x05ac7680, pair_singleton_storage, misc::PairSingleton);
RT_GLOBAL(0x05ac76d0, pair_singleton_guard, uint8_t);
RT_GLOBAL(0x056c7bf0, pair_singleton_vtable, uint8_t);
RT_GLOBAL(0x056c7ba0, pair_dispatch_holder_vtable, uint8_t);

RT_ORIGINAL(0x024ede50, lazy_setup, void());
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
 * Forwards the holder to the pair singleton: the holder takes its vtable, and the singleton's slot 0x60
 * receives the singleton, the holder and the results of its slots 0x10 and 0x18.
 *
 * The routine's result is the slot's result as it is, so this is a tail call.
 */
extern "C" uint64_t bb_misc_record_singleton_dispatch_02b53250(PairDispatchHolder *holder)
{
    holder->vtable = pair_dispatch_holder_vtable.address() + vtable_address_point;
    misc::PairSingleton *first = ensure_pair_singleton();
    const auto *table = static_cast<const PairDispatchVtable *>(first->vtable);
    const auto tail = table->slot_60;
    const uint64_t first_result = table->slot_10(first);
    misc::PairSingleton *second = ensure_pair_singleton();
    const auto *second_table = static_cast<const PairDispatchVtable *>(second->vtable);
    const uint64_t second_result = second_table->slot_18(second);
    return tail(first, holder, first_result, second_result);
}
