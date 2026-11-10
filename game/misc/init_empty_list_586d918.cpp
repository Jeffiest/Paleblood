// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: start-up step that makes the list inside the object at 0x0586d918 empty.
//
// misc_init_empty_list_586d918 (0x01140d90) is a static initialiser. The object holds a circular list
// whose anchor is at 0x58: an empty list's anchor points at itself in both directions. The count after
// the anchor is cleared and the 32-bit field after the count is set to minus one.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The value the field after the count starts with. */
constexpr int32_t unset_field = -1;

/** A link of a circular list. */
struct ListLink {
    ListLink *next_0x0000;
    ListLink *previous_0x0008;
};

/** The object, as far as this function touches it. */
struct ListOwner {
    uint8_t unknown_0x0000[0x58];
    ListLink anchor_0x0058;
    uint64_t count_0x0068;
    int32_t field_0x0070;
};
static_assert(offsetof(ListOwner, anchor_0x0058) == 0x58);
static_assert(offsetof(ListOwner, count_0x0068) == 0x68);
static_assert(offsetof(ListOwner, field_0x0070) == 0x70);

RT_GLOBAL(0x0586d918, list_owner, ListOwner);

}  // namespace

/**
 *
 * Makes the object's list empty: the anchor points at itself both ways, the count is zero and the
 * field after the count is minus one.
 *
 * Nothing is read from the object, and nothing before the anchor is written. The function takes no
 * arguments and returns nothing.
 */
extern "C" void bb_misc_init_empty_list_586d918()
{
    ListOwner &owner = list_owner.get();
    owner.field_0x0070 = unset_field;
    owner.anchor_0x0058.next_0x0000 = &owner.anchor_0x0058;
    owner.anchor_0x0058.previous_0x0008 = &owner.anchor_0x0058;
    owner.count_0x0068 = 0;
}
