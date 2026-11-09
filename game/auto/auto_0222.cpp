// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02220310 reads.
 *
 */
struct Object02220310 {
    uint8_t unknown_0x0000[0x138];
    uint32_t value_0x0138; /**< Read by auto_return_field_02220310; meaning unknown. */
};
static_assert(offsetof(Object02220310, value_0x0138) == 0x138);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02220310(const Object02220310 *self)
{
    return self->value_0x0138;
}

/**
 *
 * The part of the object that auto_return_field_02220870 reads.
 *
 */
struct Object02220870 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_02220870; meaning unknown. */
};
static_assert(offsetof(Object02220870, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02220870(const Object02220870 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02222100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02222160()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022221c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02223c00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02228060()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_022280c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02229790 reads.
 *
 */
struct Object02229790 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02229790; meaning unknown. */
};
static_assert(offsetof(Object02229790, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02229790(const Object02229790 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_0222a360 reads.
 *
 */
struct Object0222a360 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_0222a360; meaning unknown. */
};
static_assert(offsetof(Object0222a360, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0222a360(const Object0222a360 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0222a430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0222a440()
{
}

/**
 *
 * The part of the object that auto_return_field_0222a720 reads.
 *
 */
struct Object0222a720 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0222a720; meaning unknown. */
};
static_assert(offsetof(Object0222a720, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0222a720(const Object0222a720 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0222a730 reads.
 *
 */
struct Object0222a730 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0222a730; meaning unknown. */
};
static_assert(offsetof(Object0222a730, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0222a730(const Object0222a730 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0222a780()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0222aa00 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0222aa00()
{
    return value_0222aa00;
}

/**
 *
 * The part of the object that auto_return_field_0222aa40 reads.
 *
 */
struct Object0222aa40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0222aa40; meaning unknown. */
};
static_assert(offsetof(Object0222aa40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0222aa40(const Object0222aa40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0222aa50 reads.
 *
 */
struct Object0222aa50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0222aa50; meaning unknown. */
};
static_assert(offsetof(Object0222aa50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0222aa50(const Object0222aa50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0222aaa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0222ad20 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0222ad20()
{
    return value_0222ad20;
}
