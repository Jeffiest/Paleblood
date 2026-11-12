// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: tears down a probe record: checks its probe twice, empties its link list through the object's release slot, then tail-calls that slot.
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

struct TeardownLink {
    TeardownLink *next;
    TeardownLink *prev;
};

struct TeardownObject;

/** The object's virtual table: slot 0x70 releases one link of the list (and returns a result). */
struct TeardownVtable {
    uint8_t unknown_0x0000[0x70];
    uint64_t (*release_link)(TeardownObject *object, TeardownLink *link);
};
static_assert(offsetof(TeardownVtable, release_link) == 0x70);

/** The object the list's links are released through, whose first word is its vtable. */
struct TeardownObject {
    const TeardownVtable *vtable;
};

/** The probe object: its vtable word, then the eight-byte state the probe report reads. */
/** The number of bytes in the probe's state. */
constexpr size_t probe_state_bytes = 0x08;

struct ProbeObject {
    const void *vtable;
    uint8_t state[probe_state_bytes];
};
static_assert(offsetof(ProbeObject, state) == 0x08);

/** The probe record: a link list head at +0x18, a count, the object at +0x28, the probe at +0x60 and a pending flag. */
struct TeardownRecord {
    uint8_t unknown_0x0000[0x18];
    TeardownLink *list;
    uint64_t count;
    TeardownObject *object;
    uint8_t unknown_0x0030[0x30];
    ProbeObject probe;
    uint8_t pending;
};
static_assert(offsetof(TeardownRecord, list) == 0x18 && offsetof(TeardownRecord, object) == 0x28);
static_assert(offsetof(TeardownRecord, probe) == 0x60 && offsetof(TeardownRecord, pending) == 0x70);

/** The line the report uses for the first failure kind, and the one used for every other failure. */
constexpr uint32_t first_kind_line = 0x55;
constexpr uint32_t other_kind_line = 0x57;

/** The status codes the probe report returns: one that skips the step, and one that asks for the first report. */
constexpr int32_t skip_status = static_cast<int32_t>(0x80020010u);
constexpr int32_t first_kind_status = static_cast<int32_t>(0x80020016u);

RT_GLOBAL(0x056b6230, first_probe_vtable, const uint8_t);
RT_GLOBAL(0x057b2fa0, second_probe_vtable, const uint8_t);
RT_GLOBAL(0x04d3c20e, report_file, const char);
RT_GLOBAL(0x04d3c275, first_kind_message, const char);
RT_GLOBAL(0x04d3c2ae, other_kind_message, const char);

RT_ORIGINAL(0x0247ee80, probe_first, uint8_t(ProbeObject *probe));
RT_ORIGINAL(0x02fbfee8, probe_report, int32_t(uint8_t *state));

/** Reads the probe's status and reports any failure; a clear pending flag follows any status but the skip code. */
void check_probe(TeardownRecord *record)
{
    const int32_t status = probe_report(record->probe.state);
    if (status == skip_status) return;
    if (status != 0) {
        if (status == first_kind_status) engine::fatal_error(report_file.address(), first_kind_line, first_kind_message.address());
        engine::fatal_error(report_file.address(), other_kind_line, other_kind_message.address());
    }
    record->pending = 0;
}

}  // namespace

/**
 *
 * Checks the record's probe when its first probe call says so, then detaches the list: every link after the head is
 * released through the object's slot 0x70 in list order, and the head is left empty. The probe is checked again when
 * the pending flag is set, and the slot is then called once more with the head, whose result is returned.
 *
 */
extern "C" uint64_t bb_misc_teardown_probe_list(TeardownRecord *record)
{
    record->probe.vtable = first_probe_vtable.address();
    if (probe_first(&record->probe) != 0) check_probe(record);

    record->probe.vtable = second_probe_vtable.address();
    if (record->pending != 0) check_probe(record);

    TeardownLink *head = record->list;
    TeardownLink *link = head->next;
    head->next = head;
    head->prev = head;
    record->count = 0;
    if (link != head) {
        do {
            TeardownLink *following = link->next;
            record->object->vtable->release_link(record->object, link);
            link = following;
        } while (link != head);
    }
    return record->object->vtable->release_link(record->object, head);
}
