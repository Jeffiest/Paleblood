// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: an item held in a list: its vtable ranks it, a sink it offers sits at +0xc8, and its flag byte is at +0xed.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ListedItem;

/** The bytes from the sink to the flag byte, which the sink occupies; its own layout is not known. */
constexpr size_t listed_item_sink_size = 0x25;

/**
 *
 * The vtable of a listed item: its rank slot is at +0x58.
 *
 */
struct ListedItemVtable {
    uint8_t unknown_0x0000[0x58];
    int32_t (*rank_0x58)(ListedItem *item);   /**< Returns the item's rank, which the list compares with three. */
};
static_assert(offsetof(ListedItemVtable, rank_0x58) == 0x58);

/**
 *
 * A listed item: its vtable is first, its sink is passed by address to the accept routine, and its flag byte
 * collects the bits the marking routines set.
 *
 */
struct ListedItem {
    const ListedItemVtable *vtable;     /**< The item's vtable. */
    uint8_t unknown_0x0008[0xc0];
    uint8_t sink_region[listed_item_sink_size];   /**< The sink the accept routine works on; only its address is used here. */
    uint8_t flags_0xed;                 /**< Bits set by the marking routines. */
};
static_assert(offsetof(ListedItem, vtable) == 0x00);
static_assert(offsetof(ListedItem, sink_region) == 0xc8);
static_assert(offsetof(ListedItem, flags_0xed) == 0xed);

}  // namespace misc
