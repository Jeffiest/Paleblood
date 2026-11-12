// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/ref_object.h"
#include "runtime/original.h"

namespace {

struct TextRequest;

// Bytes of the target object (from 0x18 up to the copy flag) and characters of the text (from 0xc8).
constexpr uint64_t text_request_target_bytes = 0xaa;
constexpr uint64_t text_request_characters = 0x55;

// The request's virtual functions: destruction, which reports a result.
struct TextRequestVtable {
    uint64_t (*destroy)(TextRequest *request); /**< Slot 0x00: destroys the request on its last reference. */
};
static_assert(offsetof(TextRequestVtable, destroy) == 0x00);

// A text request: a reference count, a state word, an object the text is passed into, and the text.
struct TextRequest {
    const TextRequestVtable *vtable; /**< At 0x00: the request's virtual functions. */
    int32_t references;              /**< At 0x08: the reference count, dropped once per finish. */
    uint32_t state;                  /**< At 0x0c: 1 while the request waits; finishing sets 2 or 3. */
    uint8_t unknown_0x10[0x08];
    uint8_t target[text_request_target_bytes]; /**< From 0x18: the object the text is appended to or assigned into. */
    uint8_t copy_flag;               /**< At 0xc2: set from the byte at 0x172 when the text is assigned. */
    uint8_t unknown_0xc3[0x05];
    uint16_t text[text_request_characters];    /**< At 0xc8: the text an assignment reads from. */
    uint8_t source_flag;             /**< At 0x172: the byte copied into copy_flag. */
};
static_assert(offsetof(TextRequest, references) == 0x08);
static_assert(offsetof(TextRequest, state) == 0x0c);
static_assert(offsetof(TextRequest, target) == 0x18);
static_assert(offsetof(TextRequest, copy_flag) == 0xc2);
static_assert(offsetof(TextRequest, text) == 0xc8);
static_assert(offsetof(TextRequest, source_flag) == 0x172);

RT_ORIGINAL(0x02fbf228, fn_02fbf228, uint64_t(const uint16_t *text));
RT_ORIGINAL(0x02d354e0, fn_02d354e0, void(void *target, const uint16_t *text, uint64_t length));
RT_ORIGINAL(0x02d35150, fn_02d35150, void(void *target, const void *source, uint64_t position, uint64_t count));
RT_ORIGINAL(0x024b55b0, text_request_fatal_report, uint64_t(const char *file, int32_t line, const char *format, ...));

// The state a request holds while it waits, and the states finishing moves it to.
constexpr uint32_t waiting_state = 1;
constexpr uint32_t appended_state = 2;
constexpr uint32_t assigned_state = 3;
// A count of one before the release means this finish drops the last reference.
constexpr int32_t last_reference = 1;
// The count passed to the assignment for the whole text (all ones).
constexpr uint64_t all_characters = static_cast<uint64_t>(-1);

}  // namespace

/**
 *
 * Finishes a text request: when it is still waiting, its text is appended to (or assigned into) the
 * target, its state moves on, and one reference is dropped.
 *
 * With a nonzero flag the text is appended, with its length measured first when it is not empty; with
 * zero the flag byte is copied and the text is assigned. The result is the value the original leaves
 * in RAX: the state when the request was not waiting, the destroy routine's result on the last
 * reference, the count before the drop otherwise, or the fatal report's result for a count not
 * positive.
 *
 */
extern "C" uint64_t bb_misc_finish_text_request(TextRequest *request, const uint16_t *text, uint8_t append_flag)
{
    uint32_t observed = waiting_state;
    __atomic_compare_exchange_n(&request->state, &observed, waiting_state, false, __ATOMIC_SEQ_CST,
                                __ATOMIC_SEQ_CST);
    if (observed != waiting_state)
        return observed;

    uint32_t finished_state = assigned_state;
    if (append_flag != 0) {
        uint64_t length = 0;
        if (text[0] != 0)
            length = fn_02fbf228(text);
        fn_02d354e0(request->target, text, length);
        finished_state = appended_state;
    } else {
        request->copy_flag = request->source_flag;
        fn_02d35150(request->target, request->text, 0, all_characters);
    }

    uint32_t expected_state = waiting_state;
    __atomic_compare_exchange_n(&request->state, &expected_state, finished_state, false, __ATOMIC_SEQ_CST,
                                __ATOMIC_SEQ_CST);

    const int32_t before = __atomic_fetch_sub(&request->references, 1, __ATOMIC_SEQ_CST);
    if (before == last_reference)
        return request->vtable->destroy(request);
    if (before <= 0)
        return text_request_fatal_report(nullptr, engine::line_invalid_unref, engine::message_invalid_unref.address());
    return static_cast<uint32_t>(before);
}
