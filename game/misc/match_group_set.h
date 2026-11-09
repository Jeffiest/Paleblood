// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the set of groups a match searches, with the candidate lists and the row table of each group.
#pragma once

#include <cstddef>
#include <cstdint>

#include "match_candidate.h"

namespace misc {

struct MatchGroup;
struct MatchTable;
struct MatchObject;

/**
 *
 * A node of a candidate list: its candidate, the row index it refers to, and the next node.
 *
 */
struct MatchNode {
    uint8_t unknown_0x0000[0x08];
    MatchCandidate *candidate; /**< The candidate the request is compared with. */
    uint32_t index;            /**< The row of the group's table this node refers to. */
    uint8_t unknown_0x0014[0x04];
    MatchNode *next;           /**< The following node, or null at the end of the list. */
};
static_assert(offsetof(MatchNode, candidate) == 0x08);
static_assert(offsetof(MatchNode, index) == 0x10);
static_assert(offsetof(MatchNode, next) == 0x18);

/**
 *
 * A row of a table: an object the row keeps a reference to, and a word passed on with it.
 *
 */
struct MatchRow {
    void *object; /**< The retained object of the row, or null. */
    uint64_t word; /**< The word the row carries. */
};
static_assert(sizeof(MatchRow) == 0x10);

/**
 *
 * The rows of a table: their count, the rows themselves, and a flag that says they can be used directly.
 *
 */
struct MatchRowList {
    uint8_t unknown_0x0000[0x08];
    uint32_t count;      /**< The number of rows. */
    uint8_t unknown_0x000c[0x04];
    MatchRow *rows;      /**< The rows, indexed by a node's index. */
    uint8_t unknown_0x0018[0x08];
    uint8_t ready;       /**< Nonzero when the rows can be used directly. */
};
static_assert(offsetof(MatchRowList, count) == 0x08);
static_assert(offsetof(MatchRowList, rows) == 0x10);
static_assert(offsetof(MatchRowList, ready) == 0x20);

/**
 *
 * The object an owner refers to, whose candidate list starts at +0x120.
 *
 */
struct MatchObject {
    uint8_t unknown_0x0000[0x120];
    MatchNode *first; /**< The first node of the candidate list, or null when it is empty. */
};
static_assert(offsetof(MatchObject, first) == 0x120);

/**
 *
 * The owner a table belongs to: the object it refers to at +0x40.
 *
 */
struct MatchOwner {
    uint8_t unknown_0x0000[0x40];
    MatchObject *object; /**< The object whose candidate list is searched. */
};
static_assert(offsetof(MatchOwner, object) == 0x40);

/**
 *
 * The row table of a group: its owner at +0x18 and the row list at +0x30.
 *
 */
struct MatchTable {
    uint8_t unknown_0x0000[0x18];
    MatchOwner *owner;    /**< The owner the candidate list comes from. */
    uint8_t unknown_0x0020[0x10];
    MatchRowList row_list; /**< The rows that a matched node is answered with. */
};
static_assert(offsetof(MatchTable, owner) == 0x18);
static_assert(offsetof(MatchTable, row_list) == 0x30);

/**
 *
 * A group of candidate lists: its table at +0x48.
 *
 */
struct MatchGroup {
    uint8_t unknown_0x0000[0x48];
    MatchTable *table; /**< The table whose rows answer the matched node. */
};
static_assert(offsetof(MatchGroup, table) == 0x48);

/**
 *
 * The set of groups a match searches: the group pointers and how many there are.
 *
 */
struct MatchGroupSet {
    uint8_t unknown_0x0000[0x80];
    MatchGroup **groups; /**< The groups, in order. */
    uint64_t count;      /**< The number of groups. */
};
static_assert(offsetof(MatchGroupSet, groups) == 0x80);
static_assert(offsetof(MatchGroupSet, count) == 0x88);

}  // namespace misc
