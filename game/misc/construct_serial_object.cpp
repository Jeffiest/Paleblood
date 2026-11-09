// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: give a new serial object its static vtable, clear its two words and take the next serial.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** A static vtable block: the object's vtable pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

/** An object with a vtable, a cleared word, a serial number and a cleared last word. */
struct SerialObject {
    const void *vtable;    /**< Static vtable block, slot at +0x10. */
    uint64_t cleared_0x08; /**< Set to zero. */
    uint64_t serial;       /**< The counter value after this construction. */
    uint64_t cleared_0x18; /**< Set to zero. */
};
static_assert(offsetof(SerialObject, cleared_0x08) == 0x08);
static_assert(offsetof(SerialObject, serial) == 0x10);
static_assert(offsetof(SerialObject, cleared_0x18) == 0x18);

RT_GLOBAL(0x056f1e50, serial_vtable, StaticVtable);
RT_GLOBAL(0x058b33b0, serial_counter, uint64_t);

}  // namespace

/**
 *
 * Constructs the serial object: its vtable, its cleared words and the next serial from the counter.
 *
 * The counter is advanced by one before it is stored in the object, and it wraps like the original.
 */
extern "C" void bb_misc_construct_serial_object(SerialObject *object)
{
    object->vtable = &serial_vtable.address()->first_slot_0x0010;
    object->cleared_0x08 = 0;
    serial_counter.get() += 1;
    object->serial = serial_counter.get();
    object->cleared_0x18 = 0;
}
