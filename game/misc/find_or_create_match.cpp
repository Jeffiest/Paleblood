// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: finds the row a request matches among the candidate lists of the groups. A matched node is
// answered with its group's row (or the row list is filled by a callee when it cannot be used
// directly); when nothing matches and the output is empty, a new object is allocated for it.
#include <cstdint>

#include "match_allocator.h"
#include "match_candidate.h"
#include "match_group_set.h"
#include "match_request.h"
#include "runtime/original.h"

namespace {

using misc::MatchAllocator;
using misc::MatchCandidate;
using misc::MatchGroup;
using misc::MatchGroupSet;
using misc::MatchNode;
using misc::MatchRequest;
using misc::MatchRow;
using misc::MatchRowList;

RT_ORIGINAL(0x0045e440, fn_0045e440, int32_t(uint64_t request_key, uint64_t candidate_key));
RT_ORIGINAL(0x0042e5c0, fn_0042e5c0, void(void *object));
RT_ORIGINAL(0x0042e5d0, fn_0042e5d0, void(void *object));
RT_ORIGINAL(0x0042fe80, fn_0042fe80, void(MatchRowList *rows, MatchRow *out, uint32_t index));
RT_ORIGINAL(0x00504f90, fn_00504f90, void(void *object, MatchRequest *request, uint64_t word));

/** The candidate flag bits compared with the request's flags. */
constexpr uint32_t compared_flags_mask = 0x303;
/** The candidate flag bits that widen the compared mask when either is set. */
constexpr uint32_t widening_flags_mask = 0x300;
/** The mask compared when no widening bit is set. */
constexpr uint32_t narrow_flags_mask = 0x3;
/** The request flag set when it is unsettled but has a key. */
constexpr uint32_t request_pending_flag = 0x40;
/** The size of the object a match allocates. */
constexpr uint64_t allocated_object_size = 0x40;

}  // namespace

/**
 *
 * Finds the first candidate that matches the request and answers the output with its row; when no
 * candidate matches, a pending request is marked and an empty output receives a new object.
 *
 */
extern "C" bool bb_misc_find_or_create_match(void *, MatchRequest *request, MatchRow *out, MatchGroupSet *groups,
                                             MatchAllocator *allocator)
{
    for (uint64_t group_index = 0; group_index < groups->count; ++group_index) {
        MatchGroup *group = groups->groups[group_index];
        for (MatchNode *node = group->table->owner->object->first; node != nullptr; node = node->next) {
            MatchCandidate *candidate = node->candidate;
            if (candidate->vtable->ready(candidate) == 0) {
                continue;
            }
            const uint64_t candidate_key = candidate->vtable->key(candidate);
            const uint32_t mask = (candidate->flags & widening_flags_mask) != 0 ? compared_flags_mask
                                                                                : narrow_flags_mask;
            if ((mask & request->flags) != (candidate->flags & compared_flags_mask)) {
                continue;
            }
            const uint64_t request_key = request->vtable->key(request);
            if (fn_0045e440(request_key, candidate_key) != 0) {
                continue;
            }

            MatchRowList *rows = &group->table->row_list;
            if (rows->ready == 0 || rows->count <= node->index) {
                fn_0042fe80(rows, out, node->index);
                return true;
            }
            MatchRow *row = &rows->rows[node->index];
            if (row->object != nullptr) {
                fn_0042e5c0(row->object);
            }
            if (out->object != nullptr) {
                fn_0042e5d0(out->object);
            }
            out->object = row->object;
            out->word = row->word;
            return true;
        }
    }

    if (request->vtable->settled(request) == 0 && request->vtable->key(request) != 0) {
        request->flags |= request_pending_flag;
    }
    if (out->object == nullptr) {
        void *object = allocator->vtable->allocate(allocator, allocated_object_size, 0);
        fn_00504f90(object, request, out->word);
        out->object = object;
    }
    return out->object != nullptr;
}
