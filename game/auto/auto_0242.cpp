// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024206c0()
{
}

/**
 *
 * The part of the object that auto_return_field_02421ea0 reads.
 *
 */
struct Object02421ea0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02421ea0; meaning unknown. */
};
static_assert(offsetof(Object02421ea0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02421ea0(const Object02421ea0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02422b60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02423130 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02423130()
{
    return value_02423130;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02423450 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02423450()
{
    return value_02423450;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02423770 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02423770()
{
    return value_02423770;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02424260 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02424260()
{
    return value_02424260;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02424280()
{
}

/**
 *
 * The part of the object that auto_return_field_02424960 reads.
 *
 */
struct Object02424960 {
    uint8_t unknown_0x0000[0x40];
    uint8_t value_0x0040; /**< Read by auto_return_field_02424960; meaning unknown. */
};
static_assert(offsetof(Object02424960, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02424960(const Object02424960 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02425cd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02425e80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02425ee0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024266e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024291c0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_024291c0()
{
    return value_024291c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024294e0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_024294e0()
{
    return value_024294e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02429800 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02429800()
{
    return value_02429800;
}

/**
 *
 * The part of the object that auto_return_field_0242a7d0 reads.
 *
 */
struct Object0242a7d0 {
    uint8_t unknown_0x0000[0x39];
    uint8_t value_0x0039; /**< Read by auto_return_field_0242a7d0; meaning unknown. */
};
static_assert(offsetof(Object0242a7d0, value_0x0039) == 0x39);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0242a7d0(const Object0242a7d0 *self)
{
    return self->value_0x0039;
}

/**
 *
 * The part of the object that auto_return_field_0242a7e0 reads.
 *
 */
struct Object0242a7e0 {
    uint8_t unknown_0x0000[0x3a];
    uint8_t value_0x003a; /**< Read by auto_return_field_0242a7e0; meaning unknown. */
};
static_assert(offsetof(Object0242a7e0, value_0x003a) == 0x3a);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0242a7e0(const Object0242a7e0 *self)
{
    return self->value_0x003a;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0242ae40()
{
}
