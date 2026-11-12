// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "../engine/ref_object.h"
#include "runtime/original.h"

namespace {

struct CountedObject;

// The engine's count-and-destroy object, with a destroy routine that reports a result.
struct CountedObjectVtable {
    uint64_t (*destroy)(CountedObject *object); /**< Slot 0x00: destroys the object once the count drops to zero. */
};
static_assert(offsetof(CountedObjectVtable, destroy) == 0x00);

struct CountedObject {
    const CountedObjectVtable *vtable; /**< The object's virtual functions. */
    int32_t references;                /**< Reference count, dropped by one per release. */
};
static_assert(offsetof(CountedObject, references) == 0x8);

// The fatal report, which returns: its result is what the release gives when the count was not positive.
RT_ORIGINAL(0x024b55b0, counted_fatal_report, uint64_t(const char *file, int32_t line, const char *format, ...));

// A count of one before the release means this release drops the last reference.
constexpr int32_t last_reference = 1;

}  // namespace

/**
 *
 * Drops the reference a slot holds on an object, then clears the slot.
 *
 * The result is the value the original leaves in RAX: the count before the release when it was
 * above one, the destroy routine's result when this was the last reference, or the fatal report's
 * result when the count was not positive. A slot that holds nothing returns zero.
 *
 */
extern "C" uint64_t bb_misc_release_counted_slot(CountedObject **slot)
{
    CountedObject *object = *slot;
    if (object == nullptr)
        return 0;
    const int32_t before = __atomic_fetch_sub(&object->references, 1, __ATOMIC_SEQ_CST);
    uint64_t result = static_cast<uint32_t>(before);
    if (before == last_reference)
        result = object->vtable->destroy(object);
    else if (before <= 0)
        result = counted_fatal_report(nullptr, engine::line_invalid_unref, engine::message_invalid_unref.address());
    *slot = nullptr;
    return result;
}
