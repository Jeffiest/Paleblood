// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the object whose vtable is at 0x05657690 and which holds many empty pointer slots.
#pragma once

#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace misc {

/** The vtable of the slot-table object, whose address point the object stores first. */
RT_GLOBAL(0x05657690, slot_table_vtable, const uint8_t);

constexpr size_t slot_table_head_slot_count = 3;
constexpr size_t slot_table_tail_slot_count = 14;

/**
 *
 * One empty slot: a pointer, a count and a limit word whose high bit marks it as unused.
 *
 */
struct SlotTableSlot {
    uint64_t pointer;  /**< The slot's pointer, null when empty. */
    uint32_t count;    /**< The slot's count. */
    uint32_t limit;    /**< The slot's limit word. */
};
static_assert(sizeof(SlotTableSlot) == 0x10);

/**
 *
 * The slot-table object: three leading slots, a lone pointer, flag words and fourteen trailing slots.
 *
 */
struct SlotTableObject {
    const void *vtable;                                       /**< The slot-table vtable's address point. */
    uint32_t size_word_0x08;                                  /**< High half: the block size. */
    uint8_t unknown_0x0c[0x34];
    SlotTableSlot head_slots[slot_table_head_slot_count];                              /**< Leading slots at 0x40, 0x50 and 0x60. */
    uint8_t unknown_0x70[0x8];
    uint64_t lone_pointer;                                    /**< Pointer at 0x78 without count or limit. */
    uint8_t unknown_0x80[0x84];
    uint32_t status_word;                                     /**< Status word at 0x104. */
    uint8_t unknown_0x108[0x4];
    uint16_t flags_word;                                      /**< Flags word at 0x10c. */
    uint8_t unknown_0x10e[0x8a];
    SlotTableSlot tail_slots[slot_table_tail_slot_count];     /**< Trailing slots from 0x198. */
};
static_assert(offsetof(SlotTableObject, size_word_0x08) == 0x8);
static_assert(offsetof(SlotTableObject, head_slots) == 0x40);
static_assert(offsetof(SlotTableObject, lone_pointer) == 0x78);
static_assert(offsetof(SlotTableObject, status_word) == 0x104);
static_assert(offsetof(SlotTableObject, flags_word) == 0x10c);
static_assert(offsetof(SlotTableObject, tail_slots) == 0x198);
static_assert(sizeof(SlotTableObject) == 0x278);

}  // namespace misc

namespace misc {

constexpr uint32_t slot_table_size_word = 0xffff0001;
constexpr uint32_t slot_table_status_default = 0xfffffff1;
constexpr uint16_t slot_table_flags_default = 0x8000;
constexpr uint32_t slot_table_unused_limit = 0x80000000;

}  // namespace misc
