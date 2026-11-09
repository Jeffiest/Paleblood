// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: runs a one-time flush of the owner's flusher and locator sources into the holder's sink.
#include "flush_holder.h"
#include "flush_link.h"
#include "flush_owner.h"
#include "flush_source.h"
#include "flush_target.h"

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0122ee60, fn_0122ee60, misc::FlushSource *(misc::FlushLocator *locator, uint32_t mode));
RT_ORIGINAL(0x02ab5f50, fn_02ab5f50,
            void(misc::FlushSink *sink, void *source_item, void *target_slot, uint64_t zero, uint64_t one, float scale));
RT_ORIGINAL(0x02aaf700, fn_02aaf700, void(void *sink_item));
RT_GLOBAL(0x04d29dd8, flush_scale, float);

/**
 *
 * Passes one source through the holder's sink: the sink, the source's item and the target's slot go to
 * the flush routine with the scale, and then the sink's item is handed to its finishing routine.
 */
void flush_source(misc::FlushHolder *holder, misc::FlushSource *source)
{
    misc::FlushSink *sink = holder->sink_0x08;
    fn_02ab5f50(sink, &source->item_0x10, &source->target_0x08->slot_0x18, 0, 1, flush_scale.get());
    fn_02aaf700(&sink->item_0x10);
}

}  // namespace

/**
 *
 * Runs the flush once: the flusher is prepared and its source is flushed, then the locator's source is
 * flushed, and the done flag is set. A flush that already ran does nothing.
 */
extern "C" void bb_misc_flush_owner_once(misc::FlushOwner *owner, misc::FlushHolder *holder)
{
    if (owner->done_0x13c0 != 0) {
        return;
    }

    misc::Flusher *flusher = owner->flusher_0x13b0;
    if (flusher != nullptr) {
        flusher->vtable->flush_0x40(flusher);
        flush_source(holder, flusher->link_0x60->source_0x00);
    }

    if (owner->locator_0x13b8 != nullptr) {
        flush_source(holder, fn_0122ee60(owner->locator_0x13b8, 0));
    }

    owner->done_0x13c0 = 1;
}
