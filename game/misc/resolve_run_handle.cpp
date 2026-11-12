// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "run_table.h"
#include "runtime/original.h"

namespace {

// Fills the cursor with the segment it searched and returns the range of the id.
RT_ORIGINAL(0x00d0aed0, fn_00d0aed0, misc::RunTableRange *(misc::RunTableCursor *cursor, uint32_t id));

/**
 *
 * Finds where the run of slots that starts at a slot ends.
 *
 * The run ends at the first slot that is not the local index of the id, or at the end of the segment.
 */
int32_t find_run_end(const misc::RunTableSegment *segment, int32_t start, uint32_t local_index)
{
    int32_t end = start;
    while (end < segment->slot_count && segment->slots[end] == static_cast<int32_t>(local_index)) ++end;
    return end;
}

/**
 *
 * Moves an id through its segment's slots by the run offset of the request.
 *
 * Returns false when the table has no entry for the request. A negative slot is kept only when the run
 * offset is unset and the slot is not the absent marker. Otherwise the id becomes the slot plus the run
 * offset, as long as it stays inside the run, and keeps its segment bits.
 */
bool resolve_table_id(const misc::RunTable *table, const misc::RunTableRequest *request, uint32_t *id)
{
    const uint32_t segment_index = *id >> misc::run_table_segment_shift;
    const misc::RunTableSegment *segment = &table->segments[segment_index];
    const uint32_t local_index = *id & misc::run_table_local_mask;
    const int32_t slot = segment->slots[local_index];
    const bool run_unset = request->run_offset == misc::run_table_unset;

    if (slot < 0) return run_unset && slot != misc::run_table_absent;
    if (run_unset) return false;

    const int32_t run_end = find_run_end(segment, slot, local_index);
    const uint32_t moved = static_cast<uint32_t>(static_cast<int32_t>(request->run_offset)) + static_cast<uint32_t>(slot);
    if (static_cast<int32_t>(moved) > run_end - 1) return false;

    *id = moved | (*id & misc::run_table_segment_mask);
    return true;
}

}  // namespace

/**
 *
 * Resolves an id through a run table and then gives the id the tail offset of its range.
 *
 * With a table, the id moves by the run offset inside its run of slots (or stays as it is when the
 * slot is an unset negative value). The resolved id is written to out_id, and the range the lookup
 * gives it is then used: a tail offset that is unset, or at or above the range limit, gives no entry.
 */
extern "C" uint32_t bb_misc_resolve_run_handle(misc::RunTable *table, misc::RunTableCursor *cursor,
                                               misc::RunTableRequest *request, uint32_t *out_id)
{
    uint32_t id = request->id;
    if (table != nullptr && !resolve_table_id(table, request, &id)) {
        *out_id = misc::run_table_no_entry_id;
        return misc::run_table_no_entry_id;
    }
    *out_id = id;
    if (id == misc::run_table_no_entry_id) return misc::run_table_no_entry_id;

    const misc::RunTableRange *range = fn_00d0aed0(cursor, id);
    const int32_t tail_offset = request->tail_offset;
    if (tail_offset == misc::run_table_unset) return misc::run_table_no_entry_id;
    if (tail_offset >= range->limit) {
        *out_id = misc::run_table_no_entry_id;
        return misc::run_table_no_entry_id;
    }
    const uint32_t tail_position = static_cast<uint32_t>(tail_offset) + static_cast<uint32_t>(range->base);
    return (id & misc::run_table_segment_mask) | tail_position;
}
