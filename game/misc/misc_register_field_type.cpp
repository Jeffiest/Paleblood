// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "runtime/original.h"
#include "type_field_record.h"

namespace {

// The static field record, its name, the constant its value is copied from, and the type it is added to.
RT_GLOBAL(0x0584b310, field_record, misc::TypeFieldRecord);
RT_GLOBAL(0x04bc25a7, field_name_text, const char);
RT_GLOBAL(0x05676898, field_value_source, const uint64_t);
RT_GLOBAL(0x0584b2c0, field_type_object, uint8_t);
RT_GLOBAL(0x04bc2591, field_type_name, const char);
RT_GLOBAL(0x05801a70, field_type_source, const uint8_t);
RT_GLOBAL(0x056768c0, field_type_table, const uint8_t);

// Adds a type to a registry and returns what the registry gives back: six register arguments, then eight stack words.
RT_ORIGINAL(0x0081e9b0, fn_0081e9b0,
            uint64_t(uint8_t *, const char *, const uint8_t *, uint32_t, uint32_t, uint32_t, uint64_t, uint32_t,
                     const void *, uint32_t, uint64_t, uint64_t, uint32_t, uint32_t));

// The instance size of the type, the field's size, alignment and offset, and the registry's table and flags.
constexpr uint32_t field_type_instance_size = 0x10;
constexpr uint8_t field_size = 0x18;
constexpr uint8_t field_alignment = 4;
constexpr uint16_t field_offset = 0xc;
constexpr uint32_t field_table_kind = 1;
constexpr uint32_t field_registry_flags = 3;

}  // namespace

/**
 *
 * Fills the static record of a field and registers the type it belongs to, with the field's record as
 * its table.
 *
 * Returns the value the registration gives back.
 */
extern "C" uint64_t bb_misc_register_field_type(void)
{
    misc::TypeFieldRecord &record = field_record.get();
    record.name = field_name_text.address();
    record.zero_0x08 = 0;
    record.value_0x10 = field_value_source.get();
    record.size_0x18 = field_size;
    record.alignment_0x19 = field_alignment;
    record.zero_0x1a = 0;
    record.zero_0x1c = 0;
    record.offset_0x1e = field_offset;
    record.zero_0x20 = 0;

    return fn_0081e9b0(field_type_object.address(), field_type_name.address(), field_type_source.address(),
                       field_type_instance_size, 0, 0, reinterpret_cast<uint64_t>(field_type_table.address()),
                       field_table_kind, field_record.address(), field_table_kind, 0, 0, 0, field_registry_flags);
}
