// SPDX-License-Identifier: GPL-2.0-or-later
#include "misc.h"

/**
 *
 * Writes the 16-byte value of the record found for a source into out, or zeros when there is none.
 *
 * The source is resolved through fn_00400300, and the record is looked up with the key 2. The value
 * is copied as it is from the record's payload. The function returns out.
 */
extern "C" misc::SpanValue *bb_misc_lookup_value_or_zero(misc::SpanValue *out, uint64_t source)
{
    const uint64_t key = misc::fn_00400300(source);
    const misc::Lookup *record = misc::fn_004de9c0(key, misc::record_key);
    if (record != nullptr) {
        *out = record->payload->value;
    } else {
        *out = misc::SpanValue{};
    }
    return out;
}
