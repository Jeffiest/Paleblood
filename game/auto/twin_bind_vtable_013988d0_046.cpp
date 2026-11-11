// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_bind_vtable_56b4840, in game/misc/bind_vtable_56b4840.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "runtime/original.h"

// auto_bind_vtable_02476050: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02476050 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02476050()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02476050

// auto_bind_vtable_02476080: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02476080 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02476080()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02476080

// auto_bind_vtable_024760b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024760b0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024760b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024760b0

// auto_bind_vtable_02476c20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02476c20 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02476c20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02476c20

// auto_bind_vtable_02476c50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02476c50 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02476c50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02476c50

// auto_bind_vtable_02476c80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02476c80 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02476c80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02476c80

// auto_bind_vtable_02477960: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02477960 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02477960()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02477960

// auto_bind_vtable_02477990: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02477990 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02477990()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02477990

// auto_bind_vtable_024779c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024779c0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024779c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024779c0

// auto_bind_vtable_02478240: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478240 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478240()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478240

// auto_bind_vtable_02478270: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478270 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478270()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478270

// auto_bind_vtable_024782a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024782a0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024782a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024782a0

// auto_bind_vtable_024785e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024785e0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024785e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024785e0

// auto_bind_vtable_02478610: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478610 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478610()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478610

// auto_bind_vtable_02478640: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478640 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478640()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478640

// auto_bind_vtable_02478a80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478a80 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478a80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478a80

// auto_bind_vtable_02478ab0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478ab0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478ab0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478ab0

// auto_bind_vtable_02478ae0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478ae0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478ae0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478ae0

// auto_bind_vtable_02478c60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478c60 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478c60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478c60

// auto_bind_vtable_02478c90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478c90 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478c90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478c90

// auto_bind_vtable_02478cc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478cc0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478cc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478cc0

// auto_bind_vtable_02478e70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478e70 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478e70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478e70

// auto_bind_vtable_02478ea0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478ea0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478ea0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478ea0

// auto_bind_vtable_02478ed0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02478ed0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02478ed0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02478ed0

// auto_bind_vtable_0247a880: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247a880 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247a880()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247a880

// auto_bind_vtable_0247a8b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247a8b0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247a8b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247a8b0

// auto_bind_vtable_0247a8e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247a8e0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247a8e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247a8e0

// auto_bind_vtable_0247ac10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247ac10 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247ac10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247ac10

// auto_bind_vtable_0247ac40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247ac40 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247ac40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247ac40

// auto_bind_vtable_0247ac70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247ac70 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247ac70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247ac70

// auto_bind_vtable_0247b690: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247b690 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247b690()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247b690

// auto_bind_vtable_0247b6c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247b6c0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247b6c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247b6c0

// auto_bind_vtable_0247b6f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247b6f0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247b6f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247b6f0

// auto_bind_vtable_0247bb00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247bb00 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247bb00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247bb00

// auto_bind_vtable_0247bb30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247bb30 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247bb30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247bb30

// auto_bind_vtable_0247bb60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247bb60 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247bb60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247bb60

// auto_bind_vtable_0247c500: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247c500 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247c500()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247c500

// auto_bind_vtable_0247c530: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247c530 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247c530()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247c530

// auto_bind_vtable_0247c560: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247c560 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247c560()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247c560

// auto_bind_vtable_0247cab0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247cab0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247cab0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247cab0

// auto_bind_vtable_0247cae0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247cae0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247cae0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247cae0

// auto_bind_vtable_0247cb10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247cb10 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247cb10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247cb10

// auto_bind_vtable_0247d7e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247d7e0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247d7e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247d7e0

// auto_bind_vtable_0247d810: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247d810 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247d810()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247d810

// auto_bind_vtable_0247d840: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247d840 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247d840()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247d840

// auto_bind_vtable_0247e370: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247e370 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247e370()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247e370

// auto_bind_vtable_0247e3a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247e3a0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247e3a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247e3a0

// auto_bind_vtable_0247e3d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247e3d0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247e3d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247e3d0

// auto_bind_vtable_0247eab0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247eab0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247eab0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247eab0

// auto_bind_vtable_0247eae0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247eae0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247eae0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247eae0

// auto_bind_vtable_0247eb10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247eb10 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247eb10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247eb10

// auto_bind_vtable_0247ec20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247ec20 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247ec20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247ec20

// auto_bind_vtable_0247ec50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247ec50 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247ec50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247ec50

// auto_bind_vtable_0247ec80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247ec80 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247ec80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247ec80

// auto_bind_vtable_0247f0f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247f0f0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247f0f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247f0f0

// auto_bind_vtable_0247f120: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247f120 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247f120()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247f120

// auto_bind_vtable_0247f150: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247f150 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247f150()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247f150

// auto_bind_vtable_0247f790: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247f790 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247f790()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247f790

// auto_bind_vtable_0247f7c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247f7c0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247f7c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247f7c0

// auto_bind_vtable_0247f7f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247f7f0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247f7f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247f7f0

// auto_bind_vtable_0247f8d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247f8d0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247f8d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247f8d0

// auto_bind_vtable_0247f900: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247f900 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247f900()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247f900

// auto_bind_vtable_0247f930: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247f930 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247f930()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247f930

// auto_bind_vtable_0247f9c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247f9c0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247f9c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247f9c0

// auto_bind_vtable_0247f9f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247f9f0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247f9f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247f9f0

// auto_bind_vtable_0247fa20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0247fa20 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0247fa20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0247fa20

// auto_bind_vtable_02481960: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02481960 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02481960()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02481960

// auto_bind_vtable_02481990: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02481990 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02481990()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02481990

// auto_bind_vtable_024819c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024819c0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024819c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024819c0

// auto_bind_vtable_02482e20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02482e20 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02482e20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02482e20

// auto_bind_vtable_02482e50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02482e50 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02482e50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02482e50

// auto_bind_vtable_02482e80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02482e80 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02482e80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02482e80

// auto_bind_vtable_02483f50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02483f50 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02483f50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02483f50

// auto_bind_vtable_02483f80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02483f80 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02483f80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02483f80

// auto_bind_vtable_02483fb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02483fb0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02483fb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02483fb0

// auto_bind_vtable_024842e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024842e0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024842e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024842e0

// auto_bind_vtable_02484310: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02484310 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02484310()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02484310

// auto_bind_vtable_02484340: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02484340 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02484340()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02484340

// auto_bind_vtable_02484370: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02484370 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02484370()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02484370

// auto_bind_vtable_024843a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024843a0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024843a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024843a0

// auto_bind_vtable_024843d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024843d0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024843d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024843d0

// auto_bind_vtable_02484640: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02484640 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02484640()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02484640

// auto_bind_vtable_02484670: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02484670 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02484670()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02484670

// auto_bind_vtable_024846a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024846a0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024846a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024846a0

// auto_bind_vtable_02484a50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02484a50 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02484a50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02484a50

// auto_bind_vtable_02484a80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02484a80 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02484a80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02484a80

// auto_bind_vtable_02484ab0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02484ab0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02484ab0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02484ab0

// auto_bind_vtable_02484fd0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02484fd0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02484fd0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02484fd0

// auto_bind_vtable_02485000: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02485000 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02485000()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02485000

// auto_bind_vtable_02485030: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02485030 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02485030()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02485030

// auto_bind_vtable_02485450: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02485450 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02485450()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02485450

// auto_bind_vtable_02485480: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02485480 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02485480()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02485480

// auto_bind_vtable_024854b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024854b0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024854b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024854b0

// auto_bind_vtable_02485ff0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02485ff0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02485ff0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02485ff0

// auto_bind_vtable_02486020: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02486020 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02486020()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02486020

// auto_bind_vtable_02486050: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02486050 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02486050()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02486050

// auto_bind_vtable_02487d40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02487d40 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02487d40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02487d40

// auto_bind_vtable_02487d70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02487d70 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02487d70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02487d70

// auto_bind_vtable_02487da0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02487da0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02487da0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02487da0

// auto_bind_vtable_02489260: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02489260 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02489260()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02489260

// auto_bind_vtable_02489290: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02489290 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02489290()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02489290

// auto_bind_vtable_024892c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024892c0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024892c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024892c0

// auto_bind_vtable_0248a960: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248a960 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248a960()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248a960

// auto_bind_vtable_0248a990: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248a990 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248a990()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248a990

// auto_bind_vtable_0248a9c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248a9c0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248a9c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248a9c0

// auto_bind_vtable_0248aca0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248aca0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248aca0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248aca0

// auto_bind_vtable_0248acd0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248acd0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248acd0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248acd0

// auto_bind_vtable_0248ad00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248ad00 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248ad00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248ad00

// auto_bind_vtable_0248ad30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248ad30 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248ad30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248ad30

// auto_bind_vtable_0248ad60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248ad60 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248ad60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248ad60

// auto_bind_vtable_0248ad90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248ad90 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248ad90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248ad90

// auto_bind_vtable_0248bc50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248bc50 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248bc50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248bc50

// auto_bind_vtable_0248bc80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248bc80 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248bc80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248bc80

// auto_bind_vtable_0248bcb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248bcb0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248bcb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248bcb0

// auto_bind_vtable_0248be20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248be20 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248be20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248be20

// auto_bind_vtable_0248be50: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248be50 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248be50()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248be50

// auto_bind_vtable_0248be80: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248be80 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248be80()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248be80

// auto_bind_vtable_0248c280: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248c280 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248c280()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248c280

// auto_bind_vtable_0248c2b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248c2b0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248c2b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248c2b0

// auto_bind_vtable_0248c2e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248c2e0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248c2e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248c2e0

// auto_bind_vtable_0248d030: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248d030 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248d030()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248d030

// auto_bind_vtable_0248d060: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248d060 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248d060()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248d060

// auto_bind_vtable_0248d090: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248d090 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248d090()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248d090

// auto_bind_vtable_0248ffd0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0248ffd0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0248ffd0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0248ffd0

// auto_bind_vtable_02490000: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02490000 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02490000()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02490000

// auto_bind_vtable_02490030: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02490030 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02490030()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02490030

// auto_bind_vtable_02492a40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02492a40 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02492a40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02492a40

// auto_bind_vtable_02492a70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02492a70 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02492a70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02492a70

// auto_bind_vtable_02492aa0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02492aa0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02492aa0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02492aa0

// auto_bind_vtable_02493dc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02493dc0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02493dc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02493dc0

// auto_bind_vtable_02493df0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02493df0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02493df0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02493df0

// auto_bind_vtable_02493e20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02493e20 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02493e20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02493e20

// auto_bind_vtable_02496850: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02496850 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02496850()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02496850

// auto_bind_vtable_02496880: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02496880 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02496880()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02496880

// auto_bind_vtable_024968b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024968b0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024968b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024968b0

// auto_bind_vtable_02496ec0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02496ec0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02496ec0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02496ec0

// auto_bind_vtable_02496ef0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02496ef0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02496ef0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02496ef0

// auto_bind_vtable_02496f20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02496f20 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02496f20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02496f20

// auto_bind_vtable_02499930: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02499930 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02499930()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02499930

// auto_bind_vtable_02499960: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02499960 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02499960()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02499960

// auto_bind_vtable_02499990: misc_bind_vtable_56b4840 with other addresses.
namespace twin_02499990 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_02499990()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_02499990

// auto_bind_vtable_0249d610: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0249d610 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0249d610()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0249d610

// auto_bind_vtable_0249d640: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0249d640 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0249d640()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0249d640

// auto_bind_vtable_0249d670: misc_bind_vtable_56b4840 with other addresses.
namespace twin_0249d670 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_0249d670()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_0249d670

// auto_bind_vtable_024a0360: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a0360 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a0360()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a0360

// auto_bind_vtable_024a0390: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a0390 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a0390()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a0390

// auto_bind_vtable_024a03c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a03c0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a03c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a03c0

// auto_bind_vtable_024a29c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a29c0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a29c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a29c0

// auto_bind_vtable_024a29f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a29f0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a29f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a29f0

// auto_bind_vtable_024a2a20: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a2a20 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a2a20()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a2a20

// auto_bind_vtable_024a3dd0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a3dd0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a3dd0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a3dd0

// auto_bind_vtable_024a3e00: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a3e00 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a3e00()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a3e00

// auto_bind_vtable_024a3e30: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a3e30 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a3e30()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a3e30

// auto_bind_vtable_024a59e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a59e0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a59e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a59e0

// auto_bind_vtable_024a5a10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a5a10 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a5a10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a5a10

// auto_bind_vtable_024a5a40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a5a40 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a5a40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a5a40

// auto_bind_vtable_024a8790: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a8790 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a8790()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a8790

// auto_bind_vtable_024a87c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a87c0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a87c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a87c0

// auto_bind_vtable_024a87f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a87f0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a87f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a87f0

// auto_bind_vtable_024a8890: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a8890 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a8890()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a8890

// auto_bind_vtable_024a88c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a88c0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a88c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a88c0

// auto_bind_vtable_024a88f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a88f0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a88f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a88f0

// auto_bind_vtable_024a8c60: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a8c60 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a8c60()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a8c60

// auto_bind_vtable_024a8c90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a8c90 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a8c90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a8c90

// auto_bind_vtable_024a8cc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a8cc0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a8cc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a8cc0

// auto_bind_vtable_024a8fb0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a8fb0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a8fb0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a8fb0

// auto_bind_vtable_024a8fe0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a8fe0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a8fe0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a8fe0

// auto_bind_vtable_024a9010: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a9010 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a9010()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a9010

// auto_bind_vtable_024a9040: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a9040 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a9040()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a9040

// auto_bind_vtable_024a9070: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a9070 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a9070()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a9070

// auto_bind_vtable_024a90a0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a90a0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a90a0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a90a0

// auto_bind_vtable_024a90d0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a90d0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a90d0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a90d0

// auto_bind_vtable_024a9100: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a9100 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a9100()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a9100

// auto_bind_vtable_024a9130: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a9130 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a9130()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a9130

// auto_bind_vtable_024a9160: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a9160 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a9160()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a9160

// auto_bind_vtable_024a9190: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a9190 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a9190()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a9190

// auto_bind_vtable_024a91c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a91c0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a91c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a91c0

// auto_bind_vtable_024a9d40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a9d40 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a9d40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a9d40

// auto_bind_vtable_024a9d70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a9d70 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a9d70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a9d70

// auto_bind_vtable_024a9da0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024a9da0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024a9da0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024a9da0

// auto_bind_vtable_024ae800: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024ae800 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024ae800()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024ae800

// auto_bind_vtable_024ae830: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024ae830 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024ae830()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024ae830

// auto_bind_vtable_024ae860: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024ae860 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024ae860()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024ae860

// auto_bind_vtable_024b3d90: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b3d90 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b3d90()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b3d90

// auto_bind_vtable_024b3dc0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b3dc0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b3dc0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b3dc0

// auto_bind_vtable_024b3df0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b3df0 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b3df0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b3df0

// auto_bind_vtable_024b4320: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b4320 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b4320()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b4320

// auto_bind_vtable_024b4350: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b4350 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b4350()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b4350

// auto_bind_vtable_024b4380: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b4380 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b4380()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b4380

// auto_bind_vtable_024b43b0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b43b0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b43b0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b43b0

// auto_bind_vtable_024b43e0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b43e0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b43e0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b43e0

// auto_bind_vtable_024b4410: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b4410 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b4410()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b4410

// auto_bind_vtable_024b46c0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b46c0 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b46c0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b46c0

// auto_bind_vtable_024b46f0: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b46f0 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b46f0()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b46f0

// auto_bind_vtable_024b4720: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b4720 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b4720()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b4720

// auto_bind_vtable_024b4c10: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b4c10 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b4c10()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b4c10

// auto_bind_vtable_024b4c40: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b4c40 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b4c40()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b4c40

// auto_bind_vtable_024b4c70: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b4c70 {

// Misc: publish the static vtable block at 0x056b47f0 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b47f0, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59d0, published_vtable, const void *);
RT_GLOBAL(0x05ac59d8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b4c70()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b4c70

// auto_bind_vtable_024b5520: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b5520 {

// Misc: publish the static vtable block at 0x056b4840 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4840, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59b0, published_vtable, const void *);
RT_GLOBAL(0x05ac59b8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b5520()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b5520

// auto_bind_vtable_024b5550: misc_bind_vtable_56b4840 with other addresses.
namespace twin_024b5550 {

// Misc: publish the static vtable block at 0x056b4890 through a global pointer, once.


namespace {

/** A static vtable block: the published pointer addresses its slot at +0x10. */
struct StaticVtable {
    static constexpr auto slot_bytes = 8;
    uint8_t unknown_0x0000[0x10];
    uint8_t first_slot_0x0010[slot_bytes];
};
static_assert(offsetof(StaticVtable, first_slot_0x0010) == 0x10);

RT_GLOBAL(0x056b4890, static_vtable, StaticVtable);
RT_GLOBAL(0x05ac59c0, published_vtable, const void *);
RT_GLOBAL(0x05ac59c8, vtable_published_flag, uint64_t);

}  // namespace

/**
 *
 * Publishes the slot address of the static vtable block the first time it is called.
 *
 * The published pointer is written before the flag, and the flag is tested as its low byte only.
 * Once the flag's low byte is nonzero the function does nothing.
 */
extern "C" void bb_auto_bind_vtable_024b5550()
{
    if (static_cast<uint8_t>(vtable_published_flag.get()) != 0) return;
    published_vtable.get() = &static_vtable.address()->first_slot_0x0010;
    vtable_published_flag.get() = 1;
}

}  // namespace twin_024b5550
