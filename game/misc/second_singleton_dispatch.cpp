// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores the second dispatch holder's vtable, takes the second shared singleton, and tail-calls its slot 0x60.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"
#include "second_singleton.h"

namespace {

struct SecondDispatchHolder;

/** The second singleton's vtable slots the dispatch calls: two values and the tail routine. */
struct SecondDispatchVtable {
    uint8_t unknown_0x00[0x10];
    uint64_t (*slot_10)(misc::SecondSingleton *singleton);
    uint64_t (*slot_18)(misc::SecondSingleton *singleton);
    uint8_t unknown_0x20[0x40];
    uint64_t (*slot_60)(misc::SecondSingleton *singleton, SecondDispatchHolder *holder, uint64_t first, uint64_t second);
};
static_assert(offsetof(SecondDispatchVtable, slot_10) == 0x10);
static_assert(offsetof(SecondDispatchVtable, slot_18) == 0x18);
static_assert(offsetof(SecondDispatchVtable, slot_60) == 0x60);

/** The holder the dispatch is given: its first word is its vtable. */
struct SecondDispatchHolder {
    const void *vtable;
};

RT_GLOBAL(0x05ac7590, second_singleton_instance, misc::SecondSingleton *);
RT_GLOBAL(0x05ac7598, second_singleton_pending, uint8_t);
RT_GLOBAL(0x05ac75a0, second_singleton_storage, misc::SecondSingleton);
RT_GLOBAL(0x05ac75f0, second_singleton_guard, uint8_t);
RT_GLOBAL(0x056c7840, second_singleton_vptr, uint8_t);
RT_GLOBAL(0x056c77f0, second_dispatch_holder_vptr, uint8_t);

RT_ORIGINAL(0x024ede50, lazy_setup, void());
RT_ORIGINAL(0x024b6d00, construct, void(misc::SecondSingleton *));
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *));

/**
 *
 * Returns the second singleton, building it in its storage when the instance pointer is still null.
 *
 * The build clears the pending flag when it is set, runs the one-time guard when the guard byte is clear, constructs
 * the singleton and then publishes it in the instance pointer.
 */
misc::SecondSingleton *ensure_second_singleton()
{
    misc::SecondSingleton *singleton = second_singleton_instance.get();
    if (singleton != nullptr) return singleton;
    lazy_setup();
    singleton = second_singleton_instance.get();
    if (singleton != nullptr) return singleton;
    if (second_singleton_pending.get() != 0) second_singleton_pending.get() = 0;
    if (second_singleton_guard.get() == 0 && guard_acquire(&second_singleton_guard.get()) != 0) {
        guard_release(&second_singleton_guard.get());
    }
    misc::SecondSingleton *built = second_singleton_storage.address();
    construct(built);
    built->vtable = second_singleton_vptr.address();
    built->value_0x48 = 0;
    built->value_0x40 = 0;
    second_singleton_instance.get() = built;
    return built;
}

}  // namespace

/**
 *
 * Forwards the holder to the second shared singleton: the holder takes its vtable, and the singleton's slot 0x60
 * receives the singleton, the holder and the results of its slots 0x10 and 0x18.
 *
 * The routine's result is the slot's result as it is, so this is a tail call.
 */
extern "C" uint64_t bb_misc_second_singleton_dispatch(SecondDispatchHolder *holder)
{
    holder->vtable = second_dispatch_holder_vptr.address();
    misc::SecondSingleton *first = ensure_second_singleton();
    const auto *table = static_cast<const SecondDispatchVtable *>(first->vtable);
    const auto tail = table->slot_60;
    const uint64_t first_result = table->slot_10(first);
    misc::SecondSingleton *second = ensure_second_singleton();
    const auto *second_table = static_cast<const SecondDispatchVtable *>(second->vtable);
    const uint64_t second_result = second_table->slot_18(second);
    return tail(first, holder, first_result, second_result);
}
