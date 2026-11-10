// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as render_record_encoding_metadata, in game/render/record_encoding_metadata.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

namespace render {}

// auto_record_encoding_metadata_01471710: render_record_encoding_metadata with other addresses.
namespace twin_01471710 {
namespace render { using namespace ::render; }

// The first encoding byte selects bounded scalar tables used by metadata and
// component-arrangement decoding. Numeric entries retain their original meanings.



namespace render {
// This prefix describes only the encoding word, not the complete record.
struct RecordEncodingPrefix {
    uint8_t unknown_0x00[0x10];
    uint32_t flags_10;
};
static_assert(offsetof(RecordEncodingPrefix, flags_10) == 0x10);
static_assert(sizeof(RecordEncodingPrefix) == 0x14);

RT_ORIGINAL(0x014719a0, extract_record_encoding_category,
            uint8_t(const uint32_t *encoding, uint32_t *output));
RT_ORIGINAL(0x014717a0, extract_record_encoding_components,
            uint8_t(const uint32_t *encoding, uint32_t *output));

constexpr uint32_t record_encoding_metadata_entries = 59;
using RecordEncodingTable = uint32_t[record_encoding_metadata_entries];
RT_GLOBAL(0x04b2bcd0, record_encoding_metadata, RecordEncodingTable);
RT_GLOBAL(0x04b2bcd0, record_encoding_component_rules, RecordEncodingTable);
}  // namespace render

// Read metadata from the first encoding byte. Larger byte values return zero;
// neither the remaining encoding bytes nor an additional argument are read.

extern "C" uint32_t bb_auto_record_encoding_metadata_01471710(const uint8_t *encoding)
{
    const uint32_t index = *encoding;
    if (index >= render::record_encoding_metadata_entries) return 0;
    return render::record_encoding_metadata.get()[index];
}

}  // namespace twin_01471710
