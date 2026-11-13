// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: compares two path texts from their ends, folding case and treating either slash as the same separator.
#include <cstdint>

#include "path_text.h"

namespace {

using misc::PathText;

/** The character codes the comparison tests for. */
constexpr int32_t slash_char = 0x2f;
constexpr int32_t backslash_char = 0x5c;
constexpr int32_t upper_first_char = 0x41;
constexpr int32_t upper_count = 0x1a;
constexpr int32_t case_bit = 0x20;

/** The index offset of the last characters compared, from the length. */
constexpr int32_t last_index_offset = 0x2;

/** Reports whether a character is a path separator. */
bool is_separator(int32_t character)
{
    return character == slash_char || character == backslash_char;
}

/** Folds an upper case letter to lower case; any other character is returned unchanged. */
int32_t fold_case(int32_t character)
{
    const bool upper = static_cast<uint32_t>(character - upper_first_char) < static_cast<uint32_t>(upper_count);
    return upper ? character + case_bit : character;
}

}  // namespace

/**
 *
 * Reports whether two path texts agree from their ends. Characters are compared with case folded, and a slash
 * matches a backslash. Where the characters meet a separator on both sides the comparison ends as equal. When
 * one text runs out first, the rest of the longer one must start on a separator.
 *
 */
extern "C" bool bb_misc_path_tails_match(uint64_t *left_reference, uint64_t *right_reference)
{
    const auto *left = reinterpret_cast<const PathText *>(*left_reference & ~misc::path_reference_tag_mask);
    const auto *right = reinterpret_cast<const PathText *>(*right_reference & ~misc::path_reference_tag_mask);
    const int32_t left_length = left->length;
    const int32_t right_length = right->length;
    const uint8_t *left_text = left->text;
    const uint8_t *right_text = right->text;

    int32_t left_index = left_length - 1;
    int32_t right_index = right_length - 1;
    if (!(left_length > 0 && right_length > 0) && left_index != right_index) {
        return false;
    }

    int32_t step = 0;
    if ((left_index | right_index) >= 0) {
        for (;;) {
            const int32_t left_char = static_cast<int8_t>(left_text[left_index + step]);
            const int32_t right_char = static_cast<int8_t>(right_text[right_index + step]);
            if (is_separator(left_char) && is_separator(right_char)) {
                return true;
            }
            if (fold_case(left_char) != fold_case(right_char)) {
                return false;
            }
            const bool more = ((right_length - last_index_offset + step) | (left_length - last_index_offset + step)) >= 0;
            --step;
            if (!more) {
                break;
            }
        }
    }

    left_index += step;
    right_index += step;
    if (left_index == right_index) {
        return true;
    }
    if (right_index >= left_index) {
        return is_separator(static_cast<int8_t>(right_text[right_index]));
    }
    return is_separator(static_cast<int8_t>(left_text[left_index]));
}
