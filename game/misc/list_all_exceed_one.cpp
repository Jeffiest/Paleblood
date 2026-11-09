// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tells whether every object in an owner's list has a signed value above one.
#include <cstddef>
#include <cstdint>

namespace {

/**
 *
 * Value that each object's signed value must exceed for the list to pass.
 *
 */
constexpr int32_t passing_threshold = 1;

/**
 *
 * An object whose signed value sits at +0xe4.
 *
 */
struct Object {
    uint8_t unknown_0x0000[0xe4];
    int32_t value; /**< Signed value compared with the passing threshold. */
};
static_assert(offsetof(Object, value) == 0xe4);

/**
 *
 * A list element that holds its object at +0x40.
 *
 */
struct Element {
    uint8_t unknown_0x0000[0x40];
    const Object *object; /**< Object that the element carries. */
};
static_assert(offsetof(Element, object) == 0x40);

/**
 *
 * A list: its element pointers and their count at +0x8.
 *
 */
struct List {
    Element *const *items; /**< Array of element pointers. */
    uint64_t count; /**< Number of element pointers in the array. */
};
static_assert(offsetof(List, count) == 0x08);

/**
 *
 * An owner whose list is at +0x10; the list may be null.
 *
 */
struct Owner {
    uint8_t unknown_0x0000[0x10];
    const List *list; /**< List whose objects are checked; a null list passes. */
};
static_assert(offsetof(Owner, list) == 0x10);

}  // namespace

/**
 *
 * Returns whether every object of the owner's list has a value above the passing threshold.
 *
 * A null or empty list passes. The check stops at the first object that does not pass.
 *
 */
extern "C" bool bb_misc_list_all_exceed_one(const Owner *owner)
{
    const List *list = owner->list;
    if (list == nullptr) return true;
    for (uint64_t index = 0; index < list->count; ++index) {
        const Object *object = list->items[index]->object;
        if (object->value <= passing_threshold) return false;
    }
    return true;
}
