// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "entry_ref.h"
#include "ref_entry_table.h"
#include "runtime/original.h"
#include "table_child.h"
#include "ref_table_entry.h"
#include "table_info.h"
#include "table_object.h"
#include "table_owner.h"

namespace {

// A one-time initialisation flag, set by the init call the first time the check runs.
RT_GLOBAL(0x058435a0, init_flag, uint8_t);
RT_ORIGINAL(0x00b703c0, init_once, void(uint8_t *flag));

constexpr int32_t max_entry_size = 0x400;
constexpr int32_t limited_kind = 0x5;
constexpr uint16_t max_limited_level = 0x20;

// Whether no object of the limited kind is above the limited level.
bool objects_allowed(misc::TableObject *const *objects, int32_t count)
{
    for (int32_t index = 0; index < count; ++index) {
        const misc::TableInfo *info = objects[index]->info;
        if (info->kind == limited_kind && info->level > max_limited_level) return false;
    }
    return true;
}

}  // namespace

/**
 *
 * Checks an entry reference against its table entry: the entry must be small enough and hold no object
 * of the limited kind above the limited level, and then every child it names must accept the entry.
 *
 * A negative child index is skipped. A reference with no child indices visits every child of the entry's
 * owner. The one-time flag is initialised on the first call that finds it clear.
 */
extern "C" bool bb_misc_entry_ref_accept(misc::EntryRef *ref, misc::RefEntryTable *table)
{
    if (init_flag.get() == 0) {
        init_once(init_flag.address());
        if (init_flag.get() == 0) return false;
    }

    misc::RefTableEntry *entry = table->entries[ref->entry_index];
    if (entry->size > max_entry_size) return false;
    if (!objects_allowed(entry->first_list, entry->first_count)) return false;
    if (!objects_allowed(entry->second_list, entry->second_count)) return false;

    if (ref->child_index_count > 0) {
        for (int32_t slot = 0; slot < ref->child_index_count; ++slot) {
            const int32_t child_index = ref->child_indices[slot];
            if (child_index < 0) continue;
            misc::TableChild *child = entry->owner->children[child_index];
            if (!child->vtable->check(child, entry)) return false;
        }
        return true;
    }

    for (int32_t index = 0; index < entry->owner->child_count; ++index) {
        misc::TableChild *child = entry->owner->children[index];
        if (!child->vtable->check(child, entry)) return false;
    }
    return true;
}
