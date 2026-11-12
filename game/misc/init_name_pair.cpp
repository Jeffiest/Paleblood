// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills a name pair object for an allocator: its vtable, the allocator, two names from the given texts (or the
// default texts for null pointers) and the fifth argument.
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "../engine/wide_string.h"
#include "name_pair_object.h"
#include "runtime/original.h"

namespace {

using engine::Allocator;
using engine::AllocatorInfo;
using engine::WideString;
using misc::NamePairObject;

RT_ORIGINAL(0x02fbf228, fn_02fbf228, uint64_t(const uint16_t *text));
RT_ORIGINAL(0x02a2a720, fn_02a2a720, void(WideString *name, const uint16_t *text, uint64_t length));

/** The default text of the first name, used for a null first text: a pointer kept in the executable's data. */
RT_GLOBAL(0x056f3978, default_first_text, const uint16_t *);
/** The default text of the second name, used for a null second text: a pointer kept in the executable's data. */
RT_GLOBAL(0x056f3980, default_second_text, const uint16_t *);
/** The message of the fatal error reported when the allocator's heap is not valid. */
RT_GLOBAL(0x04b37dc0, message_allocator_info, const char);
/** The source line of the fatal error reported when the allocator's heap is not valid. */
constexpr int32_t line_allocator_info = 0x3e;

/**
 *
 * Checks that the allocator's heap is valid, reporting a fatal error when it is not.
 *
 */
void check_allocator(Allocator *allocator)
{
    AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, line_allocator_info, message_allocator_info.address());
    }
}

/**
 *
 * Prepares a name for the allocator: the name is empty and inline, and owned by the allocator.
 *
 */
void start_name(WideString *name, Allocator *allocator)
{
    name->allocator = allocator;
    misc::reset_name(name);
    name->owns = true;
}

/**
 *
 * Gives a name its text: the length is taken only for a non-empty text, then the name takes the text.
 *
 */
void assign_text(WideString *name, const uint16_t *text)
{
    const uint64_t length = text[0] != 0 ? fn_02fbf228(text) : 0;
    fn_02a2a720(name, text, length);
}

}  // namespace

/**
 *
 * Fills the object for the allocator: the class vtable and the allocator are stored, both names are prepared (each after
 * a check of the allocator's heap), the fifth argument is stored, then the first name takes the first text and the second
 * name takes the second text. A null text stands for the default text of its name.
 *
 */
extern "C" void bb_misc_init_name_pair_013b92f0(NamePairObject *object, Allocator *allocator,
                                               const uint16_t *first_text, const uint16_t *second_text,
                                               uint64_t callback)
{
    object->vtable = misc::name_pair_vtable.address();
    object->allocator = allocator;

    check_allocator(allocator);
    start_name(&object->first_name, allocator);
    check_allocator(allocator);
    start_name(&object->second_name, allocator);
    object->callback = callback;

    assign_text(&object->first_name, first_text != nullptr ? first_text : default_first_text.get());
    assign_text(&object->second_name, second_text != nullptr ? second_text : default_second_text.get());
}
