// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as render_record_tuple_alternate_classification, in game/render/record_tuple_alternate_classification.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>

// auto_record_tuple_alternate_classification_015f1e90: render_record_tuple_alternate_classification with other addresses.
namespace twin_015f1e90 {

// Recognize the bounded classification subset used by the alternate tuple path.

extern "C" uint32_t bb_auto_record_tuple_alternate_classification_015f1e90(uint32_t classification)
{
    constexpr uint32_t first_classification = 5;
    constexpr uint32_t last_index = 10;
    constexpr uint32_t admitted_classifications = 0x473;
    const uint32_t index = classification - first_classification;
    if (index > last_index) return 0;
    return (admitted_classifications >> index) & 1;
}

}  // namespace twin_015f1e90
