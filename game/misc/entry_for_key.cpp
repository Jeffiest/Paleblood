// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the entry a key maps to, looked up in the owned state's table.
#include "lookup_result.h"
#include "owned_entry.h"
#include "owned_state.h"

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0122e460, fn_0122e460, const misc::LookupResult *(void *, const uint64_t *));

}  // namespace

/**
 *
 * Returns the entry the key maps to in the owned state's entry array.
 *
 * The key is copied, and the copy is looked up in the table at +0x978. The index the lookup gives
 * selects the entry, and its address is returned. The index is not checked against the entry count.
 */
extern "C" misc::OwnedEntry *bb_misc_entry_for_key(misc::OwnedState *self, const uint64_t *key)
{
    const uint64_t key_copy = *key;
    const misc::LookupResult *result = fn_0122e460(self->item_0x0978, &key_copy);
    return &self->entries_0x0980[result->index_0x0008];
}
