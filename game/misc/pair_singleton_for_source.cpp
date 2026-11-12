// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills a pair with the pair singleton and the source's factory word, or with zeros when the source is ready.
#include <cstdint>

#include "object_source.h"
#include "pair_singleton.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x05ac7600, pair_singleton_instance, misc::PairSingleton *);
RT_GLOBAL(0x05ac7608, pair_singleton_pending, uint8_t);
RT_GLOBAL(0x05ac7610, pair_singleton_storage, misc::PairSingleton);
RT_GLOBAL(0x05ac7660, pair_singleton_guard, uint8_t);
RT_GLOBAL(0x056c7a30, pair_singleton_vtable, uint8_t);

RT_ORIGINAL(0x024ede50, lazy_setup, void());
RT_ORIGINAL(0x024b6d00, construct, void(misc::PairSingleton *));
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *));
RT_ORIGINAL(0x02b50a50, make_source_object, uint64_t(uint64_t, ObjectSource *));

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
 * Fills the caller's pair with the pair singleton and the word the source's factory returns, and returns the pair.
 *
 * A source whose readiness byte is set makes both words zero and the factory is not called. Otherwise the singleton is
 * taken (built when missing), the factory runs with the first argument and the source, and the result is stored. The
 * first argument is passed on unchanged.
 */
extern "C" misc::PairSingletonResult *bb_misc_pair_singleton_for_source_02b50810(misc::PairSingletonResult *out,
                                                                               uint64_t first, ObjectSource *source)
{
    if (source != nullptr && source->ready_0x458 != 0) {
        out->result = 0;
        out->singleton = nullptr;
        return out;
    }
    misc::PairSingleton *singleton = ensure_pair_singleton();
    const uint64_t result = make_source_object(first, source);
    out->singleton = singleton;
    out->result = result;
    return out;
}
