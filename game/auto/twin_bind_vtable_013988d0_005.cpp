// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_bind_vtable_56b4840, in game/misc/bind_vtable_56b4840.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_bind_vtable_01426da0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01426da0 {

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
extern "C" void bb_auto_bind_vtable_01426da0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01426da0

// auto_bind_vtable_01426dd0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01426dd0 {

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
extern "C" void bb_auto_bind_vtable_01426dd0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01426dd0

// auto_bind_vtable_01426e00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01426e00 {

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
extern "C" void bb_auto_bind_vtable_01426e00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01426e00

// auto_bind_vtable_01427500: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01427500 {

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
extern "C" void bb_auto_bind_vtable_01427500()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01427500

// auto_bind_vtable_01427530: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01427530 {

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
extern "C" void bb_auto_bind_vtable_01427530()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01427530

// auto_bind_vtable_01427560: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01427560 {

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
extern "C" void bb_auto_bind_vtable_01427560()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01427560

// auto_bind_vtable_014325f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014325f0 {

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
extern "C" void bb_auto_bind_vtable_014325f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014325f0

// auto_bind_vtable_01432620: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01432620 {

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
extern "C" void bb_auto_bind_vtable_01432620()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01432620

// auto_bind_vtable_01432650: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01432650 {

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
extern "C" void bb_auto_bind_vtable_01432650()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01432650

// auto_bind_vtable_014329c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014329c0 {

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
extern "C" void bb_auto_bind_vtable_014329c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014329c0

// auto_bind_vtable_014329f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014329f0 {

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
extern "C" void bb_auto_bind_vtable_014329f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014329f0

// auto_bind_vtable_01432a20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01432a20 {

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
extern "C" void bb_auto_bind_vtable_01432a20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01432a20

// auto_bind_vtable_01432ab0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01432ab0 {

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
extern "C" void bb_auto_bind_vtable_01432ab0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01432ab0

// auto_bind_vtable_01432ae0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01432ae0 {

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
extern "C" void bb_auto_bind_vtable_01432ae0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01432ae0

// auto_bind_vtable_01432b10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01432b10 {

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
extern "C" void bb_auto_bind_vtable_01432b10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01432b10

// auto_bind_vtable_01432c10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01432c10 {

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
extern "C" void bb_auto_bind_vtable_01432c10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01432c10

// auto_bind_vtable_01432c40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01432c40 {

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
extern "C" void bb_auto_bind_vtable_01432c40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01432c40

// auto_bind_vtable_01432c70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01432c70 {

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
extern "C" void bb_auto_bind_vtable_01432c70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01432c70

// auto_bind_vtable_01432f80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01432f80 {

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
extern "C" void bb_auto_bind_vtable_01432f80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01432f80

// auto_bind_vtable_01432fb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01432fb0 {

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
extern "C" void bb_auto_bind_vtable_01432fb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01432fb0

// auto_bind_vtable_01432fe0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01432fe0 {

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
extern "C" void bb_auto_bind_vtable_01432fe0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01432fe0

// auto_bind_vtable_014332b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014332b0 {

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
extern "C" void bb_auto_bind_vtable_014332b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014332b0

// auto_bind_vtable_014332e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014332e0 {

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
extern "C" void bb_auto_bind_vtable_014332e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014332e0

// auto_bind_vtable_01433310: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01433310 {

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
extern "C" void bb_auto_bind_vtable_01433310()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01433310

// auto_bind_vtable_014333b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014333b0 {

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
extern "C" void bb_auto_bind_vtable_014333b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014333b0

// auto_bind_vtable_014333e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014333e0 {

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
extern "C" void bb_auto_bind_vtable_014333e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014333e0

// auto_bind_vtable_01433410: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01433410 {

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
extern "C" void bb_auto_bind_vtable_01433410()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01433410

// auto_bind_vtable_01433700: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01433700 {

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
extern "C" void bb_auto_bind_vtable_01433700()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01433700

// auto_bind_vtable_01433730: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01433730 {

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
extern "C" void bb_auto_bind_vtable_01433730()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01433730

// auto_bind_vtable_01433760: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01433760 {

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
extern "C" void bb_auto_bind_vtable_01433760()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01433760

// auto_bind_vtable_01433a60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01433a60 {

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
extern "C" void bb_auto_bind_vtable_01433a60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01433a60

// auto_bind_vtable_01433a90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01433a90 {

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
extern "C" void bb_auto_bind_vtable_01433a90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01433a90

// auto_bind_vtable_01433ac0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01433ac0 {

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
extern "C" void bb_auto_bind_vtable_01433ac0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01433ac0

// auto_bind_vtable_01434980: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01434980 {

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
extern "C" void bb_auto_bind_vtable_01434980()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01434980

// auto_bind_vtable_014349b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014349b0 {

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
extern "C" void bb_auto_bind_vtable_014349b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014349b0

// auto_bind_vtable_014349e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014349e0 {

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
extern "C" void bb_auto_bind_vtable_014349e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014349e0

// auto_bind_vtable_01435910: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01435910 {

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
extern "C" void bb_auto_bind_vtable_01435910()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01435910

// auto_bind_vtable_01435940: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01435940 {

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
extern "C" void bb_auto_bind_vtable_01435940()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01435940

// auto_bind_vtable_01435970: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01435970 {

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
extern "C" void bb_auto_bind_vtable_01435970()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01435970

// auto_bind_vtable_01436930: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01436930 {

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
extern "C" void bb_auto_bind_vtable_01436930()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01436930

// auto_bind_vtable_01436960: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01436960 {

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
extern "C" void bb_auto_bind_vtable_01436960()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01436960

// auto_bind_vtable_01436990: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01436990 {

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
extern "C" void bb_auto_bind_vtable_01436990()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01436990

// auto_bind_vtable_01436b60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01436b60 {

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
extern "C" void bb_auto_bind_vtable_01436b60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01436b60

// auto_bind_vtable_01436b90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01436b90 {

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
extern "C" void bb_auto_bind_vtable_01436b90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01436b90

// auto_bind_vtable_01436bc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01436bc0 {

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
extern "C" void bb_auto_bind_vtable_01436bc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01436bc0

// auto_bind_vtable_01436e50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01436e50 {

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
extern "C" void bb_auto_bind_vtable_01436e50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01436e50

// auto_bind_vtable_01436e80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01436e80 {

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
extern "C" void bb_auto_bind_vtable_01436e80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01436e80

// auto_bind_vtable_01436eb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01436eb0 {

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
extern "C" void bb_auto_bind_vtable_01436eb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01436eb0

// auto_bind_vtable_014371f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014371f0 {

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
extern "C" void bb_auto_bind_vtable_014371f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014371f0

// auto_bind_vtable_01437220: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437220 {

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
extern "C" void bb_auto_bind_vtable_01437220()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437220

// auto_bind_vtable_01437250: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437250 {

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
extern "C" void bb_auto_bind_vtable_01437250()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437250

// auto_bind_vtable_01437500: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437500 {

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
extern "C" void bb_auto_bind_vtable_01437500()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437500

// auto_bind_vtable_01437530: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437530 {

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
extern "C" void bb_auto_bind_vtable_01437530()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437530

// auto_bind_vtable_01437560: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437560 {

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
extern "C" void bb_auto_bind_vtable_01437560()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437560

// auto_bind_vtable_01437810: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437810 {

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
extern "C" void bb_auto_bind_vtable_01437810()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437810

// auto_bind_vtable_01437840: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437840 {

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
extern "C" void bb_auto_bind_vtable_01437840()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437840

// auto_bind_vtable_01437870: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437870 {

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
extern "C" void bb_auto_bind_vtable_01437870()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437870

// auto_bind_vtable_01437b20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437b20 {

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
extern "C" void bb_auto_bind_vtable_01437b20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437b20

// auto_bind_vtable_01437b50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437b50 {

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
extern "C" void bb_auto_bind_vtable_01437b50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437b50

// auto_bind_vtable_01437b80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437b80 {

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
extern "C" void bb_auto_bind_vtable_01437b80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437b80

// auto_bind_vtable_01437e30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437e30 {

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
extern "C" void bb_auto_bind_vtable_01437e30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437e30

// auto_bind_vtable_01437e60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437e60 {

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
extern "C" void bb_auto_bind_vtable_01437e60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437e60

// auto_bind_vtable_01437e90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01437e90 {

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
extern "C" void bb_auto_bind_vtable_01437e90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01437e90

// auto_bind_vtable_01438af0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01438af0 {

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
extern "C" void bb_auto_bind_vtable_01438af0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01438af0

// auto_bind_vtable_01438b20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01438b20 {

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
extern "C" void bb_auto_bind_vtable_01438b20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01438b20

// auto_bind_vtable_01438b50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01438b50 {

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
extern "C" void bb_auto_bind_vtable_01438b50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01438b50

// auto_bind_vtable_014391a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014391a0 {

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
extern "C" void bb_auto_bind_vtable_014391a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014391a0

// auto_bind_vtable_014391d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014391d0 {

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
extern "C" void bb_auto_bind_vtable_014391d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014391d0

// auto_bind_vtable_01439200: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01439200 {

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
extern "C" void bb_auto_bind_vtable_01439200()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01439200

// auto_bind_vtable_014393a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014393a0 {

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
extern "C" void bb_auto_bind_vtable_014393a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014393a0

// auto_bind_vtable_014393d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014393d0 {

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
extern "C" void bb_auto_bind_vtable_014393d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014393d0

// auto_bind_vtable_01439400: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01439400 {

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
extern "C" void bb_auto_bind_vtable_01439400()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01439400

// auto_bind_vtable_0143b9d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143b9d0 {

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
extern "C" void bb_auto_bind_vtable_0143b9d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143b9d0

// auto_bind_vtable_0143ba00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143ba00 {

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
extern "C" void bb_auto_bind_vtable_0143ba00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143ba00

// auto_bind_vtable_0143ba30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143ba30 {

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
extern "C" void bb_auto_bind_vtable_0143ba30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143ba30

// auto_bind_vtable_0143bdf0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143bdf0 {

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
extern "C" void bb_auto_bind_vtable_0143bdf0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143bdf0

// auto_bind_vtable_0143be20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143be20 {

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
extern "C" void bb_auto_bind_vtable_0143be20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143be20

// auto_bind_vtable_0143be50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143be50 {

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
extern "C" void bb_auto_bind_vtable_0143be50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143be50

// auto_bind_vtable_0143bf20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143bf20 {

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
extern "C" void bb_auto_bind_vtable_0143bf20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143bf20

// auto_bind_vtable_0143bf50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143bf50 {

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
extern "C" void bb_auto_bind_vtable_0143bf50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143bf50

// auto_bind_vtable_0143bf80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143bf80 {

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
extern "C" void bb_auto_bind_vtable_0143bf80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143bf80

// auto_bind_vtable_0143ce10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143ce10 {

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
extern "C" void bb_auto_bind_vtable_0143ce10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143ce10

// auto_bind_vtable_0143ce40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143ce40 {

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
extern "C" void bb_auto_bind_vtable_0143ce40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143ce40

// auto_bind_vtable_0143ce70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143ce70 {

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
extern "C" void bb_auto_bind_vtable_0143ce70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143ce70

// auto_bind_vtable_0143d470: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143d470 {

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
extern "C" void bb_auto_bind_vtable_0143d470()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143d470

// auto_bind_vtable_0143d4a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143d4a0 {

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
extern "C" void bb_auto_bind_vtable_0143d4a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143d4a0

// auto_bind_vtable_0143d4d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143d4d0 {

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
extern "C" void bb_auto_bind_vtable_0143d4d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143d4d0

// auto_bind_vtable_0143d810: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143d810 {

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
extern "C" void bb_auto_bind_vtable_0143d810()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143d810

// auto_bind_vtable_0143d840: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143d840 {

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
extern "C" void bb_auto_bind_vtable_0143d840()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143d840

// auto_bind_vtable_0143d870: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143d870 {

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
extern "C" void bb_auto_bind_vtable_0143d870()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143d870

// auto_bind_vtable_0143e0e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143e0e0 {

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
extern "C" void bb_auto_bind_vtable_0143e0e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143e0e0

// auto_bind_vtable_0143e110: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143e110 {

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
extern "C" void bb_auto_bind_vtable_0143e110()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143e110

// auto_bind_vtable_0143e140: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143e140 {

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
extern "C" void bb_auto_bind_vtable_0143e140()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143e140

// auto_bind_vtable_0143e540: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143e540 {

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
extern "C" void bb_auto_bind_vtable_0143e540()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143e540

// auto_bind_vtable_0143e570: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143e570 {

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
extern "C" void bb_auto_bind_vtable_0143e570()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143e570

// auto_bind_vtable_0143e5a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143e5a0 {

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
extern "C" void bb_auto_bind_vtable_0143e5a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143e5a0

// auto_bind_vtable_0143eff0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143eff0 {

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
extern "C" void bb_auto_bind_vtable_0143eff0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143eff0

// auto_bind_vtable_0143f020: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143f020 {

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
extern "C" void bb_auto_bind_vtable_0143f020()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143f020

// auto_bind_vtable_0143f050: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143f050 {

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
extern "C" void bb_auto_bind_vtable_0143f050()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143f050

// auto_bind_vtable_0143f8b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143f8b0 {

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
extern "C" void bb_auto_bind_vtable_0143f8b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143f8b0

// auto_bind_vtable_0143f8e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143f8e0 {

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
extern "C" void bb_auto_bind_vtable_0143f8e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143f8e0

// auto_bind_vtable_0143f910: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143f910 {

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
extern "C" void bb_auto_bind_vtable_0143f910()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143f910

// auto_bind_vtable_0143fa30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143fa30 {

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
extern "C" void bb_auto_bind_vtable_0143fa30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143fa30

// auto_bind_vtable_0143fa60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143fa60 {

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
extern "C" void bb_auto_bind_vtable_0143fa60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143fa60

// auto_bind_vtable_0143fa90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0143fa90 {

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
extern "C" void bb_auto_bind_vtable_0143fa90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0143fa90

// auto_bind_vtable_014405b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014405b0 {

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
extern "C" void bb_auto_bind_vtable_014405b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014405b0

// auto_bind_vtable_014405e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014405e0 {

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
extern "C" void bb_auto_bind_vtable_014405e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014405e0

// auto_bind_vtable_01440610: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01440610 {

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
extern "C" void bb_auto_bind_vtable_01440610()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01440610

// auto_bind_vtable_01440700: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01440700 {

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
extern "C" void bb_auto_bind_vtable_01440700()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01440700

// auto_bind_vtable_01440730: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01440730 {

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
extern "C" void bb_auto_bind_vtable_01440730()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01440730

// auto_bind_vtable_01440760: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01440760 {

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
extern "C" void bb_auto_bind_vtable_01440760()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01440760

// auto_bind_vtable_01440d60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01440d60 {

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
extern "C" void bb_auto_bind_vtable_01440d60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01440d60

// auto_bind_vtable_01440d90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01440d90 {

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
extern "C" void bb_auto_bind_vtable_01440d90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01440d90

// auto_bind_vtable_01440dc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01440dc0 {

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
extern "C" void bb_auto_bind_vtable_01440dc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01440dc0

// auto_bind_vtable_014412b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014412b0 {

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
extern "C" void bb_auto_bind_vtable_014412b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014412b0

// auto_bind_vtable_014412e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014412e0 {

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
extern "C" void bb_auto_bind_vtable_014412e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014412e0

// auto_bind_vtable_01441310: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01441310 {

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
extern "C" void bb_auto_bind_vtable_01441310()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01441310

// auto_bind_vtable_014415a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014415a0 {

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
extern "C" void bb_auto_bind_vtable_014415a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014415a0

// auto_bind_vtable_014415d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014415d0 {

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
extern "C" void bb_auto_bind_vtable_014415d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014415d0

// auto_bind_vtable_01441600: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01441600 {

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
extern "C" void bb_auto_bind_vtable_01441600()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01441600

// auto_bind_vtable_01441870: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01441870 {

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
extern "C" void bb_auto_bind_vtable_01441870()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01441870

// auto_bind_vtable_014418a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014418a0 {

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
extern "C" void bb_auto_bind_vtable_014418a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014418a0

// auto_bind_vtable_014418d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014418d0 {

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
extern "C" void bb_auto_bind_vtable_014418d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014418d0

// auto_bind_vtable_014422c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014422c0 {

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
extern "C" void bb_auto_bind_vtable_014422c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014422c0

// auto_bind_vtable_014422f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014422f0 {

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
extern "C" void bb_auto_bind_vtable_014422f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014422f0

// auto_bind_vtable_01442320: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01442320 {

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
extern "C" void bb_auto_bind_vtable_01442320()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01442320

// auto_bind_vtable_01444270: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01444270 {

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
extern "C" void bb_auto_bind_vtable_01444270()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01444270

// auto_bind_vtable_014442a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014442a0 {

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
extern "C" void bb_auto_bind_vtable_014442a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014442a0

// auto_bind_vtable_014442d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014442d0 {

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
extern "C" void bb_auto_bind_vtable_014442d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014442d0

// auto_bind_vtable_01444a40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01444a40 {

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
extern "C" void bb_auto_bind_vtable_01444a40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01444a40

// auto_bind_vtable_01444a70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01444a70 {

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
extern "C" void bb_auto_bind_vtable_01444a70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01444a70

// auto_bind_vtable_01444aa0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01444aa0 {

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
extern "C" void bb_auto_bind_vtable_01444aa0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01444aa0

// auto_bind_vtable_01444dd0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01444dd0 {

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
extern "C" void bb_auto_bind_vtable_01444dd0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01444dd0

// auto_bind_vtable_01444e00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01444e00 {

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
extern "C" void bb_auto_bind_vtable_01444e00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01444e00

// auto_bind_vtable_01444e30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01444e30 {

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
extern "C" void bb_auto_bind_vtable_01444e30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01444e30

// auto_bind_vtable_014452d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014452d0 {

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
extern "C" void bb_auto_bind_vtable_014452d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014452d0

// auto_bind_vtable_01445300: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01445300 {

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
extern "C" void bb_auto_bind_vtable_01445300()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01445300

// auto_bind_vtable_01445330: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01445330 {

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
extern "C" void bb_auto_bind_vtable_01445330()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01445330

// auto_bind_vtable_01445820: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01445820 {

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
extern "C" void bb_auto_bind_vtable_01445820()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01445820

// auto_bind_vtable_01445850: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01445850 {

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
extern "C" void bb_auto_bind_vtable_01445850()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01445850

// auto_bind_vtable_01445880: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01445880 {

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
extern "C" void bb_auto_bind_vtable_01445880()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01445880

// auto_bind_vtable_014469b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014469b0 {

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
extern "C" void bb_auto_bind_vtable_014469b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014469b0

// auto_bind_vtable_014469e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014469e0 {

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
extern "C" void bb_auto_bind_vtable_014469e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014469e0

// auto_bind_vtable_01446a10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01446a10 {

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
extern "C" void bb_auto_bind_vtable_01446a10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01446a10

// auto_bind_vtable_01447e10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01447e10 {

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
extern "C" void bb_auto_bind_vtable_01447e10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01447e10

// auto_bind_vtable_01447e40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01447e40 {

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
extern "C" void bb_auto_bind_vtable_01447e40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01447e40

// auto_bind_vtable_01447e70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01447e70 {

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
extern "C" void bb_auto_bind_vtable_01447e70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01447e70

// auto_bind_vtable_01448390: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01448390 {

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
extern "C" void bb_auto_bind_vtable_01448390()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01448390

// auto_bind_vtable_014483c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014483c0 {

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
extern "C" void bb_auto_bind_vtable_014483c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014483c0

// auto_bind_vtable_014483f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014483f0 {

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
extern "C" void bb_auto_bind_vtable_014483f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014483f0

// auto_bind_vtable_014488e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014488e0 {

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
extern "C" void bb_auto_bind_vtable_014488e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014488e0

// auto_bind_vtable_01448910: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01448910 {

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
extern "C" void bb_auto_bind_vtable_01448910()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01448910

// auto_bind_vtable_01448940: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01448940 {

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
extern "C" void bb_auto_bind_vtable_01448940()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01448940

// auto_bind_vtable_014489f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014489f0 {

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
extern "C" void bb_auto_bind_vtable_014489f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014489f0

// auto_bind_vtable_01448a20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01448a20 {

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
extern "C" void bb_auto_bind_vtable_01448a20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01448a20

// auto_bind_vtable_01448a50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01448a50 {

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
extern "C" void bb_auto_bind_vtable_01448a50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01448a50

// auto_bind_vtable_01448ce0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01448ce0 {

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
extern "C" void bb_auto_bind_vtable_01448ce0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01448ce0

// auto_bind_vtable_01448d10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01448d10 {

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
extern "C" void bb_auto_bind_vtable_01448d10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01448d10

// auto_bind_vtable_01448d40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01448d40 {

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
extern "C" void bb_auto_bind_vtable_01448d40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01448d40

// auto_bind_vtable_01449120: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01449120 {

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
extern "C" void bb_auto_bind_vtable_01449120()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01449120

// auto_bind_vtable_01449150: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01449150 {

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
extern "C" void bb_auto_bind_vtable_01449150()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01449150

// auto_bind_vtable_01449180: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01449180 {

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
extern "C" void bb_auto_bind_vtable_01449180()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01449180

// auto_bind_vtable_014493c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014493c0 {

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
extern "C" void bb_auto_bind_vtable_014493c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014493c0

// auto_bind_vtable_014493f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014493f0 {

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
extern "C" void bb_auto_bind_vtable_014493f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014493f0

// auto_bind_vtable_01449420: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01449420 {

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
extern "C" void bb_auto_bind_vtable_01449420()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01449420

// auto_bind_vtable_0144a740: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0144a740 {

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
extern "C" void bb_auto_bind_vtable_0144a740()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0144a740

// auto_bind_vtable_0144a770: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0144a770 {

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
extern "C" void bb_auto_bind_vtable_0144a770()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0144a770

// auto_bind_vtable_0144a7a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0144a7a0 {

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
extern "C" void bb_auto_bind_vtable_0144a7a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0144a7a0

// auto_bind_vtable_0144ae60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0144ae60 {

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
extern "C" void bb_auto_bind_vtable_0144ae60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0144ae60

// auto_bind_vtable_0144ae90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0144ae90 {

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
extern "C" void bb_auto_bind_vtable_0144ae90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0144ae90

// auto_bind_vtable_0144aec0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0144aec0 {

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
extern "C" void bb_auto_bind_vtable_0144aec0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0144aec0

// auto_bind_vtable_0144ba10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0144ba10 {

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
extern "C" void bb_auto_bind_vtable_0144ba10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0144ba10

// auto_bind_vtable_0144ba40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0144ba40 {

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
extern "C" void bb_auto_bind_vtable_0144ba40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0144ba40

// auto_bind_vtable_0144ba70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0144ba70 {

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
extern "C" void bb_auto_bind_vtable_0144ba70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0144ba70

// auto_bind_vtable_01450720: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01450720 {

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
extern "C" void bb_auto_bind_vtable_01450720()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01450720

// auto_bind_vtable_01450750: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01450750 {

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
extern "C" void bb_auto_bind_vtable_01450750()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01450750

// auto_bind_vtable_01450780: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01450780 {

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
extern "C" void bb_auto_bind_vtable_01450780()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01450780

// auto_bind_vtable_01450e10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01450e10 {

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
extern "C" void bb_auto_bind_vtable_01450e10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01450e10

// auto_bind_vtable_01450e40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01450e40 {

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
extern "C" void bb_auto_bind_vtable_01450e40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01450e40

// auto_bind_vtable_01450e70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01450e70 {

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
extern "C" void bb_auto_bind_vtable_01450e70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01450e70

// auto_bind_vtable_014511b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014511b0 {

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
extern "C" void bb_auto_bind_vtable_014511b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014511b0

// auto_bind_vtable_014511e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014511e0 {

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
extern "C" void bb_auto_bind_vtable_014511e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014511e0

// auto_bind_vtable_01451210: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01451210 {

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
extern "C" void bb_auto_bind_vtable_01451210()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01451210

// auto_bind_vtable_01451c90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01451c90 {

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
extern "C" void bb_auto_bind_vtable_01451c90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01451c90

// auto_bind_vtable_01451cc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01451cc0 {

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
extern "C" void bb_auto_bind_vtable_01451cc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01451cc0

// auto_bind_vtable_01451cf0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01451cf0 {

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
extern "C" void bb_auto_bind_vtable_01451cf0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01451cf0

// auto_bind_vtable_01455be0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01455be0 {

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
extern "C" void bb_auto_bind_vtable_01455be0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01455be0

// auto_bind_vtable_01455c10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01455c10 {

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
extern "C" void bb_auto_bind_vtable_01455c10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01455c10

// auto_bind_vtable_01455c40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01455c40 {

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
extern "C" void bb_auto_bind_vtable_01455c40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01455c40

// auto_bind_vtable_01455cc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01455cc0 {

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
extern "C" void bb_auto_bind_vtable_01455cc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01455cc0

// auto_bind_vtable_01455cf0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01455cf0 {

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
extern "C" void bb_auto_bind_vtable_01455cf0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01455cf0

// auto_bind_vtable_01455d20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01455d20 {

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
extern "C" void bb_auto_bind_vtable_01455d20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01455d20

// auto_bind_vtable_01456040: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01456040 {

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
extern "C" void bb_auto_bind_vtable_01456040()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01456040

// auto_bind_vtable_01456070: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01456070 {

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
extern "C" void bb_auto_bind_vtable_01456070()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01456070

// auto_bind_vtable_014560a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_014560a0 {

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
extern "C" void bb_auto_bind_vtable_014560a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_014560a0

// auto_bind_vtable_01456a10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01456a10 {

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
extern "C" void bb_auto_bind_vtable_01456a10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01456a10

// auto_bind_vtable_01456a40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01456a40 {

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
extern "C" void bb_auto_bind_vtable_01456a40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01456a40

// auto_bind_vtable_01456a70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01456a70 {

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
extern "C" void bb_auto_bind_vtable_01456a70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01456a70

// auto_bind_vtable_01456cc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01456cc0 {

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
extern "C" void bb_auto_bind_vtable_01456cc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01456cc0

// auto_bind_vtable_01456cf0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01456cf0 {

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
extern "C" void bb_auto_bind_vtable_01456cf0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01456cf0
