// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls the routine at 0x01e876d0 with two fresh counted records and a counter, then returns the object it was given.
#include <cstdint>

#include "counted_record.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01e876d0, fill_counted_records, void(void *object, uint64_t argument, misc::CountedRecord *first,
                                                    misc::CountedRecord *second, uint64_t *counter, uint32_t mode));

/** The count a fresh record starts at: all ones. */
constexpr uint32_t unset_count = 0xffffffff;
/** The counter starts at all ones as well. */
constexpr uint64_t unset_counter = 0xffffffffffffffff;

}  // namespace

/**
 *
 * Calls the routine that fills two counted records and a counter, then returns the object it was given.
 *
 * The routine is passed the object and the argument unchanged, the records and counter start unset, and the mode
 * is passed as a 32-bit value.
 *
 */
extern "C" void *bb_misc_call_with_counted_records_01e87f90(void *object, uint64_t argument, uint32_t mode)
{
    misc::CountedRecord first{};
    misc::CountedRecord second{};
    first.count_0x00 = unset_count;
    second.count_0x00 = unset_count;
    uint64_t counter = unset_counter;
    fill_counted_records(object, argument, &first, &second, &counter, mode);
    return object;
}
