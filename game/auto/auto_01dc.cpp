// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01dc02c0 reads.
 *
 */
struct Object01dc02c0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01dc02c0; meaning unknown. */
};
static_assert(offsetof(Object01dc02c0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01dc02c0(const Object01dc02c0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dc0390()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dc03a0()
{
}

/**
 *
 * The part of the object that auto_return_field_01dc0610 reads.
 *
 */
struct Object01dc0610 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dc0610; meaning unknown. */
};
static_assert(offsetof(Object01dc0610, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc0610(const Object01dc0610 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dc0620 reads.
 *
 */
struct Object01dc0620 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dc0620; meaning unknown. */
};
static_assert(offsetof(Object01dc0620, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc0620(const Object01dc0620 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dc0670()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc08f0 = 0x260;

extern "C" uint32_t bb_auto_return_constant_01dc08f0()
{
    return value_01dc08f0;
}

/**
 *
 * The part of the object that auto_return_field_01dc0930 reads.
 *
 */
struct Object01dc0930 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dc0930; meaning unknown. */
};
static_assert(offsetof(Object01dc0930, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc0930(const Object01dc0930 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dc0940 reads.
 *
 */
struct Object01dc0940 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dc0940; meaning unknown. */
};
static_assert(offsetof(Object01dc0940, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc0940(const Object01dc0940 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dc0990()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc0c10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc0c10()
{
    return value_01dc0c10;
}

/**
 *
 * The part of the object that auto_return_field_01dc0c50 reads.
 *
 */
struct Object01dc0c50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dc0c50; meaning unknown. */
};
static_assert(offsetof(Object01dc0c50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc0c50(const Object01dc0c50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dc0c60 reads.
 *
 */
struct Object01dc0c60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dc0c60; meaning unknown. */
};
static_assert(offsetof(Object01dc0c60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc0c60(const Object01dc0c60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dc0cb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc0f30 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc0f30()
{
    return value_01dc0f30;
}

/**
 *
 * The part of the object that auto_return_field_01dc0f70 reads.
 *
 */
struct Object01dc0f70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dc0f70; meaning unknown. */
};
static_assert(offsetof(Object01dc0f70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc0f70(const Object01dc0f70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dc0f80 reads.
 *
 */
struct Object01dc0f80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dc0f80; meaning unknown. */
};
static_assert(offsetof(Object01dc0f80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc0f80(const Object01dc0f80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dc0fd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc1250 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc1250()
{
    return value_01dc1250;
}

/**
 *
 * The part of the object that auto_return_field_01dc3820 reads.
 *
 */
struct Object01dc3820 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01dc3820; meaning unknown. */
};
static_assert(offsetof(Object01dc3820, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01dc3820(const Object01dc3820 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dc38f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dc3900()
{
}

/**
 *
 * The part of the object that auto_return_field_01dc3b70 reads.
 *
 */
struct Object01dc3b70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dc3b70; meaning unknown. */
};
static_assert(offsetof(Object01dc3b70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc3b70(const Object01dc3b70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dc3b80 reads.
 *
 */
struct Object01dc3b80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dc3b80; meaning unknown. */
};
static_assert(offsetof(Object01dc3b80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc3b80(const Object01dc3b80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dc3bd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc3e50 = 0xf0;

extern "C" uint32_t bb_auto_return_constant_01dc3e50()
{
    return value_01dc3e50;
}

/**
 *
 * The part of the object that auto_return_field_01dc3e90 reads.
 *
 */
struct Object01dc3e90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dc3e90; meaning unknown. */
};
static_assert(offsetof(Object01dc3e90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc3e90(const Object01dc3e90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dc3ea0 reads.
 *
 */
struct Object01dc3ea0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dc3ea0; meaning unknown. */
};
static_assert(offsetof(Object01dc3ea0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc3ea0(const Object01dc3ea0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dc3ef0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc4170 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc4170()
{
    return value_01dc4170;
}

/**
 *
 * The part of the object that auto_return_field_01dc41b0 reads.
 *
 */
struct Object01dc41b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dc41b0; meaning unknown. */
};
static_assert(offsetof(Object01dc41b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc41b0(const Object01dc41b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dc41c0 reads.
 *
 */
struct Object01dc41c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dc41c0; meaning unknown. */
};
static_assert(offsetof(Object01dc41c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc41c0(const Object01dc41c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dc4210()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc4490 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc4490()
{
    return value_01dc4490;
}

/**
 *
 * The part of the object that auto_return_field_01dc44d0 reads.
 *
 */
struct Object01dc44d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dc44d0; meaning unknown. */
};
static_assert(offsetof(Object01dc44d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc44d0(const Object01dc44d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dc44e0 reads.
 *
 */
struct Object01dc44e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dc44e0; meaning unknown. */
};
static_assert(offsetof(Object01dc44e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc44e0(const Object01dc44e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dc4530()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc47b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc47b0()
{
    return value_01dc47b0;
}

/**
 *
 * The part of the object that auto_return_field_01dc7050 reads.
 *
 */
struct Object01dc7050 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01dc7050; meaning unknown. */
};
static_assert(offsetof(Object01dc7050, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01dc7050(const Object01dc7050 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dc7120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dc7130()
{
}

/**
 *
 * The part of the object that auto_return_field_01dc73a0 reads.
 *
 */
struct Object01dc73a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dc73a0; meaning unknown. */
};
static_assert(offsetof(Object01dc73a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc73a0(const Object01dc73a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dc73b0 reads.
 *
 */
struct Object01dc73b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dc73b0; meaning unknown. */
};
static_assert(offsetof(Object01dc73b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc73b0(const Object01dc73b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dc7400()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc7680 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc7680()
{
    return value_01dc7680;
}

/**
 *
 * The part of the object that auto_return_field_01dc76c0 reads.
 *
 */
struct Object01dc76c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dc76c0; meaning unknown. */
};
static_assert(offsetof(Object01dc76c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc76c0(const Object01dc76c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dc76d0 reads.
 *
 */
struct Object01dc76d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dc76d0; meaning unknown. */
};
static_assert(offsetof(Object01dc76d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc76d0(const Object01dc76d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dc7720()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc79a0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc79a0()
{
    return value_01dc79a0;
}

/**
 *
 * The part of the object that auto_return_field_01dc79e0 reads.
 *
 */
struct Object01dc79e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dc79e0; meaning unknown. */
};
static_assert(offsetof(Object01dc79e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc79e0(const Object01dc79e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dc79f0 reads.
 *
 */
struct Object01dc79f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dc79f0; meaning unknown. */
};
static_assert(offsetof(Object01dc79f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc79f0(const Object01dc79f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dc7a40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc7cc0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc7cc0()
{
    return value_01dc7cc0;
}

/**
 *
 * The part of the object that auto_return_field_01dc7d00 reads.
 *
 */
struct Object01dc7d00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dc7d00; meaning unknown. */
};
static_assert(offsetof(Object01dc7d00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc7d00(const Object01dc7d00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dc7d10 reads.
 *
 */
struct Object01dc7d10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dc7d10; meaning unknown. */
};
static_assert(offsetof(Object01dc7d10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dc7d10(const Object01dc7d10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dc7d60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dc7fe0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01dc7fe0()
{
    return value_01dc7fe0;
}

/**
 *
 * The part of the object that auto_return_field_01dcb570 reads.
 *
 */
struct Object01dcb570 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dcb570; meaning unknown. */
};
static_assert(offsetof(Object01dcb570, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dcb570(const Object01dcb570 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dcb580 reads.
 *
 */
struct Object01dcb580 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dcb580; meaning unknown. */
};
static_assert(offsetof(Object01dcb580, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dcb580(const Object01dcb580 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dcb5d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dcb850 = 0x98;

extern "C" uint32_t bb_auto_return_constant_01dcb850()
{
    return value_01dcb850;
}

/**
 *
 * The part of the object that auto_return_field_01dcc590 reads.
 *
 */
struct Object01dcc590 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dcc590; meaning unknown. */
};
static_assert(offsetof(Object01dcc590, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dcc590(const Object01dcc590 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dcc5a0 reads.
 *
 */
struct Object01dcc5a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dcc5a0; meaning unknown. */
};
static_assert(offsetof(Object01dcc5a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dcc5a0(const Object01dcc5a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dcc5f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dcc870 = 0x90;

extern "C" uint32_t bb_auto_return_constant_01dcc870()
{
    return value_01dcc870;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01dccea0()
{
}

/**
 *
 * The part of the object that auto_return_field_01dcd540 reads.
 *
 */
struct Object01dcd540 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dcd540; meaning unknown. */
};
static_assert(offsetof(Object01dcd540, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dcd540(const Object01dcd540 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dcd550 reads.
 *
 */
struct Object01dcd550 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dcd550; meaning unknown. */
};
static_assert(offsetof(Object01dcd550, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dcd550(const Object01dcd550 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dcd5a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dcd820 = 0x90;

extern "C" uint32_t bb_auto_return_constant_01dcd820()
{
    return value_01dcd820;
}

/**
 *
 * The part of the object that auto_return_field_01dcdd60 reads.
 *
 */
struct Object01dcdd60 {
    uint8_t unknown_0x0000[0x68];
    uint64_t value_0x0068; /**< Read by auto_return_field_01dcdd60; meaning unknown. */
};
static_assert(offsetof(Object01dcdd60, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dcdd60(const Object01dcdd60 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_01dcdd70 reads.
 *
 */
struct Object01dcdd70 {
    uint8_t unknown_0x0000[0x70];
    uint64_t value_0x0070; /**< Read by auto_return_field_01dcdd70; meaning unknown. */
};
static_assert(offsetof(Object01dcdd70, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dcdd70(const Object01dcdd70 *self)
{
    return self->value_0x0070;
}

/**
 *
 * The part of the object that auto_return_field_01dce320 reads.
 *
 */
struct Object01dce320 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01dce320; meaning unknown. */
};
static_assert(offsetof(Object01dce320, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dce320(const Object01dce320 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01dce330 reads.
 *
 */
struct Object01dce330 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01dce330; meaning unknown. */
};
static_assert(offsetof(Object01dce330, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01dce330(const Object01dce330 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01dce380()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01dce600 = 0x78;

extern "C" uint32_t bb_auto_return_constant_01dce600()
{
    return value_01dce600;
}

/**
 *
 * The part of the object that auto_return_field_01dcebf0 reads.
 *
 */
struct Object01dcebf0 {
    uint8_t unknown_0x0000[0x8];
    uint32_t value_0x0008; /**< Read by auto_return_field_01dcebf0; meaning unknown. */
};
static_assert(offsetof(Object01dcebf0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01dcebf0(const Object01dcebf0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_01dcec00 reads.
 *
 */
struct Object01dcec00 {
    uint8_t unknown_0x0000[0xc];
    uint32_t value_0x000c; /**< Read by auto_return_field_01dcec00; meaning unknown. */
};
static_assert(offsetof(Object01dcec00, value_0x000c) == 0xc);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01dcec00(const Object01dcec00 *self)
{
    return self->value_0x000c;
}
