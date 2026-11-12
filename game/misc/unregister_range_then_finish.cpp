// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: unregisters a disposable object's range from the range index through a temporary holder, releases the holder, then finishes the object.
#include <cstdint>

#include "../engine/engine.h"
#include "disposable_object.h"
#include "range_holder.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x05940288, range_index_instance, misc::RangeIndex *);
RT_GLOBAL(0x04d3a919, range_index_name, const char);
RT_GLOBAL(0x05724bd0, range_holder_vtable, const misc::RangeHolderVtable);

RT_ORIGINAL(0x02298650, unregister_range, void(misc::RangeIndex *index, const uint8_t *key, const uint8_t *value, misc::RangeHolder *holder));
RT_ORIGINAL(0x018bf0e0, finish_object, uint64_t(misc::DisposableObject *object));

}  // namespace

/**
 *
 * Unregisters a registered object's range: the index is required, then the range key and value and a holder that
 * belongs to the object are passed to the index. The holder is released with the moved-on flag clear, and then the
 * object is finished. An object that is not registered is left alone.
 *
 */
extern "C" void bb_misc_unregister_range_then_finish(misc::DisposableObject *object)
{
    if (object->registration_0xe0 == 0) {
        return;
    }
    misc::RangeIndex *index = engine::require(range_index_instance, range_index_name.address());
    misc::RangeHolder holder;
    holder.vtable = range_holder_vtable.address();
    holder.owner_0x08 = object;
    unregister_range(index, object->range_key, object->range_value, &holder);
    holder.vtable->release_0x20(&holder, false);
    finish_object(object);
}
