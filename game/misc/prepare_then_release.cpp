// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "misc.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x00410f10, fn_00410f10, void(void *object));

}  // namespace

/**
 *
 * Prepares an object and then releases it through the scratch service, returning the release's result.
 *
 */
extern "C" uint64_t bb_misc_prepare_then_release(void *object)
{
    fn_00410f10(object);
    misc::Service *service = misc::scratch_service.get();
    return service->vtable->release(service, object);
}
