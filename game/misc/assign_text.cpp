// SPDX-License-Identifier: GPL-2.0-or-later
#include "text_assign_target.h"

#include "runtime/original.h"

namespace {
RT_ORIGINAL(0x0045c1f0, fn_0045c1f0, uint64_t(const char *));
RT_ORIGINAL(0x004645e0, fn_004645e0, void(misc::TextAssignHolder *, uint64_t));
RT_ORIGINAL(0x0045c210, fn_0045c210, void(void *, uint64_t, const char *, uint64_t));
}  // namespace

/**
 *
 * Assigns a byte string to a text target, measuring it when the length is unmeasured.
 *
 * A null source leaves the target untouched. Otherwise the holder's storage is reserved for the
 * length plus a terminator, the characters are copied into it and the assigned flag is set.
 */
extern "C" void bb_misc_assign_text(misc::TextAssignTarget *target, const char *text, int64_t length)
{
    if (text == nullptr) return;
    if (length == misc::text_length_unmeasured) length = static_cast<int64_t>(fn_0045c1f0(text));
    const uint64_t capacity = static_cast<uint64_t>(length) + 1;
    fn_004645e0(target->holder, capacity);
    fn_0045c210(target->holder->storage, capacity, text, static_cast<uint64_t>(length));
    target->flags |= misc::text_assigned_flag;
}
