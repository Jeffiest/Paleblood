// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "emitter_object.h"
#include "misc.h"

namespace {

RT_GLOBAL(0x04b3b943, missing_emitter_format, const char);

/** The lookup id of the emitter. */
constexpr int32_t emitter_lookup_id = 0xc;
/** The mode the value is emitted with. */
constexpr uint32_t emit_mode = 0x21;
/** The flags the value is emitted with. */
constexpr uint32_t emit_flags = 0x1b6;

}  // namespace

/**
 *
 * Emits a value through the emitter that the lookup gives for its id, and releases the emitter. When
 * the lookup has no emitter, the failure is reported to the sink when there is one and zero is returned.
 *
 */
extern "C" uint64_t bb_misc_emit_through_lookup(misc::LookupTable *table, uint64_t value, void *sink)
{
    misc::LookupRecord *record = table->vtable->find(table, emitter_lookup_id);
    if (record == nullptr) {
        if (sink != nullptr) {
            misc::fn_02788b20(sink, missing_emitter_format.address(), value);
        }
        return 0;
    }

    auto *emitter = reinterpret_cast<misc::EmitterObject *>(record);
    const uint64_t result = emitter->vtable->emit(emitter, value, sink, emit_mode, emit_flags);
    misc::fn_0045a4c0(emitter);
    return result;
}
