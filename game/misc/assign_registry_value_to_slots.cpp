// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: looks up a value in the record registry and hands it to every slot of a list, unless the registry already has the name.
#include <cstddef>
#include <cstdint>

#include "registry_slot_list.h"
#include "runtime/original.h"

namespace {

using misc::RegistrySlot;
using misc::RegistrySlotList;

/** The record registry: null when no registry exists. */
RT_GLOBAL(0x058b3570, record_registry, void *);
/** The name whose presence in the registry stops the routine. */
RT_GLOBAL(0x04cbc536, registry_name, uint8_t);
/** The key looked up in the registry when the name is absent. */
RT_GLOBAL(0x04cbc510, registry_key, uint8_t);
/** The context passed to the lookup. */
RT_GLOBAL(0x04cbc52c, lookup_context, uint8_t);
/** The source file, function and message of the fatal report raised when the registry vanishes. */
RT_GLOBAL(0x04cbc56c, fatal_file, uint8_t);
RT_GLOBAL(0x04cbc5b9, fatal_function, uint8_t);
RT_GLOBAL(0x04cbc610, fatal_message, uint8_t);

RT_ORIGINAL(0x013a2a00, fn_013a2a00, uint64_t(void *registry, const uint8_t *name));
RT_ORIGINAL(0x013a0920, fn_013a0920, void *(void *registry, const uint8_t *key, const uint8_t *argument,
                                              const uint8_t *context));
RT_ORIGINAL(0x01447490, fn_01447490, void(RegistrySlot *slot, void *value));
RT_ORIGINAL(0x024b55b0, fn_024b55b0, void(const uint8_t *file, uint32_t line, const uint8_t *function,
                                         const uint8_t *message));

/** The line number passed to the fatal report. */
constexpr uint32_t fatal_line = 0xb1;

}  // namespace

/**
 *
 * Looks the registry name up first and does nothing more when it is already there. Otherwise the key is looked up
 * in the registry, and a found value is handed to every slot of the list.
 *
 * The list's count is read again on every pass, as the slot routine may change it. Nothing is returned.
 */
extern "C" void bb_misc_assign_registry_value_to_slots(RegistrySlotList *list)
{
    void *registry = record_registry.get();
    if (registry == nullptr) return;
    if (fn_013a2a00(registry, registry_name.address()) != 0) return;

    registry = record_registry.get();
    if (registry == nullptr) {
        fn_024b55b0(fatal_file.address(), fatal_line, fatal_function.address(), fatal_message.address());
        registry = record_registry.get();
    }
    void *const value = fn_013a0920(registry, registry_key.address(), registry_name.address(),
                                    lookup_context.address());
    if (value == nullptr || list->count == 0) return;

    for (uint32_t index = 0; index < list->count; ++index) {
        fn_01447490(&list->slots[index], value);
    }
}
