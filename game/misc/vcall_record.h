// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a record that finishes itself through its virtual table and is then freed when asked to be.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct VcallRecord;

/**
 *
 * The record's virtual table: the finish slot at +0x28 returns a word the caller passes on.
 *
 */
struct VcallRecordVtable {
    uint8_t unknown_0x0000[0x28];                              /**< Slots before the finish slot. */
    uint64_t (*finish_0x28)(VcallRecord *record);              /**< Finish slot at 0x28. */
};
static_assert(offsetof(VcallRecordVtable, finish_0x28) == 0x28);

/**
 *
 * A record that finishes through its virtual table; its virtual table is first.
 *
 */
struct VcallRecord {
    const VcallRecordVtable *vtable; /**< The record's virtual table address point. */
};
static_assert(offsetof(VcallRecord, vtable) == 0x0);

}  // namespace misc
