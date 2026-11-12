// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct SweepItem;
struct SweepItemManager;

/**
 *
 * The vtable of an item in a sweep list: disposal, the finished test and the per-step update.
 *
 */
struct SweepItemVtable {
    uint8_t unknown_0x0000[0x08];
    void (*dispose)(SweepItem *item);             /**< Slot at 0x08: runs once the item is removed. */
    uint8_t unknown_0x0010[0x10];
    uint8_t (*finished)(SweepItem *item);         /**< Slot at 0x20: nonzero when the item is done. */
    uint8_t unknown_0x0028[0xa8];
    void (*update)(SweepItem *item, void *step);  /**< Slot at 0xd0: advances the item by the step. */
};
static_assert(offsetof(SweepItemVtable, dispose) == 0x08);
static_assert(offsetof(SweepItemVtable, finished) == 0x20);
static_assert(offsetof(SweepItemVtable, update) == 0xd0);

/**
 *
 * An item that a sweep list holds: its vtable is its first field.
 *
 */
struct SweepItem {
    const SweepItemVtable *vtable;
};
static_assert(offsetof(SweepItem, vtable) == 0x00);

/**
 *
 * The manager an item is registered with: its vtable has the remove slot.
 *
 */
struct SweepItemManagerVtable {
    uint8_t unknown_0x0000[0x70];
    void (*remove_item)(SweepItemManager *manager, SweepItem *item); /**< Slot at 0x70. */
};
static_assert(offsetof(SweepItemManagerVtable, remove_item) == 0x70);

struct SweepItemManager {
    const SweepItemManagerVtable *vtable;
};
static_assert(offsetof(SweepItemManager, vtable) == 0x00);

/**
 *
 * A growable array of item pointers, given as the first and the one-past-the-end slot.
 *
 */
struct SweepItemList {
    SweepItem **begin; /**< The first slot. */
    SweepItem **end;   /**< One past the last item. */
};
static_assert(offsetof(SweepItemList, end) == 0x08);

/**
 *
 * The owner of two sweep lists, each walked once per step.
 *
 */
struct SweepItemOwner {
    uint8_t unknown_0x00[0x10];
    SweepItemList first_list;  /**< At 0x10. */
    uint8_t unknown_0x20[0x18];
    SweepItemList second_list; /**< At 0x38. */
};
static_assert(offsetof(SweepItemOwner, first_list) == 0x10);
static_assert(offsetof(SweepItemOwner, second_list) == 0x38);

}  // namespace misc
