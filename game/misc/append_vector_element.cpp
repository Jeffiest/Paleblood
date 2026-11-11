// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: appends a copy of a 0xd8-byte element to a vector, growing its storage first when it is full.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The largest element count the vector's storage can hold. */
constexpr uint64_t max_element_count = 0x012f684bda12f684;

/** A stored element: 0xd8 bytes whose contents this function never reads. */
struct VectorElement {
    uint8_t unknown_0x0000[0xd8];
};
static_assert(sizeof(VectorElement) == 0xd8);

/** A vector of elements: the first element, one past the last stored, and one past the reserved storage. */
struct ElementVector {
    uint8_t unknown_0x0000[0x08];
    VectorElement *begin;          /**< The first stored element. */
    VectorElement *end;            /**< One past the last stored element. */
    VectorElement *capacity_end;   /**< One past the last reserved element. */
};
static_assert(offsetof(ElementVector, begin) == 0x08);
static_assert(offsetof(ElementVector, end) == 0x10);
static_assert(offsetof(ElementVector, capacity_end) == 0x18);

RT_ORIGINAL(0x02b26330, reserve_elements, void(ElementVector *vector, uint64_t capacity));
RT_ORIGINAL(0x010832c0, construct_element, void(VectorElement *destination, const VectorElement *source));

/** The capacity a full vector grows to: one and a half times its size, at least one more than its size. */
uint64_t grown_capacity(uint64_t size)
{
    uint64_t half = size >> 1;
    uint64_t needed = size + 1;
    uint64_t grown = (max_element_count - half >= size) ? size + half : 0;
    return grown < needed ? needed : grown;
}

}  // namespace

/**
 *
 * Appends a copy of the element to the vector, growing its storage first when there is no room left.
 *
 * When the element lies inside the stored elements, it is copied from its position after any growth, since
 * growing moves the storage. The growth keeps the vector's storage fields in step by itself.
 */
extern "C" void bb_misc_append_vector_element(ElementVector *vector, const VectorElement *value)
{
    bool inside_stored = vector->end > value && vector->begin <= value;
    uint64_t index = inside_stored ? static_cast<uint64_t>(value - vector->begin) : 0;
    if (vector->end == vector->capacity_end) {
        uint64_t count = static_cast<uint64_t>(vector->end - vector->begin);
        reserve_elements(vector, grown_capacity(count));
    }
    VectorElement *destination = vector->end;
    if (destination != nullptr) {
        const VectorElement *source = inside_stored ? vector->begin + index : value;
        construct_element(destination, source);
    }
    vector->end = destination + 1;
}
