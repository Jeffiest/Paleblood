// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores the forwarding holder's vtable, takes the shared singleton, and tail-calls its slot 0x60.
#include <cstdint>

#include "forwarding_singleton.h"
#include "runtime/original.h"

namespace {

using misc::ForwardingHolder;
using misc::ForwardingSingleton;

RT_ORIGINAL(0x024ede50, fn_024ede50, void());
RT_ORIGINAL(0x024b6d00, fn_024b6d00, void(ForwardingSingleton *));
RT_ORIGINAL(0x02fbe538, fn_02fbe538, int32_t(uint8_t *));
RT_ORIGINAL(0x02fbe558, fn_02fbe558, void(uint8_t *));

/**
 *
 * Returns the shared singleton, building it in its storage when the instance pointer is still null.
 *
 * The build clears the pending flag when it is set, runs the one-time guard when the guard byte is
 * clear, constructs the singleton and then publishes it in the instance pointer.
 */
ForwardingSingleton *ensure_singleton()
{
    ForwardingSingleton *singleton = misc::forwarding_singleton_instance.get();
    if (singleton != nullptr) return singleton;
    fn_024ede50();
    singleton = misc::forwarding_singleton_instance.get();
    if (singleton != nullptr) return singleton;
    if (misc::forwarding_singleton_pending.get() != 0) misc::forwarding_singleton_pending.get() = 0;
    if (misc::forwarding_singleton_guard.get() == 0 && fn_02fbe538(&misc::forwarding_singleton_guard.get()) != 0) {
        fn_02fbe558(&misc::forwarding_singleton_guard.get());
    }
    ForwardingSingleton *built = misc::forwarding_singleton_storage.address();
    fn_024b6d00(built);
    built->vtable = misc::forwarding_singleton_vtable.address();
    built->value_0x48 = 0;
    built->value_0x40 = 0;
    misc::forwarding_singleton_instance.get() = built;
    return built;
}

}  // namespace

/**
 *
 * Forwards the holder to the shared singleton: the holder takes its vtable, and the singleton's slot 0x60
 * receives the singleton, the holder and the results of its slots 0x10 and 0x18.
 *
 * The routine's result is the slot's result as it is, so this is a tail call.
 */
extern "C" uint64_t bb_misc_forward_singleton_dispatch(ForwardingHolder *holder)
{
    holder->vtable = misc::forwarding_holder_vtable.address();
    ForwardingSingleton *first = ensure_singleton();
    const misc::ForwardingSingletonVtable *table = first->vtable;
    const auto tail = table->slot_60;
    const uint64_t first_result = table->slot_10(first);
    ForwardingSingleton *second = ensure_singleton();
    const uint64_t second_result = second->vtable->slot_18(second);
    return tail(first, holder, first_result, second_result);
}
