// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: the lazily created object a cache keeps, the factory that creates it, and the request the
// factory is given.
#pragma once

#include <cstddef>
#include <cstdint>

namespace misc {

struct CachedObject;
struct CachedObjectFactory;

/**
 *
 * The request a cached object is created from: a kind word and seven words the caller fills in.
 *
 */
struct CachedObjectRequest {
    uint32_t kind_0x00;                 /**< The creation kind, set by the caller. */
    uint8_t unknown_0x0004[0x4];
    uint64_t word_0x08;                 /**< Set by the caller before the create. */
    uint64_t word_0x10;                 /**< Set by the caller before the create. */
    uint64_t word_0x18;                 /**< Cleared by the caller before the create. */
    int64_t word_0x20;                  /**< Set to minus one by the caller before the create. */
    uint64_t word_0x28;                 /**< Cleared by the caller before the create. */
    uint64_t word_0x30;                 /**< Set by the caller before the create. */
    uint64_t word_0x38;                 /**< Cleared by the caller before the create. */
};
static_assert(offsetof(CachedObjectRequest, kind_0x00) == 0x00);
static_assert(offsetof(CachedObjectRequest, word_0x08) == 0x08);
static_assert(offsetof(CachedObjectRequest, word_0x38) == 0x38);

/**
 *
 * The virtual functions of a factory: slot 0x28 creates an object from a name and a request.
 *
 */
struct CachedObjectFactoryVtable {
    uint8_t unknown_0x0000[0x28];
    CachedObject *(*create)(CachedObjectFactory *factory, const char *name, CachedObjectRequest *request); /**< Slot at 0x28. */
};
static_assert(offsetof(CachedObjectFactoryVtable, create) == 0x28);

struct CachedObjectFactory {
    const CachedObjectFactoryVtable *vtable; /**< Dispatch table for the factory's methods. */
};

/**
 *
 * The virtual functions of a cached object: slot 0x48 releases it.
 *
 */
struct CachedObjectVtable {
    uint8_t unknown_0x0000[0x48];
    void (*release)(CachedObject *object); /**< Slot at 0x48. */
};
static_assert(offsetof(CachedObjectVtable, release) == 0x48);

struct CachedObject {
    const CachedObjectVtable *vtable; /**< Dispatch table for the object's methods. */
};

/**
 *
 * The cache that holds one lazily created object, made by its factory on first use.
 *
 */
struct LazyObjectCache {
    uint8_t unknown_0x0000[0x38];
    CachedObjectFactory *factory_0x38;  /**< The factory the object is created by. */
    CachedObject *object_0x40;          /**< The held object, or null before it is created. */
};
static_assert(offsetof(LazyObjectCache, factory_0x38) == 0x38);
static_assert(offsetof(LazyObjectCache, object_0x40) == 0x40);

}  // namespace misc
