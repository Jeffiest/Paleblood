// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: finds the first linked entry after a head that its element probe accepts, skipping one target.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace misc {

struct ChainEntry;
struct ChainSubObject;
struct ChainProbe;
struct ChainVisitor;

/**
 *
 * Method table of a chain entry: the test that lets the head be searched, and the child getter.
 *
 */
struct ChainEntryVtable {
    uint8_t unknown_0x0000[0x1e0];
    bool (*can_search)(ChainEntry *entry); /**< Method that tells whether the head may be searched. */
    uint8_t unknown_0x01e8[0x208];
    ChainEntry *(*child)(ChainEntry *entry); /**< Method that gives the entry's child; a null child ends the entry's test. */
};
static_assert(offsetof(ChainEntryVtable, can_search) == 0x1e0);
static_assert(offsetof(ChainEntryVtable, child) == 0x3f0);

/**
 *
 * An entry of the chain: the next entry at +0x38, a search flag at +0x6b and an element index at +0x6d.
 *
 */
struct ChainEntry {
    const ChainEntryVtable *vtable; /**< Method table of the entry. */
    uint8_t unknown_0x0008[0x30];
    ChainEntry *next; /**< Next entry of the chain, or null at its end. */
    uint8_t unknown_0x0040[0x28];
    uint16_t search_blocked; /**< Non-zero on the head to stop the search before it starts. */
    uint8_t unknown_0x006a[1];
    uint8_t flags; /**< Flag bits; the search continues only through entries with the linked bit. */
    uint8_t unknown_0x006c[1];
    uint8_t element_index; /**< Index, scaled by four, of the sub-object that the entry's probe reads. */
};
static_assert(offsetof(ChainEntry, next) == 0x38);
static_assert(offsetof(ChainEntry, search_blocked) == 0x68);
static_assert(offsetof(ChainEntry, flags) == 0x6b);
static_assert(offsetof(ChainEntry, element_index) == 0x6d);

/**
 *
 * Method table of a sub-object: the probe getter at +0x10.
 *
 */
struct ChainSubVtable {
    uint8_t unknown_0x0000[0x10];
    ChainProbe *(*probe)(ChainSubObject *sub); /**< Method that gives the probe for the sub-object. */
};
static_assert(offsetof(ChainSubVtable, probe) == 0x10);

/**
 *
 * An element of an entry, embedded at the entry plus its element index scaled by four.
 *
 */
struct ChainSubObject {
    const ChainSubVtable *vtable; /**< Method table of the sub-object. */
};

/**
 *
 * Method table of a probe: the accept test at +0x68.
 *
 */
struct ChainProbeVtable {
    uint8_t unknown_0x0000[0x68];
    bool (*accepts)(ChainProbe *probe); /**< Method that tells whether the probe accepts its entry. */
};
static_assert(offsetof(ChainProbeVtable, accepts) == 0x68);

/**
 *
 * The probe that a sub-object gives.
 *
 */
struct ChainProbe {
    const ChainProbeVtable *vtable; /**< Method table of the probe. */
};

/**
 *
 * Method table of the visitor: the visit method at +0x38.
 *
 */
struct ChainVisitorVtable {
    uint8_t unknown_0x0000[0x38];
    bool (*visit)(ChainVisitor *visitor, uint64_t *key, uint32_t mode, ChainEntry *entry); /**< Method that visits the head. */
};
static_assert(offsetof(ChainVisitorVtable, visit) == 0x38);

/**
 *
 * The visitor that the head is passed to before the search.
 *
 */
struct ChainVisitor {
    const ChainVisitorVtable *vtable; /**< Method table of the visitor. */
};

}  // namespace misc

namespace {

RT_ORIGINAL(0x00402c60, prepare_key, void(misc::ChainEntry *head, uint64_t *key, uint64_t value, uint32_t mode, misc::ChainEntry *extra));

/**
 *
 * Bit of an entry's flags that lets the search continue through it.
 *
 */
constexpr uint8_t linked_flag = 0x04;

/**
 *
 * Distance between element indices, which are scaled by four.
 *
 */
constexpr uintptr_t element_stride = 4;

/**
 *
 * Tells whether the probe of an entry's sub-object accepts the entry.
 *
 */
bool element_accepts(misc::ChainEntry *entry)
{
    const auto sub = reinterpret_cast<misc::ChainSubObject *>(
        reinterpret_cast<uintptr_t>(entry) + entry->element_index * element_stride);
    misc::ChainProbe *probe = sub->vtable->probe(sub);
    return probe->vtable->accepts(probe);
}

/**
 *
 * Tells whether the search returns this entry. Entries equal to the target are passed over.
 *
 * With a non-zero mode, or an element index that the probe accepts, the entry is taken directly. Otherwise
 * the entry's child is tested: a child whose element the probe accepts stands in for the entry.
 *
 */
bool entry_selected(misc::ChainEntry *entry, uint8_t mode, misc::ChainEntry *target)
{
    if (mode != 0 || (entry->element_index != 0 && element_accepts(entry))) return entry != target;

    misc::ChainEntry *first_child = entry->vtable->child(entry);
    if (first_child == nullptr) return false;
    misc::ChainEntry *child = entry->vtable->child(entry);
    if (child->element_index == 0) return false;
    const bool child_accepted = element_accepts(child);
    return child_accepted && entry != target;
}

}  // namespace

/**
 *
 * Returns the first entry after the head that the search selects, or null when none does.
 *
 * The head must pass its own test and the visitor before any entry is looked at. The search stops at the
 * first entry without the linked bit.
 *
 */
extern "C" misc::ChainEntry *bb_misc_chain_search(
    misc::ChainEntry *head, misc::ChainVisitor *visitor, uint64_t value, uint8_t mode, misc::ChainEntry *target)
{
    if (!head->vtable->can_search(head)) return nullptr;
    uint64_t key = 0;
    prepare_key(head, &key, value, 1, nullptr);
    if (head->search_blocked != 0) return nullptr;
    if (!visitor->vtable->visit(visitor, &key, 1, head)) return nullptr;

    for (misc::ChainEntry *entry = head->next; entry != nullptr && (entry->flags & linked_flag) != 0; entry = entry->next) {
        if (entry_selected(entry, mode, target)) return entry;
    }
    return nullptr;
}
