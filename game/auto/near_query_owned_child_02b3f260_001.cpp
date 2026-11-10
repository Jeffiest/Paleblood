// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_query_owned_child, in game/misc/query_owned_child.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>

// auto_query_owned_child_0040d590: misc_query_owned_child with other addresses and constants.
namespace near_0040d590 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x10];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x10);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x30];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x30);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_0040d590(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_0040d590

// auto_query_owned_child_004261d0: misc_query_owned_child with other addresses and constants.
namespace near_004261d0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x398];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x398);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x50];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x50);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_004261d0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_004261d0

// auto_query_owned_child_00426ee0: misc_query_owned_child with other addresses and constants.
namespace near_00426ee0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x1e0];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x1e0);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x50];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x50);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_00426ee0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_00426ee0

// auto_query_owned_child_00460920: misc_query_owned_child with other addresses and constants.
namespace near_00460920 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x18];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x18);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_00460920(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_00460920

// auto_query_owned_child_00d4eff0: misc_query_owned_child with other addresses and constants.
namespace near_00d4eff0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x38];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x38);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_00d4eff0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_00d4eff0

// auto_query_owned_child_01100e60: misc_query_owned_child with other addresses and constants.
namespace near_01100e60 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x40];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x40);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0xe8];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0xe8);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_01100e60(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_01100e60

// auto_query_owned_child_011fb1b0: misc_query_owned_child with other addresses and constants.
namespace near_011fb1b0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x10];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x10);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_011fb1b0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_011fb1b0

// auto_query_owned_child_02184400: misc_query_owned_child with other addresses and constants.
namespace near_02184400 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x70];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x70);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02184400(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02184400

// auto_query_owned_child_021a0af0: misc_query_owned_child with other addresses and constants.
namespace near_021a0af0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x18];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x18);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x8];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x8);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_021a0af0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_021a0af0

// auto_query_owned_child_02216bf0: misc_query_owned_child with other addresses and constants.
namespace near_02216bf0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x60];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x60);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x38];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x38);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02216bf0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02216bf0

// auto_query_owned_child_02466460: misc_query_owned_child with other addresses and constants.
namespace near_02466460 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x48];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x48);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x90];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x90);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02466460(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02466460

// auto_query_owned_child_024672c0: misc_query_owned_child with other addresses and constants.
namespace near_024672c0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x48];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x48);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x88];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x88);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024672c0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024672c0

// auto_query_owned_child_02475170: misc_query_owned_child with other addresses and constants.
namespace near_02475170 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x50];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x50);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02475170(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02475170

// auto_query_owned_child_02475190: misc_query_owned_child with other addresses and constants.
namespace near_02475190 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x58];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x58);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02475190(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02475190

// auto_query_owned_child_024752b0: misc_query_owned_child with other addresses and constants.
namespace near_024752b0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x98];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x98);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024752b0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024752b0

// auto_query_owned_child_024752d0: misc_query_owned_child with other addresses and constants.
namespace near_024752d0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0xa0];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0xa0);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024752d0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024752d0

// auto_query_owned_child_024753b0: misc_query_owned_child with other addresses and constants.
namespace near_024753b0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0xf0];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0xf0);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024753b0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024753b0

// auto_query_owned_child_024753d0: misc_query_owned_child with other addresses and constants.
namespace near_024753d0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0xf0];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0xf0);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024753d0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024753d0

// auto_query_owned_child_024753f0: misc_query_owned_child with other addresses and constants.
namespace near_024753f0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x100];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x100);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024753f0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024753f0

// auto_query_owned_child_02475430: misc_query_owned_child with other addresses and constants.
namespace near_02475430 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x110];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x110);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02475430(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02475430

// auto_query_owned_child_02475450: misc_query_owned_child with other addresses and constants.
namespace near_02475450 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x120];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x120);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02475450(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02475450

// auto_query_owned_child_02475470: misc_query_owned_child with other addresses and constants.
namespace near_02475470 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x128];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x128);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02475470(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02475470

// auto_query_owned_child_02475490: misc_query_owned_child with other addresses and constants.
namespace near_02475490 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x130];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x130);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02475490(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02475490

// auto_query_owned_child_024754b0: misc_query_owned_child with other addresses and constants.
namespace near_024754b0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x138];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x138);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024754b0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024754b0

// auto_query_owned_child_024754d0: misc_query_owned_child with other addresses and constants.
namespace near_024754d0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x140];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x140);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x68];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x68);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024754d0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024754d0

// auto_query_owned_child_024fb030: misc_query_owned_child with other addresses and constants.
namespace near_024fb030 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x28];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x28);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x18];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x18);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024fb030(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024fb030

// auto_query_owned_child_024fb090: misc_query_owned_child with other addresses and constants.
namespace near_024fb090 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x48];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x48);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x18];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x18);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024fb090(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024fb090

// auto_query_owned_child_024fb390: misc_query_owned_child with other addresses and constants.
namespace near_024fb390 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x40];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x40);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x18];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x18);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024fb390(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024fb390

// auto_query_owned_child_024fb4f0: misc_query_owned_child with other addresses and constants.
namespace near_024fb4f0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x28];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x28);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024fb4f0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024fb4f0

// auto_query_owned_child_024fb550: misc_query_owned_child with other addresses and constants.
namespace near_024fb550 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x48];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x48);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_024fb550(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_024fb550

// auto_query_owned_child_02663ec0: misc_query_owned_child with other addresses and constants.
namespace near_02663ec0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x70];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x70);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02663ec0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02663ec0

// auto_query_owned_child_02663f20: misc_query_owned_child with other addresses and constants.
namespace near_02663f20 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x88];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x88);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02663f20(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02663f20

// auto_query_owned_child_027a2240: misc_query_owned_child with other addresses and constants.
namespace near_027a2240 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x18];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x18);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_027a2240(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_027a2240

// auto_query_owned_child_02a18eb0: misc_query_owned_child with other addresses and constants.
namespace near_02a18eb0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x48];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x48);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a18eb0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a18eb0

// auto_query_owned_child_02a18ef0: misc_query_owned_child with other addresses and constants.
namespace near_02a18ef0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x88];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x88);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a18ef0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a18ef0

// auto_query_owned_child_02a18f10: misc_query_owned_child with other addresses and constants.
namespace near_02a18f10 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x90];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x90);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a18f10(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a18f10

// auto_query_owned_child_02a19800: misc_query_owned_child with other addresses and constants.
namespace near_02a19800 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x48];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x48);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a19800(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a19800

// auto_query_owned_child_02a1d710: misc_query_owned_child with other addresses and constants.
namespace near_02a1d710 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x40];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x40);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x90];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x90);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a1d710(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a1d710

// auto_query_owned_child_02a250f0: misc_query_owned_child with other addresses and constants.
namespace near_02a250f0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x40];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x40);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x90];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x90);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a250f0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a250f0

// auto_query_owned_child_02a25de0: misc_query_owned_child with other addresses and constants.
namespace near_02a25de0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x48];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x48);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x90];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x90);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a25de0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a25de0

// auto_query_owned_child_02a268b0: misc_query_owned_child with other addresses and constants.
namespace near_02a268b0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x48];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x48);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x88];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x88);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a268b0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a268b0

// auto_query_owned_child_02a335d0: misc_query_owned_child with other addresses and constants.
namespace near_02a335d0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x48];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x48);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a335d0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a335d0

// auto_query_owned_child_02a33ac0: misc_query_owned_child with other addresses and constants.
namespace near_02a33ac0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x28];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x28);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x8];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x8);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a33ac0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a33ac0

// auto_query_owned_child_02a33bc0: misc_query_owned_child with other addresses and constants.
namespace near_02a33bc0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x48];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x48);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x8];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x8);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a33bc0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a33bc0

// auto_query_owned_child_02a33c20: misc_query_owned_child with other addresses and constants.
namespace near_02a33c20 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x60];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x60);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x8];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x8);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a33c20(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a33c20

// auto_query_owned_child_02a33c40: misc_query_owned_child with other addresses and constants.
namespace near_02a33c40 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x68);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x8];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x8);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02a33c40(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02a33c40

// auto_query_owned_child_02aa0840: misc_query_owned_child with other addresses and constants.
namespace near_02aa0840 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x60];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x60);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02aa0840(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02aa0840

// auto_query_owned_child_02aa0860: misc_query_owned_child with other addresses and constants.
namespace near_02aa0860 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x68];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x68);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02aa0860(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02aa0860

// auto_query_owned_child_02aa0880: misc_query_owned_child with other addresses and constants.
namespace near_02aa0880 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x70];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x70);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02aa0880(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02aa0880

// auto_query_owned_child_02aa08a0: misc_query_owned_child with other addresses and constants.
namespace near_02aa08a0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x78];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x78);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02aa08a0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02aa08a0

// auto_query_owned_child_02bed080: misc_query_owned_child with other addresses and constants.
namespace near_02bed080 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x30];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x30);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x8];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x8);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02bed080(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02bed080

// auto_query_owned_child_02c44b00: misc_query_owned_child with other addresses and constants.
namespace near_02c44b00 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x48];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x48);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x18];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x18);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02c44b00(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02c44b00

// auto_query_owned_child_02c45230: misc_query_owned_child with other addresses and constants.
namespace near_02c45230 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x40];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x40);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x18];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x18);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02c45230(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02c45230

// auto_query_owned_child_02c459c0: misc_query_owned_child with other addresses and constants.
namespace near_02c459c0 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x48];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x48);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x10];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x10);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02c459c0(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02c459c0

// auto_query_owned_child_02cbd130: misc_query_owned_child with other addresses and constants.
namespace near_02cbd130 {

struct QueryChild;

/** The child's vtable, of which only the slot called here is known. */
struct QueryChildVtable {
    uint8_t unknown_0x0000[0x20];
    uint64_t (*query)(QueryChild *child);
};
static_assert(offsetof(QueryChildVtable, query) == 0x20);

/** A child an owner holds, known only by its vtable. */
struct QueryChild {
    const QueryChildVtable *vtable;
};

/** An object of which only the child it holds is known. */
struct QueryChildOwner {
    uint8_t unknown_0x0000[0x8];
    QueryChild *child;
};
static_assert(offsetof(QueryChildOwner, child) == 0x8);

/**
 *
 * Returns the answer of the child an owner holds, or zero when the owner holds no child.
 *
 * The child's slot is called with the child and its result is returned as it is.
 */
extern "C" uint64_t bb_auto_query_owned_child_02cbd130(QueryChildOwner *owner)
{
    QueryChild *child = owner->child;
    if (child == nullptr) {
        return 0;
    }
    return child->vtable->query(child);
}

}  // namespace near_02cbd130
