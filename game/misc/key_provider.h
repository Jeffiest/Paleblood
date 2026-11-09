// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an object that provides a 32-bit key through the slot at +0x20 of its virtual table.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct KeyProvider;

/**
 *
 * The key provider's virtual table: the slot at +0x20 returns the key.
 *
 */
struct KeyProviderVtable {
    uint8_t unknown_0x0000[0x20];
    uint32_t (*slot_0x20)(KeyProvider *provider); /**< Returns the provided key. */
};
static_assert(offsetof(KeyProviderVtable, slot_0x20) == 0x20);

/**
 *
 * A key provider: only its virtual table is used here.
 *
 */
struct KeyProvider {
    const KeyProviderVtable *vtable; /**< Virtual table of the provider. */
};

}  // namespace misc
