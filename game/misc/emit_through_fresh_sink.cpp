// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "emitter_object.h"
#include "misc.h"

namespace {

RT_ORIGINAL(0x00414790, fn_00414790, void(void **sink, misc::LookupTable *table));
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
 * Emits a value through the emitter that the lookup gives for its id, to a sink the lookup opens
 * first, then releases the emitter and the sink. Without an emitter the failure is reported to the
 * sink when there is one, and zero is returned.
 *
 */
extern "C" uint64_t bb_misc_emit_through_fresh_sink(misc::LookupTable *table, uint64_t value)
{
    void *sink = nullptr;
    fn_00414790(&sink, table);

    uint64_t result = 0;
    misc::LookupRecord *record = table->vtable->find(table, emitter_lookup_id);
    if (record != nullptr) {
        auto *emitter = reinterpret_cast<misc::EmitterObject *>(record);
        result = emitter->vtable->emit(emitter, value, sink, emit_mode, emit_flags);
        misc::fn_0045a4c0(emitter);
    } else if (sink != nullptr) {
        misc::fn_02788b20(sink, missing_emitter_format.address(), value);
    }
    if (sink != nullptr) {
        misc::fn_0045a4c0(sink);
    }
    return result;
}
