// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases every slot of a registry list from last to first, then reports the registry's name through the registry holder.
#include <cstdint>

#include "registry_slot_list.h"
#include "runtime/original.h"
#include "text_member_holder.h"

namespace {

/** The record registry holder: when it is null the routine does nothing. */
RT_GLOBAL(0x058b3570, registry_holder, misc::TextMemberHolder *);
/** The registry name reported through the holder. */
RT_GLOBAL(0x04cbc536, registry_name, uint16_t);
/** The source file, function and message of the fatal report raised when the registry vanishes. */
RT_GLOBAL(0x04cbc56c, fatal_file, uint8_t);
RT_GLOBAL(0x04cbc5b9, fatal_function, uint8_t);
RT_GLOBAL(0x04cbc610, fatal_message, uint8_t);

RT_ORIGINAL(0x014473e0, fn_014473e0, void(misc::RegistrySlot *slot));
RT_ORIGINAL(0x024b55b0, fn_024b55b0, void(const uint8_t *file, uint32_t line, const uint8_t *function,
                                         const uint8_t *message));
RT_ORIGINAL(0x013a3260, fn_013a3260, void(misc::TextMemberHolder *holder, const uint16_t *text, uint32_t first,
                                          uint32_t second));

/** The line number passed to the fatal report. */
constexpr uint32_t fatal_line = 0xb1;

}  // namespace

/**
 *
 * Releases the slots of the list from the last one down to the first, then reports the registry name through the
 * registry holder with both flags set.
 *
 * Does nothing when no registry holder exists. The count is read once; the slot array and the holder are read again
 * on each use, as the slot routine may change them. Nothing is returned.
 */
extern "C" void bb_misc_finish_registry_slots_and_report(misc::RegistrySlotList *list)
{
    if (registry_holder.get() == nullptr) return;

    int32_t index = static_cast<int32_t>(list->count) - 1;
    if (index >= 0) {
        do {
            fn_014473e0(&list->slots[index]);
            --index;
        } while (index >= 0);
        if (registry_holder.get() == nullptr) {
            fn_024b55b0(fatal_file.address(), fatal_line, fatal_function.address(), fatal_message.address());
        }
    }
    fn_013a3260(registry_holder.get(), registry_name.address(), 1, 1);
}
