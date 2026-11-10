// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_bind_vtable_56b4840, in game/misc/bind_vtable_56b4840.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_bind_vtable_016e6ef0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e6ef0 {

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
extern "C" void bb_auto_bind_vtable_016e6ef0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e6ef0

// auto_bind_vtable_016e6f20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e6f20 {

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
extern "C" void bb_auto_bind_vtable_016e6f20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e6f20

// auto_bind_vtable_016e7310: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e7310 {

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
extern "C" void bb_auto_bind_vtable_016e7310()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e7310

// auto_bind_vtable_016e7340: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e7340 {

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
extern "C" void bb_auto_bind_vtable_016e7340()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e7340

// auto_bind_vtable_016e7370: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e7370 {

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
extern "C" void bb_auto_bind_vtable_016e7370()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e7370

// auto_bind_vtable_016e74b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e74b0 {

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
extern "C" void bb_auto_bind_vtable_016e74b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e74b0

// auto_bind_vtable_016e74e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e74e0 {

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
extern "C" void bb_auto_bind_vtable_016e74e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e74e0

// auto_bind_vtable_016e7510: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e7510 {

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
extern "C" void bb_auto_bind_vtable_016e7510()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e7510

// auto_bind_vtable_016e7a10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e7a10 {

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
extern "C" void bb_auto_bind_vtable_016e7a10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e7a10

// auto_bind_vtable_016e7a40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e7a40 {

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
extern "C" void bb_auto_bind_vtable_016e7a40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e7a40

// auto_bind_vtable_016e7a70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e7a70 {

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
extern "C" void bb_auto_bind_vtable_016e7a70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e7a70

// auto_bind_vtable_016e8400: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e8400 {

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
extern "C" void bb_auto_bind_vtable_016e8400()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e8400

// auto_bind_vtable_016e8430: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e8430 {

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
extern "C" void bb_auto_bind_vtable_016e8430()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e8430

// auto_bind_vtable_016e8460: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e8460 {

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
extern "C" void bb_auto_bind_vtable_016e8460()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e8460

// auto_bind_vtable_016e8760: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e8760 {

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
extern "C" void bb_auto_bind_vtable_016e8760()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e8760

// auto_bind_vtable_016e8790: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e8790 {

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
extern "C" void bb_auto_bind_vtable_016e8790()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e8790

// auto_bind_vtable_016e87c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e87c0 {

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
extern "C" void bb_auto_bind_vtable_016e87c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e87c0

// auto_bind_vtable_016e9360: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e9360 {

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
extern "C" void bb_auto_bind_vtable_016e9360()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e9360

// auto_bind_vtable_016e9390: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e9390 {

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
extern "C" void bb_auto_bind_vtable_016e9390()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e9390

// auto_bind_vtable_016e93c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016e93c0 {

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
extern "C" void bb_auto_bind_vtable_016e93c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016e93c0

// auto_bind_vtable_016ea230: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ea230 {

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
extern "C" void bb_auto_bind_vtable_016ea230()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ea230

// auto_bind_vtable_016ea260: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ea260 {

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
extern "C" void bb_auto_bind_vtable_016ea260()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ea260

// auto_bind_vtable_016ea290: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ea290 {

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
extern "C" void bb_auto_bind_vtable_016ea290()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ea290

// auto_bind_vtable_016ea3d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ea3d0 {

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
extern "C" void bb_auto_bind_vtable_016ea3d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ea3d0

// auto_bind_vtable_016ea400: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ea400 {

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
extern "C" void bb_auto_bind_vtable_016ea400()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ea400

// auto_bind_vtable_016ea430: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ea430 {

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
extern "C" void bb_auto_bind_vtable_016ea430()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ea430

// auto_bind_vtable_016ea570: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ea570 {

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
extern "C" void bb_auto_bind_vtable_016ea570()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ea570

// auto_bind_vtable_016ea5a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ea5a0 {

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
extern "C" void bb_auto_bind_vtable_016ea5a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ea5a0

// auto_bind_vtable_016ea5d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ea5d0 {

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
extern "C" void bb_auto_bind_vtable_016ea5d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ea5d0

// auto_bind_vtable_016eb1d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eb1d0 {

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
extern "C" void bb_auto_bind_vtable_016eb1d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eb1d0

// auto_bind_vtable_016eb200: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eb200 {

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
extern "C" void bb_auto_bind_vtable_016eb200()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eb200

// auto_bind_vtable_016eb230: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eb230 {

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
extern "C" void bb_auto_bind_vtable_016eb230()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eb230

// auto_bind_vtable_016eb5d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eb5d0 {

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
extern "C" void bb_auto_bind_vtable_016eb5d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eb5d0

// auto_bind_vtable_016eb600: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eb600 {

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
extern "C" void bb_auto_bind_vtable_016eb600()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eb600

// auto_bind_vtable_016eb630: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eb630 {

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
extern "C" void bb_auto_bind_vtable_016eb630()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eb630

// auto_bind_vtable_016eb7b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eb7b0 {

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
extern "C" void bb_auto_bind_vtable_016eb7b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eb7b0

// auto_bind_vtable_016eb7e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eb7e0 {

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
extern "C" void bb_auto_bind_vtable_016eb7e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eb7e0

// auto_bind_vtable_016eb810: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eb810 {

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
extern "C" void bb_auto_bind_vtable_016eb810()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eb810

// auto_bind_vtable_016eb9b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eb9b0 {

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
extern "C" void bb_auto_bind_vtable_016eb9b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eb9b0

// auto_bind_vtable_016eb9e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eb9e0 {

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
extern "C" void bb_auto_bind_vtable_016eb9e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eb9e0

// auto_bind_vtable_016eba10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eba10 {

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
extern "C" void bb_auto_bind_vtable_016eba10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eba10

// auto_bind_vtable_016ebe50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ebe50 {

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
extern "C" void bb_auto_bind_vtable_016ebe50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ebe50

// auto_bind_vtable_016ebe80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ebe80 {

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
extern "C" void bb_auto_bind_vtable_016ebe80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ebe80

// auto_bind_vtable_016ebeb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ebeb0 {

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
extern "C" void bb_auto_bind_vtable_016ebeb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ebeb0

// auto_bind_vtable_016ec7f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ec7f0 {

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
extern "C" void bb_auto_bind_vtable_016ec7f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ec7f0

// auto_bind_vtable_016ec820: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ec820 {

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
extern "C" void bb_auto_bind_vtable_016ec820()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ec820

// auto_bind_vtable_016ec850: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ec850 {

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
extern "C" void bb_auto_bind_vtable_016ec850()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ec850

// auto_bind_vtable_016edc50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016edc50 {

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
extern "C" void bb_auto_bind_vtable_016edc50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016edc50

// auto_bind_vtable_016edc80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016edc80 {

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
extern "C" void bb_auto_bind_vtable_016edc80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016edc80

// auto_bind_vtable_016edcb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016edcb0 {

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
extern "C" void bb_auto_bind_vtable_016edcb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016edcb0

// auto_bind_vtable_016ee7d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ee7d0 {

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
extern "C" void bb_auto_bind_vtable_016ee7d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ee7d0

// auto_bind_vtable_016ee800: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ee800 {

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
extern "C" void bb_auto_bind_vtable_016ee800()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ee800

// auto_bind_vtable_016ee830: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ee830 {

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
extern "C" void bb_auto_bind_vtable_016ee830()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ee830

// auto_bind_vtable_016eeeb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eeeb0 {

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
extern "C" void bb_auto_bind_vtable_016eeeb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eeeb0

// auto_bind_vtable_016eeee0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eeee0 {

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
extern "C" void bb_auto_bind_vtable_016eeee0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eeee0

// auto_bind_vtable_016eef10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016eef10 {

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
extern "C" void bb_auto_bind_vtable_016eef10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016eef10

// auto_bind_vtable_016ef520: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ef520 {

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
extern "C" void bb_auto_bind_vtable_016ef520()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ef520

// auto_bind_vtable_016ef550: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ef550 {

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
extern "C" void bb_auto_bind_vtable_016ef550()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ef550

// auto_bind_vtable_016ef580: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ef580 {

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
extern "C" void bb_auto_bind_vtable_016ef580()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ef580

// auto_bind_vtable_016ef6c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ef6c0 {

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
extern "C" void bb_auto_bind_vtable_016ef6c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ef6c0

// auto_bind_vtable_016ef6f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ef6f0 {

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
extern "C" void bb_auto_bind_vtable_016ef6f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ef6f0

// auto_bind_vtable_016ef720: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ef720 {

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
extern "C" void bb_auto_bind_vtable_016ef720()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ef720

// auto_bind_vtable_016f1a30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016f1a30 {

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
extern "C" void bb_auto_bind_vtable_016f1a30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016f1a30

// auto_bind_vtable_016f1a60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016f1a60 {

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
extern "C" void bb_auto_bind_vtable_016f1a60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016f1a60

// auto_bind_vtable_016f1a90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016f1a90 {

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
extern "C" void bb_auto_bind_vtable_016f1a90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016f1a90

// auto_bind_vtable_016f25f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016f25f0 {

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
extern "C" void bb_auto_bind_vtable_016f25f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016f25f0

// auto_bind_vtable_016f2620: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016f2620 {

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
extern "C" void bb_auto_bind_vtable_016f2620()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016f2620

// auto_bind_vtable_016f2650: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016f2650 {

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
extern "C" void bb_auto_bind_vtable_016f2650()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016f2650

// auto_bind_vtable_016f4ea0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016f4ea0 {

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
extern "C" void bb_auto_bind_vtable_016f4ea0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016f4ea0

// auto_bind_vtable_016f4ed0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016f4ed0 {

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
extern "C" void bb_auto_bind_vtable_016f4ed0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016f4ed0

// auto_bind_vtable_016f4f00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016f4f00 {

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
extern "C" void bb_auto_bind_vtable_016f4f00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016f4f00

// auto_bind_vtable_016f9410: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016f9410 {

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
extern "C" void bb_auto_bind_vtable_016f9410()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016f9410

// auto_bind_vtable_016f9440: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016f9440 {

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
extern "C" void bb_auto_bind_vtable_016f9440()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016f9440

// auto_bind_vtable_016f9470: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016f9470 {

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
extern "C" void bb_auto_bind_vtable_016f9470()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016f9470

// auto_bind_vtable_016fa3c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fa3c0 {

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
extern "C" void bb_auto_bind_vtable_016fa3c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fa3c0

// auto_bind_vtable_016fa3f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fa3f0 {

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
extern "C" void bb_auto_bind_vtable_016fa3f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fa3f0

// auto_bind_vtable_016fa420: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fa420 {

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
extern "C" void bb_auto_bind_vtable_016fa420()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fa420

// auto_bind_vtable_016fa7e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fa7e0 {

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
extern "C" void bb_auto_bind_vtable_016fa7e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fa7e0

// auto_bind_vtable_016fa810: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fa810 {

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
extern "C" void bb_auto_bind_vtable_016fa810()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fa810

// auto_bind_vtable_016fa840: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fa840 {

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
extern "C" void bb_auto_bind_vtable_016fa840()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fa840

// auto_bind_vtable_016fcfa0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fcfa0 {

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
extern "C" void bb_auto_bind_vtable_016fcfa0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fcfa0

// auto_bind_vtable_016fcfd0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fcfd0 {

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
extern "C" void bb_auto_bind_vtable_016fcfd0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fcfd0

// auto_bind_vtable_016fd000: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fd000 {

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
extern "C" void bb_auto_bind_vtable_016fd000()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fd000

// auto_bind_vtable_016fd5f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fd5f0 {

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
extern "C" void bb_auto_bind_vtable_016fd5f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fd5f0

// auto_bind_vtable_016fd620: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fd620 {

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
extern "C" void bb_auto_bind_vtable_016fd620()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fd620

// auto_bind_vtable_016fd650: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fd650 {

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
extern "C" void bb_auto_bind_vtable_016fd650()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fd650

// auto_bind_vtable_016fdeb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fdeb0 {

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
extern "C" void bb_auto_bind_vtable_016fdeb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fdeb0

// auto_bind_vtable_016fdee0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fdee0 {

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
extern "C" void bb_auto_bind_vtable_016fdee0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fdee0

// auto_bind_vtable_016fdf10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fdf10 {

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
extern "C" void bb_auto_bind_vtable_016fdf10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fdf10

// auto_bind_vtable_016fe430: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fe430 {

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
extern "C" void bb_auto_bind_vtable_016fe430()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fe430

// auto_bind_vtable_016fe460: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fe460 {

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
extern "C" void bb_auto_bind_vtable_016fe460()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fe460

// auto_bind_vtable_016fe490: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fe490 {

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
extern "C" void bb_auto_bind_vtable_016fe490()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fe490

// auto_bind_vtable_016fea90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fea90 {

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
extern "C" void bb_auto_bind_vtable_016fea90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fea90

// auto_bind_vtable_016feac0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016feac0 {

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
extern "C" void bb_auto_bind_vtable_016feac0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016feac0

// auto_bind_vtable_016feaf0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016feaf0 {

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
extern "C" void bb_auto_bind_vtable_016feaf0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016feaf0

// auto_bind_vtable_016ff630: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ff630 {

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
extern "C" void bb_auto_bind_vtable_016ff630()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ff630

// auto_bind_vtable_016ff660: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ff660 {

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
extern "C" void bb_auto_bind_vtable_016ff660()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ff660

// auto_bind_vtable_016ff690: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016ff690 {

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
extern "C" void bb_auto_bind_vtable_016ff690()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016ff690

// auto_bind_vtable_016fff80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fff80 {

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
extern "C" void bb_auto_bind_vtable_016fff80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fff80

// auto_bind_vtable_016fffb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fffb0 {

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
extern "C" void bb_auto_bind_vtable_016fffb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fffb0

// auto_bind_vtable_016fffe0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_016fffe0 {

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
extern "C" void bb_auto_bind_vtable_016fffe0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_016fffe0

// auto_bind_vtable_017006b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017006b0 {

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
extern "C" void bb_auto_bind_vtable_017006b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017006b0

// auto_bind_vtable_017006e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017006e0 {

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
extern "C" void bb_auto_bind_vtable_017006e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017006e0

// auto_bind_vtable_01700710: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01700710 {

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
extern "C" void bb_auto_bind_vtable_01700710()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01700710

// auto_bind_vtable_01700c90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01700c90 {

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
extern "C" void bb_auto_bind_vtable_01700c90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01700c90

// auto_bind_vtable_01700cc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01700cc0 {

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
extern "C" void bb_auto_bind_vtable_01700cc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01700cc0

// auto_bind_vtable_01700cf0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01700cf0 {

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
extern "C" void bb_auto_bind_vtable_01700cf0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01700cf0

// auto_bind_vtable_01702dd0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01702dd0 {

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
extern "C" void bb_auto_bind_vtable_01702dd0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01702dd0

// auto_bind_vtable_01702e00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01702e00 {

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
extern "C" void bb_auto_bind_vtable_01702e00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01702e00

// auto_bind_vtable_01702e30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01702e30 {

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
extern "C" void bb_auto_bind_vtable_01702e30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01702e30

// auto_bind_vtable_01704480: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01704480 {

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
extern "C" void bb_auto_bind_vtable_01704480()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01704480

// auto_bind_vtable_017044b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017044b0 {

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
extern "C" void bb_auto_bind_vtable_017044b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017044b0

// auto_bind_vtable_017044e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017044e0 {

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
extern "C" void bb_auto_bind_vtable_017044e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017044e0

// auto_bind_vtable_01704b30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01704b30 {

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
extern "C" void bb_auto_bind_vtable_01704b30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01704b30

// auto_bind_vtable_01704b60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01704b60 {

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
extern "C" void bb_auto_bind_vtable_01704b60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01704b60

// auto_bind_vtable_01704b90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01704b90 {

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
extern "C" void bb_auto_bind_vtable_01704b90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01704b90

// auto_bind_vtable_01704d50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01704d50 {

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
extern "C" void bb_auto_bind_vtable_01704d50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01704d50

// auto_bind_vtable_01704d80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01704d80 {

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
extern "C" void bb_auto_bind_vtable_01704d80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01704d80

// auto_bind_vtable_01704db0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01704db0 {

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
extern "C" void bb_auto_bind_vtable_01704db0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01704db0

// auto_bind_vtable_017052e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017052e0 {

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
extern "C" void bb_auto_bind_vtable_017052e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017052e0

// auto_bind_vtable_01705310: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01705310 {

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
extern "C" void bb_auto_bind_vtable_01705310()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01705310

// auto_bind_vtable_01705340: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01705340 {

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
extern "C" void bb_auto_bind_vtable_01705340()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01705340

// auto_bind_vtable_017056a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017056a0 {

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
extern "C" void bb_auto_bind_vtable_017056a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017056a0

// auto_bind_vtable_017056d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017056d0 {

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
extern "C" void bb_auto_bind_vtable_017056d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017056d0

// auto_bind_vtable_01705700: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01705700 {

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
extern "C" void bb_auto_bind_vtable_01705700()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01705700

// auto_bind_vtable_01705aa0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01705aa0 {

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
extern "C" void bb_auto_bind_vtable_01705aa0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01705aa0

// auto_bind_vtable_01705ad0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01705ad0 {

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
extern "C" void bb_auto_bind_vtable_01705ad0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01705ad0

// auto_bind_vtable_01705b00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01705b00 {

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
extern "C" void bb_auto_bind_vtable_01705b00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01705b00

// auto_bind_vtable_01706290: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01706290 {

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
extern "C" void bb_auto_bind_vtable_01706290()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01706290

// auto_bind_vtable_017062c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017062c0 {

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
extern "C" void bb_auto_bind_vtable_017062c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017062c0

// auto_bind_vtable_017062f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017062f0 {

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
extern "C" void bb_auto_bind_vtable_017062f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017062f0

// auto_bind_vtable_01706f90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01706f90 {

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
extern "C" void bb_auto_bind_vtable_01706f90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01706f90

// auto_bind_vtable_01706fc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01706fc0 {

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
extern "C" void bb_auto_bind_vtable_01706fc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01706fc0

// auto_bind_vtable_01706ff0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01706ff0 {

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
extern "C" void bb_auto_bind_vtable_01706ff0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01706ff0

// auto_bind_vtable_017071b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017071b0 {

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
extern "C" void bb_auto_bind_vtable_017071b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017071b0

// auto_bind_vtable_017071e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017071e0 {

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
extern "C" void bb_auto_bind_vtable_017071e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017071e0

// auto_bind_vtable_01707210: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01707210 {

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
extern "C" void bb_auto_bind_vtable_01707210()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01707210

// auto_bind_vtable_01707580: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01707580 {

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
extern "C" void bb_auto_bind_vtable_01707580()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01707580

// auto_bind_vtable_017075b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017075b0 {

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
extern "C" void bb_auto_bind_vtable_017075b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017075b0

// auto_bind_vtable_017075e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017075e0 {

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
extern "C" void bb_auto_bind_vtable_017075e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017075e0

// auto_bind_vtable_017077a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017077a0 {

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
extern "C" void bb_auto_bind_vtable_017077a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017077a0

// auto_bind_vtable_017077d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017077d0 {

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
extern "C" void bb_auto_bind_vtable_017077d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017077d0

// auto_bind_vtable_01707800: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01707800 {

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
extern "C" void bb_auto_bind_vtable_01707800()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01707800

// auto_bind_vtable_01707d10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01707d10 {

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
extern "C" void bb_auto_bind_vtable_01707d10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01707d10

// auto_bind_vtable_01707d40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01707d40 {

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
extern "C" void bb_auto_bind_vtable_01707d40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01707d40

// auto_bind_vtable_01707d70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01707d70 {

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
extern "C" void bb_auto_bind_vtable_01707d70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01707d70

// auto_bind_vtable_017081c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017081c0 {

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
extern "C" void bb_auto_bind_vtable_017081c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017081c0

// auto_bind_vtable_017081f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017081f0 {

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
extern "C" void bb_auto_bind_vtable_017081f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017081f0

// auto_bind_vtable_01708220: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01708220 {

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
extern "C" void bb_auto_bind_vtable_01708220()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01708220

// auto_bind_vtable_01708680: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01708680 {

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
extern "C" void bb_auto_bind_vtable_01708680()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01708680

// auto_bind_vtable_017086b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017086b0 {

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
extern "C" void bb_auto_bind_vtable_017086b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017086b0

// auto_bind_vtable_017086e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017086e0 {

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
extern "C" void bb_auto_bind_vtable_017086e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017086e0

// auto_bind_vtable_01708b20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01708b20 {

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
extern "C" void bb_auto_bind_vtable_01708b20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01708b20

// auto_bind_vtable_01708b50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01708b50 {

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
extern "C" void bb_auto_bind_vtable_01708b50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01708b50

// auto_bind_vtable_01708b80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01708b80 {

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
extern "C" void bb_auto_bind_vtable_01708b80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01708b80

// auto_bind_vtable_01709220: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01709220 {

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
extern "C" void bb_auto_bind_vtable_01709220()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01709220

// auto_bind_vtable_01709250: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01709250 {

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
extern "C" void bb_auto_bind_vtable_01709250()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01709250

// auto_bind_vtable_01709280: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01709280 {

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
extern "C" void bb_auto_bind_vtable_01709280()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01709280

// auto_bind_vtable_017097e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017097e0 {

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
extern "C" void bb_auto_bind_vtable_017097e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017097e0

// auto_bind_vtable_01709810: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01709810 {

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
extern "C" void bb_auto_bind_vtable_01709810()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01709810

// auto_bind_vtable_01709840: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01709840 {

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
extern "C" void bb_auto_bind_vtable_01709840()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01709840

// auto_bind_vtable_01709b70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01709b70 {

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
extern "C" void bb_auto_bind_vtable_01709b70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01709b70

// auto_bind_vtable_01709ba0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01709ba0 {

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
extern "C" void bb_auto_bind_vtable_01709ba0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01709ba0

// auto_bind_vtable_01709bd0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01709bd0 {

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
extern "C" void bb_auto_bind_vtable_01709bd0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01709bd0

// auto_bind_vtable_01709e60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01709e60 {

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
extern "C" void bb_auto_bind_vtable_01709e60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01709e60

// auto_bind_vtable_01709e90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01709e90 {

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
extern "C" void bb_auto_bind_vtable_01709e90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01709e90

// auto_bind_vtable_01709ec0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01709ec0 {

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
extern "C" void bb_auto_bind_vtable_01709ec0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01709ec0

// auto_bind_vtable_0170a640: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170a640 {

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
extern "C" void bb_auto_bind_vtable_0170a640()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170a640

// auto_bind_vtable_0170a670: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170a670 {

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
extern "C" void bb_auto_bind_vtable_0170a670()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170a670

// auto_bind_vtable_0170a6a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170a6a0 {

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
extern "C" void bb_auto_bind_vtable_0170a6a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170a6a0

// auto_bind_vtable_0170adb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170adb0 {

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
extern "C" void bb_auto_bind_vtable_0170adb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170adb0

// auto_bind_vtable_0170ade0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170ade0 {

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
extern "C" void bb_auto_bind_vtable_0170ade0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170ade0

// auto_bind_vtable_0170ae10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170ae10 {

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
extern "C" void bb_auto_bind_vtable_0170ae10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170ae10

// auto_bind_vtable_0170b6e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170b6e0 {

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
extern "C" void bb_auto_bind_vtable_0170b6e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170b6e0

// auto_bind_vtable_0170b710: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170b710 {

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
extern "C" void bb_auto_bind_vtable_0170b710()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170b710

// auto_bind_vtable_0170b740: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170b740 {

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
extern "C" void bb_auto_bind_vtable_0170b740()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170b740

// auto_bind_vtable_0170bd60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170bd60 {

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
extern "C" void bb_auto_bind_vtable_0170bd60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170bd60

// auto_bind_vtable_0170bd90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170bd90 {

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
extern "C" void bb_auto_bind_vtable_0170bd90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170bd90

// auto_bind_vtable_0170bdc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170bdc0 {

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
extern "C" void bb_auto_bind_vtable_0170bdc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170bdc0

// auto_bind_vtable_0170c320: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170c320 {

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
extern "C" void bb_auto_bind_vtable_0170c320()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170c320

// auto_bind_vtable_0170c350: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170c350 {

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
extern "C" void bb_auto_bind_vtable_0170c350()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170c350

// auto_bind_vtable_0170c380: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170c380 {

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
extern "C" void bb_auto_bind_vtable_0170c380()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170c380

// auto_bind_vtable_0170cb50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170cb50 {

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
extern "C" void bb_auto_bind_vtable_0170cb50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170cb50

// auto_bind_vtable_0170cb80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170cb80 {

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
extern "C" void bb_auto_bind_vtable_0170cb80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170cb80

// auto_bind_vtable_0170cbb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170cbb0 {

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
extern "C" void bb_auto_bind_vtable_0170cbb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170cbb0

// auto_bind_vtable_0170cf90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170cf90 {

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
extern "C" void bb_auto_bind_vtable_0170cf90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170cf90

// auto_bind_vtable_0170cfc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170cfc0 {

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
extern "C" void bb_auto_bind_vtable_0170cfc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170cfc0

// auto_bind_vtable_0170cff0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170cff0 {

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
extern "C" void bb_auto_bind_vtable_0170cff0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170cff0

// auto_bind_vtable_0170d3d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170d3d0 {

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
extern "C" void bb_auto_bind_vtable_0170d3d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170d3d0

// auto_bind_vtable_0170d400: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170d400 {

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
extern "C" void bb_auto_bind_vtable_0170d400()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170d400

// auto_bind_vtable_0170d430: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170d430 {

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
extern "C" void bb_auto_bind_vtable_0170d430()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170d430

// auto_bind_vtable_0170d720: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170d720 {

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
extern "C" void bb_auto_bind_vtable_0170d720()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170d720

// auto_bind_vtable_0170d750: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170d750 {

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
extern "C" void bb_auto_bind_vtable_0170d750()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170d750

// auto_bind_vtable_0170d780: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170d780 {

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
extern "C" void bb_auto_bind_vtable_0170d780()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170d780

// auto_bind_vtable_0170d940: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170d940 {

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
extern "C" void bb_auto_bind_vtable_0170d940()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170d940

// auto_bind_vtable_0170d970: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170d970 {

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
extern "C" void bb_auto_bind_vtable_0170d970()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170d970

// auto_bind_vtable_0170d9a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170d9a0 {

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
extern "C" void bb_auto_bind_vtable_0170d9a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170d9a0

// auto_bind_vtable_0170dce0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170dce0 {

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
extern "C" void bb_auto_bind_vtable_0170dce0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170dce0

// auto_bind_vtable_0170dd10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170dd10 {

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
extern "C" void bb_auto_bind_vtable_0170dd10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170dd10

// auto_bind_vtable_0170dd40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170dd40 {

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
extern "C" void bb_auto_bind_vtable_0170dd40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170dd40
