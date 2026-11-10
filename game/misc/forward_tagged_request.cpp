// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: passes a tagged request's payload, a format string and a holder's count to the wide formatter.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** A request whose 32-bit tag at 0x00 is checked, and whose 64-bit payload at 0x08 is forwarded. */
struct TaggedRequest {
    int32_t tag_0x00;        /**< Must equal the request tag for the payload to be forwarded. */
    uint8_t unknown_0x04[0x04];
    uint64_t payload_0x08;   /**< Forwarded to the library routine. */
};
static_assert(offsetof(TaggedRequest, tag_0x00) == 0x00);
static_assert(offsetof(TaggedRequest, payload_0x08) == 0x08);

/** A holder whose 32-bit count at 0x08 is forwarded with the format string. */
struct TaggedRequestHolder {
    uint8_t unknown_0x00[0x08];
    uint32_t count_0x08;     /**< Forwarded to the library routine. */
};
static_assert(offsetof(TaggedRequestHolder, count_0x08) == 0x08);

/** The tag that a request must carry. */
constexpr int32_t forwardable_request_tag = 2;

RT_GLOBAL(0x04d55b90, request_format, char16_t);
RT_ORIGINAL(0x02b62d00, fn_02b62d00, void(uint64_t payload, const char16_t *format, ...));

}  // namespace

/**
 *
 * Passes the request's payload, the format string and the holder's count to the library's wide formatter when
 * the tag matches, as a tail call. Nothing is returned.
 *
 * The tag is compared as its low 32 bits. A request with another tag returns without a call. The count is
 * passed as the format's variable argument.
 */
extern "C" void bb_misc_forward_tagged_request(TaggedRequestHolder *holder, const TaggedRequest *request)
{
    if (request->tag_0x00 != forwardable_request_tag) return;
    fn_02b62d00(request->payload_0x08, request_format.address(), holder->count_0x08);
}
