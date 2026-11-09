// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: writes two groups of field pairs from a record into an owner's entry named by an index.
//
// misc_write_indexed_field_pairs (0x0139b280, once per call from one caller) does nothing without an owner.
// Otherwise it reads the info of the allocator from 0x0247d7a0: with its valid flag clear it reports a
// fatal error and carries on. It formats a name from the index, looks up the owner's entry under that
// name inside a scoped tag, writes the first group (values +0x0c and +0x08) and the second group (values
// +0x2c and +0x28), and frees the name's heap text when the name outgrew its inline buffer.
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "field_pair_record.h"
#include "formatted_name.h"
#include "runtime/original.h"

namespace {

using engine::Allocator;
using engine::AllocatorInfo;
using misc::FieldPairRecord;
using misc::FormattedName;

RT_ORIGINAL(0x0247d7a0, fn_0247d7a0, Allocator *());
RT_ORIGINAL(0x02b62d00, fn_02b62d00, void(FormattedName *name, const char *format, int32_t index));
RT_ORIGINAL(0x013aeaf0, fn_013aeaf0, void(uint64_t *tag, const char *label));
RT_ORIGINAL(0x013aebc0, fn_013aebc0, void(uint64_t *tag));
RT_ORIGINAL(0x0139cd80, fn_0139cd80, void *(void *owner, const char *begin, const char *end, uint64_t *found));
RT_ORIGINAL(0x0139d6b0, fn_0139d6b0, void(void *entry, const char *key));
RT_ORIGINAL(0x02d85480, fn_02d85480, void(void *entry, const char *key, const uint32_t *value));

RT_GLOBAL(0x04cb8c26, index_name_format, const char);
RT_GLOBAL(0x04cb8c9c, scope_label, const char);
RT_GLOBAL(0x04cb8c40, key_group_open, const char);
RT_GLOBAL(0x04cb8c4e, key_group_close, const char);
RT_GLOBAL(0x04cb8c5c, key_first, const char);
RT_GLOBAL(0x04cb8c7c, key_second, const char);
RT_GLOBAL(0x04b37dc0, message_allocator_info, const char);
constexpr int32_t line_allocator_info = 0x3e;

}  // namespace

/**
 *
 * Writes the record's two field groups into the owner's entry named by the index.
 *
 * With a null owner nothing happens. Otherwise the allocator's info must carry the valid flag, or a fatal
 * error is reported and the write goes on. The name is formatted from the index and kept inline while it is
 * short; the entry lookup uses its text, and the heap text, if any, is freed at the end.
 */
extern "C" void bb_misc_write_indexed_field_pairs(FieldPairRecord *record, void *owner, int32_t index)
{
    if (owner == nullptr) return;

    Allocator *const allocator = fn_0247d7a0();
    AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, line_allocator_info, message_allocator_info.address());
    }

    FormattedName name;
    name.size_0x18 = 0;
    name.text_0x08.inline_text[0] = '\0';
    name.text_0x08.inline_text[1] = '\0';
    name.capacity_0x20 = misc::formatted_name_inline_capacity;
    name.flag_0x30 = true;
    fn_02b62d00(&name, index_name_format.address(), index);

    char *const text = name.text();
    uint64_t found = 0;
    uint64_t tag = 0;
    fn_013aeaf0(&tag, scope_label.address());
    void *const entry = fn_0139cd80(owner, text, text, &found);
    fn_013aebc0(&tag);

    fn_0139d6b0(entry, key_group_open.address());
    fn_02d85480(entry, key_first.address(), &record->value_0x0c);
    fn_02d85480(entry, key_second.address(), &record->value_0x08);
    fn_0139d6b0(entry, key_group_close.address());
    fn_02d85480(entry, key_first.address(), &record->value_0x2c);
    fn_02d85480(entry, key_second.address(), &record->value_0x28);

    if (name.on_heap()) {
        allocator->free(name.text_0x08.heap_text);
    }
}
