// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct TableEntry;

/**
 *
 * A child of a table owner, reached through its vtable.
 *
 */
struct TableChild;
struct TableChildVtable {
    uint8_t unknown_0x00[0x30];
    bool (*check)(TableChild *child, TableEntry *entry); /**< Slot 0x30: whether the child accepts the entry. */
};
static_assert(offsetof(TableChildVtable, check) == 0x30);

struct TableChild {
    const TableChildVtable *vtable; /**< The child's virtual functions. */
};
static_assert(offsetof(TableChild, vtable) == 0x0);

}  // namespace misc
