// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: assigns the text record that a source's node names through its tagged word to the target.
#include <cstdint>

#include "runtime/original.h"
#include "text_source_nodes.h"

namespace {

RT_ORIGINAL(0x00454060, text_address, const char *(uint64_t address));
RT_ORIGINAL(0x0045c700, assign_text, void(uint64_t *value, const char *text));

/** The tag bits of the tagged word, which are cleared before the address is used. */
constexpr uint64_t tag_bits_mask = 0x3;
/** The offset of the text inside the record the tagged word addresses. */
constexpr uint64_t text_record_offset = 0xc;

}  // namespace

/**
 *
 * Assigns the text that the source's node names to the target and returns the target. The node's tagged word is
 * untagged, moved to the text record and resolved to the text before the assignment.
 *
 */
extern "C" uint64_t *bb_misc_assign_text_from_node40(uint64_t *target, const misc::TextSourceAt40 *source)
{
    const uint64_t tagged = source->node_0x40->tagged_0x48;
    const char *text = text_address((tagged & ~tag_bits_mask) + text_record_offset);
    assign_text(target, text);
    return target;
}
