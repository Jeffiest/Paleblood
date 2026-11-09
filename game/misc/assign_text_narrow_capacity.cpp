// SPDX-License-Identifier: GPL-2.0-or-later
#include "text_assign_target.h"

#include "runtime/original.h"

namespace {
RT_ORIGINAL(0x02fbe608, fn_02fbe608, uint64_t(const char *));
RT_ORIGINAL(0x004634d0, fn_004634d0, uint64_t(const char *, uint64_t));
RT_ORIGINAL(0x004645e0, fn_004645e0, void(misc::TextAssignHolder *, int64_t));
RT_ORIGINAL(0x004643f0, fn_004643f0, void(void *, int64_t, const char *, uint64_t));

/** Length argument that asks the measure to read the whole string, with no bound. */
constexpr uint64_t unbounded_length = ~uint64_t{0};
}  // namespace

/**
 *
 * Assigns a byte string to a text target with a capacity taken from a second measure of the string.
 *
 * A null source leaves the target untouched. The measure of the source gives the capacity through its
 * low 32 bits plus one, sign-extended to 64 bits, while the characters copied are the given length
 * or the measured one when the length is unmeasured. The assigned flag is set after the copy.
 */
extern "C" void bb_misc_assign_text_narrow_capacity(misc::TextAssignTarget *target, const char *text,
                                                     int64_t length)
{
    if (text == nullptr) return;
    if (length == misc::text_length_unmeasured) length = static_cast<int64_t>(fn_02fbe608(text));
    const uint64_t measured = fn_004634d0(text, unbounded_length);
    const uint32_t narrow = static_cast<uint32_t>(measured) + 1u;
    const int64_t capacity = static_cast<int32_t>(narrow);
    fn_004645e0(target->holder, capacity);
    fn_004643f0(target->holder->storage, capacity, text, static_cast<uint64_t>(length));
    target->flags |= misc::text_assigned_flag;
}
