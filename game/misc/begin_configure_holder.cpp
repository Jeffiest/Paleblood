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

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_misc_begin_configure_holder(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_0040fd40(self, args);
}
