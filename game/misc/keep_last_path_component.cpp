// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "misc.h"
#include "referenced_text.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x0045ce40, text_length, int64_t(void *text));
RT_ORIGINAL(0x0045ce90, text_character, int32_t(void *text, int64_t index));
RT_ORIGINAL(0x0045de40, text_substring, void(uint64_t *out, void *text, uint32_t flags, int64_t start));
RT_ORIGINAL(0x0045d6a0, text_assign, void(void *text, uint64_t *shared));

/** The characters that separate path components. */
constexpr int32_t slash_character = 0x2f;
constexpr int32_t backslash_character = 0x5c;
/** The flags the substring is taken with. */
constexpr uint32_t substring_flags = 0;
/** The reference count that the last reference leaves the text with, before its release. */
constexpr int32_t last_reference = 1;

}  // namespace

/**
 *
 * Keeps only the last path component of a text: it finds the last separator, takes the text after it
 * as a new shared text, assigns it to the text and drops the new text's reference. Returns whether a
 * separator was found.
 *
 */
extern "C" bool bb_misc_keep_last_path_component(void *text)
{
    int64_t index = text_length(text);
    bool found = false;
    while (index > 0) {
        --index;
        const int32_t character = text_character(text, index);
        if (character == slash_character || character == backslash_character) {
            found = true;
            break;
        }
    }
    if (!found) {
        return false;
    }

    uint64_t shared_word = 0;
    text_substring(&shared_word, text, substring_flags, index + 1);
    text_assign(text, &shared_word);

    auto *shared = reinterpret_cast<misc::ReferencedText *>(shared_word & ~misc::tag_bits_mask);
    const int32_t before = __atomic_fetch_add(&shared->references, -1, __ATOMIC_SEQ_CST);
    if (before == last_reference) {
        misc::Service *service = misc::scratch_service.get();
        service->vtable->release(service, shared);
    }
    return true;
}
