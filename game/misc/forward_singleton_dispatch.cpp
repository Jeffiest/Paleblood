// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: stores the forwarding holder's vtable, takes the shared singleton, and tail-calls its slot 0x60.
#include <cstdint>

#include "forwarding_singleton.h"

/**
 *
 * Forwards the holder to the shared singleton: the holder takes its vtable, and the singleton's slot 0x60
 * receives the singleton, the holder and the results of its slots 0x10 and 0x18.
 *
 * The routine's result is the slot's result as it is, so this is a tail call.
 */
extern "C" uint64_t bb_misc_forward_singleton_dispatch(misc::ForwardingHolder *holder)
{
    holder->vtable = misc::forwarding_holder_vtable.address();
    misc::ForwardingSingleton *first = misc::ensure_forwarding_singleton();
    const misc::ForwardingSingletonVtable *table = first->vtable;
    const auto tail = table->slot_60;
    const uint64_t first_result = table->slot_10(first);
    misc::ForwardingSingleton *second = misc::ensure_forwarding_singleton();
    const uint64_t second_result = second->vtable->slot_18(second);
    return tail(first, holder, first_result, second_result);
}
