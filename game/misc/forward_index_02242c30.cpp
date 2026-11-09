// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/**
 *
 * An object that keeps a value and an index, and forwards them to the object it holds.
 *
 */
struct IndexedObject {
    uint8_t unknown_0x00[0x30];
    int32_t index;  /**< The index that is forwarded with the value. */
    int32_t value;  /**< The value last set on the object. */
    void *inner;    /**< The object the value and index are forwarded to. */
};
static_assert(offsetof(IndexedObject, index) == 0x30 && offsetof(IndexedObject, value) == 0x34);
static_assert(offsetof(IndexedObject, inner) == 0x38);

/** The third argument of the forwarding call is always this mode. */
constexpr uint32_t forward_mode = 0;

// Handles the forwarded value for the inner object and returns its result.
RT_ORIGINAL(0x00f6a370, fn_00f6a370, uint64_t(void *, int32_t, int32_t, uint32_t));

}  // namespace

/**
 *
 * Stores the value on the object, then forwards the inner object, the index, the value and the mode to
 * the forwarding function and returns its result.
 *
 */
extern "C" uint64_t bb_misc_forward_index_02242c30(IndexedObject *self, int32_t value)
{
    self->value = value;
    return fn_00f6a370(self->inner, self->index, value, forward_mode);
}
