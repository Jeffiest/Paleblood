// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01900990()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01901450()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01901460()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01901470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01904560()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019045c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01904620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01904680()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019046e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01904730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01904780()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019047e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01904840()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_019064a0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01906810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_019077b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01908670()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01908a40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01908a40()
{
    return value_01908a40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01908db0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01908e90 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01908e90()
{
    return value_01908e90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190a5d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190a5e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190b0d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190b560()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190b570()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0190b580()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190c9b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190c9c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0190c9d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0190c9e0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190cdf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190ce50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190ceb0()
{
}

/**
 *
 * The part of the object that auto_return_field_0190cf40 reads.
 *
 */
struct Object0190cf40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0190cf40; meaning unknown. */
};
static_assert(offsetof(Object0190cf40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0190cf40(const Object0190cf40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0190cf50 reads.
 *
 */
struct Object0190cf50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0190cf50; meaning unknown. */
};
static_assert(offsetof(Object0190cf50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0190cf50(const Object0190cf50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0190cfa0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0190d240 = 0xb0;

extern "C" uint32_t bb_auto_return_constant_0190d240()
{
    return value_0190d240;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190d510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190d5d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190def0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190df50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0190f550()
{
}

/**
 *
 * The part of the object that auto_return_field_0190ff40 reads.
 *
 */
struct Object0190ff40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0190ff40; meaning unknown. */
};
static_assert(offsetof(Object0190ff40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0190ff40(const Object0190ff40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0190ff50 reads.
 *
 */
struct Object0190ff50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0190ff50; meaning unknown. */
};
static_assert(offsetof(Object0190ff50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0190ff50(const Object0190ff50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0190ffa0()
{
    return 0;
}
