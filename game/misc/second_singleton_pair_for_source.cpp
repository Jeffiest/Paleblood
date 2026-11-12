// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills a pair with the second shared singleton and the source's object word, or with zeros when the source is ready.
#include <cstdint>

#include "object_source.h"
#include "runtime/original.h"
#include "second_singleton.h"

namespace {

RT_GLOBAL(0x05ac7590, second_singleton_instance, misc::SecondSingleton *);
RT_GLOBAL(0x05ac7598, second_singleton_pending, uint8_t);
RT_GLOBAL(0x05ac75a0, second_singleton_storage, misc::SecondSingleton);
RT_GLOBAL(0x05ac75f0, second_singleton_guard, uint8_t);
RT_GLOBAL(0x056c7830, second_singleton_vtable, uint8_t);

RT_ORIGINAL(0x024ede50, lazy_setup, void());
RT_ORIGINAL(0x024b6d00, construct, void(misc::SecondSingleton *));
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *));
RT_ORIGINAL(0x02b4e4a0, source_object, uint64_t(uint64_t, ObjectSource *));

/** The offset of the usable vtable entry within the vtable block. */
constexpr uintptr_t vtable_address_point = 0x10;

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
    built->vtable = second_singleton_vtable.address() + vtable_address_point;
    built->value_0x48 = 0;
    built->value_0x40 = 0;
    second_singleton_instance.get() = built;
    return built;
}

}  // namespace

/**
 *
 * Fills the caller's pair with the second shared singleton and the word the source's routine returns, and returns the pair.
 *
 * A source whose readiness byte is set makes both words zero and the routine is not called. Otherwise the singleton is
 * taken (built when missing), the routine runs with the first argument and the source, and the result is stored. The
 * first argument is passed on unchanged.
 */
extern "C" misc::SecondSingletonResult *bb_misc_second_singleton_pair_for_source(misc::SecondSingletonResult *out,
                                                                               uint64_t first, ObjectSource *source)
{
    if (source != nullptr && source->ready_0x458 != 0) {
        out->result = 0;
        out->singleton = nullptr;
        return out;
    }
    misc::SecondSingleton *singleton = ensure_second_singleton();
    const uint64_t result = source_object(first, source);
    out->singleton = singleton;
    out->result = result;
    return out;
}
