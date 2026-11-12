// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

/**
 *
 * The step gate: the singleton whose flags decide whether tracked timers advance this step.
 *
 */
struct StepGate {
    uint8_t unknown_0x0000[0x08];
    uint8_t enabled;                /**< Stepping runs only when this byte is nonzero. */
    uint8_t unknown_0x0009[0x9ed];
    uint8_t suspended;              /**< Stepping is skipped while this byte is nonzero. */
    uint8_t unknown_0x09f7[0x01];
    uint8_t frozen;                 /**< Stepping is skipped while this byte is nonzero. */
    uint8_t unknown_0x09f9[0x57];
    uint8_t locked;                 /**< Stepping is skipped while this byte is nonzero. */
    uint8_t unknown_0x0a51[0x27];
    uint32_t kind_word;             /**< The top byte selects the kind; kind 0x1d carries a value. */
    uint8_t unknown_0x0a7c[0x0c];
    uint64_t kind_value;            /**< The value handed to the track when the kind carries one. */
};
static_assert(offsetof(StepGate, enabled) == 0x08);
static_assert(offsetof(StepGate, suspended) == 0x9f6);
static_assert(offsetof(StepGate, frozen) == 0x9f8);
static_assert(offsetof(StepGate, locked) == 0xa50);
static_assert(offsetof(StepGate, kind_word) == 0xa78);
static_assert(offsetof(StepGate, kind_value) == 0xa88);

}  // namespace misc
