// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "../engine/engine.h"
#include "cleared_link_record.h"
#include "runtime/original.h"

namespace {

// The virtual table of the record, read from the image at its address point.
RT_GLOBAL(0x05672400, record_vtable, const uint8_t);

}  // namespace

/**
 *
 * Initialises a link record: stores its virtual table at the address point, then clears its four
 * trailing link words.
 *
 * The record's address is the only input; RAX is left holding the table address, which no caller
 * reads.
 */
extern "C" void bb_misc_init_cleared_link_record(misc::ClearedLinkRecord *record)
{
    record->vtable = record_vtable.address() + engine::vtable_address_point;
    record->link_d = 0;
    record->link_c = 0;
    record->link_b = 0;
    record->link_a = 0;
}
