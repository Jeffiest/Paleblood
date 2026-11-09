// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: layouts shared by the span reader and the chunk pages it looks its entries up in.
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace misc {

struct Span;
struct SpanValue;

/**
 *
 * Size of a chunk page: clearing the low bits of a chunk address gives the page it lies in.
 *
 */
constexpr uint64_t chunk_page_size = 0x1000;

/**
 *
 * Offset from the start of a page to its first chunk slot.
 *
 */
constexpr uint64_t chunk_first_offset = 0x38;

/**
 *
 * Multiplicative inverse of 7 modulo 2^32 (the original's -0x49249249), which divides a slot offset
 * of whole chunk strides, 56 bytes each, after the offset is shifted down by three bits.
 *
 */
constexpr uint32_t inverse_of_seven = 0xb6db6db7u;

/**
 *
 * Offset of the entry pointer table inside a pool, one 8-byte pointer per slot index.
 *
 */
constexpr size_t pool_slots_offset = 0x28;

/**
 *
 * Bit of ChunkEntry::flags that selects the direct path of the span reader.
 *
 */
constexpr uint8_t direct_flag = 0x02;

/**
 *
 * An entry for one chunk, found through its pool's slot table.
 *
 */
struct ChunkEntry {
    uint8_t unknown_0x0000[0x0b];
    uint8_t flags; /**< Bits tested by the span reader; direct_flag selects the direct path. */
};
static_assert(offsetof(ChunkEntry, flags) == 0x0b);

/**
 *
 * The pool a chunk page points to. Its slot table starts at pool_slots_offset.
 *
 */
struct ChunkPool {
    uint8_t unknown_0x0000[0x28];
};

/**
 *
 * The page a chunk lies in, found by clearing the low bits of the chunk address.
 *
 */
struct ChunkPage {
    uint8_t unknown_0x0000[0x20];
    ChunkPool *pool; /**< The pool whose slot table indexes this page's chunks. */
};
static_assert(offsetof(ChunkPage, pool) == 0x20);

/**
 *
 * The virtual functions of a span: the value source and the span source.
 *
 */
struct SpanVtable {
    uint8_t unknown_0x0000[0x18];
    uint64_t (*value_0x18)(Span *self);                             /**< Returns the argument for span_0x1f0. */
    uint8_t unknown_0x0020[0x1d0];
    void (*span_0x1f0)(SpanValue *out, Span *self, uint64_t argument); /**< Writes the span into out. */
};
static_assert(offsetof(SpanVtable, value_0x18) == 0x18);
static_assert(offsetof(SpanVtable, span_0x1f0) == 0x1f0);

/**
 *
 * A 16-byte block holding a span's two ends as floats; the other bytes are not read.
 *
 */
struct SpanValue {
    float start;             /**< The lower end of the span. */
    uint8_t unknown_0x04[4];
    float end;               /**< The upper end of the span. */
    uint8_t unknown_0x0c[4];
};
static_assert(offsetof(SpanValue, start) == 0x00);
static_assert(offsetof(SpanValue, end) == 0x08);
static_assert(sizeof(SpanValue) == 0x10);

/**
 *
 * An object that reports a span and keeps the chunk its entry is looked up through.
 *
 */
struct Span {
    const SpanVtable *vtable; /**< Virtual functions of this object. */
    uint8_t unknown_0x0008[0x40];
    uint64_t chunk;           /**< Address of the chunk, or zero when there is none. */
};
static_assert(offsetof(Span, vtable) == 0x00);
static_assert(offsetof(Span, chunk) == 0x48);

/**
 *
 * Writes a span into out from the object's chunk entry; the span is read from the chunk path.
 *
 */
RT_ORIGINAL(0x004060a0, fn_004060a0, void(SpanValue *out, Span *self));

/**
 *
 * Resolver for a single argument; its result is the first argument of the forwarding stage.
 *
 */
RT_ORIGINAL(0x00400300, fn_00400300, uint64_t(uint64_t));

/**
 *
 * Second stage of the forwarding pair: receives the resolved value and the caller's second argument.
 *
 */
RT_ORIGINAL(0x004de260, fn_004de260, uint64_t(uint64_t, uint64_t));

/**
 *
 * The part of a lookup record that holds a 16-byte value at +0x10.
 *
 */
struct LookupPayload {
    uint8_t unknown_0x0000[0x10];
    SpanValue value; /**< The 16-byte value returned by the lookup, copied as it is. */
};
static_assert(offsetof(LookupPayload, value) == 0x10);

/**
 *
 * A record returned by fn_004de9c0 for a resolved key.
 *
 */
struct Lookup {
    uint8_t unknown_0x0000[0x08];
    LookupPayload *payload; /**< The payload that holds the value. */
};
static_assert(offsetof(Lookup, payload) == 0x08);

/**
 *
 * Finds the record for a resolved key; a null result means there is none.
 *
 */
RT_ORIGINAL(0x004de9c0, fn_004de9c0, Lookup *(uint64_t, uint32_t));

/** The key that the record lookup is requested with. */
constexpr uint32_t record_key = 2;

/**
 *
 * The source a tracked object reads its value from.
 *
 */
struct Source {
    uint8_t unknown_0x0000[0x10];
    void *value; /**< The value the pending update passes on. */
};
static_assert(offsetof(Source, value) == 0x10);

/**
 *
 * The target a tracked object dispatches once; its flag selects the first dispatch.
 *
 */
struct Target {
    uint8_t unknown_0x0000[0x30];
    uint8_t flag; /**< Nonzero selects the first dispatch. */
};
static_assert(offsetof(Target, flag) == 0x30);

/**
 *
 * A tracked object: a source, a target, and a flag byte whose top bit marks a pending update.
 *
 */
struct Tracked {
    uint8_t unknown_0x0000[0x20];
    Source *source;  /**< The source the pending update reads. */
    uint8_t unknown_0x0028[0x38];
    Target *target;  /**< The target, cleared once the update has dispatched it. */
    uint8_t unknown_0x0068[0x03];
    uint8_t flags;   /**< Bit 0x80 marks a pending update; the update clears it. */
};
static_assert(offsetof(Tracked, source) == 0x20);
static_assert(offsetof(Tracked, target) == 0x60);
static_assert(offsetof(Tracked, flags) == 0x6b);

/** Top bit of Tracked::flags: a pending update. */
constexpr uint8_t pending_flag = 0x80;

/** Offset of the subobject inside the owner that the update also refreshes. */
constexpr size_t owned_subobject_offset = 0xd8;

/**
 *
 * A reference-counted object; it is destroyed when its count reaches zero.
 *
 */
struct RefCounted {
    uint8_t unknown_0x0000[0x08];
    int64_t count; /**< The reference count. */
};
static_assert(offsetof(RefCounted, count) == 0x08);

/**
 *
 * The three slots that the pending-update helper fills in, in order.
 *
 */
struct Pending {
    RefCounted *first; /**< A reference-counted object. */
    void *second;      /**< An owned object, released after the third. */
    void *third;       /**< An owned object whose subobject is refreshed first. */
};
static_assert(offsetof(Pending, third) == 0x10);

RT_ORIGINAL(0x004de620, fn_004de620, void(RefCounted *));
RT_ORIGINAL(0x004de720, fn_004de720, void(RefCounted *));
RT_ORIGINAL(0x004de6a0, fn_004de6a0, void(RefCounted *, Target *));
RT_ORIGINAL(0x004deb80, fn_004deb80, void(RefCounted *, uint64_t));
RT_ORIGINAL(0x0042b850, fn_0042b850, void(Pending *, void *value, Tracked *));
RT_ORIGINAL(0x004f3e80, fn_004f3e80, int64_t(void *subobject, Tracked *));
RT_ORIGINAL(0x004f4410, fn_004f4410, void(void *subobject, void *owner, int64_t));
RT_ORIGINAL(0x0045a510, fn_0045a510, void(void *));
RT_ORIGINAL(0x00482790, fn_00482790, void(RefCounted *));

struct Dispatcher;

struct DispatcherVtable {
    uint8_t unknown_0x0000[0x68];
    void (*slot_0x68)(Dispatcher *self, Target *target);
};
static_assert(offsetof(DispatcherVtable, slot_0x68) == 0x68);

struct Dispatcher {
    const DispatcherVtable *vtable;
};

RT_GLOBAL(0x057e7320, pending_dispatcher, Dispatcher *);

/**
 *
 * A node of an intrusive list that numbers its entries as they are appended.
 *
 */
struct IndexedNode {
    uint8_t unknown_0x0000[0x24];
    uint32_t index; /**< The position the node was appended at. */
    IndexedNode *next; /**< The node appended after this one, set when that node is appended. */
};
static_assert(offsetof(IndexedNode, index) == 0x24);
static_assert(offsetof(IndexedNode, next) == 0x28);

/**
 *
 * The chain that holds the head and the tail of an intrusive list.
 *
 */
struct NodeChain {
    uint8_t unknown_0x0000[0x110];
    IndexedNode *head; /**< The first node, or null while the chain is empty. */
    IndexedNode *tail; /**< The last node appended. */
};
static_assert(offsetof(NodeChain, head) == 0x110);
static_assert(offsetof(NodeChain, tail) == 0x118);

/**
 *
 * The holder that numbers appended nodes and keeps the chain they go into.
 *
 */
struct IndexedHolder {
    uint8_t unknown_0x0000[0x38];
    NodeChain *chain;   /**< The chain the nodes are appended to. */
    uint8_t unknown_0x0040[0x32c];
    uint32_t next_index; /**< The index the next appended node receives. */
    uint8_t unknown_0x0370[0x08];
    uint32_t count;      /**< The number of nodes appended. */
    uint8_t unknown_0x037c[0x14];
    IndexedNode *first;  /**< The first node appended, kept once it is set. */
};
static_assert(offsetof(IndexedHolder, chain) == 0x38);
static_assert(offsetof(IndexedHolder, next_index) == 0x36c);
static_assert(offsetof(IndexedHolder, count) == 0x378);
static_assert(offsetof(IndexedHolder, first) == 0x390);

/** Constant added to the span's width before it is rounded down. */
RT_GLOBAL(0x04b3b7a8, span_bias, const double);

/** Constant the rounded width is multiplied by. */
RT_GLOBAL(0x04b3b7b0, span_scale, const double);

}  // namespace misc
