// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "vector_source.h"

/**
 *
 * Copies the source's vector at +0x230 to the caller's 16-byte output.
 *
 * The source pointer is also returned in RAX, which the original leaves holding it.
 */
extern "C" uint64_t bb_misc_copy_source_vector(const misc::VectorOwner *owner, engine::Vec4 *out)
{
    const misc::VectorSource *source = owner->source_0xb0;
    *out = source->vector_0x230;
    return reinterpret_cast<uintptr_t>(source);
}
