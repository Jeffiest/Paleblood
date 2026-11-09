// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "dual_held_member_object.h"
#include "ref_item.h"
#include "runtime/original.h"

namespace {

/** Kind word that reports the second held item first, then the first. */
constexpr uint32_t second_first_kind = 0x1;
/** Kind word that reports the first held item first, then the second. */
constexpr uint32_t first_first_kind = 0x0;
/** Result for every other kind word: nothing is reported. */
constexpr uint64_t unreported_result = 0x0;
/** Flag passed with the first report of a pair: the report is not the final one. */
constexpr uint32_t first_report_flag = 0x1;
/** Flag passed with the final report of a pair. */
constexpr uint32_t final_report_flag = 0x0;

// Reports one held item's word for the caller's arguments and the flag, and returns the report's word.
RT_ORIGINAL(0x00c0b940, report_held_item, uint32_t(uint64_t, uint64_t, misc::RefItem *, uint64_t, uint32_t));

}  // namespace

/**
 *
 * Reports the two held items of a dual held member object in the order its kind word gives. A kind of one
 * reports the item at 0x38 into the first result, then the item at 0x20 into the second; a kind of zero
 * does the reverse; any other kind reports nothing. Each report gets the caller's arguments: the second
 * and third as received, the fourth for the first report and the fifth for the second, and a flag that is
 * set for the first report only.
 *
 * Returns zero in every case, and stores a result only for the reports that are made.
 */
extern "C" uint64_t bb_misc_dual_held_pair_report(misc::DualHeldMemberObject *object, uint64_t second_argument,
                                                  uint64_t third_argument, uint64_t fourth_argument,
                                                  uint32_t fifth_argument, uint32_t *first_result,
                                                  uint32_t *second_result)
{
    misc::RefItem *following = nullptr;
    if (object->kind_0x18 == second_first_kind) {
        *first_result = report_held_item(third_argument, second_argument, object->held_0x38, fourth_argument,
                                         first_report_flag);
        following = object->held_0x20;
    } else {
        if (object->kind_0x18 != first_first_kind) return unreported_result;
        *first_result = report_held_item(third_argument, second_argument, object->held_0x20, fourth_argument,
                                         first_report_flag);
        following = object->held_0x38;
    }

    *second_result = report_held_item(third_argument, second_argument, following, fifth_argument, final_report_flag);
    return unreported_result;
}
