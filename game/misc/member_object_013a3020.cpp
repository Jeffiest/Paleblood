// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: hands the member of an enabled holder to its routine and returns what that routine gives.
#include <cstdint>

#include "runtime/original.h"
#include "text_member_holder.h"

namespace {

RT_ORIGINAL(0x013abaa0, fn_013abaa0, void *(void *member, uint64_t first, uint64_t second));

}  // namespace

/**
 *
 * Returns nothing unless the holder is enabled and has a member; then returns the routine's result for the member.
 *
 */
extern "C" void *bb_misc_member_object_013a3020(misc::TextMemberHolder *holder, uint64_t first, uint64_t second)
{
    if (holder->enabled_0x00 == 0 || holder->member_0x18 == nullptr) return nullptr;
    return fn_013abaa0(holder->member_0x18, first, second);
}
