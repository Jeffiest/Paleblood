// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: hands the holder's accepted value to the sink's descriptor, reports the sink as done, releases the value, and marks the holder ready.
#include <cstdint>

#include "node_build_holder.h"
#include "node_build_sink.h"
#include "runtime/original.h"

namespace {

using misc::NodeBuildHolder;
using misc::NodeBuildSink;
using misc::SinkDescriptor;
using misc::SinkValue;

RT_ORIGINAL(0x02fbe598, lock_sink_holder, void(void *lock));
RT_ORIGINAL(0x02fbe5a8, unlock_sink_holder, void(void *lock));
RT_ORIGINAL(0x0042e620, value_is_ready, uint8_t(void *value));
RT_ORIGINAL(0x0042e5d0, release_sink_value, void(void *value));
RT_GLOBAL(0x0553c9b0, sink_descriptor_table, const uint8_t);

/** The kind the sink value is taken with. */
constexpr uint32_t sink_take_kind = 0x2;

}  // namespace

/**
 *
 * Gives the holder's value, when it is set and accepted, to the sink descriptor, reports the sink's target as
 * done and releases the value. The holder's ready flag is set in every case. A sink with no target only marks
 * its holder.
 *
 */
extern "C" void bb_misc_sink_release_value_marked(NodeBuildSink *sink)
{
    if (sink->target != nullptr) {
        SinkDescriptor descriptor{};
        descriptor.table = static_cast<const uint8_t *>(sink_descriptor_table.address());
        descriptor.target = sink->target;
        descriptor.owner = sink->owner;

        NodeBuildHolder *holder = sink->holder;
        lock_sink_holder(holder->second_lock);
        SinkValue *value = nullptr;
        if (holder->value != 0 && value_is_ready(reinterpret_cast<void *>(holder->value)) != 0) {
            value = reinterpret_cast<SinkValue *>(holder->value);
        }
        unlock_sink_holder(holder->second_lock);

        value->vtable->take(value, &descriptor, sink_take_kind);
        sink->target->vtable->done(sink->target);
        release_sink_value(value);
    }
    sink->holder->ready = true;
}
