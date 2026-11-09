// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

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
 * Returns a handle for the owner (0x00400300); what the game does with the owner is not known.
 *
 */
RT_ORIGINAL(0x00400300, fn_00400300, uint64_t(HandleOwner *));

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

}  // namespace misc
