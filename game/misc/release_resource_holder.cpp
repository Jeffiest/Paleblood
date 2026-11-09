// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: releases a holder's counted object, block and two buffers in turn, clearing each pointer it releases.
#include "packed_count_object.h"
#include "resource_holder.h"
#include "runtime/original.h"

namespace {

using misc::PackedCountObject;
using misc::ResourceHolder;

RT_ORIGINAL(0x01e49ab0, fn_01e49ab0, void(ResourceHolder *holder));
RT_ORIGINAL(0x01c00d20, fn_01c00d20, void(void *block));
RT_ORIGINAL(0x0223fb80, fn_0223fb80, void(void *buffer));
RT_ORIGINAL(0x0223f750, fn_0223f750, void(void *buffer));

}  // namespace

/**
 *
 * Releases the holder's resources: first its counted object, then its block, then its two buffers.
 *
 * Each pointer that is released is cleared afterwards. The counted object is destroyed only when its
 * low count reaches zero while its gate is open.
 *
 */
extern "C" void bb_misc_release_resource_holder(ResourceHolder *holder)
{
    fn_01e49ab0(holder);

    PackedCountObject *counted = holder->counted_0x228;
    if (counted != nullptr) {
        if (counted->packed_count >= misc::packed_count_gate && misc::release_packed_count(counted))
            counted->vtable->destroy(counted);
        holder->counted_0x228 = nullptr;
    }
    if (holder->block_0x20 != nullptr) {
        fn_01c00d20(holder->block_0x20);
        holder->block_0x20 = nullptr;
    }
    if (holder->buffer_0x220 != nullptr) {
        fn_0223fb80(holder->buffer_0x220);
        fn_0223f750(holder->buffer_0x220);
        holder->buffer_0x220 = nullptr;
    }
    if (holder->buffer_0x218 != nullptr) {
        fn_0223fb80(holder->buffer_0x218);
        fn_0223f750(holder->buffer_0x218);
        holder->buffer_0x218 = nullptr;
    }
}
