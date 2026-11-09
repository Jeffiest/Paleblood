// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: a probe source: an object whose virtual table reports a probe result.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct ProbeSource;
struct ProbeResult;

/**
 *
 * The probe source's virtual table: the slot at +0x168 reports the probe result.
 *
 */
struct ProbeSourceVtable {
    uint8_t unknown_0x0000[0x168];
    ProbeResult *(*slot_0x168)(ProbeSource *source); /**< Reports the probe result of the source. */
};
static_assert(offsetof(ProbeSourceVtable, slot_0x168) == 0x168);

/**
 *
 * A probe source: only its virtual table is used here.
 *
 */
struct ProbeSource {
    const ProbeSourceVtable *vtable; /**< Virtual table of the source. */
};

}  // namespace misc
