// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ce1ac0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ce2f50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ce3020()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ce3080()
{
}

/**
 *
 * The part of the object that auto_return_field_01ce3360 reads.
 *
 */
struct Object01ce3360 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ce3360; meaning unknown. */
};
static_assert(offsetof(Object01ce3360, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ce3360(const Object01ce3360 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ce3370 reads.
 *
 */
struct Object01ce3370 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ce3370; meaning unknown. */
};
static_assert(offsetof(Object01ce3370, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ce3370(const Object01ce3370 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ce33c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ce3640 = 0x158;

extern "C" uint32_t bb_auto_return_constant_01ce3640()
{
    return value_01ce3640;
}

/**
 *
 * The part of the object that auto_return_float_field_01ce7e70 reads.
 *
 */
struct Object01ce7e70 {
    uint8_t unknown_0x0000[0x3ec];
    float value_0x03ec; /**< Read by auto_return_float_field_01ce7e70; meaning unknown. */
};
static_assert(offsetof(Object01ce7e70, value_0x03ec) == 0x3ec);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_01ce7e70(const Object01ce7e70 *self)
{
    return self->value_0x03ec;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ce8650()
{
}

/**
 *
 * The part of the object that auto_return_field_01ce8d90 reads.
 *
 */
struct Object01ce8d90 {
    uint8_t unknown_0x0000[0x3b8];
    uint64_t value_0x03b8; /**< Read by auto_return_field_01ce8d90; meaning unknown. */
};
static_assert(offsetof(Object01ce8d90, value_0x03b8) == 0x3b8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ce8d90(const Object01ce8d90 *self)
{
    return self->value_0x03b8;
}

/**
 *
 * The part of the object that auto_return_field_01ce8da0 reads.
 *
 */
struct Object01ce8da0 {
    uint8_t unknown_0x0000[0x3c8];
    uint64_t value_0x03c8; /**< Read by auto_return_field_01ce8da0; meaning unknown. */
};
static_assert(offsetof(Object01ce8da0, value_0x03c8) == 0x3c8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ce8da0(const Object01ce8da0 *self)
{
    return self->value_0x03c8;
}

/**
 *
 * The part of the object that auto_return_field_01ce8db0 reads.
 *
 */
struct Object01ce8db0 {
    uint8_t unknown_0x0000[0x3d0];
    uint32_t value_0x03d0; /**< Read by auto_return_field_01ce8db0; meaning unknown. */
};
static_assert(offsetof(Object01ce8db0, value_0x03d0) == 0x3d0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01ce8db0(const Object01ce8db0 *self)
{
    return self->value_0x03d0;
}

/**
 *
 * The part of the object that auto_return_field_01ce8dd0 reads.
 *
 */
struct Object01ce8dd0 {
    uint8_t unknown_0x0000[0x3e4];
    uint8_t value_0x03e4; /**< Read by auto_return_field_01ce8dd0; meaning unknown. */
};
static_assert(offsetof(Object01ce8dd0, value_0x03e4) == 0x3e4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01ce8dd0(const Object01ce8dd0 *self)
{
    return self->value_0x03e4;
}

/**
 *
 * The part of the object that auto_return_field_01ce8de0 reads.
 *
 */
struct Object01ce8de0 {
    uint8_t unknown_0x0000[0x3e8];
    int8_t value_0x03e8; /**< Read by auto_return_field_01ce8de0; meaning unknown. */
};
static_assert(offsetof(Object01ce8de0, value_0x03e8) == 0x3e8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_01ce8de0(const Object01ce8de0 *self)
{
    return self->value_0x03e8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ce8df0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ce8e30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ce8e90()
{
}

/**
 *
 * The part of the object that auto_return_field_01ce8f20 reads.
 *
 */
struct Object01ce8f20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ce8f20; meaning unknown. */
};
static_assert(offsetof(Object01ce8f20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ce8f20(const Object01ce8f20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ce8f30 reads.
 *
 */
struct Object01ce8f30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ce8f30; meaning unknown. */
};
static_assert(offsetof(Object01ce8f30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ce8f30(const Object01ce8f30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ce8f80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ce9200 = 0x400;

extern "C" uint32_t bb_auto_return_constant_01ce9200()
{
    return value_01ce9200;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ce9660()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ceac00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ceb2f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ceb350()
{
}
