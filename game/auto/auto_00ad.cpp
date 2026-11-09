// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_00ad1170 reads.
 *
 */
struct Object00ad1170 {
    uint8_t unknown_0x0000[0x58];
    uint64_t value_0x0058; /**< Read by auto_return_field_00ad1170; meaning unknown. */
};
static_assert(offsetof(Object00ad1170, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ad1170(const Object00ad1170 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_00ad1180 reads.
 *
 */
struct Object00ad1180 {
    uint8_t unknown_0x0000[0x60];
    int16_t value_0x0060; /**< Read by auto_return_field_00ad1180; meaning unknown. */
};
static_assert(offsetof(Object00ad1180, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_00ad1180(const Object00ad1180 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_00ad1ae0 reads.
 *
 */
struct Object00ad1ae0 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_00ad1ae0; meaning unknown. */
};
static_assert(offsetof(Object00ad1ae0, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ad1ae0(const Object00ad1ae0 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_00ad1af0 reads.
 *
 */
struct Object00ad1af0 {
    uint8_t unknown_0x0000[0x38];
    uint64_t value_0x0038; /**< Read by auto_return_field_00ad1af0; meaning unknown. */
};
static_assert(offsetof(Object00ad1af0, value_0x0038) == 0x38);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ad1af0(const Object00ad1af0 *self)
{
    return self->value_0x0038;
}

/**
 *
 * The part of the object that auto_return_field_00ad27c0 reads.
 *
 */
struct Object00ad27c0 {
    uint8_t unknown_0x0000[0x30];
    uint32_t value_0x0030; /**< Read by auto_return_field_00ad27c0; meaning unknown. */
};
static_assert(offsetof(Object00ad27c0, value_0x0030) == 0x30);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00ad27c0(const Object00ad27c0 *self)
{
    return self->value_0x0030;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00ad2820 = 0x5;

extern "C" uint32_t bb_auto_return_constant_00ad2820()
{
    return value_00ad2820;
}

/**
 *
 * The part of the object that auto_return_field_00ad2890 reads.
 *
 */
struct Object00ad2890 {
    uint64_t value_0x0000; /**< Read by auto_return_field_00ad2890; meaning unknown. */
};
static_assert(offsetof(Object00ad2890, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ad2890(const Object00ad2890 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00ad7200 = 0x4;

extern "C" uint32_t bb_auto_return_constant_00ad7200()
{
    return value_00ad7200;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00ad7c10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00ad7c20()
{
}

/**
 *
 * The part of the object that auto_return_field_00ad7c30 reads.
 *
 */
struct Object00ad7c30 {
    uint8_t unknown_0x0000[0xa4];
    uint32_t value_0x00a4; /**< Read by auto_return_field_00ad7c30; meaning unknown. */
};
static_assert(offsetof(Object00ad7c30, value_0x00a4) == 0xa4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00ad7c30(const Object00ad7c30 *self)
{
    return self->value_0x00a4;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_00ad7d60 = 0x1;

extern "C" uint8_t bb_auto_return_constant_00ad7d60()
{
    return value_00ad7d60;
}

/**
 *
 * The part of the object that auto_return_field_00ad7d70 reads.
 *
 */
struct Object00ad7d70 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_00ad7d70; meaning unknown. */
};
static_assert(offsetof(Object00ad7d70, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_00ad7d70(const Object00ad7d70 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00adaed0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00adbc30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00adbc40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00adbc70()
{
}
