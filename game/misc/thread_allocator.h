// SPDX-License-Identifier: GPL-2.0-or-later
// The thread's allocator as the engine's allocator type, for the deleting destructors that free
// their object through it.
#pragma once

#include "../engine/allocator.h"
#include "../engine/thread.h"
#include "../loading/fios.h"

namespace misc {

/**
 *
 * The thread's allocator, read again on each call as the originals do.
 *
 * The holder and its thread-local offset are the ones the file objects use (loading/fios.h).
 */
inline engine::Allocator *thread_allocator()
{
    auto *holder = *reinterpret_cast<loading::fios::ThreadAllocatorHolder **>(
        engine::thread_pointer() + loading::fios::thread_allocator_offset.get());
    return reinterpret_cast<engine::Allocator *>(holder->allocator);
}

}  // namespace misc
