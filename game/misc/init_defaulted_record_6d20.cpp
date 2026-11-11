// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: initializes a record's base, gives it its virtual table, then sets its indices, counts, scale and cleared words.
#include <cstdint>
#include <cstring>

#include "defaulted_record.h"
#include "runtime/original.h"

namespace {

using misc::DefaultedRecord;

/** The record's virtual table block: the record's vtable pointer addresses it, and its slots are not read here. */
struct DefaultedRecordVtable {
    uint8_t unknown_0x0000[0x8];
};

RT_GLOBAL(0x057b8bf0, defaulted_record_vtable, DefaultedRecordVtable);

RT_ORIGINAL(0x0124be40, init_base_record, void(DefaultedRecord *record, uint64_t zero));

/** The index both indices are set to: minus one. */
constexpr int32_t unset_index = -1;
/** The first and second counts. */
constexpr int32_t first_count = 3;
constexpr int32_t second_count = 2;
/** The value set to one. */
constexpr int32_t set_value = 1;
/** The default scale, three and a half. */
constexpr float default_scale = 3.5f;
/** The second argument the base initializer receives: it clears the register before the call. */
constexpr uint64_t base_argument = 0x0;

}  // namespace

/**
 *
 * Initializes the record's base, gives the record its virtual table, then sets its indices, counts, value and
 * scale, and clears its cleared words and its flags.
 *
 * The routine's result is the virtual table address the record was given, as the original leaves it in RAX.
 */
extern "C" uint64_t bb_misc_init_defaulted_record_6d20(DefaultedRecord *record)
{
    init_base_record(record, base_argument);
    record->vtable = defaulted_record_vtable.address();
    record->index_0x18 = unset_index;
    record->index_0x1c = unset_index;
    record->count_0x20 = first_count;
    record->count_0x24 = second_count;
    record->value_0x28 = set_value;
    record->value_0x2c = 0;
    record->value_0x30 = 0;
    record->flags_0x34 = 0;
    record->scale_0x38 = default_scale;
    std::memset(record->unknown_0x003c, 0, sizeof record->unknown_0x003c);
    std::memset(record->unknown_0x0044, 0, sizeof record->unknown_0x0044);
    record->word_0x4c = 0;
    return reinterpret_cast<uintptr_t>(record->vtable);
}
