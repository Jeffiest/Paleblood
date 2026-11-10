// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_tagged_link_address, in game/misc/tagged_link_address.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>

// auto_tagged_link_address_008c6070: misc_tagged_link_address with other addresses and constants.
namespace near_008c6070 {

/** An object of which only its tagged link word is known. */
struct TaggedLinkOwner {
    uint8_t unknown_0x0000[0x38];
    uint64_t tagged;
};
static_assert(offsetof(TaggedLinkOwner, tagged) == 0x38);

namespace {

/** The flag kept in the lowest bit of a tagged link; the other bits are an address. */
constexpr uint64_t tagged_link_flag = 1;

}  // namespace

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is the lowest bit of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_auto_tagged_link_address_008c6070(const TaggedLinkOwner *link)
{
    return link->tagged & ~tagged_link_flag;
}

}  // namespace near_008c6070

// auto_tagged_link_address_008ce270: misc_tagged_link_address with other addresses and constants.
namespace near_008ce270 {

/** An object of which only its tagged link word is known. */
struct TaggedLinkOwner {
    uint8_t unknown_0x0000[0x50];
    uint64_t tagged;
};
static_assert(offsetof(TaggedLinkOwner, tagged) == 0x50);

namespace {

/** The flag kept in the lowest bit of a tagged link; the other bits are an address. */
constexpr uint64_t tagged_link_flag = 1;

}  // namespace

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is the lowest bit of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_auto_tagged_link_address_008ce270(const TaggedLinkOwner *link)
{
    return link->tagged & ~tagged_link_flag;
}

}  // namespace near_008ce270

// auto_tagged_link_address_0093f220: misc_tagged_link_address with other addresses and constants.
namespace near_0093f220 {

/** An object of which only its tagged link word is known. */
struct TaggedLinkOwner {
    uint8_t unknown_0x0000[0x20];
    uint64_t tagged;
};
static_assert(offsetof(TaggedLinkOwner, tagged) == 0x20);

namespace {

/** The flag kept in the lowest bit of a tagged link; the other bits are an address. */
constexpr uint64_t tagged_link_flag = 1;

}  // namespace

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is the lowest bit of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_auto_tagged_link_address_0093f220(const TaggedLinkOwner *link)
{
    return link->tagged & ~tagged_link_flag;
}

}  // namespace near_0093f220

// auto_tagged_link_address_00bdebb0: misc_tagged_link_address with other addresses and constants.
namespace near_00bdebb0 {

/** An object of which only its tagged link word is known. */
struct TaggedLinkOwner {
    uint8_t unknown_0x0000[0x18];
    uint64_t tagged;
};
static_assert(offsetof(TaggedLinkOwner, tagged) == 0x18);

namespace {

/** The flag kept in the lowest bit of a tagged link; the other bits are an address. */
constexpr uint64_t tagged_link_flag = 1;

}  // namespace

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is the lowest bit of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_auto_tagged_link_address_00bdebb0(const TaggedLinkOwner *link)
{
    return link->tagged & ~tagged_link_flag;
}

}  // namespace near_00bdebb0

// auto_tagged_link_address_00be0cb0: misc_tagged_link_address with other addresses and constants.
namespace near_00be0cb0 {

/** An object of which only its tagged link word is known. */
struct TaggedLinkOwner {
    uint8_t unknown_0x0000[0x18];
    uint64_t tagged;
};
static_assert(offsetof(TaggedLinkOwner, tagged) == 0x18);

namespace {

/** The flag kept in the lowest bit of a tagged link; the other bits are an address. */
constexpr uint64_t tagged_link_flag = 1;

}  // namespace

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is the lowest bit of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_auto_tagged_link_address_00be0cb0(const TaggedLinkOwner *link)
{
    return link->tagged & ~tagged_link_flag;
}

}  // namespace near_00be0cb0

// auto_tagged_link_address_00beb510: misc_tagged_link_address with other addresses and constants.
namespace near_00beb510 {

/** An object of which only its tagged link word is known. */
struct TaggedLinkOwner {
    uint8_t unknown_0x0000[0x18];
    uint64_t tagged;
};
static_assert(offsetof(TaggedLinkOwner, tagged) == 0x18);

namespace {

/** The flag kept in the lowest bit of a tagged link; the other bits are an address. */
constexpr uint64_t tagged_link_flag = 1;

}  // namespace

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is the lowest bit of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_auto_tagged_link_address_00beb510(const TaggedLinkOwner *link)
{
    return link->tagged & ~tagged_link_flag;
}

}  // namespace near_00beb510

// auto_tagged_link_address_00c09800: misc_tagged_link_address with other addresses and constants.
namespace near_00c09800 {

/** An object of which only its tagged link word is known. */
struct TaggedLinkOwner {
    uint8_t unknown_0x0000[0x18];
    uint64_t tagged;
};
static_assert(offsetof(TaggedLinkOwner, tagged) == 0x18);

namespace {

/** The flag kept in the lowest bit of a tagged link; the other bits are an address. */
constexpr uint64_t tagged_link_flag = 1;

}  // namespace

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is the lowest bit of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_auto_tagged_link_address_00c09800(const TaggedLinkOwner *link)
{
    return link->tagged & ~tagged_link_flag;
}

}  // namespace near_00c09800

// auto_tagged_link_address_028cae80: misc_tagged_link_address with other addresses and constants.
namespace near_028cae80 {

/** An object of which only its tagged link word is known. */
struct TaggedLinkOwner {
    uint8_t unknown_0x0000[0x70];
    uint64_t tagged;
};
static_assert(offsetof(TaggedLinkOwner, tagged) == 0x70);

namespace {

/** The flag kept in the lowest bit of a tagged link; the other bits are an address. */
constexpr uint64_t tagged_link_flag = 1;

}  // namespace

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is the lowest bit of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_auto_tagged_link_address_028cae80(const TaggedLinkOwner *link)
{
    return link->tagged & ~tagged_link_flag;
}

}  // namespace near_028cae80

// auto_tagged_link_address_028cd460: misc_tagged_link_address with other addresses and constants.
namespace near_028cd460 {

/** An object of which only its tagged link word is known. */
struct TaggedLinkOwner {
    uint8_t unknown_0x0000[0x70];
    uint64_t tagged;
};
static_assert(offsetof(TaggedLinkOwner, tagged) == 0x70);

namespace {

/** The flag kept in the lowest bit of a tagged link; the other bits are an address. */
constexpr uint64_t tagged_link_flag = 1;

}  // namespace

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is the lowest bit of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_auto_tagged_link_address_028cd460(const TaggedLinkOwner *link)
{
    return link->tagged & ~tagged_link_flag;
}

}  // namespace near_028cd460

// auto_tagged_link_address_028cdcd0: misc_tagged_link_address with other addresses and constants.
namespace near_028cdcd0 {

/** An object of which only its tagged link word is known. */
struct TaggedLinkOwner {
    uint8_t unknown_0x0000[0x40];
    uint64_t tagged;
};
static_assert(offsetof(TaggedLinkOwner, tagged) == 0x40);

namespace {

/** The flag kept in the lowest bit of a tagged link; the other bits are an address. */
constexpr uint64_t tagged_link_flag = 1;

}  // namespace

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is the lowest bit of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_auto_tagged_link_address_028cdcd0(const TaggedLinkOwner *link)
{
    return link->tagged & ~tagged_link_flag;
}

}  // namespace near_028cdcd0

// auto_tagged_link_address_028ecf00: misc_tagged_link_address with other addresses and constants.
namespace near_028ecf00 {

/** An object of which only its tagged link word is known. */
struct TaggedLinkOwner {
    uint8_t unknown_0x0000[0x30];
    uint64_t tagged;
};
static_assert(offsetof(TaggedLinkOwner, tagged) == 0x30);

namespace {

/** The flag kept in the lowest bit of a tagged link; the other bits are an address. */
constexpr uint64_t tagged_link_flag = 1;

}  // namespace

/**
 *
 * Returns the address of a tagged link with its flag bit cleared.
 *
 * The flag is the lowest bit of the stored value; the address is the value with that bit cleared.
 */
extern "C" uint64_t bb_auto_tagged_link_address_028ecf00(const TaggedLinkOwner *link)
{
    return link->tagged & ~tagged_link_flag;
}

}  // namespace near_028ecf00
