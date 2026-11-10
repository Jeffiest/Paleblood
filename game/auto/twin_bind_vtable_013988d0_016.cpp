// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_bind_vtable_56b4840, in game/misc/bind_vtable_56b4840.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_bind_vtable_0170e0d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170e0d0 {

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
extern "C" void bb_auto_bind_vtable_0170e0d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170e0d0

// auto_bind_vtable_0170e100: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170e100 {

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
extern "C" void bb_auto_bind_vtable_0170e100()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170e100

// auto_bind_vtable_0170e130: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170e130 {

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
extern "C" void bb_auto_bind_vtable_0170e130()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170e130

// auto_bind_vtable_0170f6a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170f6a0 {

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
extern "C" void bb_auto_bind_vtable_0170f6a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170f6a0

// auto_bind_vtable_0170f6d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170f6d0 {

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
extern "C" void bb_auto_bind_vtable_0170f6d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170f6d0

// auto_bind_vtable_0170f700: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0170f700 {

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
extern "C" void bb_auto_bind_vtable_0170f700()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0170f700

// auto_bind_vtable_017119c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017119c0 {

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
extern "C" void bb_auto_bind_vtable_017119c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017119c0

// auto_bind_vtable_017119f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017119f0 {

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
extern "C" void bb_auto_bind_vtable_017119f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017119f0

// auto_bind_vtable_01711a20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01711a20 {

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
extern "C" void bb_auto_bind_vtable_01711a20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01711a20

// auto_bind_vtable_017124d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017124d0 {

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
extern "C" void bb_auto_bind_vtable_017124d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017124d0

// auto_bind_vtable_01712500: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01712500 {

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
extern "C" void bb_auto_bind_vtable_01712500()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01712500

// auto_bind_vtable_01712530: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01712530 {

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
extern "C" void bb_auto_bind_vtable_01712530()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01712530

// auto_bind_vtable_017126d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017126d0 {

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
extern "C" void bb_auto_bind_vtable_017126d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017126d0

// auto_bind_vtable_01712700: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01712700 {

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
extern "C" void bb_auto_bind_vtable_01712700()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01712700

// auto_bind_vtable_01712730: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01712730 {

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
extern "C" void bb_auto_bind_vtable_01712730()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01712730

// auto_bind_vtable_01721c60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01721c60 {

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
extern "C" void bb_auto_bind_vtable_01721c60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01721c60

// auto_bind_vtable_01721c90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01721c90 {

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
extern "C" void bb_auto_bind_vtable_01721c90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01721c90

// auto_bind_vtable_01721cc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01721cc0 {

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
extern "C" void bb_auto_bind_vtable_01721cc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01721cc0

// auto_bind_vtable_01727850: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01727850 {

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
extern "C" void bb_auto_bind_vtable_01727850()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01727850

// auto_bind_vtable_01727880: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01727880 {

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
extern "C" void bb_auto_bind_vtable_01727880()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01727880

// auto_bind_vtable_017278b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017278b0 {

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
extern "C" void bb_auto_bind_vtable_017278b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017278b0

// auto_bind_vtable_0173b380: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0173b380 {

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
extern "C" void bb_auto_bind_vtable_0173b380()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0173b380

// auto_bind_vtable_0173b3b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0173b3b0 {

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
extern "C" void bb_auto_bind_vtable_0173b3b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0173b3b0

// auto_bind_vtable_0173b3e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0173b3e0 {

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
extern "C" void bb_auto_bind_vtable_0173b3e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0173b3e0

// auto_bind_vtable_0178d410: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0178d410 {

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
extern "C" void bb_auto_bind_vtable_0178d410()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0178d410

// auto_bind_vtable_0178d440: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0178d440 {

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
extern "C" void bb_auto_bind_vtable_0178d440()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0178d440

// auto_bind_vtable_0178d470: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0178d470 {

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
extern "C" void bb_auto_bind_vtable_0178d470()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0178d470

// auto_bind_vtable_01794050: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01794050 {

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
extern "C" void bb_auto_bind_vtable_01794050()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01794050

// auto_bind_vtable_01794080: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01794080 {

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
extern "C" void bb_auto_bind_vtable_01794080()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01794080

// auto_bind_vtable_017940b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017940b0 {

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
extern "C" void bb_auto_bind_vtable_017940b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017940b0

// auto_bind_vtable_01798f10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01798f10 {

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
extern "C" void bb_auto_bind_vtable_01798f10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01798f10

// auto_bind_vtable_01798f40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01798f40 {

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
extern "C" void bb_auto_bind_vtable_01798f40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01798f40

// auto_bind_vtable_01798f70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01798f70 {

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
extern "C" void bb_auto_bind_vtable_01798f70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01798f70

// auto_bind_vtable_01799f30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01799f30 {

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
extern "C" void bb_auto_bind_vtable_01799f30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01799f30

// auto_bind_vtable_01799f60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01799f60 {

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
extern "C" void bb_auto_bind_vtable_01799f60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01799f60

// auto_bind_vtable_01799f90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_01799f90 {

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
extern "C" void bb_auto_bind_vtable_01799f90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_01799f90

// auto_bind_vtable_0179a160: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179a160 {

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
extern "C" void bb_auto_bind_vtable_0179a160()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179a160

// auto_bind_vtable_0179a190: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179a190 {

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
extern "C" void bb_auto_bind_vtable_0179a190()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179a190

// auto_bind_vtable_0179a1c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179a1c0 {

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
extern "C" void bb_auto_bind_vtable_0179a1c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179a1c0

// auto_bind_vtable_0179b0c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179b0c0 {

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
extern "C" void bb_auto_bind_vtable_0179b0c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179b0c0

// auto_bind_vtable_0179b0f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179b0f0 {

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
extern "C" void bb_auto_bind_vtable_0179b0f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179b0f0

// auto_bind_vtable_0179b120: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179b120 {

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
extern "C" void bb_auto_bind_vtable_0179b120()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179b120

// auto_bind_vtable_0179c0f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179c0f0 {

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
extern "C" void bb_auto_bind_vtable_0179c0f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179c0f0

// auto_bind_vtable_0179c120: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179c120 {

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
extern "C" void bb_auto_bind_vtable_0179c120()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179c120

// auto_bind_vtable_0179c150: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179c150 {

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
extern "C" void bb_auto_bind_vtable_0179c150()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179c150

// auto_bind_vtable_0179c900: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179c900 {

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
extern "C" void bb_auto_bind_vtable_0179c900()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179c900

// auto_bind_vtable_0179c930: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179c930 {

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
extern "C" void bb_auto_bind_vtable_0179c930()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179c930

// auto_bind_vtable_0179c960: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179c960 {

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
extern "C" void bb_auto_bind_vtable_0179c960()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179c960

// auto_bind_vtable_0179d280: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179d280 {

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
extern "C" void bb_auto_bind_vtable_0179d280()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179d280

// auto_bind_vtable_0179d2b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179d2b0 {

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
extern "C" void bb_auto_bind_vtable_0179d2b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179d2b0

// auto_bind_vtable_0179d2e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179d2e0 {

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
extern "C" void bb_auto_bind_vtable_0179d2e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179d2e0

// auto_bind_vtable_0179e810: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179e810 {

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
extern "C" void bb_auto_bind_vtable_0179e810()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179e810

// auto_bind_vtable_0179e840: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179e840 {

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
extern "C" void bb_auto_bind_vtable_0179e840()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179e840

// auto_bind_vtable_0179e870: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179e870 {

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
extern "C" void bb_auto_bind_vtable_0179e870()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179e870

// auto_bind_vtable_0179f6b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179f6b0 {

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
extern "C" void bb_auto_bind_vtable_0179f6b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179f6b0

// auto_bind_vtable_0179f6e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179f6e0 {

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
extern "C" void bb_auto_bind_vtable_0179f6e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179f6e0

// auto_bind_vtable_0179f710: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179f710 {

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
extern "C" void bb_auto_bind_vtable_0179f710()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179f710

// auto_bind_vtable_0179fb10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179fb10 {

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
extern "C" void bb_auto_bind_vtable_0179fb10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179fb10

// auto_bind_vtable_0179fb40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179fb40 {

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
extern "C" void bb_auto_bind_vtable_0179fb40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179fb40

// auto_bind_vtable_0179fb70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0179fb70 {

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
extern "C" void bb_auto_bind_vtable_0179fb70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0179fb70

// auto_bind_vtable_017a74c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017a74c0 {

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
extern "C" void bb_auto_bind_vtable_017a74c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017a74c0

// auto_bind_vtable_017a74f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017a74f0 {

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
extern "C" void bb_auto_bind_vtable_017a74f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017a74f0

// auto_bind_vtable_017a7520: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017a7520 {

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
extern "C" void bb_auto_bind_vtable_017a7520()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017a7520

// auto_bind_vtable_017a8cc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017a8cc0 {

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
extern "C" void bb_auto_bind_vtable_017a8cc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017a8cc0

// auto_bind_vtable_017a8cf0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017a8cf0 {

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
extern "C" void bb_auto_bind_vtable_017a8cf0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017a8cf0

// auto_bind_vtable_017a8d20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017a8d20 {

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
extern "C" void bb_auto_bind_vtable_017a8d20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017a8d20

// auto_bind_vtable_017a9850: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017a9850 {

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
extern "C" void bb_auto_bind_vtable_017a9850()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017a9850

// auto_bind_vtable_017a9880: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017a9880 {

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
extern "C" void bb_auto_bind_vtable_017a9880()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017a9880

// auto_bind_vtable_017a98b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017a98b0 {

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
extern "C" void bb_auto_bind_vtable_017a98b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017a98b0

// auto_bind_vtable_017abfe0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017abfe0 {

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
extern "C" void bb_auto_bind_vtable_017abfe0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017abfe0

// auto_bind_vtable_017ac010: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017ac010 {

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
extern "C" void bb_auto_bind_vtable_017ac010()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017ac010

// auto_bind_vtable_017ac040: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017ac040 {

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
extern "C" void bb_auto_bind_vtable_017ac040()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017ac040

// auto_bind_vtable_017b1220: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017b1220 {

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
extern "C" void bb_auto_bind_vtable_017b1220()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017b1220

// auto_bind_vtable_017b1250: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017b1250 {

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
extern "C" void bb_auto_bind_vtable_017b1250()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017b1250

// auto_bind_vtable_017b1280: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017b1280 {

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
extern "C" void bb_auto_bind_vtable_017b1280()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017b1280

// auto_bind_vtable_017b3b60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017b3b60 {

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
extern "C" void bb_auto_bind_vtable_017b3b60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017b3b60

// auto_bind_vtable_017b3b90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017b3b90 {

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
extern "C" void bb_auto_bind_vtable_017b3b90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017b3b90

// auto_bind_vtable_017b3bc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017b3bc0 {

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
extern "C" void bb_auto_bind_vtable_017b3bc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017b3bc0

// auto_bind_vtable_017b4ae0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017b4ae0 {

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
extern "C" void bb_auto_bind_vtable_017b4ae0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017b4ae0

// auto_bind_vtable_017b4b10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017b4b10 {

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
extern "C" void bb_auto_bind_vtable_017b4b10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017b4b10

// auto_bind_vtable_017b4b40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017b4b40 {

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
extern "C" void bb_auto_bind_vtable_017b4b40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017b4b40

// auto_bind_vtable_017b5670: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017b5670 {

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
extern "C" void bb_auto_bind_vtable_017b5670()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017b5670

// auto_bind_vtable_017b56a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017b56a0 {

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
extern "C" void bb_auto_bind_vtable_017b56a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017b56a0

// auto_bind_vtable_017b56d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017b56d0 {

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
extern "C" void bb_auto_bind_vtable_017b56d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017b56d0

// auto_bind_vtable_017c37f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c37f0 {

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
extern "C" void bb_auto_bind_vtable_017c37f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c37f0

// auto_bind_vtable_017c3820: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c3820 {

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
extern "C" void bb_auto_bind_vtable_017c3820()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c3820

// auto_bind_vtable_017c3850: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c3850 {

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
extern "C" void bb_auto_bind_vtable_017c3850()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c3850

// auto_bind_vtable_017c66e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c66e0 {

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
extern "C" void bb_auto_bind_vtable_017c66e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c66e0

// auto_bind_vtable_017c6710: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c6710 {

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
extern "C" void bb_auto_bind_vtable_017c6710()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c6710

// auto_bind_vtable_017c6740: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c6740 {

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
extern "C" void bb_auto_bind_vtable_017c6740()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c6740

// auto_bind_vtable_017c68c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c68c0 {

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
extern "C" void bb_auto_bind_vtable_017c68c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c68c0

// auto_bind_vtable_017c68f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c68f0 {

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
extern "C" void bb_auto_bind_vtable_017c68f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c68f0

// auto_bind_vtable_017c6920: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c6920 {

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
extern "C" void bb_auto_bind_vtable_017c6920()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c6920

// auto_bind_vtable_017c7f50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c7f50 {

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
extern "C" void bb_auto_bind_vtable_017c7f50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c7f50

// auto_bind_vtable_017c7f80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c7f80 {

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
extern "C" void bb_auto_bind_vtable_017c7f80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c7f80

// auto_bind_vtable_017c7fb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c7fb0 {

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
extern "C" void bb_auto_bind_vtable_017c7fb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c7fb0

// auto_bind_vtable_017c8bf0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c8bf0 {

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
extern "C" void bb_auto_bind_vtable_017c8bf0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c8bf0

// auto_bind_vtable_017c8c20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c8c20 {

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
extern "C" void bb_auto_bind_vtable_017c8c20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c8c20

// auto_bind_vtable_017c8c50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017c8c50 {

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
extern "C" void bb_auto_bind_vtable_017c8c50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017c8c50

// auto_bind_vtable_017ceeb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017ceeb0 {

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
extern "C" void bb_auto_bind_vtable_017ceeb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017ceeb0

// auto_bind_vtable_017ceee0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017ceee0 {

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
extern "C" void bb_auto_bind_vtable_017ceee0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017ceee0

// auto_bind_vtable_017cef10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017cef10 {

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
extern "C" void bb_auto_bind_vtable_017cef10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017cef10

// auto_bind_vtable_017d1430: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d1430 {

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
extern "C" void bb_auto_bind_vtable_017d1430()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d1430

// auto_bind_vtable_017d1460: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d1460 {

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
extern "C" void bb_auto_bind_vtable_017d1460()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d1460

// auto_bind_vtable_017d1490: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d1490 {

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
extern "C" void bb_auto_bind_vtable_017d1490()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d1490

// auto_bind_vtable_017d2690: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d2690 {

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
extern "C" void bb_auto_bind_vtable_017d2690()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d2690

// auto_bind_vtable_017d26c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d26c0 {

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
extern "C" void bb_auto_bind_vtable_017d26c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d26c0

// auto_bind_vtable_017d26f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d26f0 {

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
extern "C" void bb_auto_bind_vtable_017d26f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d26f0

// auto_bind_vtable_017d3500: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d3500 {

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
extern "C" void bb_auto_bind_vtable_017d3500()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d3500

// auto_bind_vtable_017d3530: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d3530 {

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
extern "C" void bb_auto_bind_vtable_017d3530()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d3530

// auto_bind_vtable_017d3560: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d3560 {

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
extern "C" void bb_auto_bind_vtable_017d3560()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d3560

// auto_bind_vtable_017d41c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d41c0 {

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
extern "C" void bb_auto_bind_vtable_017d41c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d41c0

// auto_bind_vtable_017d41f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d41f0 {

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
extern "C" void bb_auto_bind_vtable_017d41f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d41f0

// auto_bind_vtable_017d4220: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d4220 {

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
extern "C" void bb_auto_bind_vtable_017d4220()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d4220

// auto_bind_vtable_017d4880: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d4880 {

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
extern "C" void bb_auto_bind_vtable_017d4880()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d4880

// auto_bind_vtable_017d48b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d48b0 {

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
extern "C" void bb_auto_bind_vtable_017d48b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d48b0

// auto_bind_vtable_017d48e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d48e0 {

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
extern "C" void bb_auto_bind_vtable_017d48e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d48e0

// auto_bind_vtable_017d4d80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d4d80 {

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
extern "C" void bb_auto_bind_vtable_017d4d80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d4d80

// auto_bind_vtable_017d4db0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d4db0 {

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
extern "C" void bb_auto_bind_vtable_017d4db0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d4db0

// auto_bind_vtable_017d4de0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d4de0 {

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
extern "C" void bb_auto_bind_vtable_017d4de0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d4de0

// auto_bind_vtable_017d5590: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d5590 {

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
extern "C" void bb_auto_bind_vtable_017d5590()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d5590

// auto_bind_vtable_017d55c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d55c0 {

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
extern "C" void bb_auto_bind_vtable_017d55c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d55c0

// auto_bind_vtable_017d55f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d55f0 {

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
extern "C" void bb_auto_bind_vtable_017d55f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d55f0

// auto_bind_vtable_017d5d60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d5d60 {

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
extern "C" void bb_auto_bind_vtable_017d5d60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d5d60

// auto_bind_vtable_017d5d90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d5d90 {

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
extern "C" void bb_auto_bind_vtable_017d5d90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d5d90

// auto_bind_vtable_017d5dc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d5dc0 {

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
extern "C" void bb_auto_bind_vtable_017d5dc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d5dc0

// auto_bind_vtable_017d63d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d63d0 {

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
extern "C" void bb_auto_bind_vtable_017d63d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d63d0

// auto_bind_vtable_017d6400: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d6400 {

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
extern "C" void bb_auto_bind_vtable_017d6400()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d6400

// auto_bind_vtable_017d6430: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d6430 {

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
extern "C" void bb_auto_bind_vtable_017d6430()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d6430

// auto_bind_vtable_017d66b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d66b0 {

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
extern "C" void bb_auto_bind_vtable_017d66b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d66b0

// auto_bind_vtable_017d66e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d66e0 {

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
extern "C" void bb_auto_bind_vtable_017d66e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d66e0

// auto_bind_vtable_017d6710: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d6710 {

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
extern "C" void bb_auto_bind_vtable_017d6710()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d6710

// auto_bind_vtable_017d6d50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d6d50 {

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
extern "C" void bb_auto_bind_vtable_017d6d50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d6d50

// auto_bind_vtable_017d6d80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d6d80 {

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
extern "C" void bb_auto_bind_vtable_017d6d80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d6d80

// auto_bind_vtable_017d6db0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d6db0 {

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
extern "C" void bb_auto_bind_vtable_017d6db0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d6db0

// auto_bind_vtable_017d70e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d70e0 {

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
extern "C" void bb_auto_bind_vtable_017d70e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d70e0

// auto_bind_vtable_017d7110: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d7110 {

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
extern "C" void bb_auto_bind_vtable_017d7110()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d7110

// auto_bind_vtable_017d7140: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d7140 {

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
extern "C" void bb_auto_bind_vtable_017d7140()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d7140

// auto_bind_vtable_017d79e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d79e0 {

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
extern "C" void bb_auto_bind_vtable_017d79e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d79e0

// auto_bind_vtable_017d7a10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d7a10 {

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
extern "C" void bb_auto_bind_vtable_017d7a10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d7a10

// auto_bind_vtable_017d7a40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d7a40 {

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
extern "C" void bb_auto_bind_vtable_017d7a40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d7a40

// auto_bind_vtable_017d8000: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d8000 {

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
extern "C" void bb_auto_bind_vtable_017d8000()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d8000

// auto_bind_vtable_017d8030: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d8030 {

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
extern "C" void bb_auto_bind_vtable_017d8030()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d8030

// auto_bind_vtable_017d8060: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d8060 {

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
extern "C" void bb_auto_bind_vtable_017d8060()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d8060

// auto_bind_vtable_017d8510: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d8510 {

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
extern "C" void bb_auto_bind_vtable_017d8510()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d8510

// auto_bind_vtable_017d8540: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d8540 {

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
extern "C" void bb_auto_bind_vtable_017d8540()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d8540

// auto_bind_vtable_017d8570: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d8570 {

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
extern "C" void bb_auto_bind_vtable_017d8570()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d8570

// auto_bind_vtable_017d9410: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d9410 {

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
extern "C" void bb_auto_bind_vtable_017d9410()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d9410

// auto_bind_vtable_017d9440: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d9440 {

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
extern "C" void bb_auto_bind_vtable_017d9440()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d9440

// auto_bind_vtable_017d9470: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d9470 {

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
extern "C" void bb_auto_bind_vtable_017d9470()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d9470

// auto_bind_vtable_017d9c20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d9c20 {

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
extern "C" void bb_auto_bind_vtable_017d9c20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d9c20

// auto_bind_vtable_017d9c50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d9c50 {

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
extern "C" void bb_auto_bind_vtable_017d9c50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d9c50

// auto_bind_vtable_017d9c80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017d9c80 {

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
extern "C" void bb_auto_bind_vtable_017d9c80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017d9c80

// auto_bind_vtable_017dae00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017dae00 {

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
extern "C" void bb_auto_bind_vtable_017dae00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017dae00

// auto_bind_vtable_017dae30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017dae30 {

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
extern "C" void bb_auto_bind_vtable_017dae30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017dae30

// auto_bind_vtable_017dae60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017dae60 {

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
extern "C" void bb_auto_bind_vtable_017dae60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017dae60

// auto_bind_vtable_017db100: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017db100 {

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
extern "C" void bb_auto_bind_vtable_017db100()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017db100

// auto_bind_vtable_017db130: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017db130 {

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
extern "C" void bb_auto_bind_vtable_017db130()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017db130

// auto_bind_vtable_017db160: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017db160 {

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
extern "C" void bb_auto_bind_vtable_017db160()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017db160

// auto_bind_vtable_017db550: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017db550 {

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
extern "C" void bb_auto_bind_vtable_017db550()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017db550

// auto_bind_vtable_017db580: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017db580 {

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
extern "C" void bb_auto_bind_vtable_017db580()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017db580

// auto_bind_vtable_017db5b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017db5b0 {

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
extern "C" void bb_auto_bind_vtable_017db5b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017db5b0

// auto_bind_vtable_017dbf10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017dbf10 {

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
extern "C" void bb_auto_bind_vtable_017dbf10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017dbf10

// auto_bind_vtable_017dbf40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017dbf40 {

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
extern "C" void bb_auto_bind_vtable_017dbf40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017dbf40

// auto_bind_vtable_017dbf70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017dbf70 {

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
extern "C" void bb_auto_bind_vtable_017dbf70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017dbf70

// auto_bind_vtable_017dc8f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017dc8f0 {

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
extern "C" void bb_auto_bind_vtable_017dc8f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017dc8f0

// auto_bind_vtable_017dc920: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017dc920 {

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
extern "C" void bb_auto_bind_vtable_017dc920()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017dc920

// auto_bind_vtable_017dc950: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017dc950 {

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
extern "C" void bb_auto_bind_vtable_017dc950()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017dc950

// auto_bind_vtable_017ddb80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017ddb80 {

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
extern "C" void bb_auto_bind_vtable_017ddb80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017ddb80

// auto_bind_vtable_017ddbb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017ddbb0 {

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
extern "C" void bb_auto_bind_vtable_017ddbb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017ddbb0

// auto_bind_vtable_017ddbe0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017ddbe0 {

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
extern "C" void bb_auto_bind_vtable_017ddbe0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017ddbe0

// auto_bind_vtable_017defc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017defc0 {

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
extern "C" void bb_auto_bind_vtable_017defc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017defc0

// auto_bind_vtable_017deff0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017deff0 {

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
extern "C" void bb_auto_bind_vtable_017deff0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017deff0

// auto_bind_vtable_017df020: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017df020 {

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
extern "C" void bb_auto_bind_vtable_017df020()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017df020

// auto_bind_vtable_017e0090: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e0090 {

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
extern "C" void bb_auto_bind_vtable_017e0090()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e0090

// auto_bind_vtable_017e00c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e00c0 {

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
extern "C" void bb_auto_bind_vtable_017e00c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e00c0

// auto_bind_vtable_017e00f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e00f0 {

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
extern "C" void bb_auto_bind_vtable_017e00f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e00f0

// auto_bind_vtable_017e08b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e08b0 {

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
extern "C" void bb_auto_bind_vtable_017e08b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e08b0

// auto_bind_vtable_017e08e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e08e0 {

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
extern "C" void bb_auto_bind_vtable_017e08e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e08e0

// auto_bind_vtable_017e0910: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e0910 {

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
extern "C" void bb_auto_bind_vtable_017e0910()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e0910

// auto_bind_vtable_017e16d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e16d0 {

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
extern "C" void bb_auto_bind_vtable_017e16d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e16d0

// auto_bind_vtable_017e1700: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e1700 {

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
extern "C" void bb_auto_bind_vtable_017e1700()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e1700

// auto_bind_vtable_017e1730: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e1730 {

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
extern "C" void bb_auto_bind_vtable_017e1730()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e1730

// auto_bind_vtable_017e20c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e20c0 {

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
extern "C" void bb_auto_bind_vtable_017e20c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e20c0

// auto_bind_vtable_017e20f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e20f0 {

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
extern "C" void bb_auto_bind_vtable_017e20f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e20f0

// auto_bind_vtable_017e2120: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e2120 {

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
extern "C" void bb_auto_bind_vtable_017e2120()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e2120

// auto_bind_vtable_017e3080: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e3080 {

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
extern "C" void bb_auto_bind_vtable_017e3080()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e3080

// auto_bind_vtable_017e30b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e30b0 {

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
extern "C" void bb_auto_bind_vtable_017e30b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e30b0

// auto_bind_vtable_017e30e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e30e0 {

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
extern "C" void bb_auto_bind_vtable_017e30e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e30e0

// auto_bind_vtable_017e4230: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e4230 {

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
extern "C" void bb_auto_bind_vtable_017e4230()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e4230

// auto_bind_vtable_017e4260: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e4260 {

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
extern "C" void bb_auto_bind_vtable_017e4260()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e4260

// auto_bind_vtable_017e4290: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e4290 {

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
extern "C" void bb_auto_bind_vtable_017e4290()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e4290

// auto_bind_vtable_017e6200: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e6200 {

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
extern "C" void bb_auto_bind_vtable_017e6200()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e6200

// auto_bind_vtable_017e6230: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e6230 {

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
extern "C" void bb_auto_bind_vtable_017e6230()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e6230

// auto_bind_vtable_017e6260: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e6260 {

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
extern "C" void bb_auto_bind_vtable_017e6260()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e6260

// auto_bind_vtable_017e98f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e98f0 {

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
extern "C" void bb_auto_bind_vtable_017e98f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e98f0

// auto_bind_vtable_017e9920: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e9920 {

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
extern "C" void bb_auto_bind_vtable_017e9920()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e9920

// auto_bind_vtable_017e9950: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017e9950 {

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
extern "C" void bb_auto_bind_vtable_017e9950()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017e9950

// auto_bind_vtable_017ea8d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017ea8d0 {

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
extern "C" void bb_auto_bind_vtable_017ea8d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017ea8d0

// auto_bind_vtable_017ea900: misc_bind_vtable_56b4840 with other addresses.
namespace twin_017ea900 {

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
extern "C" void bb_auto_bind_vtable_017ea900()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_017ea900
