// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "vector_source.h"

/**
 *
 * Copies the source's vector at +0x1e0 to the first output, and its base vector at +0x1a0 to the
 * second output, plus the addend's +0x30 vector when the owner has an addend.
 *
 * The addend pointer is also returned in RAX, null when there is no addend.
 */
extern "C" uint64_t bb_misc_copy_source_vector_pair(const misc::VectorOwner *owner, engine::Vec4 *first_out,
                                                     engine::Vec4 *sum_out)
{
    const misc::VectorSource *source = owner->source_0xb0;
    const misc::VectorAddend *addend = owner->addend_0xb8;
    *first_out = source->vector_0x1e0;
    engine::Vec4 sum = source->vector_0x1a0;
    if (addend != nullptr) sum = sum + addend->vector_0x30;
    *sum_out = sum;
    return reinterpret_cast<uintptr_t>(addend);
}
