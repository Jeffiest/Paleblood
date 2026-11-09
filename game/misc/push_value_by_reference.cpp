// SPDX-License-Identifier: GPL-2.0-or-later
#include "value_owner.h"

#include <cstdint>

#include "runtime/original.h"

namespace {

/** Largest element count the growth rule computes before it saturates. */
constexpr uint64_t max_element_count = 0x1fffffffffffffff;

RT_ORIGINAL(0x02b3ad50, fn_02b3ad50, void(misc::ValueVector *vector, uint64_t capacity));

/**
 *
 * Reallocates the vector's storage for a larger capacity, derived from its current element count.
 *
 * The new capacity is about one and a half times the count, and at least one more than the count.
 */
void grow_storage(misc::ValueVector *vector)
{
    const uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
    uint64_t capacity = 0;
    if (count <= max_element_count - (count >> 1)) capacity = (count >> 1) + count;
    if (capacity < count + 1) capacity = count + 1;
    fn_02b3ad50(vector, capacity);
}

}  // namespace

/**
 *
 * Appends a copy of the value to the vector, growing the storage first when it is full.
 *
 * When the value lies inside the stored values, the copy is taken after any growth, from the
 * stored value at the same position, so that the new storage is read. When the storage has no
 * address (a null end pointer) the slot is not written, but the end pointer still moves on by one.
 */
extern "C" void bb_misc_push_value_by_reference(misc::ValueVector *vector, const uint64_t *value)
{
    const uintptr_t value_address = reinterpret_cast<uintptr_t>(value);
    const uintptr_t begin_address = reinterpret_cast<uintptr_t>(vector->begin);
    const bool inside_stored_values =
        value_address < reinterpret_cast<uintptr_t>(vector->end) && begin_address <= value_address;
    const uint64_t index = (value_address - begin_address) / misc::value_size;

    if (vector->end == vector->capacity) grow_storage(vector);
    if (vector->end != nullptr) {
        const uint64_t element = inside_stored_values ? vector->begin[index] : *value;
        *vector->end = element;
    }
    vector->end += 1;
}
