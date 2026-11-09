// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "dual_held_member_object.h"
#include "runtime/original.h"

namespace {

// The vtable every dual held member object is given, and the name its first member is initialised with.
RT_GLOBAL(0x0566e840, dual_held_vtable, const misc::DualHeldMemberVtable);
RT_GLOBAL(0x04bb674c, first_member_name, const char);

// The count word a new object starts with: one reference, and the counted flag.
constexpr uint32_t initial_ref_word = 0xffff0001;
// The value stored at 0x50 when the object is built: one half as a float.
constexpr float half_scale = 0.5f;

// Initialises one member object: with a name, or with a null value for the zero case.
RT_ORIGINAL(0x00836640, fill_member, void(void *member, const void *value));

}  // namespace

/**
 *
 * Builds a dual held member object with no held items: it takes one reference of its own, initialises
 * its first member with a name, zeroes its kind word, held items and other words, and sets the half scale.
 */
extern "C" void bb_misc_dual_held_member_object_init(misc::DualHeldMemberObject *object)
{
    object->refcount_word = initial_ref_word;
    object->vtable = dual_held_vtable.address();
    fill_member(object->member_0x10, first_member_name.address());

    object->kind_0x18 = 0;
    object->held_0x20 = nullptr;
    object->word_0x28 = 0;
    fill_member(object->member_0x30, nullptr);

    object->held_0x38 = nullptr;
    object->word_0x40 = 0;
    fill_member(object->member_0x48, nullptr);
    object->half_0x50 = half_scale;
    object->flag_0x54 = 0;
}
