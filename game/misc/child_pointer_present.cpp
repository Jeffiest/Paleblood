// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

namespace {

struct ChildHolder {
    uint8_t unknown_0x00[0x10];
    void *child_0x10;   /**< the child; null when none is attached */
};
static_assert(offsetof(ChildHolder, child_0x10) == 0x10);

struct HolderOwner {
    uint8_t unknown_0x00[0xb0];
    ChildHolder *holder_0xb0;   /**< always set by the owner's constructor */
};
static_assert(offsetof(HolderOwner, holder_0xb0) == 0xb0);

}  // namespace

/**
 *
 * Reports whether the owner's holder has a child attached.
 *
 * Only the child pointer is tested; the result is a bool in AL.
 */
extern "C" bool bb_misc_child_pointer_present(const HolderOwner *owner)
{
    return owner->holder_0xb0->child_0x10 != nullptr;
}
