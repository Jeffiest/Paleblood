// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01de1c50 reads.
 *
 */
struct Object01de1c50 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_01de1c50; meaning unknown. */
};
static_assert(offsetof(Object01de1c50, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01de1c50(const Object01de1c50 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01de1d20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01de1d30()
{
}

/**
 *
 * The part of the object that auto_return_field_01de1fa0 reads.
 *
 */
struct Object01de1fa0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01de1fa0; meaning unknown. */
};
static_assert(offsetof(Object01de1fa0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de1fa0(const Object01de1fa0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01de1fb0 reads.
 *
 */
struct Object01de1fb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01de1fb0; meaning unknown. */
};
static_assert(offsetof(Object01de1fb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de1fb0(const Object01de1fb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01de2000()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de2280 = 0xf0;

extern "C" uint32_t bb_auto_return_constant_01de2280()
{
    return value_01de2280;
}

/**
 *
 * The part of the object that auto_return_field_01de22c0 reads.
 *
 */
struct Object01de22c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01de22c0; meaning unknown. */
};
static_assert(offsetof(Object01de22c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de22c0(const Object01de22c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01de22d0 reads.
 *
 */
struct Object01de22d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01de22d0; meaning unknown. */
};
static_assert(offsetof(Object01de22d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de22d0(const Object01de22d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01de2320()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de25a0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01de25a0()
{
    return value_01de25a0;
}

/**
 *
 * The part of the object that auto_return_field_01de25e0 reads.
 *
 */
struct Object01de25e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01de25e0; meaning unknown. */
};
static_assert(offsetof(Object01de25e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de25e0(const Object01de25e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01de25f0 reads.
 *
 */
struct Object01de25f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01de25f0; meaning unknown. */
};
static_assert(offsetof(Object01de25f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de25f0(const Object01de25f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01de2640()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de28c0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01de28c0()
{
    return value_01de28c0;
}

/**
 *
 * The part of the object that auto_return_field_01de2900 reads.
 *
 */
struct Object01de2900 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01de2900; meaning unknown. */
};
static_assert(offsetof(Object01de2900, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de2900(const Object01de2900 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01de2910 reads.
 *
 */
struct Object01de2910 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01de2910; meaning unknown. */
};
static_assert(offsetof(Object01de2910, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de2910(const Object01de2910 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01de2960()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de2be0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_01de2be0()
{
    return value_01de2be0;
}

/**
 *
 * The part of the object that auto_return_field_01de3840 reads.
 *
 */
struct Object01de3840 {
    uint8_t unknown_0x0000[0x15c];
    uint8_t value_0x015c; /**< Read by auto_return_field_01de3840; meaning unknown. */
};
static_assert(offsetof(Object01de3840, value_0x015c) == 0x15c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01de3840(const Object01de3840 *self)
{
    return self->value_0x015c;
}

/**
 *
 * The part of the object that auto_return_field_01de3850 reads.
 *
 */
struct Object01de3850 {
    uint8_t unknown_0x0000[0x15d];
    uint8_t value_0x015d; /**< Read by auto_return_field_01de3850; meaning unknown. */
};
static_assert(offsetof(Object01de3850, value_0x015d) == 0x15d);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01de3850(const Object01de3850 *self)
{
    return self->value_0x015d;
}

/**
 *
 * The part of the object that auto_return_field_01de60f0 reads.
 *
 */
struct Object01de60f0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_01de60f0; meaning unknown. */
};
static_assert(offsetof(Object01de60f0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01de60f0(const Object01de60f0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_01de6cd0 reads.
 *
 */
struct Object01de6cd0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_01de6cd0; meaning unknown. */
};
static_assert(offsetof(Object01de6cd0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01de6cd0(const Object01de6cd0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01de6da0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01de6db0()
{
}

/**
 *
 * The part of the object that auto_return_field_01de70a0 reads.
 *
 */
struct Object01de70a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01de70a0; meaning unknown. */
};
static_assert(offsetof(Object01de70a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de70a0(const Object01de70a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01de70b0 reads.
 *
 */
struct Object01de70b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01de70b0; meaning unknown. */
};
static_assert(offsetof(Object01de70b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de70b0(const Object01de70b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01de7100()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de7380 = 0x170;

extern "C" uint32_t bb_auto_return_constant_01de7380()
{
    return value_01de7380;
}

/**
 *
 * The part of the object that auto_return_field_01de73c0 reads.
 *
 */
struct Object01de73c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01de73c0; meaning unknown. */
};
static_assert(offsetof(Object01de73c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de73c0(const Object01de73c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01de73d0 reads.
 *
 */
struct Object01de73d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01de73d0; meaning unknown. */
};
static_assert(offsetof(Object01de73d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de73d0(const Object01de73d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01de7420()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de76a0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01de76a0()
{
    return value_01de76a0;
}

/**
 *
 * The part of the object that auto_return_field_01de76e0 reads.
 *
 */
struct Object01de76e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01de76e0; meaning unknown. */
};
static_assert(offsetof(Object01de76e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de76e0(const Object01de76e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01de76f0 reads.
 *
 */
struct Object01de76f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01de76f0; meaning unknown. */
};
static_assert(offsetof(Object01de76f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de76f0(const Object01de76f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01de7740()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de79c0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01de79c0()
{
    return value_01de79c0;
}

/**
 *
 * The part of the object that auto_return_field_01de7a00 reads.
 *
 */
struct Object01de7a00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01de7a00; meaning unknown. */
};
static_assert(offsetof(Object01de7a00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de7a00(const Object01de7a00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01de7a10 reads.
 *
 */
struct Object01de7a10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01de7a10; meaning unknown. */
};
static_assert(offsetof(Object01de7a10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01de7a10(const Object01de7a10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01de7a60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01de7ce0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01de7ce0()
{
    return value_01de7ce0;
}
