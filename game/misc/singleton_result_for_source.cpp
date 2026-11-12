// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: fills a result pair with the shared singleton and the source's word, or with zeros when the source is ready.
#include <cstdint>

#include "forwarding_singleton.h"
#include "object_source.h"
#include "singleton_result.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x02b4ce70, fn_02b4ce70, uint64_t(uint64_t, ObjectSource *));

}  // namespace

/**
 *
 * Fills the caller's pair with the shared singleton and the word the source's routine returns, and returns the pair.
 *
 * A source whose readiness byte is set makes both words zero and the source's routine is not called. Otherwise the
 * singleton is taken (built when missing), the routine runs with the first argument and the source, and the result
 * is stored. The first argument is passed on unchanged: the routine does not read it.
 */
extern "C" misc::SingletonResult *bb_misc_singleton_result_for_source(misc::SingletonResult *out, uint64_t first,
                                                                    ObjectSource *source)
{
    if (source != nullptr && source->ready_0x458 != 0) {
        out->result = 0;
        out->singleton = nullptr;
        return out;
    }
    misc::ForwardingSingleton *singleton = misc::ensure_forwarding_singleton();
    const uint64_t result = fn_02b4ce70(first, source);
    out->singleton = singleton;
    out->result = result;
    return out;
}
