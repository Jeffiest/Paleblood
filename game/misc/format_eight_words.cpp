// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "dword_block8.h"
#include "runtime/original.h"
#include "text_argument.h"

namespace {

/** The kind word of a text argument. */
constexpr uint32_t text_argument_kind = 2;
/** The size of the builder's storage. */
constexpr size_t builder_bytes = 0x3f8;

// The label that the builder appends after the text.
RT_GLOBAL(0x04b3bcf9, label_text, const char);

RT_ORIGINAL(0x00457710, fn_00457710, void(uint8_t *builder, const misc::TextArgument *argument));
RT_ORIGINAL(0x00457b70, fn_00457b70, void(uint8_t *builder, const char *text));
RT_ORIGINAL(0x0278dbe0, fn_0278dbe0, void(uint8_t *builder, const uint32_t *word));
RT_ORIGINAL(0x0045a450, fn_0045a450, void(uint8_t *builder));
RT_ORIGINAL(0x00457870, fn_00457870, void(uint8_t *builder));

}  // namespace

/**
 *
 * Formats the text, the label and the eight words of a block into a builder, then finishes the builder.
 *
 * The words go in the order 0x00, 0x10, 0x04, 0x14, 0x08, 0x18, 0x0c, 0x1c. The text is returned as given.
 */
extern "C" const char *bb_misc_format_eight_words(const char *text, uint64_t length, const misc::DwordBlock8 *block)
{
    misc::TextArgument argument{};
    argument.kind_0x00 = text_argument_kind;
    argument.text_0x08 = text;
    argument.length_0x10 = length;

    uint8_t builder[builder_bytes];
    fn_00457710(builder, &argument);
    fn_00457b70(builder, label_text.address());
    fn_0278dbe0(builder, &block->word_0x00);
    fn_0278dbe0(builder, &block->word_0x10);
    fn_0278dbe0(builder, &block->word_0x04);
    fn_0278dbe0(builder, &block->word_0x14);
    fn_0278dbe0(builder, &block->word_0x08);
    fn_0278dbe0(builder, &block->word_0x18);
    fn_0278dbe0(builder, &block->word_0x0c);
    fn_0278dbe0(builder, &block->word_0x1c);
    fn_0045a450(builder);
    fn_00457870(builder);
    return text;
}
