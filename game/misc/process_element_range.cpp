// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: for each element in an index range, calls two element functions with the owner's weight.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

struct ScaledElement;

/** The elements an owner keeps, and the weight the first element function is given. */
struct ScaledElementOwner {
    uint8_t unknown_0x0000[0x10];
    ScaledElement **elements;
    uint8_t unknown_0x0018[0x18];
    float weight;
};
static_assert(offsetof(ScaledElementOwner, elements) == 0x10);
static_assert(offsetof(ScaledElementOwner, weight) == 0x30);

/** A half-open range of indices into the owner's elements, begin first. */
struct ElementIndexRange {
    int32_t begin;
    int32_t end;
};
static_assert(offsetof(ElementIndexRange, end) == 0x4);

RT_ORIGINAL(0x0132c730, scale_element, void(ScaledElement *element, float weight));
RT_ORIGINAL(0x0132c750, release_element, void(ScaledElement *element));

}  // namespace

/**
 *
 * Walks the indices from begin up to end. For each one, the owner's element there is passed to the first element
 * function together with the owner's weight, then to the second element function. The end is read again before
 * each step, and an empty or inverted range calls nothing.
 *
 */
extern "C" void bb_misc_process_element_range(ScaledElementOwner *owner, ElementIndexRange *range)
{
    for (int32_t index = range->begin; index < range->end; ++index) {
        ScaledElement *element = owner->elements[index];
        scale_element(element, owner->weight);
        release_element(element);
    }
}
