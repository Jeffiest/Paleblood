// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021b4e30()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_021b4e40()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021b53a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021b6850()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021b68b0()
{
}

/**
 *
 * The part of the object that auto_return_field_021bb8d0 reads.
 *
 */
struct Object021bb8d0 {
    uint8_t unknown_0x0000[0x288];
    uint8_t value_0x0288; /**< Read by auto_return_field_021bb8d0; meaning unknown. */
};
static_assert(offsetof(Object021bb8d0, value_0x0288) == 0x288);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_021bb8d0(const Object021bb8d0 *self)
{
    return self->value_0x0288;
}

/**
 *
 * The part of the object that auto_return_field_021bb900 reads.
 *
 */
struct Object021bb900 {
    uint8_t unknown_0x0000[0x28c];
    uint8_t value_0x028c; /**< Read by auto_return_field_021bb900; meaning unknown. */
};
static_assert(offsetof(Object021bb900, value_0x028c) == 0x28c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_021bb900(const Object021bb900 *self)
{
    return self->value_0x028c;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021bcbb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021bcbc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021bcbd0()
{
}

/**
 *
 * The part of the object that auto_return_field_021bcbe0 reads.
 *
 */
struct Object021bcbe0 {
    uint8_t unknown_0x0000[0x240];
    uint64_t value_0x0240; /**< Read by auto_return_field_021bcbe0; meaning unknown. */
};
static_assert(offsetof(Object021bcbe0, value_0x0240) == 0x240);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021bcbe0(const Object021bcbe0 *self)
{
    return self->value_0x0240;
}

/**
 *
 * The part of the object that auto_return_float_field_021bcc10 reads.
 *
 */
struct Object021bcc10 {
    uint8_t unknown_0x0000[0x260];
    float value_0x0260; /**< Read by auto_return_float_field_021bcc10; meaning unknown. */
};
static_assert(offsetof(Object021bcc10, value_0x0260) == 0x260);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_021bcc10(const Object021bcc10 *self)
{
    return self->value_0x0260;
}

/**
 *
 * The part of the object that auto_return_float_field_021bcc40 reads.
 *
 */
struct Object021bcc40 {
    uint8_t unknown_0x0000[0x264];
    float value_0x0264; /**< Read by auto_return_float_field_021bcc40; meaning unknown. */
};
static_assert(offsetof(Object021bcc40, value_0x0264) == 0x264);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" float bb_auto_return_float_field_021bcc40(const Object021bcc40 *self)
{
    return self->value_0x0264;
}

/**
 *
 * The part of the object that auto_return_field_021bcde0 reads.
 *
 */
struct Object021bcde0 {
    uint8_t unknown_0x0000[0x230];
    uint64_t value_0x0230; /**< Read by auto_return_field_021bcde0; meaning unknown. */
};
static_assert(offsetof(Object021bcde0, value_0x0230) == 0x230);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021bcde0(const Object021bcde0 *self)
{
    return self->value_0x0230;
}

/**
 *
 * The part of the object that auto_return_field_021bcdf0 reads.
 *
 */
struct Object021bcdf0 {
    uint8_t unknown_0x0000[0x238];
    uint64_t value_0x0238; /**< Read by auto_return_field_021bcdf0; meaning unknown. */
};
static_assert(offsetof(Object021bcdf0, value_0x0238) == 0x238);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_021bcdf0(const Object021bcdf0 *self)
{
    return self->value_0x0238;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021be170()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021be1d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021be4e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021be4f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021be760()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021be770()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_021be780()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_021be790 = 0x1;

extern "C" uint8_t bb_auto_return_constant_021be790()
{
    return value_021be790;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_021be7a0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_021be7a0()
{
    return value_021be7a0;
}
