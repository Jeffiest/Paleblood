// SPDX-License-Identifier: GPL-2.0-or-later
#include "files.h"

/**
 * Closes every open stream of a StreamSet and clears its slot.
 *
 * Called from the two destructors that own a StreamSet, before they free the object.
 * Streams close from the last slot to the first; an empty slot is not written.
 */
extern "C" void bb_loading_close_file_streams(loading::files::StreamSet *set)
{
    for (int index = loading::files::stream_set_size - 1; index >= 0; index--) {
        loading::files::Stream *&stream = set->streams[index];
        if (stream == nullptr) continue;
        loading::files::close_stream(stream);
        stream = nullptr;
    }
}
