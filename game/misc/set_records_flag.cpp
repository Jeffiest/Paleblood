// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sets the records flag of the step gate's record set; the original leaves the set's address in RAX.
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"
#include "step_gate_records.h"

namespace {

RT_GLOBAL(0x0593b120, step_gate_records_holder, misc::StepGateRecordsHolder *);
RT_GLOBAL(0x04d3ad45, step_gate_name, const char);

/** The bit of the record set's flag byte that this routine sets. */
constexpr uint8_t records_flag = 0x01;

}  // namespace

/**
 *
 * Sets the records flag of the step gate's record set, and returns the set's address, which the original
 * leaves in RAX for its caller.
 *
 */
extern "C" uint64_t bb_misc_set_records_flag_02265bc0()
{
    misc::StepGateRecords *records =
        engine::require(step_gate_records_holder, step_gate_name.address())->records;
    records->flags |= records_flag;
    return reinterpret_cast<uintptr_t>(records);
}
