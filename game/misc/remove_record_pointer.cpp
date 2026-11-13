// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: removes the first record pointer equal to a value from the step gate's record set, moving the rest down.
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"
#include "step_gate_records.h"

namespace {

RT_GLOBAL(0x0593b120, step_gate_records_holder, misc::StepGateRecordsHolder *);
RT_GLOBAL(0x04d3ad45, step_gate_name, const char);

/** The library byte move: destination, source and byte count; its result is the routine's RAX when it runs. */
RT_ORIGINAL(0x02fbe658, move_bytes, uint64_t(void *destination, const void *source, uint64_t bytes));

}  // namespace

/**
 *
 * Removes the first record pointer equal to the value from the step gate's record set, moving the pointers after
 * it down one slot and dropping the end by one. A value that is not in the set changes nothing.
 *
 * The result is the step gate's address, unless the move ran: then it is the move's own result, as the original
 * leaves it in RAX.
 *
 */
extern "C" uint64_t bb_misc_remove_record_pointer_02265b30(void *value)
{
    misc::StepGateRecordsHolder *holder = engine::require(step_gate_records_holder, step_gate_name.address());
    misc::StepGateRecords *records = holder->records;
    uint64_t result = reinterpret_cast<uintptr_t>(holder);

    void **cursor = records->begin;
    void **const end = records->end;
    while (cursor != end) {
        void **entry = cursor;
        ++cursor;
        if (*entry == value) {
            const uint64_t remaining = reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(cursor);
            result = move_bytes(entry, cursor, remaining);
            records->end = end - 1;
            break;
        }
    }
    return result;
}
