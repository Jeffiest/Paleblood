// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills a caller pair with the alternate singleton and a lookup entry, or with zeros when the request is in use.
#include <cstddef>
#include <cstdint>

#include "lookup_request.h"
#include "pair_singleton.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x05ac76e8, pair_singleton_instance, misc::PairSingleton *);
RT_GLOBAL(0x05ac76f0, pair_singleton_pending, uint8_t);
RT_GLOBAL(0x05ac76f8, pair_singleton_storage, misc::PairSingleton);
RT_GLOBAL(0x05ac7748, pair_singleton_guard, uint8_t);
RT_GLOBAL(0x056c99a0, pair_singleton_vtable, uint8_t);

RT_ORIGINAL(0x024ede50, lazy_setup, void());
RT_ORIGINAL(0x024b6d00, construct, void(misc::PairSingleton *));
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *));
RT_ORIGINAL(0x02baa150, lookup_entry, uint64_t(uint64_t first, misc::LookupRequest *request));

/** The offset of the usable vtable entry within the vtable block. */
constexpr uintptr_t vtable_address_point = 0x10;

/** The request mode that makes the routine return zeros. */
constexpr uint8_t busy_mode = 0;

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

/**
 *
 * Writes the pair the caller receives: the singleton and the result word. Returns the pair's address, which the
 * original returns in RAX.
 */
uint64_t store_result(misc::PairSingletonResult *out, misc::PairSingleton *singleton, uint64_t result)
{
    out->singleton = singleton;
    out->result = result;
    return reinterpret_cast<uint64_t>(out);
}

}  // namespace

/**
 *
 * Fills the caller's pair. A request that is present and whose mode is not zero gives a null pair. Otherwise the pair
 * singleton is taken, and the result is the lookup entry built from the request (or from the shared pool when there is
 * no request), with the first argument passed on to the lookup as it is.
 */
extern "C" uint64_t bb_misc_pair_singleton_lookup_02ba9f10(misc::PairSingletonResult *out, uint64_t first_argument,
                                                           misc::LookupRequest *request)
{
    if (request != nullptr && request->mode != busy_mode) return store_result(out, nullptr, 0);

    misc::PairSingleton *singleton = ensure_pair_singleton();
    const uint64_t entry = lookup_entry(first_argument, request);
    return store_result(out, singleton, entry);
}
