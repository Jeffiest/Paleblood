// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: passes a call for an entry of the second array on to the library routine 0x014471e0, with the caller's registers.
#include <cstdint>

#include "entry_array_holder.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x014471e0, fn_014471e0,
            uint64_t(uint8_t *entry, uint32_t value, uint64_t rdx, uint64_t rcx, uint64_t r8, uint64_t r9));

}  // namespace

/**
 *
 * Forwards the call for the entry at the index of the second array: the entry's address and the low 32 bits of the
 * caller's RDX go to the routine, which also receives the caller's RDX, RCX, R8 and R9 unchanged. Its result is returned.
 *
 */
extern "C" uint64_t bb_misc_forward_second_entry_013ba1f0(misc::EntryArrayHolder *holder, uint32_t index, uint64_t rdx,
                                                        uint64_t rcx, uint64_t r8, uint64_t r9)
{
    return fn_014471e0(misc::entry_array_element(holder->second_entries, index), static_cast<uint32_t>(rdx), rdx, rcx,
                       r8, r9);
}
