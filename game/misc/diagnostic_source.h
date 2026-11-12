// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "diagnostic_text.h"

namespace misc {

/** The bytes of the label at 0x2c, which runs up to the source text. */
constexpr size_t diagnostic_label_bytes = 0x44;

/**
 *
 * The source of a diagnostic line: its kind and numeric fields, a label at 0x2c, the source text at 0x70 and the
 * index and scale that the line also shows.
 *
 */
struct DiagnosticSource {
    uint8_t unknown_0x00[0x8];         /**< Not read by the diagnostic line. */
    int32_t kind_0x08;                 /**< The kind; a kind within the name table selects its name. */
    int32_t value_0x0c;                /**< The first numeric field of the line. */
    uint8_t unknown_0x10[0x8];         /**< Not read by the diagnostic line. */
    int32_t value_0x18;                /**< The second numeric field of the line. */
    int32_t value_0x1c;                /**< The third numeric field of the line. */
    uint32_t value_0x20;               /**< The fourth numeric field of the line. */
    uint8_t unknown_0x24[0x8];         /**< Not read by the diagnostic line. */
    uint8_t label_0x2c[diagnostic_label_bytes];          /**< The label that the first stage formats into the line's text. */
    DiagnosticText text_0x70;          /**< The source text that the line shows. */
    uint8_t unknown_0x90[0x20];        /**< Not read by the diagnostic line. */
    uint32_t index_0xb0;               /**< The index of the name the line takes from the second table. */
    float scale_0xb4;                  /**< The scale the line shows as a double. */
    uint8_t unknown_0xb8[0x2];         /**< Not read by the diagnostic line. */
    bool first_flag_0xba;              /**< Chooses the first flag value the line shows. */
    bool second_flag_0xbb;             /**< Chooses the second flag value the line shows. */
};
static_assert(offsetof(DiagnosticSource, kind_0x08) == 0x8);
static_assert(offsetof(DiagnosticSource, label_0x2c) == 0x2c);
static_assert(offsetof(DiagnosticSource, text_0x70) == 0x70);
static_assert(offsetof(DiagnosticSource, index_0xb0) == 0xb0);
static_assert(offsetof(DiagnosticSource, first_flag_0xba) == 0xba);

}  // namespace misc
