// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: initialises a configuration record with its default kind, scales and limits, and its tail word through a routine.
#include <cstdint>

#include "config_defaults_record.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x00836630, init_tail_member, void(void *member));

/** The default kind of the configuration. */
constexpr uint8_t default_kind = 3;
/** The record is enabled by default. */
constexpr uint8_t default_enabled = 1;
/** The default count of entries. */
constexpr int32_t default_count = 20;
/** The default scale, one tenth, as a single-precision value. */
constexpr float default_scale = 0.1f;
/** The default limits in the order they are stored. */
constexpr uint32_t default_limit_a = 2;
constexpr uint32_t default_limit_b = 2;
constexpr uint32_t default_limit_c = 4;
constexpr uint32_t default_limit_d = 100000;

}  // namespace

/**
 *
 * Writes the default values of the configuration record and initialises its tail word.
 *
 * The tail word is handed to the routine first, then the record's fields are set: the kind and enabled
 * flag, the cleared option and links, the default count and scales, the four default limits, and the
 * cleared flag. Nothing is returned.
 */
extern "C" void bb_misc_init_config_defaults(misc::ConfigDefaultsRecord *record)
{
    init_tail_member(&record->tail_word);
    record->kind = default_kind;
    record->enabled = default_enabled;
    record->option_c = 0;
    record->count = default_count;
    record->link_b = 0;
    record->link_a = 0;
    record->scale_a = default_scale;
    record->scale_b = default_scale;
    record->limit_a = default_limit_a;
    record->limit_b = default_limit_b;
    record->limit_c = default_limit_c;
    record->limit_d = default_limit_d;
    record->flag_d = 0;
}
