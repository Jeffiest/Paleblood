// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_mark_keyed_handle_active, in game/misc/mark_keyed_handle_active.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>

// auto_set_flag_bits_00616f30: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_00616f30 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x5c];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x5c);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x10;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_00616f30(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_00616f30

// auto_set_flag_bits_00616f40: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_00616f40 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x5c];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x5c);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x8;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_00616f40(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_00616f40

// auto_set_flag_bits_00822ce0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_00822ce0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x9];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x9);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x80;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_00822ce0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_00822ce0

// auto_set_flag_bits_01100e10: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_01100e10 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x10];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x10);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x1;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_01100e10(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_01100e10

// auto_set_flag_bits_013a98b0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_013a98b0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x84];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x84);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x1;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_013a98b0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_013a98b0

// auto_set_flag_bits_01484d40: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_01484d40 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x1];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x1);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x20;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_01484d40(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_01484d40

// auto_set_flag_bits_01691d00: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_01691d00 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x6a];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x6a);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x2;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_01691d00(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_01691d00

// auto_set_flag_bits_016ef090: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_016ef090 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x2e];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x2e);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x1;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_016ef090(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_016ef090

// auto_set_flag_bits_017a6e50: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_017a6e50 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x108];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x108);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x1;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_017a6e50(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_017a6e50

// auto_set_flag_bits_01827e40: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_01827e40 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x204];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x204);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x1;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_01827e40(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_01827e40

// auto_set_flag_bits_01cacfd0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_01cacfd0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x20];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x20);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x1;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_01cacfd0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_01cacfd0

// auto_set_flag_bits_01cd2ac0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_01cd2ac0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x358];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x358);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x1;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_01cd2ac0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_01cd2ac0

// auto_set_flag_bits_020bc1a0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_020bc1a0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x248];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x248);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x2;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_020bc1a0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_020bc1a0

// auto_set_flag_bits_020c69a0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_020c69a0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x12c];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x12c);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x2;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_020c69a0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_020c69a0

// auto_set_flag_bits_020c69d0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_020c69d0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x144];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x144);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x2;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_020c69d0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_020c69d0

// auto_set_flag_bits_020c69e0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_020c69e0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x144];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x144);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x8;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_020c69e0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_020c69e0

// auto_set_flag_bits_020c69f0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_020c69f0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x144];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x144);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x10;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_020c69f0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_020c69f0

// auto_set_flag_bits_020c6a00: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_020c6a00 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x144];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x144);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x20;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_020c6a00(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_020c6a00

// auto_set_flag_bits_020c6a10: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_020c6a10 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x144];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x144);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x40;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_020c6a10(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_020c6a10

// auto_set_flag_bits_020f4850: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_020f4850 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0xdc];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0xdc);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x1;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_020f4850(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_020f4850

// auto_set_flag_bits_020f4860: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_020f4860 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0xdc];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0xdc);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x2;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_020f4860(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_020f4860

// auto_set_flag_bits_02100e30: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02100e30 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0xec];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0xec);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x2;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02100e30(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02100e30

// auto_set_flag_bits_02100e50: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02100e50 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0xec];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0xec);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x4;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02100e50(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02100e50

// auto_set_flag_bits_02100e80: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02100e80 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0xec];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0xec);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x8;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02100e80(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02100e80

// auto_set_flag_bits_02100ea0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02100ea0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0xec];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0xec);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x10;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02100ea0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02100ea0

// auto_set_flag_bits_02136a80: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02136a80 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x70];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x70);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x1;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02136a80(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02136a80

// auto_set_flag_bits_021c09c0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_021c09c0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0xd0];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0xd0);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x2;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_021c09c0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_021c09c0

// auto_set_flag_bits_022211a0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_022211a0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x740];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x740);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x2;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_022211a0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_022211a0

// auto_set_flag_bits_022219e0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_022219e0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x740];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x740);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x2;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_022219e0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_022219e0

// auto_set_flag_bits_02276970: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02276970 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x101];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x101);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x1;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02276970(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02276970

// auto_set_flag_bits_02373b80: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02373b80 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x10];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x10);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x1;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02373b80(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02373b80

// auto_set_flag_bits_02373b90: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02373b90 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x10];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x10);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x2;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02373b90(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02373b90

// auto_set_flag_bits_02373c10: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02373c10 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x10];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x10);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x8;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02373c10(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02373c10

// auto_set_flag_bits_02438fe0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02438fe0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x40];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x40);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x4;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02438fe0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02438fe0

// auto_set_flag_bits_024be110: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_024be110 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x31];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x31);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x40;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_024be110(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_024be110

// auto_set_flag_bits_024be120: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_024be120 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x31];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x31);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x80;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_024be120(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_024be120

// auto_set_flag_bits_024be130: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_024be130 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x31];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x31);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x20;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_024be130(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_024be130

// auto_set_flag_bits_027854b0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_027854b0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x6b];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x6b);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x20;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_027854b0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_027854b0

// auto_set_flag_bits_0294b4d0: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_0294b4d0 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x18];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x18);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x2;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_0294b4d0(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_0294b4d0

// auto_set_flag_bits_02a0e330: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02a0e330 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0xc];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0xc);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x2;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02a0e330(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02a0e330

// auto_set_flag_bits_02c4ff20: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02c4ff20 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x88];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x88);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x4;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02c4ff20(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02c4ff20

// auto_set_flag_bits_02c50780: misc_mark_keyed_handle_active with other addresses and constants.
namespace near_02c50780 {

/** An object of which only the flag byte changed here is known. */
struct FlagOwner {
    uint8_t unknown_0x0000[0x88];
    uint8_t flags;
};
static_assert(offsetof(FlagOwner, flags) == 0x88);

namespace {

/** The bits this function adds to the flag byte. */
constexpr uint8_t flags_set = 0x8;

}  // namespace

/**
 *
 * Adds the bits to the owner's flag byte. Nothing else in the owner is changed.
 */
extern "C" void bb_auto_set_flag_bits_02c50780(FlagOwner *owner)
{
    owner->flags |= flags_set;
}

}  // namespace near_02c50780
