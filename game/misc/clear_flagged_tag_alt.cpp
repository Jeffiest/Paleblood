// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: clears the tag bit of a flagged object and gives the object the base vtable.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** A flagged object: its vtable at +0x00 and its flag word at +0x08. */
struct FlaggedObject {
    const void *vtable; /**< The vtable the object is given. */
    uint32_t flags;     /**< The flag word; its tag bit is cleared. */
};
static_assert(offsetof(FlaggedObject, flags) == 0x08 && sizeof(FlaggedObject) == 0x10);

/** The tag bit of the flag word. */
constexpr uint32_t flag_tag_bit = 0x40000000;
/** Clears only the tag bit: every other bit of the flag word is kept. */
constexpr uint32_t flag_clear_mask = ~flag_tag_bit;

RT_GLOBAL(0x057b93b0, flagged_base_vtable, uint8_t);

}  // namespace

/**
 *
 * Gives the object the base vtable and clears the tag bit of its flag word. The other bits of the flag
 * word are kept, and the object is not otherwise touched.
 *
 */
extern "C" void bb_misc_clear_flagged_tag_alt(FlaggedObject *object)
{
    object->vtable = flagged_base_vtable.address();
    object->flags &= flag_clear_mask;
}
