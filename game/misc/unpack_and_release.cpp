// SPDX-License-Identifier: GPL-2.0-or-later
#include "misc.h"

/**
 *
 * Makes a counted handle from a text, unpacks it into a value and drops the handle's reference.
 *
 * The handle is made from the text in the second argument (the first is not used), then unpacked
 * into three words, of which the first is the value. The block the handle
 * points at loses a reference; when that was the last one, the dispatcher is told to destroy it.
 * The result is the unpacked value when the unpack succeeded, and -1 otherwise.
 */
extern "C" int64_t bb_misc_unpack_and_release(void *, const char *text)
{
    uint64_t handle = 0;
    misc::fn_0045c700(&handle, text);

    misc::UnpackedHandle unpacked{};
    const bool ok = misc::fn_00465400(&unpacked, &handle);

    auto *block = reinterpret_cast<misc::CountedBlock *>(handle & ~misc::handle_tag_bits);
    const uint32_t previous = __atomic_fetch_add(&block->count, static_cast<uint32_t>(-1), __ATOMIC_SEQ_CST);
    if (previous == 1) {
        misc::Dispatcher *dispatcher = misc::pending_dispatcher.get();
        dispatcher->vtable->slot_0x68(dispatcher, block);
    }

    return ok ? static_cast<int64_t>(unpacked.value) : -1;
}
