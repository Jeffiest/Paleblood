// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00840380()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008403a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00841840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00841850()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00841860 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00841860()
{
    return value_00841860;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00841870 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00841870()
{
    return value_00841870;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00841880 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00841880()
{
    return value_00841880;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_00841890 = 0x1;

extern "C" uint32_t bb_auto_return_constant_00841890()
{
    return value_00841890;
}

/**
 *
 * The part of the object that auto_return_field_008418a0 reads.
 *
 */
struct Object008418a0 {
    uint8_t unknown_0x0000[0x1a8];
    uint64_t value_0x01a8; /**< Read by auto_return_field_008418a0; meaning unknown. */
};
static_assert(offsetof(Object008418a0, value_0x01a8) == 0x1a8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_008418a0(const Object008418a0 *self)
{
    return self->value_0x01a8;
}

/**
 *
 * The part of the object that auto_return_field_008418b0 reads.
 *
 */
struct Object008418b0 {
    uint8_t unknown_0x0000[0x1a0];
    uint64_t value_0x01a0; /**< Read by auto_return_field_008418b0; meaning unknown. */
};
static_assert(offsetof(Object008418b0, value_0x01a0) == 0x1a0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_008418b0(const Object008418b0 *self)
{
    return self->value_0x01a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008418c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008418d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008427b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00843e90()
{
}

/**
 *
 * The part of the object that auto_return_field_00844170 reads.
 *
 */
struct Object00844170 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_00844170; meaning unknown. */
};
static_assert(offsetof(Object00844170, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00844170(const Object00844170 *self)
{
    return self->value_0x0010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008444e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008444f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00844510()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00844570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008445d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00844620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00844670()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_008446c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00844bc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00844be0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00845fd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_00845fe0()
{
}

/**
 *
 * The part of the object that auto_return_field_00848810 reads.
 *
 */
struct Object00848810 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_00848810; meaning unknown. */
};
static_assert(offsetof(Object00848810, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_00848810(const Object00848810 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0084aca0()
{
}

/**
 *
 * The part of the object that auto_return_field_0084aff0 reads.
 *
 */
struct Object0084aff0 {
    uint64_t value_0x0000; /**< Read by auto_return_field_0084aff0; meaning unknown. */
};
static_assert(offsetof(Object0084aff0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0084aff0(const Object0084aff0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0084df50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0084e120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0084e7c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0084e7e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0084ff90()
{
    return 0;
}
