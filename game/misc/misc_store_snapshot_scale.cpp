// SPDX-License-Identifier: GPL-2.0-or-later
#include "snapshot_copy.h"
#include "runtime/original.h"

namespace {

// Receives a snapshot of the source for the object that the source has as its target.
RT_ORIGINAL(0x00cd4580, fn_00cd4580, void(void *target, misc::SnapshotCopy *snapshot));
// Runs after the snapshot is passed on, with the source it came from.
RT_ORIGINAL(0x00cc8280, fn_00cc8280, void(misc::SnapshotSource *source));

}  // namespace

/**
 *
 * Stores a new scale in a source and, when the source has a target, passes a snapshot of it on.
 *
 * The snapshot takes the source's two words and the new scale, and its last word is cleared. Nothing
 * is returned.
 */
extern "C" void bb_misc_store_snapshot_scale(misc::SnapshotSource *source, float scale)
{
    source->scale_0x90 = scale;
    if (source->target_0x48 == nullptr) return;

    misc::SnapshotCopy snapshot;
    snapshot.words_0x00[0] = source->words_0x10[0];
    snapshot.words_0x00[1] = source->words_0x10[1];
    snapshot.scale_0x10 = scale;
    snapshot.zero_0x14 = 0;
    fn_00cd4580(source->target_0x48, &snapshot);
    fn_00cc8280(source);
}
