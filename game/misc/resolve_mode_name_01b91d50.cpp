// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: starts an object's mode, looks up its mode name and records whether it equals a fixed text.
#include <cstddef>
#include <cstdint>
#include <cstring>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "formatted_name.h"
#include "mode_name_object.h"
#include "runtime/original.h"

namespace {

using misc::FormattedName;
using misc::ModeNameObject;
using misc::ModeNameSource;

RT_GLOBAL(0x04d7a70a, version_text, const char16_t);
RT_GLOBAL(0x056ef9c0, source_name_vtable, const uint8_t);
RT_ORIGINAL(0x024f1fe0, start_mode, int32_t(ModeNameObject *object, uint64_t argument, uint64_t zero_first, uint64_t zero_second,
                                            uint64_t zero_third));
RT_ORIGINAL(0x024f2900, look_up_mode, int32_t(ModeNameObject *object, uint32_t limit, const ModeNameSource **source));
RT_ORIGINAL(0x02d67040, read_source_name, void(FormattedName *name, uint64_t source));
RT_ORIGINAL(0x02d70b40, copy_source_name, void(FormattedName *name, const void *const *source_vtable));
RT_ORIGINAL(0x02a38fa0, assign_name, void(FormattedName *name, const FormattedName *from, uint64_t start, int64_t count));
RT_ORIGINAL(0x02fbf228, text_length, uint64_t(const char16_t *text));
RT_ORIGINAL(0x02fbf268, compare_text, int32_t(const void *left, const void *right, uint64_t length));

constexpr uint32_t mode_limit = 0x98967f;
constexpr uint8_t enable_mask = 0x12;
constexpr uint8_t long_entry_flag = 0x1;
constexpr uint8_t second_entry_flag = 0x4;
constexpr uint16_t wide_source_flag = 0x4;
constexpr uint32_t short_base = 0x14;
constexpr uint32_t long_base = 0x18;
constexpr uint32_t wide_scale = 2;
constexpr uint32_t second_entry_step = 4;
constexpr int64_t whole_name = -1;
constexpr uint64_t name_start = 0;

/** Makes a name empty and inline again, keeping its allocator. */
void reset_name_text(FormattedName *name)
{
    name->capacity_0x20 = misc::formatted_name_inline_capacity;
    name->size_0x18 = 0;
    name->text_0x08.inline_text[0] = '\0';
    name->text_0x08.inline_text[1] = '\0';
}

/** Frees a name's heap text when it outgrew its inline text. */
void free_heap_text(FormattedName *name)
{
    if (name->on_heap()) name->allocator_0x28->free(name->text_0x08.heap_text);
}

/** Returns the address the source name is read from: the source plus the table entry the mode flags choose. */
uint64_t source_address(const ModeNameObject *object)
{
    const uint8_t flags = object->mode_flags_0x6c;
    if ((flags & enable_mask) != enable_mask || object->source_0x50 == nullptr) return 0;
    const ModeNameSource *source = object->source_0x50;
    const uint32_t wide = source->flag_word_0x31 & wide_source_flag;
    int32_t entry = static_cast<int32_t>(short_base + wide_scale * wide);
    if (flags & long_entry_flag) entry = static_cast<int32_t>(long_base + wide_scale * wide);
    int32_t index = entry;
    if (flags & second_entry_flag) index = entry + static_cast<int32_t>(second_entry_step);
    uint32_t offset;
    std::memcpy(&offset, &object->offsets_0x58[index], sizeof(offset));
    return static_cast<uint64_t>(offset) + reinterpret_cast<uint64_t>(source);
}

}  // namespace

/**
 *
 * Starts the object's mode with the caller's argument, looks the mode up, reads its source name, copies it into a
 * second name and then into a third, frees the first two, and compares the third with the fixed text. The matched
 * byte is cleared first and set only when the name equals the text.
 *
 * Returns the status of the start; a failed lookup stops early and still returns it.
 */
extern "C" int32_t bb_misc_resolve_mode_name_01b91d50(ModeNameObject *object, uint64_t argument)
{
    object->matched_0x70 = 0;
    const int32_t status = start_mode(object, argument, 0, 0, 0);
    if (status < 0) return status;
    if (look_up_mode(object, mode_limit, &object->source_0x50) < 0) return status;

    FormattedName source_name;
    read_source_name(&source_name, source_address(object));
    source_name.flag_0x30 = true;
    const void *source_vtable = source_name_vtable.address() + engine::vtable_address_point;
    FormattedName copied_name;
    copy_source_name(&copied_name, &source_vtable);
    FormattedName compared_name;
    compared_name.text_0x08.inline_text[0] = '\0';
    compared_name.text_0x08.inline_text[1] = '\0';
    compared_name.size_0x18 = 0;
    compared_name.capacity_0x20 = misc::formatted_name_inline_capacity;
    compared_name.allocator_0x28 = copied_name.allocator_0x28;
    assign_name(&compared_name, &copied_name, name_start, whole_name);
    compared_name.flag_0x30 = copied_name.flag_0x30;
    free_heap_text(&copied_name);
    reset_name_text(&copied_name);
    free_heap_text(&source_name);

    uint64_t name_size = compared_name.size_0x18;
    const uint64_t text_size = text_length(version_text.address());
    if (compared_name.size_0x18 < name_size) name_size = compared_name.size_0x18;
    const uint64_t compared_size = name_size < text_size ? name_size : text_size;
    int32_t common = 0;
    if (compared_size != 0) common = compare_text(compared_name.text(), version_text.address(), compared_size);
    int32_t order = common == 0 ? -1 : common;
    if (common == 0 && name_size >= text_size) order = name_size != text_size ? 1 : 0;
    if (order == 0) object->matched_0x70 = 1;
    free_heap_text(&compared_name);
    return status;
}
