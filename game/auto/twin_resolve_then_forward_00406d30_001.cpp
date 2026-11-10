// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_resolve_then_forward, in game/misc/resolve_then_forward.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

namespace misc {}

// auto_resolve_then_forward_02c3d030: misc_resolve_then_forward with other addresses.
namespace twin_02c3d030 {
namespace misc { using namespace ::misc; }

// Misc: layouts shared by the span reader and the chunk pages it looks its entries up in.



namespace misc {

/**
 *
 * An opaque object that the block builder receives and only passes back to the game.
 *
 */
struct ScratchSource;

/** Starting value of the doubles that the game sets to 100 before the builder runs. */
constexpr double scratch_initial_value = 100.0;

/** Starting value of the floats that the game sets to 1 before the builder runs. */
constexpr float scratch_initial_scale = 1.0f;

/**
 *
 * A fixed 0x60-byte block that the builder fills, with the game's starting values where known.
 *
 */
struct ScratchBlock {
    int32_t word_00;     /**< Written by the builder. */
    int32_t word_04;     /**< Written by the builder. */
    double value_08;     /**< Starts at 100. */
    double value_10;     /**< Starts at 100. */
    double value_18;     /**< Written by the builder. */
    float scale_20;      /**< Starts at 1. */
    uint8_t unknown_0x24[0x10];
    float scale_34;      /**< Starts at 1. */
    uint8_t unknown_0x38[0x10];
    double value_48;     /**< Starts at 100. */
    double value_50;     /**< Written by the builder. */
    double value_58;     /**< Written by the builder. */
};
static_assert(offsetof(ScratchBlock, word_00) == 0x00);
static_assert(offsetof(ScratchBlock, value_08) == 0x08);
static_assert(offsetof(ScratchBlock, value_10) == 0x10);
static_assert(offsetof(ScratchBlock, value_18) == 0x18);
static_assert(offsetof(ScratchBlock, scale_20) == 0x20);
static_assert(offsetof(ScratchBlock, scale_34) == 0x34);
static_assert(offsetof(ScratchBlock, value_48) == 0x48);
static_assert(offsetof(ScratchBlock, value_50) == 0x50);
static_assert(offsetof(ScratchBlock, value_58) == 0x58);
static_assert(sizeof(ScratchBlock) == 0x60);

/**
 *
 * Returns a block holding the starting values the game sets before it calls the builder.
 *
 */
inline ScratchBlock default_scratch_block()
{
    ScratchBlock block{};
    block.value_08 = scratch_initial_value;
    block.value_10 = scratch_initial_value;
    block.scale_20 = scratch_initial_scale;
    block.scale_34 = scratch_initial_scale;
    block.value_48 = scratch_initial_value;
    return block;
}

/**
 *
 * Runs the block builder (0x00403570) on the source and the block, and returns the pointer it gives back.
 *
 * Callers read the result from the returned pointer, which the builder may choose.
 *
 */
RT_ORIGINAL(0x00403570, build_scratch_block, ScratchBlock *(ScratchSource *source, ScratchBlock *block));

/**
 *
 * An object owned by a ChildOwner, whose first word is its vtable.
 *
 */
struct ChildObject;

/**
 *
 * The vtable of a ChildObject, of which only the query slot is used.
 *
 */
struct ChildVtable {
    uint8_t unknown_0x00[0x20];
    int32_t (*query)(ChildObject *child); /**< Slot at 0x20. Zero reports that the child is finished. */
};
static_assert(offsetof(ChildVtable, query) == 0x20);

/**
 *
 * The first word of a ChildObject is its vtable pointer.
 *
 */
struct ChildObject {
    const ChildVtable *vtable; /**< Dispatch table for the child's methods. */
};
static_assert(offsetof(ChildObject, vtable) == 0x00);

/**
 *
 * An object that owns a child and a counter that the game sets elsewhere.
 *
 */
struct ChildOwner {
    uint8_t unknown_0x00[0x38];
    ChildObject *child;  /**< The owned child, always present. */
    uint8_t unknown_0x40[0x38];
    int32_t counter_78;  /**< Compared with zero once the child has reported work. */
};
static_assert(offsetof(ChildOwner, child) == 0x38);
static_assert(offsetof(ChildOwner, counter_78) == 0x78);

/**
 *
 * A record that the lookup hands out, and which the caller releases when done.
 *
 */
struct LookupRecord {
    uint8_t unknown_0x00[0x10];
    uint64_t tagged_word_10; /**< Pointer-like word whose low two bits are tag bits. */
};
static_assert(offsetof(LookupRecord, tagged_word_10) == 0x10);

/** Record id that the payload lookup asks for. */
constexpr int32_t lookup_record_id = 0x15;

/** Low bits of a tagged word that are cleared before use. */
constexpr uint64_t tag_bits_mask = 0x3;

/** Offset added to a tag-cleared word to form the payload. */
constexpr uint64_t payload_offset = 0xc;

/**
 *
 * An opaque table of records, of which only the lookup vtable slot is used.
 *
 */
struct LookupTable;

/**
 *
 * The vtable of a LookupTable, of which only the find slot is used.
 *
 */
struct LookupTableVtable {
    uint8_t unknown_0x00[0x20];
    LookupRecord *(*find)(LookupTable *table, int32_t id); /**< Slot at 0x20. Null when no record has the id. */
};
static_assert(offsetof(LookupTableVtable, find) == 0x20);

/**
 *
 * The first word of a LookupTable is its vtable pointer.
 *
 */
struct LookupTable {
    const LookupTableVtable *vtable; /**< Dispatch table for the table's methods. */
};
static_assert(offsetof(LookupTable, vtable) == 0x00);

/**
 *
 * Releases a record that the lookup handed out (0x0045a4c0).
 *
 */
RT_ORIGINAL(0x0045a4c0, release_record, void(LookupRecord *record));

/**
 *
 * The six words of a request, which the store copies as a unit.
 *
 */
struct RequestWords {
    uint64_t word_00; /**< First word of the request. */
    uint64_t word_08; /**< Second word of the request. */
    uint64_t word_10; /**< Third word of the request. */
    uint64_t word_18; /**< Fourth word of the request. */
    uint64_t word_20; /**< Fifth word of the request. */
    uint64_t word_28; /**< Sixth word of the request. */
};
static_assert(offsetof(RequestWords, word_28) == 0x28);
static_assert(sizeof(RequestWords) == 0x30);

/**
 *
 * A request that an owner holds while it is pending: its words, then a flag byte.
 *
 */
struct PendingRequest {
    RequestWords words;  /**< Copied from the request that was stored. */
    uint8_t flag_0x30;   /**< Set to 1 when a request is stored; its later use is not known. */
};
static_assert(offsetof(PendingRequest, flag_0x30) == 0x30);

/**
 *
 * Passes a handle and a flag to the game (0x00482a70); the result is not read.
 *
 */
RT_ORIGINAL(0x00482a70, fn_00482a70, void(uint64_t handle, uint32_t flag));

/**
 *
 * Passes a handle and a request to the game (0x004de720); the result is not read.
 *
 */
RT_ORIGINAL(0x004de720, fn_004de720, void(uint64_t handle, const RequestWords *request));

/** Mask of the handle bits below the page start; the page start is the handle with these bits cleared. */
constexpr uint64_t handle_page_mask = 0xfff;

/** Offset from the page start to the slot that a handle of the page names, at slot index zero. */
constexpr uint64_t handle_slot_base = 0x38;

/** Shift that turns a byte offset from the first slot into a count of eight-byte units. */
constexpr uint64_t handle_slot_shift = 3;

/** Multiplicative inverse of seven modulo 2^32: the game divides a slot offset by seven this way. */
constexpr uint32_t handle_slot_inverse = 0xb6db6db7;

/**
 *
 * The entry a handle page's table gives for one slot, whose payload field the lookup returns.
 *
 */
struct HandleTarget {
    uint8_t unknown_0x0000[0x10];
    uint8_t payload_0x10[1]; /**< Its address is the lookup result; the contents are not read. */
};
static_assert(offsetof(HandleTarget, payload_0x10) == 0x10);

/**
 *
 * The table of a handle page: one target pointer per slot, after the table's leading fields.
 *
 */
struct HandleTable {
    uint8_t unknown_0x0000[0x28];
    HandleTarget *targets[1]; /**< Indexed by slot; the table holds one pointer for each slot. */
};
static_assert(offsetof(HandleTable, targets) == 0x28);

/**
 *
 * A page-aligned block that a handle points into, whose table holds the slots' targets.
 *
 */
struct HandlePage {
    uint8_t unknown_0x0000[0x20];
    const HandleTable *table; /**< Table of the page's targets. */
};
static_assert(offsetof(HandlePage, table) == 0x20);

/**
 *
 * An object that refers to a pooled entry by handle and may hold a pending request.
 *
 */
struct HandleOwner {
    uint8_t unknown_0x0000[0x48];
    uint64_t handle_0x48;             /**< Handle into a handle page; zero means no entry. */
    uint8_t unknown_0x0050[0x10];
    PendingRequest *pending_0x60;     /**< Pending request, or null when none is held. */
};
static_assert(offsetof(HandleOwner, handle_0x48) == 0x48);
static_assert(offsetof(HandleOwner, pending_0x60) == 0x60);

/**
 *
 * Returns a handle for the owner (0x02c3d9b0); what the game does with the owner is not known.
 *
 */
RT_ORIGINAL(0x02c3d9b0, fn_02c3d9b0, uint64_t(HandleOwner *));

/**
 *
 * Called as the store's tail call (0x00400ab0); its result is the store's result.
 *
 */
RT_ORIGINAL(0x00400ab0, fn_00400ab0, uint64_t(HandleOwner *));

/**
 *
 * The record that a zero handle resolves to: a static block in the game, whose contents are not read here.
 *
 */
RT_GLOBAL(0x05ac5540, fallback_record, uint8_t);

/** A service that hands out blocks and takes records back, of which only two vtable slots are used. */
struct Service;

/**
 *
 * The vtable of a Service, of which only the allocate and release slots are used.
 *
 */
struct ServiceVtable {
    uint8_t unknown_0x0000[0x50];
    void *(*allocate)(Service *service, uint32_t size, uint32_t flags); /**< Slot at 0x50: returns a block of size bytes. */
    uint8_t unknown_0x0058[0x10];
    uint64_t (*release)(Service *service, void *record); /**< Slot at 0x68: takes a record back and returns its result. */
};
static_assert(offsetof(ServiceVtable, allocate) == 0x50);
static_assert(offsetof(ServiceVtable, release) == 0x68);

/**
 *
 * The first word of a Service is its vtable pointer.
 *
 */
struct Service {
    const ServiceVtable *vtable; /**< Dispatch table for the service's methods. */
};
static_assert(offsetof(Service, vtable) == 0x00);

/** The scratch service that the records allocate from and release to (the game's global at 0x057e7320). */
RT_GLOBAL(0x057e7320, scratch_service, Service *);

/** The game's record vtable, which an initialized record points at. */
RT_GLOBAL(0x0553bc50, record_vtable, const uint8_t);

/** Kind value that an initialized record carries. */
constexpr int32_t record_kind = 0x17;

/** Size of the block that an initialized record takes from the scratch service. */
constexpr uint32_t record_block_size = 8;

/**
 *
 * A record: its vtable, a count and kind word, and the block it takes from the scratch service.
 *
 */
struct RecordObject {
    const void *vtable;  /**< The record vtable. */
    int32_t value_0x08;  /**< Set to 1 when the record is initialized. */
    int32_t kind_0x0c;   /**< Set to record_kind when the record is initialized. */
    void *block_0x10;    /**< Block taken from the scratch service. */
};
static_assert(offsetof(RecordObject, vtable) == 0x00);
static_assert(offsetof(RecordObject, value_0x08) == 0x08);
static_assert(offsetof(RecordObject, kind_0x0c) == 0x0c);
static_assert(offsetof(RecordObject, block_0x10) == 0x10);

/**
 *
 * Tears down a record's owned entries (0x0040bfd0), which the record teardown calls first.
 *
 */
RT_ORIGINAL(0x0040bfd0, fn_0040bfd0, void(RecordObject *record));

/**
 *
 * An object whose word at 0x20 is read through a holder.
 *
 */
struct WordSource {
    uint8_t unknown_0x0000[0x20];
    uint64_t word_0x20; /**< Read by the word lookups; meaning unknown. */
};
static_assert(offsetof(WordSource, word_0x20) == 0x20);

/**
 *
 * An object that holds a pointer to a WordSource at 0x10.
 *
 */
struct WordHolder {
    uint8_t unknown_0x0000[0x10];
    const WordSource *source_0x10; /**< The source whose word is read. */
};
static_assert(offsetof(WordHolder, source_0x10) == 0x10);

/** A handler that takes two request words, of which only its handle slot is used. */
struct Handler;

/**
 *
 * The vtable of a Handler, of which only the handle slot is used.
 *
 */
struct HandlerVtable {
    uint8_t unknown_0x0000[0x10];
    uint64_t (*handle)(Handler *handler, uint64_t first, uint64_t second); /**< Slot at 0x10. */
};
static_assert(offsetof(HandlerVtable, handle) == 0x10);

/**
 *
 * The first word of a Handler is its vtable pointer.
 *
 */
struct Handler {
    const HandlerVtable *vtable; /**< Dispatch table for the handler's methods. */
};
static_assert(offsetof(Handler, vtable) == 0x00);

/**
 *
 * A route that keeps its handler at 0x18.
 *
 */
struct DispatchRoute {
    uint8_t unknown_0x0000[0x18];
    Handler *handler_0x18; /**< Handler for the route, or null when there is none. */
};
static_assert(offsetof(DispatchRoute, handler_0x18) == 0x18);

/**
 *
 * A dispatcher that keeps its route at 0x10.
 *
 */
struct Dispatch {
    uint8_t unknown_0x0000[0x10];
    DispatchRoute *route_0x10; /**< The route whose handler takes the request. */
};
static_assert(offsetof(Dispatch, route_0x10) == 0x10);

/**
 *
 * Called with the two request words when the route has no handler (0x0040f580).
 *
 */
RT_ORIGINAL(0x0040f580, fn_0040f580, uint64_t(uint64_t first, uint64_t second));

/** A node that keeps a tagged word at 0x48. */
struct SubmitNode {
    uint8_t unknown_0x0000[0x48];
    uint64_t tagged_word_0x48; /**< Pointer-like word whose low bits are tag bits (see tag_bits_mask). */
};
static_assert(offsetof(SubmitNode, tagged_word_0x48) == 0x48);

/** A request that keeps its node at 0x40. */
struct SubmitRequest {
    uint8_t unknown_0x0000[0x40];
    const SubmitNode *node_0x40; /**< The node whose tagged word names the queue entry. */
};
static_assert(offsetof(SubmitRequest, node_0x40) == 0x40);

/** An object with a queue embedded at 0x70, whose size is not known; only its address is passed on. */
struct SubmitOwner {
    uint8_t unknown_0x0000[0x70];
    uint8_t queue_0x70[1]; /**< Address of the embedded queue. */
};
static_assert(offsetof(SubmitOwner, queue_0x70) == 0x70);

/** Called with the queue and the untagged payload address (0x0045d5a0); its result is not read. */
RT_ORIGINAL(0x0045d5a0, fn_0045d5a0, void(void *queue, uint64_t entry));

/** Called with the queue (0x0040fa50); the submit tests only its low byte. */
RT_ORIGINAL(0x0040fa50, fn_0040fa50, uint64_t(void *queue));

/** Called with the queue as a tail call (0x0045dfc0); its result is the submit's result. */
RT_ORIGINAL(0x0045dfc0, fn_0045dfc0, uint64_t(void *queue));

/** Message that the dispatch reports when it has a context but no target (the game's string at 0x04b3b8d0). */
RT_GLOBAL(0x04b3b8d0, dispatch_report_message, const char);

/** Reports a message and a value to a sink (0x0278ad30); its result is not read. */
RT_ORIGINAL(0x0278ad30, fn_0278ad30, void(void *sink, const char *message, uint64_t value));

/** Called with the dispatch and the value, and returns a word that the dispatch passes on (0x00454320). */
RT_ORIGINAL(0x00454320, fn_00454320, uint64_t(const void *dispatch, uint64_t value, uint64_t zero));

/**
 *
 * The vtable of a DispatchTarget, of which only the handle slot at 0x20 is used.
 *
 */
struct DispatchTargetVtable {
    uint8_t unknown_0x0000[0x20];
    uint64_t (*handle)(const void *target, uint64_t value, uint64_t second, uint32_t fourth, uint32_t fifth); /**< Slot at 0x20. */
};
static_assert(offsetof(DispatchTargetVtable, handle) == 0x20);

/** An object whose first word is its vtable pointer. */
struct DispatchTarget {
    const DispatchTargetVtable *vtable; /**< Dispatch table for the target's methods. */
};
static_assert(offsetof(DispatchTarget, vtable) == 0x00);

/** A holder that keeps its target at 0x10. */
struct DispatchHolder {
    uint8_t unknown_0x0000[0x10];
    DispatchTarget *target_0x10; /**< The target, or null when none is held. */
};
static_assert(offsetof(DispatchHolder, target_0x10) == 0x10);

/** Size of the address-only sink that a context keeps at 0x10. */
constexpr uint64_t dispatch_sink_size = 0x8;

/** A context with a sink at 0x10 and a word at 0x18. */
struct DispatchContext {
    uint8_t unknown_0x0000[0x10];
    uint8_t report_sink[dispatch_sink_size]; /**< Address-only sink that the report is given. */
    uint64_t value_0x18;                     /**< Zero asks the dispatch to call the helper. */
};
static_assert(offsetof(DispatchContext, report_sink) == 0x10);
static_assert(offsetof(DispatchContext, value_0x18) == 0x18);

/** A dispatcher with a holder at 0x10 and a context at 0x18. */
struct TargetDispatch {
    uint8_t unknown_0x0000[0x10];
    DispatchHolder *holder_0x10;   /**< Holder of the target. */
    DispatchContext *context_0x18; /**< Context whose word is read when the flag is clear. */
};
static_assert(offsetof(TargetDispatch, holder_0x10) == 0x10);
static_assert(offsetof(TargetDispatch, context_0x18) == 0x18);
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
 * Second stage of the forwarding pair: receives the resolved value and the caller's second argument.
 *
 */
RT_ORIGINAL(0x02c3d970, fn_02c3d970, uint64_t(uint64_t, uint64_t));

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

RT_ORIGINAL(0x02c3dd30, fn_02c3dd30, void(RefCounted *));
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
    void (*slot_0x68)(Dispatcher *self, void *target);
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
    uint8_t unknown_0x0040[0x338];
    uint32_t value_0x378;   /**< Moved into a taken node and cleared. */
    uint32_t count;         /**< Counts the nodes appended; moved into a taken node and cleared. */
    uint32_t value_0x380;   /**< Moved into a taken node and cleared. */
    uint8_t unknown_0x0384[0x0c];
    uint64_t value_0x390;   /**< Moved into a taken node and cleared. */
    PoolNode *first;        /**< The first node appended; moved into a taken node and cleared by the taker. */
    uint8_t unknown_0x03a0[0x08];
    uint64_t value_0x3a8;   /**< Moved into a taken node and cleared. */
};
static_assert(offsetof(PooledHolder, pool) == 0x38);
static_assert(offsetof(PooledHolder, value_0x378) == 0x378);
static_assert(offsetof(PooledHolder, count) == 0x37c);
static_assert(offsetof(PooledHolder, value_0x380) == 0x380);
static_assert(offsetof(PooledHolder, value_0x390) == 0x390);
static_assert(offsetof(PooledHolder, first) == 0x398);
static_assert(offsetof(PooledHolder, value_0x3a8) == 0x3a8);

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

/** Low bits of a counted handle that are tags, not part of the block address. */
constexpr uint64_t handle_tag_bits = 0x3;

/**
 *
 * A reference-counted block; its 32-bit count sits at +0x08.
 *
 */
struct CountedBlock {
    uint8_t unknown_0x0000[0x08];
    uint32_t count; /**< The reference count, decremented atomically. */
};
static_assert(offsetof(CountedBlock, count) == 0x08);

RT_ORIGINAL(0x0045c700, fn_0045c700, void(uint64_t *value));
RT_ORIGINAL(0x00465400, fn_00465400, bool(uint64_t *out, const uint64_t *value));

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

/** Constant added to the span's width before it is rounded down. */
RT_GLOBAL(0x04b3b7a8, span_bias, const double);

/** Constant the rounded width is multiplied by. */
RT_GLOBAL(0x04b3b7b0, span_scale, const double);

}  // namespace misc

namespace {
RT_ORIGINAL(0x02c3d9b0, fn_02c3d9b0, uint64_t(uint64_t));
}  // namespace

/**
 *
 * Resolves the first argument through a callee, then forwards the result with the second argument.
 *
 * The second argument is kept across the first call and passed on unchanged, and the second stage's
 * result is returned as it is.
 */
extern "C" uint64_t bb_auto_resolve_then_forward_02c3d030(uint64_t first, uint64_t second)
{
    const uint64_t resolved = fn_02c3d9b0(first);
    return misc::fn_02c3d970(resolved, second);
}

}  // namespace twin_02c3d030
