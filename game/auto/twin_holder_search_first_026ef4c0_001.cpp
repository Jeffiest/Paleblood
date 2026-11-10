// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_holder_search_first, in game/misc/holder_search_first.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/holder_state.h"
#include "runtime/original.h"

// auto_holder_search_first_026ef300: misc_holder_search_first with other addresses.
namespace twin_026ef300 {

// Misc: searches the holder's first table for a key and returns what the search gives.


namespace {

RT_ORIGINAL(0x026eae20, fn_026eae20, uint64_t(void *, uint64_t, uint64_t));

}  // namespace

/**
 *
 * Returns the result of searching the holder's table for the key, as the search gives it.
 *
 * The search receives the table, the key in its second argument as the caller left it, and the key
 * as its third argument.
 */
extern "C" uint64_t bb_auto_holder_search_first_026ef300(misc::HolderState *holder, uint64_t key)
{
    void *table = reinterpret_cast<uint8_t *>(holder->body_0x12d0) + misc::holder_table_offset;
    return fn_026eae20(table, key, key);
}

}  // namespace twin_026ef300
