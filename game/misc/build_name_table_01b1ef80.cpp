// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: allocates a table of three empty wide-string names and points a handle at it, then clears the names' text.
#include <cstddef>
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "../engine/wide_string.h"
#include "runtime/original.h"

namespace {

using engine::Allocator;
using engine::AllocatorInfo;
using engine::WideString;

constexpr int NAME_COUNT = 3;
constexpr int SECOND_NAME = 1;
constexpr int THIRD_NAME = NAME_COUNT - 1;

/** The allocated table: a pointer to itself, a count, and the three names. */
struct NameTable {
    NameTable *self;
    uint64_t count;
    WideString names[NAME_COUNT];
};
static_assert(sizeof(NameTable) == 0xb8 && offsetof(NameTable, names) == 0x10);

/** The handle that is filled: the first name of the table and the flag bytes that follow it. */
struct NameTableHandle {
    WideString *names;
    uint16_t word_0x08;
    uint16_t word_0x0a;
    uint8_t flag_0x0c;
    uint8_t flag_0x0d;
    uint8_t flag_0x0e;
};
static_assert(offsetof(NameTableHandle, word_0x0a) == 0x0a && offsetof(NameTableHandle, flag_0x0e) == 0x0e);

RT_GLOBAL(0x05940420, table_allocator, Allocator *);
RT_GLOBAL(0x05940670, name_allocator, Allocator *);
RT_GLOBAL(0x04dd85f0, empty_text, const uint16_t);
RT_GLOBAL(0x04b37dc0, message_allocator_info, const char);
RT_ORIGINAL(0x02fa2b10, fetch_name_allocator, Allocator *());
RT_ORIGINAL(0x02a2a720, assign_name, void(WideString *name, const uint16_t *text, uint64_t length));

constexpr uint64_t table_alignment = 0x10;
constexpr uint64_t table_count = 3;
constexpr int32_t line_allocator_info = 0x3e;

/** Starts one name: the shared allocator is fetched once if missing, its heap must be valid, and the name is empty. */
void start_name(WideString *name)
{
    Allocator *allocator = name_allocator.get();
    if (allocator == nullptr) {
        allocator = fetch_name_allocator();
        name_allocator.get() = allocator;
    }
    AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, line_allocator_info, message_allocator_info.address());
    }
    name->allocator = allocator;
    name->capacity = engine::wide_string_inline_capacity - 1;
    name->size = 0;
    name->inline_text[0] = u'\0';
    name->owns = 1;
}

}  // namespace

/**
 *
 * Allocates a table of three names (none when the allocation fails), points the handle at its first name and
 * assigns the empty text to each name in turn, clearing a flag byte of the handle after each.
 *
 * Nothing is returned: the original leaves the stack-guard word in RAX.
 */
extern "C" void bb_misc_build_name_table_01b1ef80(NameTableHandle *handle)
{
    WideString *names = nullptr;
    NameTable *table = static_cast<NameTable *>(table_allocator.get()->allocate(sizeof(NameTable), table_alignment));
    if (table != nullptr) {
        for (WideString &name : table->names) start_name(&name);
        table->count = table_count;
        table->self = table;
        names = table->names;
    }
    handle->names = names;
    handle->word_0x08 = 0;
    assign_name(handle->names, empty_text.address(), 0);
    handle->flag_0x0c = 0;
    assign_name(handle->names + SECOND_NAME, empty_text.address(), 0);
    handle->flag_0x0d = 0;
    assign_name(handle->names + THIRD_NAME, empty_text.address(), 0);
    handle->flag_0x0e = 0;
    handle->word_0x0a = 0;
}
