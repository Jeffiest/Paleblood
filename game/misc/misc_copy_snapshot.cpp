// SPDX-License-Identifier: GPL-2.0-or-later
#include "snapshot_copy.h"

/**
 *
 * Copies the words and the scale of a source object into a snapshot and clears the snapshot's last word.
 *
 * The source is left as it is. The caller does not read the return register, so nothing is returned.
 */
extern "C" void bb_misc_copy_snapshot(const misc::SnapshotSource *source, misc::SnapshotCopy *snapshot)
{
    snapshot->words_0x00[0] = source->words_0x10[0];
    snapshot->words_0x00[1] = source->words_0x10[1];
    snapshot->scale_0x10 = source->scale_0x90;
    snapshot->zero_0x14 = 0;
}
