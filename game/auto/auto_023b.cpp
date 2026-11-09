// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_023b1700 reads.
 *
 */
struct Object023b1700 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_023b1700; meaning unknown. */
};
static_assert(offsetof(Object023b1700, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023b1700(const Object023b1700 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b17d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b17e0()
{
}

/**
 *
 * The part of the object that auto_return_field_023b1a50 reads.
 *
 */
struct Object023b1a50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023b1a50; meaning unknown. */
};
static_assert(offsetof(Object023b1a50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023b1a50(const Object023b1a50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023b1a60 reads.
 *
 */
struct Object023b1a60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023b1a60; meaning unknown. */
};
static_assert(offsetof(Object023b1a60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023b1a60(const Object023b1a60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023b1ab0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023b1d30 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023b1d30()
{
    return value_023b1d30;
}

/**
 *
 * The part of the object that auto_return_field_023b1d70 reads.
 *
 */
struct Object023b1d70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023b1d70; meaning unknown. */
};
static_assert(offsetof(Object023b1d70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023b1d70(const Object023b1d70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023b1d80 reads.
 *
 */
struct Object023b1d80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023b1d80; meaning unknown. */
};
static_assert(offsetof(Object023b1d80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023b1d80(const Object023b1d80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023b1dd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023b2050 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023b2050()
{
    return value_023b2050;
}

/**
 *
 * The part of the object that auto_return_field_023b2090 reads.
 *
 */
struct Object023b2090 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023b2090; meaning unknown. */
};
static_assert(offsetof(Object023b2090, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023b2090(const Object023b2090 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023b20a0 reads.
 *
 */
struct Object023b20a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023b20a0; meaning unknown. */
};
static_assert(offsetof(Object023b20a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023b20a0(const Object023b20a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023b20f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023b2370 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023b2370()
{
    return value_023b2370;
}

/**
 *
 * The part of the object that auto_return_field_023b23b0 reads.
 *
 */
struct Object023b23b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023b23b0; meaning unknown. */
};
static_assert(offsetof(Object023b23b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023b23b0(const Object023b23b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023b23c0 reads.
 *
 */
struct Object023b23c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023b23c0; meaning unknown. */
};
static_assert(offsetof(Object023b23c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023b23c0(const Object023b23c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023b2410()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023b2690 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_023b2690()
{
    return value_023b2690;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_023b5980 = 0x1;

extern "C" uint8_t bb_auto_return_constant_023b5980()
{
    return value_023b5980;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b5c80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b5ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b5f40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b5f50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b5f60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_023b5f70 = 0x1;

extern "C" uint8_t bb_auto_return_constant_023b5f70()
{
    return value_023b5f70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b5f80()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023b5f90()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b5fa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b6210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b6710()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_023b6720 = 0x1;

extern "C" uint8_t bb_auto_return_constant_023b6720()
{
    return value_023b6720;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b68e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b6a90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023b6af0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023b7bf0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023b7c00()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023bd780()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023bde20()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be570()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023be720()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023be740 = 0x270f;

extern "C" uint32_t bb_auto_return_constant_023be740()
{
    return value_023be740;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023be750 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_023be750()
{
    return value_023be750;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be790()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be7a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be7b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be7c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be7d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be7e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023be7f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023be800()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be810()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be820()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be830()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be840()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023be850()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_023be860 = 0x1;

extern "C" uint8_t bb_auto_return_constant_023be860()
{
    return value_023be860;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_023be870 = 0x1;

extern "C" uint8_t bb_auto_return_constant_023be870()
{
    return value_023be870;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be880()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023be890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023be8a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023be8b0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_023bea20 reads.
 *
 */
struct Object023bea20 {
    uint8_t unknown_0x0000[0x38];
    uint32_t value_0x0038; /**< Read by auto_return_field_023bea20; meaning unknown. */
};
static_assert(offsetof(Object023bea20, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023bea20(const Object023bea20 *self)
{
    return self->value_0x0038;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023beea0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023beeb0()
{
    return 0;
}
