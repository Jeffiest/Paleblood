// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the matcher object that accepts or refuses a text through its vtable.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct TextMatcher;

/** The matcher's vtable: the slot at 0xa0 decides whether a text is accepted. */
struct TextMatcherVtable {
    uint8_t unknown_0x0000[0xa0];
    bool (*matches_0xa0)(TextMatcher *self, const uint16_t *text, void *context);
};
static_assert(offsetof(TextMatcherVtable, matches_0xa0) == 0xa0);

/**
 *
 * A matcher object, whose first word is its vtable.
 *
 */
struct TextMatcher {
    const TextMatcherVtable *vtable;
};

}  // namespace misc
