// SPDX-License-Identifier: GPL-2.0-or-later
#include "misc.h"

/**
 *
 * Creates an object through a factory and keeps it only when it passes its valid test.
 *
 * A created object that passes (its valid test returns zero) is returned. Otherwise the failure is
 * reported to the target when there is one, the object is released when there is one, and null is
 * returned.
 */
extern "C" misc::Checked *bb_misc_create_checked(misc::Factory *factory, void *context, void *report_target,
                                                uint32_t first, uint32_t second)
{
    misc::Checked *created = factory->vtable->create(factory, context, first, second);
    if (created != nullptr && created->vtable->valid(created) == 0) return created;

    if (report_target != nullptr) {
        misc::fn_02788b20(report_target, misc::create_failure_format.address(), context);
    }
    if (created != nullptr) misc::fn_0045a4c0(created);
    return nullptr;
}
