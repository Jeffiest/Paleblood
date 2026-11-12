// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

struct ReaderSource;
struct ReaderCursor;
struct ReaderEntry;

// The source a reader opens: its virtual open routine returns the cursor's start.
struct ReaderSourceVtable {
    uint8_t unknown_0x00[0x10];
    const void *(*open)(ReaderSource *source); /**< Slot 0x10: the start the cursor is built from. */
};
static_assert(offsetof(ReaderSourceVtable, open) == 0x10);

struct ReaderSource {
    const ReaderSourceVtable *vtable; /**< At 0x00: the source's virtual functions. */
    uint8_t unknown_0x08[0x10];
};
static_assert(sizeof(ReaderSource) == 0x18);

// The cursor a reader walks: it yields an entry, a value and a flag.
struct ReaderCursorVtable {
    uint8_t unknown_0x00[0x10];
    ReaderEntry *(*next_entry)(ReaderCursor *cursor); /**< Slot 0x10. */
    uint8_t (*next_flag)(ReaderCursor *cursor);       /**< Slot 0x18. */
};
static_assert(offsetof(ReaderCursorVtable, next_entry) == 0x10);
static_assert(offsetof(ReaderCursorVtable, next_flag) == 0x18);

struct ReaderCursor {
    const ReaderCursorVtable *vtable; /**< At 0x00: the cursor's virtual functions. */
    uint8_t unknown_0x08[0x10];
};
static_assert(sizeof(ReaderCursor) == 0x18);

// An entry of the reader: it fills in the flags record it is given.
struct ReaderEntryVtable {
    uint8_t unknown_0x00[0x20];
    void (*fill)(void *flags, ReaderEntry *entry, uint64_t mode); /**< Slot 0x20. */
};
static_assert(offsetof(ReaderEntryVtable, fill) == 0x20);

struct ReaderEntry {
    const ReaderEntryVtable *vtable; /**< At 0x00: the entry's virtual functions. */
};

// The flags an entry fills in: bit 0x20 of the first byte must be set.
struct ReaderEntryFlags {
    uint8_t flags; /**< Bit 0x20 marks a usable entry. */
    uint8_t unknown_0x01[0x07];
};
static_assert(sizeof(ReaderEntryFlags) == 0x08);

// The view the reader's member is built from: a vtable and the first entry.
struct ReaderView {
    uintptr_t vtable;      /**< At 0x00: the view's vtable address. */
    const void *value;     /**< At 0x08: the start the view refers to. */
};
static_assert(offsetof(ReaderView, value) == 0x08);

constexpr uint64_t reader_member_bytes = 0x40;
constexpr uint64_t reader_text_characters = 0x08;
constexpr uint64_t reader_text_capacity = 0x07;
constexpr uint64_t entry_usable_bit = 0x20;

// A reader: the vtable and the table, a member the view is built into, and the fields the walk sets.
struct ConfigReader {
    uintptr_t vtable;                         /**< At 0x00: the reader's vtable address. */
    uintptr_t table_0x08;                     /**< At 0x08: the table's address. */
    uint8_t member_0x10[reader_member_bytes]; /**< From 0x10: the view's member, built by its constructor. */
    uint32_t counter_0x50;
    uint32_t counter_0x54;
    uint8_t flag_0x58;
    uint8_t unknown_0x59[0x07];
    uint64_t value_0x60;
    uint8_t byte_0x68;
    uint8_t byte_0x69;
    uint8_t unknown_0x6a[0x06];
    uint64_t value_0x70;
    uint8_t unknown_0x78[0x08];
    char16_t text_0x80[reader_text_characters]; /**< From 0x80: the wide text, empty and inline. */
    uint64_t text_size_0x90;
    uint64_t text_capacity_0x98;
    ReaderEntry *entry_0xa0;                  /**< The entry the walk ends on. */
    uint8_t flag_0xa8;
    uint8_t unknown_0xa9[0x07];
    uint64_t value_0xb0;
    const char *label_0xb8;
    uint8_t flag_0xc0;
    uint8_t unknown_0xc1[0x03];
    int32_t index_0xc4;
    uint8_t flag_0xc8;
    uint8_t unknown_0xc9[0x03];
    int32_t index_0xcc;
    uintptr_t table_0xd0;
    int32_t count_0xd8;
    uint8_t unknown_0xdc[0x04];
};
static_assert(offsetof(ConfigReader, vtable) == 0x00);
static_assert(offsetof(ConfigReader, member_0x10) == 0x10);
static_assert(offsetof(ConfigReader, counter_0x50) == 0x50);
static_assert(offsetof(ConfigReader, flag_0x58) == 0x58);
static_assert(offsetof(ConfigReader, value_0x60) == 0x60);
static_assert(offsetof(ConfigReader, value_0x70) == 0x70);
static_assert(offsetof(ConfigReader, text_0x80) == 0x80);
static_assert(offsetof(ConfigReader, text_size_0x90) == 0x90);
static_assert(offsetof(ConfigReader, text_capacity_0x98) == 0x98);
static_assert(offsetof(ConfigReader, entry_0xa0) == 0xa0);
static_assert(offsetof(ConfigReader, flag_0xa8) == 0xa8);
static_assert(offsetof(ConfigReader, value_0xb0) == 0xb0);
static_assert(offsetof(ConfigReader, label_0xb8) == 0xb8);
static_assert(offsetof(ConfigReader, flag_0xc0) == 0xc0);
static_assert(offsetof(ConfigReader, index_0xc4) == 0xc4);
static_assert(offsetof(ConfigReader, flag_0xc8) == 0xc8);
static_assert(offsetof(ConfigReader, index_0xcc) == 0xcc);
static_assert(offsetof(ConfigReader, table_0xd0) == 0xd0);
static_assert(offsetof(ConfigReader, count_0xd8) == 0xd8);

RT_GLOBAL(0x05940420, reader_source_global, void *);
RT_GLOBAL(0x0576ce80, reader_first_vtable, uint8_t);
RT_GLOBAL(0x0598f4d0, reader_table, uint8_t);
RT_GLOBAL(0x056ef260, reader_view_vtable, uint8_t);
RT_GLOBAL(0x0574fb30, reader_second_vtable, uint8_t);
RT_GLOBAL(0x0574fa40, reader_final_vtable, uint8_t);
RT_GLOBAL(0x056efd40, reader_index_vtable, uint8_t);
RT_GLOBAL(0x04dc0d36, reader_label, const char);
RT_GLOBAL(0x04b37dc0, reader_unusable_message, const char);
constexpr int32_t reader_unusable_line = 0x3e;
constexpr int32_t unset_index = -1;

RT_ORIGINAL(0x01386480, open_reader_source, void(ReaderSource *source, void *global, uint64_t zero));
RT_ORIGINAL(0x01386810, start_reader_cursor, void(ReaderCursor *cursor, const void *start, uint64_t mode));
RT_ORIGINAL(0x013875c0, build_reader_member, void(void *member, const ReaderView *view));
RT_ORIGINAL(0x01386840, close_reader_cursor, void(ReaderCursor *cursor));
RT_ORIGINAL(0x013864d0, close_reader_source, void(ReaderSource *source));

}  // namespace

/**
 *
 * Builds a config reader: it opens the source the global names, starts a cursor on the source's
 * start, builds its member from the cursor's first entry, and sets the walk's fields from the cursor
 * and the entry. An entry without the usable flag is reported through the engine's fatal report.
 *
 * Both the source and the cursor are closed at the end; the function returns nothing.
 *
 */
extern "C" void bb_misc_construct_config_reader(ConfigReader *reader)
{
    ReaderSource source;
    open_reader_source(&source, reader_source_global.get(), 0);
    const void *start = source.vtable->open(&source);

    ReaderCursor cursor;
    start_reader_cursor(&cursor, start, 1);
    reader->vtable = reinterpret_cast<uintptr_t>(reader_first_vtable.address());
    reader->table_0x08 = reinterpret_cast<uintptr_t>(reader_table.address());
    ReaderView view;
    view.vtable = reinterpret_cast<uintptr_t>(reader_view_vtable.address());
    view.value = cursor.vtable->next_entry(&cursor);
    build_reader_member(reader->member_0x10, &view);

    reader->counter_0x50 = 0;
    reader->counter_0x54 = 0;
    reader->flag_0x58 = 0;
    reader->value_0x60 = reinterpret_cast<uint64_t>(cursor.vtable->next_entry(&cursor));
    reader->byte_0x68 = cursor.vtable->next_flag(&cursor);
    reader->byte_0x69 = 0;
    reader->value_0x70 = 0;

    ReaderEntry *entry = cursor.vtable->next_entry(&cursor);
    ReaderEntryFlags entry_flags;
    entry->vtable->fill(&entry_flags, entry, 0);
    if ((entry_flags.flags & entry_usable_bit) == 0)
        engine::fatal_error(nullptr, reader_unusable_line, reader_unusable_message.address());

    reader->entry_0xa0 = entry;
    reader->text_size_0x90 = 0;
    reader->text_capacity_0x98 = reader_text_capacity;
    reader->text_0x80[0] = u'\0';
    reader->flag_0xa8 = 1;
    reader->value_0xb0 = 0;
    reader->label_0xb8 = reader_label.address();
    reader->flag_0xc0 = 0;
    reader->index_0xc4 = unset_index;

    close_reader_cursor(&cursor);
    reader->vtable = reinterpret_cast<uintptr_t>(reader_second_vtable.address());
    close_reader_source(&source);
    reader->vtable = reinterpret_cast<uintptr_t>(reader_final_vtable.address());

    reader->flag_0xc8 = 0;
    reader->index_0xcc = unset_index;
    reader->table_0xd0 = reinterpret_cast<uintptr_t>(reader_index_vtable.address());
    reader->count_0xd8 = 0;
}
