// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "configured_holder.h"
#include "misc.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0040fd40, fn_0040fd40, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x0553c220, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;
/** The flags the configuration is given. */
constexpr uint32_t no_configure_flags = 0;

/** Takes a reference to the object a slot holds, when there is one, and returns the slot's object. */
void *retain_slot(void **slot)
{
    if (*slot != nullptr) {
        misc::fn_0045a4b0(*slot);
    }
    return *slot;
}

}  // namespace

/**
 *
 * Gives a holder its vtable, takes a reference to the object of each of two slots, configures the
 * holder with the two objects, and drops both references. Each reference is dropped only when the
 * slot's object was present.
 *
 */
extern "C" void bb_misc_configure_from_retained_pair(misc::ConfiguredHolder *self, void **first_slot,
                                                     void **second_slot)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);

    void *first = retain_slot(first_slot);
    void *second = retain_slot(second_slot);

    misc::ConfigureArguments arguments{};
    arguments.flags = no_configure_flags;
    arguments.first = reinterpret_cast<uint64_t>(first);
    arguments.second = reinterpret_cast<uint64_t>(second);
    fn_0040fd40(self, &arguments);

    if (second != nullptr) {
        misc::fn_0045a4c0(second);
    }
    if (first != nullptr) {
        misc::fn_0045a4c0(first);
    }
}
