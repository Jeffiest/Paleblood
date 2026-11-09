// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "misc.h"
#include "name_record.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x004604c0, decode_tagged_word, void(uint64_t *out, uint64_t source));
RT_ORIGINAL(0x02fbe568, compare_text, int32_t(const char *text, const char *expected));

RT_GLOBAL(0x04b3b92a, first_name, const char);
RT_GLOBAL(0x04b3b932, second_name, const char);
RT_GLOBAL(0x04b3b93a, third_name, const char);

/** The reference count that the last reference leaves the record with, before its release. */
constexpr int32_t last_reference = 1;

}  // namespace

/**
 *
 * Tells whether a tagged word names a record whose text is one of three known names. The record's
 * last reference releases it through the scratch service.
 *
 */
extern "C" bool bb_misc_tagged_name_matches(uint64_t source)
{
    uint64_t tagged = 0;
    decode_tagged_word(&tagged, source);
    misc::NameRecord *record = reinterpret_cast<misc::NameRecord *>(tagged & ~misc::tag_bits_mask);

    bool matches = compare_text(record->text, first_name.address()) == 0;
    if (!matches) {
        matches = compare_text(record->text, second_name.address()) == 0;
    }
    if (!matches) {
        matches = compare_text(record->text, third_name.address()) == 0;
    }

    const int32_t before = __atomic_fetch_add(&record->references, -1, __ATOMIC_SEQ_CST);
    if (before == last_reference) {
        misc::Service *service = misc::scratch_service.get();
        service->vtable->release(service, record);
    }
    return matches;
}
