// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: forwards two arguments to the holder's inner object, or to a fallback function when there is none.
#include "misc.h"

#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0040f580, forward_fallback, void(uint64_t first, int64_t second));

}  // namespace

/**
 *
 * Forwards the two arguments to the inner object's method, or to the fallback function when the inner
 * record has no object.
 *
 */
extern "C" void bb_misc_holder_forward(const misc::Holder *holder, uint64_t first, int64_t second)
{
    misc::Object *object = holder->inner->object;
    if (object != nullptr) {
        object->vtable->forward(object, first, second);
        return;
    }
    forward_fallback(first, second);
}
