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
    uint8_t unknown_0x0000[0x50];
    void *(*slot_0x50)(Dispatcher *self, uint32_t size, uint32_t flags);
    uint8_t unknown_0x0058[0x10];
    void (*slot_0x68)(Dispatcher *self, Target *target);
};
static_assert(offsetof(DispatcherVtable, slot_0x50) == 0x50);
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

/** Size of a pool node. */
constexpr uint64_t pool_node_size = 0x20;

struct RetainedObject;

/**
 *
 * The virtual functions of an object a pool node holds: the first is called when a binding is
 * taken, the second when a node lets its object go.
 *
 */
struct RetainedVtable {
    uint8_t unknown_0x0000[0x10];
    void (*retain)(RetainedObject *self, uint64_t argument);  /**< Called with the binding's argument. */
    void (*release)(RetainedObject *self, uint64_t argument); /**< Called with the node's argument. */
};
static_assert(offsetof(RetainedVtable, retain) == 0x10);
static_assert(offsetof(RetainedVtable, release) == 0x18);

struct RetainedObject {
    const RetainedVtable *vtable;
};

/**
 *
 * An object with the argument its virtual functions receive.
 *
 */
struct Binding {
    RetainedObject *object;
    uint64_t argument;
};
static_assert(offsetof(Binding, argument) == 0x08);

/**
 *
 * A node of a pool: a binding, a tag, and the link to the next node.
 *
 */
struct PoolNode {
    RetainedObject *object; /**< The object the node holds. */
    uint64_t argument;      /**< The argument the object's release receives. */
    uint32_t tag;           /**< Copied from the caller's tagged value. */
    uint8_t unknown_0x0014[0x04];
    PoolNode *next;         /**< The node linked after this one. */
};
static_assert(offsetof(PoolNode, tag) == 0x10);
static_assert(offsetof(PoolNode, next) == 0x18);
static_assert(sizeof(PoolNode) == pool_node_size);

/**
 *
 * A pool that hands out nodes from a cursor and keeps its nodes in a chain.
 *
 */
struct NodePool {
    uint8_t unknown_0x0000[0x10];
    PoolNode *cursor;   /**< The next free node, while enough bytes remain. */
    uint64_t remaining; /**< The bytes left after the cursor. */
    uint8_t unknown_0x0020[0x110];
    PoolNode *head;     /**< The first node of the chain. */
    PoolNode *tail;     /**< The last node of the chain. */
};
static_assert(offsetof(NodePool, cursor) == 0x10);
static_assert(offsetof(NodePool, remaining) == 0x18);
static_assert(offsetof(NodePool, head) == 0x130);
static_assert(offsetof(NodePool, tail) == 0x138);

/**
 *
 * A caller's value that carries a tag.
 *
 */
struct Tagged {
    uint8_t unknown_0x0000[0x08];
    uint32_t tag; /**< The tag copied into each node. */
};
static_assert(offsetof(Tagged, tag) == 0x08);

/**
 *
 * The holder that owns a pool, counts the nodes it appends, and keeps the first one.
 *
 */
struct PooledHolder {
    uint8_t unknown_0x0000[0x38];
    NodePool *pool;
    uint8_t unknown_0x0040[0x33c];
    uint32_t count;
    uint8_t unknown_0x0380[0x18];
    PoolNode *first;
};
static_assert(offsetof(PooledHolder, pool) == 0x38);
static_assert(offsetof(PooledHolder, count) == 0x37c);
static_assert(offsetof(PooledHolder, first) == 0x398);

RT_ORIGINAL(0x00418060, fn_00418060, void(Tagged *tagged, NodePool *pool, const uint32_t *key));
RT_ORIGINAL(0x00414be0, fn_00414be0, PoolNode *(PoolNode **cursor, uint32_t size));

/** The shared object the keyed append retains for the duration of a call. */
RT_GLOBAL(0x0553be98, shared_retained_object, RetainedObject);

/**
 *
 * A node of a keyed pool: a key, an argument, a tag, and the link to the next node.
 *
 */
struct KeyedNode {
    uint32_t key;                 /**< The key stored at offset 0. */
    uint8_t unknown_0x0004[0x04];
    uint64_t argument;            /**< The argument the node's release receives. */
    uint32_t tag;                 /**< Copied from the caller's tagged value. */
    uint8_t unknown_0x0014[0x04];
    KeyedNode *next;              /**< The node linked after this one. */
};
static_assert(offsetof(KeyedNode, argument) == 0x08);
static_assert(offsetof(KeyedNode, tag) == 0x10);
static_assert(offsetof(KeyedNode, next) == 0x18);

/**
 *
 * A pool of keyed nodes: a cursor, the bytes left after it, and the chain of nodes.
 *
 */
struct KeyedPool {
    uint8_t unknown_0x0000[0x10];
    KeyedNode *cursor;
    uint64_t remaining;
    uint8_t unknown_0x0020[0x100];
    KeyedNode *head;
    KeyedNode *tail;
};
static_assert(offsetof(KeyedPool, head) == 0x120);
static_assert(offsetof(KeyedPool, tail) == 0x128);

/**
 *
 * The holder of a keyed pool, which counts the nodes it appends and keeps the first one.
 *
 */
struct KeyedHolder {
    uint8_t unknown_0x0000[0x38];
    KeyedPool *pool;
    uint8_t unknown_0x0040[0x340];
    uint32_t count;
    uint8_t unknown_0x0384[0x24];
    KeyedNode *first;
};
static_assert(offsetof(KeyedHolder, pool) == 0x38);
static_assert(offsetof(KeyedHolder, count) == 0x380);
static_assert(offsetof(KeyedHolder, first) == 0x3a8);

RT_ORIGINAL(0x0045a4b0, fn_0045a4b0, void(void *object));
RT_ORIGINAL(0x0045a4c0, fn_0045a4c0, void(void *object));
RT_ORIGINAL(0x0040dee0, fn_0040dee0, Tagged *(Tagged *tagged, void *holder, const uint32_t *key, Binding *binding));

/**
 *
 * A holder that points at a child node, with a kind and a width it was given.
 *
 */
struct ChildHolder {
    const void *vtable;
    uint32_t kind;  /**< Set to one when the holder is set up. */
    uint32_t width; /**< Set to twenty when the holder is set up. */
    void *child;    /**< The child node the holder points at. */
};
static_assert(offsetof(ChildHolder, kind) == 0x08);
static_assert(offsetof(ChildHolder, child) == 0x10);

/**
 *
 * A child node: three words, then a sub-object that starts at child_sub_offset.
 *
 */
struct ChildNode {
    uint64_t first;
    uint64_t second;
    uint64_t third;
    uint8_t unknown_0x0018[0x08];
};
static_assert(offsetof(ChildNode, third) == 0x10);

struct Checked;

/**
 *
 * The virtual functions of a factory: the first creates a checked object from a context and two
 * values, and returns null when it cannot.
 *
 */
struct FactoryVtable {
    uint8_t unknown_0x0000[0x10];
    Checked *(*create)(struct Factory *self, void *context, uint32_t first, uint32_t second);
};
static_assert(offsetof(FactoryVtable, create) == 0x10);

struct Factory {
    const FactoryVtable *vtable;
};

/**
 *
 * The virtual functions of a checked object: the valid test returns zero when the object passes.
 *
 */
struct CheckedVtable {
    uint8_t unknown_0x0000[0x48];
    uint32_t (*valid)(Checked *self);
};
static_assert(offsetof(CheckedVtable, valid) == 0x48);

struct Checked {
    const CheckedVtable *vtable;
};

/** Format the failed creation is reported with. */
RT_GLOBAL(0x04b3b870, create_failure_format, const char);

RT_ORIGINAL(0x02788b20, fn_02788b20, void(void *target, const char *format, ...));

/** Offset of the vtable pointer a child holder is given, inside the table at its address. */
constexpr uint64_t holder_vtable_offset = 0x10;

/** Width a child holder is given, and the size of a child node. */
constexpr uint32_t child_width = 0x14;
constexpr uint32_t child_size = 0x20;

/** Offset of the sub-object inside a child node. */
constexpr uint64_t child_sub_offset = 0x18;

/** Format string the child name is reported with. */
RT_GLOBAL(0x04b3b88b, child_name_format, const char);

/** Table whose entry, at holder_vtable_offset, is the vtable a child holder points to. */
RT_GLOBAL(0x0553bbd0, child_holder_table, const uint8_t);

RT_ORIGINAL(0x0045c6f0, fn_0045c6f0, void(void *sub_object));
RT_ORIGINAL(0x0045d5a0, fn_0045d5a0, uint64_t(void *sub_object, const char *format));

/** Constant added to the span's width before it is rounded down. */
RT_GLOBAL(0x04b3b7a8, span_bias, const double);

/** Constant the rounded width is multiplied by. */
RT_GLOBAL(0x04b3b7b0, span_scale, const double);

}  // namespace misc
