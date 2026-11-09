// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: reads the flag byte of the detail that a holder's probe source reports, or zero when the probe reports no detail.
#include <cstdint>

#include "probe_detail.h"
#include "probe_result.h"
#include "probe_source.h"
#include "source_holder.h"

/**
 *
 * Reports the flag of the probe detail for the holder's source, zero-extended to 32 bits.
 *
 * The source's probe is asked first. Without a detail in its result, the flag is zero.
 *
 */
extern "C" uint32_t bb_misc_read_probe_flag(misc::SourceHolder *holder)
{
    misc::ProbeSource *source = holder->source_0x08;
    misc::ProbeResult *result = source->vtable->slot_0x168(source);
    misc::ProbeDetail *detail = result->detail_0x08;
    if (detail == nullptr) return 0;
    return detail->flag_0x139;
}
