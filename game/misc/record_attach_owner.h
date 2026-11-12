// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "attached_record.h"

namespace misc {

/**
 *
 * An owner that holds at most one attached record, stored at 0xc0.
 *
 */
struct RecordAttachOwner {
    uint8_t unknown_0x0000[0xc0];                  /**< Not used by the attach path. */
    AttachedRecord *attached_record_0xc0;          /**< The record the owner holds, or null. */
};
static_assert(offsetof(RecordAttachOwner, attached_record_0xc0) == 0xc0);

}  // namespace misc
