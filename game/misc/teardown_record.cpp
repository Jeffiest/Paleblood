// SPDX-License-Identifier: GPL-2.0-or-later
// Tears down the record's owned entries, then gives the record to the scratch service's release slot
// and returns that slot's result.
#include "misc.h"

/**
 *
 * Tears down the record, gives it to the scratch service's release slot and returns the slot's result.
 *
 */
extern "C" uint64_t bb_misc_teardown_record(misc::RecordObject *record)
{
    misc::fn_0040bfd0(record);
    misc::Service *service = misc::scratch_service.get();
    return service->vtable->release(service, record);
}
