// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: inserts a keyed record into the record table's ring of child queues, through the registry singleton.
#include <cstdint>

#include "../engine/engine.h"
#include "record_registry.h"

namespace {

// Inserts the key into every child queue of the ring; the result is the last call's.
RT_ORIGINAL(0x018876b0, fn_018876b0, uint64_t(misc::ObjectQueueNode *ring, uint32_t key));

}  // namespace

/**
 *
 * Gets the record table from the registry singleton and inserts the key into its ring of child queues.
 *
 * The registry must exist: when it does not, the missing singleton is reported and the null is used as the
 * original does.
 *
 */
extern "C" uint64_t bb_misc_insert_keyed_record(uint32_t key)
{
    misc::RecordRegistry *registry = engine::require(misc::record_registry, misc::record_registry_name.address());
    return fn_018876b0(registry->table->ring, key);
}
