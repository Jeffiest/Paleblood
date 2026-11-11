// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: sends a label source's name to its receiver: formats the name in a local record, passes its text on, then frees its heap text.
#include <cstdint>

#include "../engine/allocator.h"
#include "../engine/engine.h"
#include "../engine/thread.h"
#include "../engine/thread_heap.h"
#include "formatted_name.h"
#include "label_receiver.h"
#include "label_source.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0247d250, thread_heap_init, void());
RT_ORIGINAL(0x02b62d00, format_name, void(misc::FormattedName *name, const char *format, ...));

RT_GLOBAL(0x04b37dc0, message_invalid_allocator, const char);
RT_GLOBAL(0x04dbec16, label_format_forced, const char);
RT_GLOBAL(0x04dbdf48, label_format_ready, const char);
RT_GLOBAL(0x04dbdec8, label_format_waiting, const char);
constexpr int32_t line_invalid_allocator = 0x3e;

/**
 *
 * Checks that an allocator reports itself valid, and reports a fatal error when it does not, then carries on.
 *
 */
void require_valid_allocator(engine::Allocator *allocator)
{
    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, line_invalid_allocator, message_invalid_allocator.address());
    }
}

}  // namespace

/**
 *
 * Sends a label source's name to its receiver when the source is pending. The name is formatted in a local record
 * from the thread's allocator: a forced format when the caller asks for it, otherwise one chosen by the source's
 * readiness. The receiver takes the name's text, and a name that outgrew its inline buffer is freed through the
 * allocator it was formatted with.
 *
 * Nothing is returned. A source that is not pending does nothing.
 *
 */
extern "C" void bb_misc_send_object_label(misc::LabelSource *source, misc::LabelReceiver *receiver, uint32_t forced)
{
    if (source->pending_0x68 == 0) return;

    const int64_t heap_offset = engine::thread_heap_offset.get();
    engine::ThreadHeap *heap = *reinterpret_cast<engine::ThreadHeap **>(engine::thread_pointer() + heap_offset);
    if (heap == nullptr) {
        thread_heap_init();
        heap = *reinterpret_cast<engine::ThreadHeap **>(engine::thread_pointer() + heap_offset);
    }
    engine::Allocator *allocator = &heap->allocator;
    require_valid_allocator(allocator);

    misc::FormattedName name;
    name.text_0x08.inline_text[0] = '\0';
    name.text_0x08.inline_text[1] = '\0';
    name.size_0x18 = 0;
    name.capacity_0x20 = misc::formatted_name_inline_capacity;
    name.allocator_0x28 = allocator;
    name.flag_0x30 = true;

    const char *format = label_format_waiting.address();
    if (forced != 0) {
        format = label_format_forced.address();
    } else if (source->vtable->ready_0x20(source)) {
        format = label_format_ready.address();
    }
    format_name(&name, format);

    receiver->vtable->accept_0x80(receiver, name.text());
    if (name.on_heap()) {
        name.allocator_0x28->free(name.text_0x08.heap_text);
    }
}
