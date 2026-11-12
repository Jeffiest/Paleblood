// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases both names of a text pair record: each heap buffer goes back to its allocator, then the name is empty and inline.
#include <cstddef>
#include <cstdint>

#include "../engine/wide_string.h"
#include "inline_text.h"
#include "text_pair_record.h"

namespace {

using engine::WideString;
using misc::TextPairRecord;

/**
 *
 * Releases one name: a heap buffer is freed through its allocator, then the name is reset to an empty inline text.
 *
 */
void release_name(WideString *name)
{
    engine::wide_string_release(name);
    name->capacity = misc::inline_text_inline_capacity;
    name->size = 0;
    name->inline_text[0] = u'\0';
}

}  // namespace

/**
 *
 * Releases the second name first, then the first name, as the record's destructor does.
 *
 */
extern "C" void bb_misc_release_text_pair_names_013a4fc0(TextPairRecord *record)
{
    release_name(&record->second_name);
    release_name(&record->first_name);
}
