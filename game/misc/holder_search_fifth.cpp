// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: searches the holder's fifth table for a key and returns what the search gives.
#include "holder_state.h"

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x026e9f20, fn_026e9f20, uint64_t(void *, uint64_t, uint64_t));

}  // namespace

/**
 *
 * Returns the result of searching the holder's table for the key, as the search gives it.
 *
 * The search receives the table, the key in its second argument as the caller left it, and the key
 * as its third argument.
 */
extern "C" uint64_t bb_misc_holder_search_fifth(misc::HolderState *holder, uint64_t key)
{
    void *table = reinterpret_cast<uint8_t *>(holder->body_0x12d0) + misc::holder_table_offset;
    return fn_026e9f20(table, key, key);
}
