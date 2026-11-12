// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: returns the published static object, building the first static object and the published object once.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

struct LazyObject;

/** The vtable of the first static object: slot 0x18 takes the object and an argument, slot 0x28 takes the object. */
struct LazyObjectVtable {
    uint8_t unknown_0x00[0x18];
    void (*slot_0x18)(LazyObject *object, int32_t argument);
    uint8_t unknown_0x20[0x08];
    void (*slot_0x28)(LazyObject *object);
};
static_assert(offsetof(LazyObjectVtable, slot_0x18) == 0x18);
static_assert(offsetof(LazyObjectVtable, slot_0x28) == 0x28);

/** The first static object: its vtable, an eight-byte sub-object, and a flag byte at +0x10. */
struct LazyObject {
    const LazyObjectVtable *vtable;
    uint8_t unknown_0x08[0x08];
    uint8_t flag;
};
static_assert(offsetof(LazyObject, flag) == 0x10);

/** The published static object: only its vtable is known. */
struct PublishedObject {
    const void *vtable;
};

/** The argument the slot 0x18 routine is called with: the value minus one, as 32 bits. */
constexpr int32_t slot_argument_unset = -1;

RT_GLOBAL(0x056b6230, lazy_vtable, const LazyObjectVtable);
RT_GLOBAL(0x05aa5720, first_object, LazyObject);
RT_GLOBAL(0x05aa5740, first_guard, uint8_t);
RT_GLOBAL(0x05aa573f, first_done, uint8_t);
RT_GLOBAL(0x05762450, published_vtable, const uint8_t);
RT_GLOBAL(0x05ac3fb8, published_storage, PublishedObject);
RT_GLOBAL(0x05ac3fb0, published_slot, PublishedObject *);
RT_GLOBAL(0x05ac3fd8, published_guard, uint8_t);
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *guard));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *guard));
RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(LazyObject *object));
RT_ORIGINAL(0x02483fe0, probe_sub, int32_t(void *sub_object));

}  // namespace

/**
 *
 * Returns the published object. When it is not yet published, the first static object is built (its probes may
 * clear its flag), its virtual routine is run, and the published object is set up after its guard. The routine
 * in the first object's slot 0x28 runs last and the published object is returned as it was read before that call.
 *
 */
extern "C" uint64_t bb_misc_get_published_object_once()
{
    if (published_slot.get() != nullptr) return reinterpret_cast<uint64_t>(published_slot.get());
    if (first_guard.get() == 0 && guard_acquire(first_guard.address()) != 0) {
        first_done.get() = 0;
        guard_release(first_guard.address());
    }
    if (first_done.get() == 0) {
        LazyObject &object = first_object.get();
        object.flag = 0;
        object.vtable = lazy_vtable.address();
        if (probe_first(&object) == 0 && probe_sub(object.unknown_0x08) == 0) object.flag = 1;
        first_done.get() = 1;
    }
    LazyObject &first = first_object.get();
    first.vtable->slot_0x18(&first, slot_argument_unset);
    if (published_slot.get() == nullptr) {
        if (published_guard.get() == 0 && guard_acquire(published_guard.address()) != 0) {
            guard_release(published_guard.address());
        }
        published_storage.get().vtable = published_vtable.address();
        published_slot.get() = published_storage.address();
    }
    const uint64_t published = reinterpret_cast<uint64_t>(published_slot.get());
    first.vtable->slot_0x28(&first);
    return published;
}
