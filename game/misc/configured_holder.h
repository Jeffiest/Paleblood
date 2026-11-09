// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a holder that is configured from a source: it keeps two blocks built from the flags and a
// vtable whose slot 0x18 configures it with an id and a value.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ConfiguredHolder;

/**
 *
 * The virtual functions of a configured holder: slot 0x18 is given an id and a value.
 *
 */
struct ConfiguredHolderVtable {
    uint8_t unknown_0x0000[0x18];
    uint64_t (*configure)(ConfiguredHolder *self, uint32_t id, uint64_t value); /**< Slot at 0x18. */
};
static_assert(offsetof(ConfiguredHolderVtable, configure) == 0x18);

/**
 *
 * A configured holder: its vtable, the detail block, the source block and the flags it was made with.
 *
 */
struct ConfiguredHolder {
    const ConfiguredHolderVtable *vtable; /**< Dispatch table for the holder's methods. */
    void *detail;                         /**< The block built from the source; null when none could be made. */
    void *source;                         /**< The block the detail is built from. */
    uint32_t flags;                       /**< The flags the holder was configured with. */
};
static_assert(offsetof(ConfiguredHolder, detail) == 0x08);
static_assert(offsetof(ConfiguredHolder, source) == 0x10);
static_assert(offsetof(ConfiguredHolder, flags) == 0x18);

/**
 *
 * The arguments of the configuration: the flags, then the first and the second word.
 *
 */
struct ConfigureArguments {
    uint32_t flags;                       /**< The flags; one bit selects the mode of the blocks. */
    uint8_t unknown_0x0004[0x04];
    uint64_t first;                       /**< Given to the detail configuration. */
    uint64_t second;                      /**< Given to the final configuration, whose result is returned. */
};
static_assert(offsetof(ConfigureArguments, first) == 0x08);
static_assert(offsetof(ConfigureArguments, second) == 0x10);

}  // namespace misc
