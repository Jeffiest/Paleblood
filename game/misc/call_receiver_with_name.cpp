// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: calls a name formatter, formats a name through it, and hands the name's text to a receiver.
//
// misc_call_receiver_with_name (0x0139bff0) calls the formatter's first method with the argument, the receiver
// and the value that the fourth argument points at. It then gets the default allocator, checks its info's valid
// flag (a fatal error when it is clear, then carrying on), formats a name through the formatter's second method,
// passes the name's text to the receiver's method at +0x98, and frees the name's heap text when it outgrew its
// inline buffer. It returns nothing.
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "formatted_name.h"
#include "name_formatter.h"
#include "name_receiver.h"
#include "runtime/original.h"

namespace {

using engine::Allocator;
using engine::AllocatorInfo;
using misc::FormattedName;
using misc::NameFormatter;
using misc::NameReceiver;

RT_ORIGINAL(0x0247d7a0, fn_0247d7a0, Allocator *());

RT_GLOBAL(0x04b37dc0, message_allocator_info, const char);
constexpr int32_t line_allocator_info = 0x3e;

}  // namespace

/**
 *
 * Calls the formatter and the receiver with a name the formatter builds. Nothing is returned.
 *
 * The value is read through the fourth pointer before the first call. A name that outgrew its inline buffer is
 * freed through the allocator after the receiver has taken its text.
 */
extern "C" void bb_misc_call_receiver_with_name(NameFormatter *formatter, uint64_t argument,
                                                NameReceiver *receiver, const uint32_t *value)
{
    formatter->vtable->call_0x40(formatter, argument, receiver, *value);

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
    formatter->vtable->format_0x78(formatter, &name);

    receiver->vtable->accept_0x98(receiver, name.text());
    if (name.on_heap()) {
        allocator->free(name.text_0x08.heap_text);
    }
}
