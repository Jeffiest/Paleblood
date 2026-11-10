// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as loading_close_file_streams, in game/loading/close_file_streams.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../loading/files.h"

// auto_close_file_streams_02e67cd0: loading_close_file_streams with other addresses.
namespace twin_02e67cd0 {

/**
 *
 * Closes every open stream of a StreamSet and clears its slot.
 *
 * Called from the two destructors that own a StreamSet, before they free the object.
 * Streams close from the last slot to the first; an empty slot is not written.
 *
 */
extern "C" void bb_auto_close_file_streams_02e67cd0(loading::files::StreamSet *set)
{
    for (int index = loading::files::stream_set_size - 1; index >= 0; index--) {
        loading::files::Stream *&stream = set->streams[index];
        if (stream == nullptr) continue;
        loading::files::close_stream(stream);
        stream = nullptr;
    }
}

}  // namespace twin_02e67cd0
