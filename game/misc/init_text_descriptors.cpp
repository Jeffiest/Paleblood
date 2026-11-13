// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills two static text descriptors, each after building its record with a constructor that takes stack arguments.
#include <cstdint>

#include "runtime/original.h"
#include "text_descriptor.h"

namespace {

// The two records the constructor builds, the two descriptors filled after them, and their texts.
RT_GLOBAL(0x0584e328, record_a, uint8_t);
RT_GLOBAL(0x0584e3a8, record_b, uint8_t);
RT_GLOBAL(0x0584e378, descriptor_a, misc::TextDescriptor);
RT_GLOBAL(0x0584e3f8, descriptor_b, misc::TextDescriptor);
RT_GLOBAL(0x04bc8044, text_a, const char);
RT_GLOBAL(0x04bc8062, text_a_alt, const char);
RT_GLOBAL(0x04bc8081, text_b, const char);
RT_GLOBAL(0x04bc809a, text_b_alt, const char);

// The table each record is built from, the link the records are built with, and the vtables the descriptors take.
RT_GLOBAL(0x0567e2d0, table_a, const uint8_t);
RT_GLOBAL(0x0567e320, table_b, const uint8_t);
RT_GLOBAL(0x05801a70, link, const uint8_t);
RT_GLOBAL(0x0567e420, vtable_a, const uint8_t);
RT_GLOBAL(0x0567cdd0, vtable_b, const uint8_t);

// The handler routines the descriptors name, at their entry addresses.
RT_ORIGINAL(0x00d47a10, handler_a, void());
RT_ORIGINAL(0x00d47a20, handler_a_alt, void());
RT_ORIGINAL(0x00d47a40, handler_b, void());
RT_ORIGINAL(0x00d47a60, handler_b_alt, void());

// The record constructor, which takes six register arguments and eight stack arguments, and the marker clearing routine.
RT_ORIGINAL(0x0081e9b0, build_record,
            void(void *record, uint64_t text, uint64_t link_value, uint32_t size, uint64_t unused_r8, uint32_t unused_r9,
                 uint64_t stack_0, uint32_t stack_1, uint64_t table, uint32_t kind, uint64_t stack_4, uint64_t stack_5,
                 uint32_t stack_6, uint32_t stack_7));
RT_ORIGINAL(0x00836830, clear_marker, void(void *marker, uint32_t flag));

/** The record sizes and kinds the two constructions use, and the lengths their descriptors record. */
constexpr uint32_t record_a_size = 0x28;
constexpr uint32_t record_b_size = 0x30;
constexpr uint32_t record_a_kind = 2;
constexpr uint32_t record_b_kind = 6;
constexpr uint64_t zero_word = 0;
constexpr uint32_t zero_dword = 0;

}  // namespace

/**
 *
 * Builds the first record, fills the first descriptor from it, then builds the second record, clears a marker word and
 * fills the second descriptor. Each record is built with the same link and zero stack arguments except its table and
 * kind. The descriptors take their texts, handlers, vtables and record lengths in the order the record constructors
 * return. Nothing is returned.
 */
extern "C" void bb_misc_init_text_descriptors(void)
{
    build_record(record_a.address(), reinterpret_cast<uint64_t>(text_a.address()),
                 reinterpret_cast<uint64_t>(link.address()), record_a_size, zero_word, zero_dword, zero_word,
                 zero_dword, reinterpret_cast<uint64_t>(table_a.address()), record_a_kind, zero_word, zero_word,
                 zero_dword, zero_dword);
    misc::TextDescriptor &first = descriptor_a.get();
    first.text = text_a.address();
    first.alt_text = text_a_alt.address();
    first.handler = handler_a.address();
    first.alt_handler = handler_a_alt.address();
    first.vtable = vtable_a.address();
    first.length = record_a_size;

    build_record(record_b.address(), reinterpret_cast<uint64_t>(text_b.address()),
                 reinterpret_cast<uint64_t>(link.address()), record_b_size, zero_word, zero_dword, zero_word,
                 zero_dword, reinterpret_cast<uint64_t>(table_b.address()), record_b_kind, zero_word, zero_word,
                 zero_dword, zero_dword);
    uint64_t marker = zero_word;
    clear_marker(&marker, zero_dword);
    misc::TextDescriptor &second = descriptor_b.get();
    second.text = text_b.address();
    second.alt_text = text_b_alt.address();
    second.handler = handler_b.address();
    second.alt_handler = handler_b_alt.address();
    second.vtable = vtable_b.address();
    second.length = record_b_size;
}
