// SPDX-License-Identifier: GPL-2.0-or-later
// With a held target, calls the target's slot 0x20 with the value, a second word and two constants.
// The second word is zero when the flag bit is set; otherwise it is the context's word, or the result
// of 0x00454320 when that word is zero. With no target, a context reports the value unless the flag
// bit is set, and the result is zero in every case.
#include "misc.h"

namespace {

/** Flag bit that suppresses the second word and the report. */
constexpr uint32_t skip_report_flag = 0x200000;

/** Fourth argument that the target's slot receives. */
constexpr uint32_t target_fourth_argument = 0x21;

/** Fifth argument that the target's slot receives. */
constexpr uint32_t target_fifth_argument = 0x1b6;

}  // namespace

/**
 *
 * Dispatches the value to the held target through its handle slot, or reports it to the context's sink when there is no target.
 *
 */
extern "C" uint64_t bb_misc_dispatch_to_target(misc::TargetDispatch *dispatch, uint64_t value, uint32_t flags)
{
    misc::DispatchTarget *target = dispatch->holder_0x10->target_0x10;
    if (target == nullptr) {
        misc::DispatchContext *context = dispatch->context_0x18;
        if (context != nullptr && (flags & skip_report_flag) == 0) {
            misc::fn_0278ad30(context->report_sink, misc::dispatch_report_message.address(), value);
        }
        return 0;
    }

    const auto handle = target->vtable->handle;
    uint64_t second = 0;
    if ((flags & skip_report_flag) == 0) {
        second = dispatch->context_0x18->value_0x18;
        if (second == 0) second = misc::fn_00454320(dispatch, value, 0);
    }
    return handle(target, value, second, target_fourth_argument, target_fifth_argument);
}
