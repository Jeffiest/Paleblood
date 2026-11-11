// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "byte_block4.h"
#include "runtime/original.h"
#include "text_argument.h"

namespace {

/** The kind word of a text argument. */
constexpr uint32_t text_argument_kind = 2;
/** The size of the builder's storage. */
constexpr size_t builder_bytes = 0x3f8;

// The label that the builder appends after the text.
RT_GLOBAL(0x04b3bd56, label_text, const char);

RT_ORIGINAL(0x00457710, fn_00457710, void(uint8_t *builder, const misc::TextArgument *argument));
RT_ORIGINAL(0x00457b70, fn_00457b70, void(uint8_t *builder, const char *text));
RT_ORIGINAL(0x0278daf0, fn_0278daf0, void(uint8_t *builder, const uint32_t *value));
RT_ORIGINAL(0x0045a450, fn_0045a450, void(uint8_t *builder));
RT_ORIGINAL(0x00457870, fn_00457870, void(uint8_t *builder));

}  // namespace

/**
 *
 * Formats the text, the label and the four bytes of a block into a builder, then finishes the builder.
 *
 * The bytes are appended as 0x02, 0x01, 0x00, 0x03, each widened to four bytes. The text is returned as given.
 */
extern "C" const char *bb_misc_format_four_bytes(const char *text, uint64_t length, const misc::ByteBlock4 *block)
{
    misc::TextArgument argument{};
    argument.kind_0x00 = text_argument_kind;
    argument.text_0x08 = text;
    argument.length_0x10 = length;

    const uint32_t byte_0x02 = block->byte_0x02;
    const uint32_t byte_0x01 = block->byte_0x01;
    const uint32_t byte_0x00 = block->byte_0x00;
    const uint32_t byte_0x03 = block->byte_0x03;

    uint8_t builder[builder_bytes];
    fn_00457710(builder, &argument);
    fn_00457b70(builder, label_text.address());
    fn_0278daf0(builder, &byte_0x02);
    fn_0278daf0(builder, &byte_0x01);
    fn_0278daf0(builder, &byte_0x00);
    fn_0278daf0(builder, &byte_0x03);
    fn_0045a450(builder);
    fn_00457870(builder);
    return text;
}
