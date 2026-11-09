// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: records three probe values from the probe holder into the owner's pair and its pair context.
#include <cstddef>
#include <cstdint>

#include "pair_context.h"
#include "runtime/original.h"

namespace {

using misc::PairContext;

/** A probe object: its vtable at +0x00. */
struct ProbeObject;

/** The vtable of a probe object: the probe routine at +0x18 returns a value for the object. */
struct ProbeVtable {
    uint8_t unknown_0x0000[0x18];
    uint64_t (*probe_0x18)(ProbeObject *object);
};
static_assert(offsetof(ProbeVtable, probe_0x18) == 0x18);

struct ProbeObject {
    const ProbeVtable *vtable;
};

/** A probe pair: its first object at +0x08 and its second object at +0x30. */
struct ProbePair {
    uint8_t unknown_0x00[0x08];
    ProbeObject *first_0x08;
    uint8_t unknown_0x10[0x20];
    ProbeObject *second_0x30;
};
static_assert(offsetof(ProbePair, first_0x08) == 0x08 && offsetof(ProbePair, second_0x30) == 0x30);

/** The probe holder: the pair at +0x238. */
struct ProbeHolder {
    uint8_t unknown_0x0000[0x238];
    ProbePair *pair_0x238;
};
static_assert(offsetof(ProbeHolder, pair_0x238) == 0x238);

/** The number of words in the owner's pair. */
constexpr uint32_t pair_word_count = 2;

/** The owner: the pair words at +0x8d0 and +0x8e0, two counts at +0x960 and +0x964, and the pair context at +0x08. */
struct ProbeOwner {
    uint8_t unknown_0x0000[0x08];
    PairContext *context_0x08;
    uint8_t unknown_0x0010[0x8c0];
    uint64_t pair_0x8d0[pair_word_count];
    uint64_t value_0x8e0;
    uint8_t unknown_0x08e8[0x78];
    uint32_t count_0x960;
    uint32_t count_0x964;
};
static_assert(offsetof(ProbeOwner, pair_0x8d0) == 0x8d0 && offsetof(ProbeOwner, value_0x8e0) == 0x8e0);
static_assert(offsetof(ProbeOwner, count_0x960) == 0x960 && offsetof(ProbeOwner, count_0x964) == 0x964);

/** The slot the owner is reached through: a pointer to the owner at +0x08. */
struct ProbeSlot {
    uint8_t unknown_0x00[0x08];
    ProbeOwner **owner_0x08;
};
static_assert(offsetof(ProbeSlot, owner_0x08) == 0x08);

/** The bits the record sets in the pair context's flags. */
constexpr uint64_t pending_flag_bits = 0xe0000000000;
/** The clamp bounds of the two counts: the first is capped at this value, the second raised to it. */
constexpr uint32_t first_count_cap = 0x29;
constexpr uint32_t second_count_floor = 0x2c;

RT_GLOBAL(0x059406c8, probe_holder, ProbeHolder *);

/** The probe value of the holder's first object. */
uint64_t probe_first()
{
    ProbeObject *object = probe_holder.get()->pair_0x238->first_0x08;
    return object->vtable->probe_0x18(object);
}

/** The probe value of the holder's third object, which the pair keeps at +0x30. */
uint64_t probe_second_object()
{
    ProbeObject *object = probe_holder.get()->pair_0x238->second_0x30;
    return object->vtable->probe_0x18(object);
}

}  // namespace

/**
 *
 * Takes three probe values, one from the holder's first object, one from its first object again and one
 * from its second object. The first two go into the owner's pair words, the third into the word after them,
 * and the owner's two counts are capped and raised to their bounds. The pair context gets the three values
 * too, and its flags take the pending bits.
 *
 * The slot argument is the only argument read; the first argument is not used.
 */
extern "C" void bb_misc_record_probe_values(void *, ProbeSlot *slot)
{
    const uint64_t first = probe_first();
    const uint64_t second = probe_first();
    const uint64_t third = probe_second_object();

    ProbeOwner *owner = *slot->owner_0x08;
    owner->pair_0x8d0[0] = first;
    owner->pair_0x8d0[1] = second;
    owner->value_0x8e0 = third;
    owner->count_0x960 = owner->count_0x960 < first_count_cap ? owner->count_0x960 : first_count_cap;
    owner->count_0x964 = owner->count_0x964 > second_count_floor ? owner->count_0x964 : second_count_floor;

    PairContext *context = owner->context_0x08;
    context->flags_0x1968 |= pending_flag_bits;
    context->value_0xd270 = first;
    context->value_0xd278 = second;
    context->value_0xd280 = third;
}
