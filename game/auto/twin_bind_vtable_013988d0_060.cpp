// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_bind_vtable_56b4840, in game/misc/bind_vtable_56b4840.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_bind_vtable_02c65ed0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c65ed0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c65ed0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c65ed0

// auto_bind_vtable_02c667a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c667a0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c667a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c667a0

// auto_bind_vtable_02c667d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c667d0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c667d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c667d0

// auto_bind_vtable_02c66800: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c66800 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c66800()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c66800

// auto_bind_vtable_02c67a50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c67a50 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c67a50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c67a50

// auto_bind_vtable_02c67a80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c67a80 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c67a80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c67a80

// auto_bind_vtable_02c67ab0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c67ab0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c67ab0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c67ab0

// auto_bind_vtable_02c68480: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c68480 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c68480()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c68480

// auto_bind_vtable_02c684b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c684b0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c684b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c684b0

// auto_bind_vtable_02c684e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c684e0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c684e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c684e0

// auto_bind_vtable_02c68d60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c68d60 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c68d60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c68d60

// auto_bind_vtable_02c68d90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c68d90 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c68d90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c68d90

// auto_bind_vtable_02c68dc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c68dc0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c68dc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c68dc0

// auto_bind_vtable_02c69cf0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c69cf0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c69cf0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c69cf0

// auto_bind_vtable_02c69d20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c69d20 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c69d20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c69d20

// auto_bind_vtable_02c69d50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c69d50 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c69d50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c69d50

// auto_bind_vtable_02c6aff0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c6aff0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c6aff0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c6aff0

// auto_bind_vtable_02c6b020: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c6b020 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c6b020()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c6b020

// auto_bind_vtable_02c6b050: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c6b050 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c6b050()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c6b050

// auto_bind_vtable_02c6d6f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c6d6f0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c6d6f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c6d6f0

// auto_bind_vtable_02c6d720: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c6d720 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c6d720()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c6d720

// auto_bind_vtable_02c6d750: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c6d750 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c6d750()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c6d750

// auto_bind_vtable_02c77210: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c77210 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c77210()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c77210

// auto_bind_vtable_02c77240: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c77240 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c77240()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c77240

// auto_bind_vtable_02c77270: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c77270 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c77270()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c77270

// auto_bind_vtable_02c796d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c796d0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c796d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c796d0

// auto_bind_vtable_02c79700: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c79700 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c79700()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c79700

// auto_bind_vtable_02c79730: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c79730 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c79730()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c79730

// auto_bind_vtable_02c7f6c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c7f6c0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c7f6c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c7f6c0

// auto_bind_vtable_02c7f6f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c7f6f0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c7f6f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c7f6f0

// auto_bind_vtable_02c7f720: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c7f720 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c7f720()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c7f720

// auto_bind_vtable_02c81820: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81820 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81820()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81820

// auto_bind_vtable_02c81850: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81850 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81850()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81850

// auto_bind_vtable_02c81880: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81880 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81880()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81880

// auto_bind_vtable_02c81a60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81a60 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81a60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81a60

// auto_bind_vtable_02c81a90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81a90 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81a90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81a90

// auto_bind_vtable_02c81ac0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81ac0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81ac0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81ac0

// auto_bind_vtable_02c81b70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81b70 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81b70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81b70

// auto_bind_vtable_02c81ba0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81ba0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81ba0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81ba0

// auto_bind_vtable_02c81bd0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81bd0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81bd0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81bd0

// auto_bind_vtable_02c81c80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81c80 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81c80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81c80

// auto_bind_vtable_02c81cb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81cb0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81cb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81cb0

// auto_bind_vtable_02c81ce0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81ce0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81ce0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81ce0

// auto_bind_vtable_02c81ea0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81ea0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81ea0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81ea0

// auto_bind_vtable_02c81ed0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81ed0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81ed0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81ed0

// auto_bind_vtable_02c81f00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81f00 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81f00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81f00

// auto_bind_vtable_02c81fb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81fb0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81fb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81fb0

// auto_bind_vtable_02c81fe0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c81fe0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c81fe0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c81fe0

// auto_bind_vtable_02c82010: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c82010 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c82010()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c82010

// auto_bind_vtable_02c821c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c821c0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c821c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c821c0

// auto_bind_vtable_02c821f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c821f0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c821f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c821f0

// auto_bind_vtable_02c82220: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c82220 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c82220()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c82220

// auto_bind_vtable_02c828a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c828a0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c828a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c828a0

// auto_bind_vtable_02c828d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c828d0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c828d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c828d0

// auto_bind_vtable_02c82900: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c82900 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c82900()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c82900

// auto_bind_vtable_02c82980: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c82980 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c82980()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c82980

// auto_bind_vtable_02c829b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c829b0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c829b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c829b0

// auto_bind_vtable_02c829e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c829e0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c829e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c829e0

// auto_bind_vtable_02c888a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c888a0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c888a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c888a0

// auto_bind_vtable_02c888d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c888d0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c888d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c888d0

// auto_bind_vtable_02c88900: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c88900 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c88900()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c88900

// auto_bind_vtable_02c993f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c993f0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c993f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c993f0

// auto_bind_vtable_02c99420: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c99420 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c99420()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c99420

// auto_bind_vtable_02c99450: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02c99450 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02c99450()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02c99450

// auto_bind_vtable_02cab690: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cab690 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cab690()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cab690

// auto_bind_vtable_02cab6c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cab6c0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cab6c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cab6c0

// auto_bind_vtable_02cab6f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cab6f0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cab6f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cab6f0

// auto_bind_vtable_02cba250: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cba250 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cba250()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cba250

// auto_bind_vtable_02cba280: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cba280 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cba280()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cba280

// auto_bind_vtable_02cba2b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cba2b0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cba2b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cba2b0

// auto_bind_vtable_02cba7f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cba7f0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cba7f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cba7f0

// auto_bind_vtable_02cba820: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cba820 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cba820()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cba820

// auto_bind_vtable_02cba850: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cba850 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cba850()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cba850

// auto_bind_vtable_02cbad40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cbad40 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cbad40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cbad40

// auto_bind_vtable_02cbad70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cbad70 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cbad70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cbad70

// auto_bind_vtable_02cbada0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cbada0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cbada0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cbada0

// auto_bind_vtable_02cbc9e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cbc9e0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cbc9e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cbc9e0

// auto_bind_vtable_02cbca10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cbca10 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cbca10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cbca10

// auto_bind_vtable_02cbca40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cbca40 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cbca40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cbca40

// auto_bind_vtable_02cbd300: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cbd300 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cbd300()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cbd300

// auto_bind_vtable_02cbd330: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cbd330 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cbd330()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cbd330

// auto_bind_vtable_02cbd360: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cbd360 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cbd360()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cbd360

// auto_bind_vtable_02cbd500: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cbd500 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cbd500()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cbd500

// auto_bind_vtable_02cbd530: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cbd530 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cbd530()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cbd530

// auto_bind_vtable_02cbd560: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cbd560 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cbd560()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cbd560

// auto_bind_vtable_02ceae90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02ceae90 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02ceae90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02ceae90

// auto_bind_vtable_02ceaec0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02ceaec0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02ceaec0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02ceaec0

// auto_bind_vtable_02ceaef0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02ceaef0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02ceaef0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02ceaef0

// auto_bind_vtable_02cec010: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cec010 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cec010()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cec010

// auto_bind_vtable_02cec040: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cec040 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cec040()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cec040

// auto_bind_vtable_02cec070: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cec070 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cec070()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cec070

// auto_bind_vtable_02cec150: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cec150 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cec150()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cec150

// auto_bind_vtable_02cec180: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cec180 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cec180()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cec180

// auto_bind_vtable_02cec1b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cec1b0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cec1b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cec1b0

// auto_bind_vtable_02ced3d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02ced3d0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02ced3d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02ced3d0

// auto_bind_vtable_02ced400: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02ced400 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02ced400()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02ced400

// auto_bind_vtable_02ced430: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02ced430 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02ced430()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02ced430

// auto_bind_vtable_02cef860: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cef860 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cef860()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cef860

// auto_bind_vtable_02cef890: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cef890 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cef890()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cef890

// auto_bind_vtable_02cef8c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cef8c0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cef8c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cef8c0

// auto_bind_vtable_02cf0050: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf0050 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf0050()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf0050

// auto_bind_vtable_02cf0080: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf0080 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf0080()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf0080

// auto_bind_vtable_02cf00b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf00b0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf00b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf00b0

// auto_bind_vtable_02cf11a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf11a0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf11a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf11a0

// auto_bind_vtable_02cf11d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf11d0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf11d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf11d0

// auto_bind_vtable_02cf1200: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf1200 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf1200()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf1200

// auto_bind_vtable_02cf19e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf19e0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf19e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf19e0

// auto_bind_vtable_02cf1a10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf1a10 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf1a10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf1a10

// auto_bind_vtable_02cf1a40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf1a40 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf1a40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf1a40

// auto_bind_vtable_02cf22f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf22f0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf22f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf22f0

// auto_bind_vtable_02cf2320: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf2320 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf2320()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf2320

// auto_bind_vtable_02cf2350: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf2350 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf2350()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf2350

// auto_bind_vtable_02cf3c70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf3c70 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf3c70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf3c70

// auto_bind_vtable_02cf3ca0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf3ca0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf3ca0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf3ca0

// auto_bind_vtable_02cf3cd0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf3cd0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf3cd0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf3cd0

// auto_bind_vtable_02cf4d00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf4d00 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf4d00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf4d00

// auto_bind_vtable_02cf4d30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf4d30 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf4d30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf4d30

// auto_bind_vtable_02cf4d60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf4d60 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf4d60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf4d60

// auto_bind_vtable_02cf5730: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf5730 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf5730()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf5730

// auto_bind_vtable_02cf5760: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf5760 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf5760()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf5760

// auto_bind_vtable_02cf5790: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf5790 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf5790()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf5790

// auto_bind_vtable_02cf74b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf74b0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf74b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf74b0

// auto_bind_vtable_02cf74e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf74e0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf74e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf74e0

// auto_bind_vtable_02cf7510: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf7510 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf7510()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf7510

// auto_bind_vtable_02cf7fc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf7fc0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf7fc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf7fc0

// auto_bind_vtable_02cf7ff0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf7ff0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf7ff0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf7ff0

// auto_bind_vtable_02cf8020: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf8020 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf8020()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf8020

// auto_bind_vtable_02cf8910: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf8910 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf8910()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf8910

// auto_bind_vtable_02cf8940: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf8940 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf8940()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf8940

// auto_bind_vtable_02cf8970: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf8970 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf8970()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf8970

// auto_bind_vtable_02cf8c70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf8c70 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf8c70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf8c70

// auto_bind_vtable_02cf8ca0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf8ca0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf8ca0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf8ca0

// auto_bind_vtable_02cf8cd0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf8cd0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf8cd0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf8cd0

// auto_bind_vtable_02cf9a30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf9a30 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf9a30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf9a30

// auto_bind_vtable_02cf9a60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf9a60 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf9a60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf9a60

// auto_bind_vtable_02cf9a90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cf9a90 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cf9a90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cf9a90

// auto_bind_vtable_02cfa220: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfa220 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfa220()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfa220

// auto_bind_vtable_02cfa250: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfa250 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfa250()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfa250

// auto_bind_vtable_02cfa280: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfa280 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfa280()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfa280

// auto_bind_vtable_02cfa670: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfa670 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfa670()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfa670

// auto_bind_vtable_02cfa6a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfa6a0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfa6a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfa6a0

// auto_bind_vtable_02cfa6d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfa6d0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfa6d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfa6d0

// auto_bind_vtable_02cfd050: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfd050 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfd050()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfd050

// auto_bind_vtable_02cfd080: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfd080 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfd080()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfd080

// auto_bind_vtable_02cfd0b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfd0b0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfd0b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfd0b0

// auto_bind_vtable_02cfd810: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfd810 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfd810()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfd810

// auto_bind_vtable_02cfd840: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfd840 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfd840()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfd840

// auto_bind_vtable_02cfd870: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfd870 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfd870()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfd870

// auto_bind_vtable_02cfd960: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfd960 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfd960()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfd960

// auto_bind_vtable_02cfd990: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfd990 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfd990()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfd990

// auto_bind_vtable_02cfd9c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfd9c0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfd9c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfd9c0

// auto_bind_vtable_02cffec0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cffec0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cffec0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cffec0

// auto_bind_vtable_02cffef0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cffef0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cffef0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cffef0

// auto_bind_vtable_02cfff20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02cfff20 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02cfff20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02cfff20

// auto_bind_vtable_02d00530: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d00530 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d00530()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d00530

// auto_bind_vtable_02d00560: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d00560 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d00560()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d00560

// auto_bind_vtable_02d00590: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d00590 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d00590()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d00590

// auto_bind_vtable_02d005c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d005c0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d005c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d005c0

// auto_bind_vtable_02d005f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d005f0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d005f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d005f0

// auto_bind_vtable_02d00620: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d00620 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d00620()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d00620

// auto_bind_vtable_02d00650: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d00650 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d00650()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d00650

// auto_bind_vtable_02d00680: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d00680 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d00680()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d00680

// auto_bind_vtable_02d006b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d006b0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d006b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d006b0

// auto_bind_vtable_02d00c30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d00c30 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d00c30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d00c30

// auto_bind_vtable_02d00c60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d00c60 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d00c60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d00c60

// auto_bind_vtable_02d00c90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d00c90 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d00c90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d00c90

// auto_bind_vtable_02d01030: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d01030 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d01030()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d01030

// auto_bind_vtable_02d01060: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d01060 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d01060()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d01060

// auto_bind_vtable_02d01090: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d01090 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d01090()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d01090

// auto_bind_vtable_02d01790: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d01790 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d01790()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d01790

// auto_bind_vtable_02d017c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d017c0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d017c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d017c0

// auto_bind_vtable_02d017f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d017f0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d017f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d017f0

// auto_bind_vtable_02d023d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d023d0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d023d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d023d0

// auto_bind_vtable_02d02400: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d02400 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d02400()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d02400

// auto_bind_vtable_02d02430: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d02430 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d02430()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d02430

// auto_bind_vtable_02d02e70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d02e70 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d02e70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d02e70

// auto_bind_vtable_02d02ea0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d02ea0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d02ea0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d02ea0

// auto_bind_vtable_02d02ed0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d02ed0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d02ed0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d02ed0

// auto_bind_vtable_02d03320: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d03320 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d03320()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d03320

// auto_bind_vtable_02d03350: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d03350 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d03350()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d03350

// auto_bind_vtable_02d03380: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d03380 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d03380()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d03380

// auto_bind_vtable_02d03690: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d03690 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d03690()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d03690

// auto_bind_vtable_02d036c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d036c0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d036c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d036c0

// auto_bind_vtable_02d036f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d036f0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d036f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d036f0

// auto_bind_vtable_02d03c00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d03c00 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d03c00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d03c00

// auto_bind_vtable_02d03c30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d03c30 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d03c30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d03c30

// auto_bind_vtable_02d03c60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d03c60 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d03c60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d03c60

// auto_bind_vtable_02d04330: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d04330 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d04330()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d04330

// auto_bind_vtable_02d04360: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d04360 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d04360()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d04360

// auto_bind_vtable_02d04390: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d04390 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d04390()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d04390

// auto_bind_vtable_02d043f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d043f0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d043f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d043f0

// auto_bind_vtable_02d04420: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d04420 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d04420()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d04420

// auto_bind_vtable_02d04450: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02d04450 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02d04450()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02d04450

// auto_bind_vtable_02e58ea0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02e58ea0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02e58ea0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02e58ea0

// auto_bind_vtable_02e58ed0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02e58ed0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02e58ed0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02e58ed0

// auto_bind_vtable_02e58f00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02e58f00 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02e58f00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02e58f00

// auto_bind_vtable_02e59030: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02e59030 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02e59030()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02e59030

// auto_bind_vtable_02e59060: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02e59060 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02e59060()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02e59060

// auto_bind_vtable_02e59090: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02e59090 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02e59090()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02e59090

// auto_bind_vtable_02e59660: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02e59660 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02e59660()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02e59660
