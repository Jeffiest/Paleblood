// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020813a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020824b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02082900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02082ba0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020840c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02084250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02084350()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02084450()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_020847a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02088c90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02088ff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02089290()
{
}

/**
 *
 * The part of the object that auto_return_field_0208c160 reads.
 *
 */
struct Object0208c160 {
    uint8_t unknown_0x0000[0x200];
    uint64_t value_0x0200; /**< Read by auto_return_field_0208c160; meaning unknown. */
};
static_assert(offsetof(Object0208c160, value_0x0200) == 0x200);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0208c160(const Object0208c160 *self)
{
    return self->value_0x0200;
}

/**
 *
 * The part of the object that auto_return_field_0208c170 reads.
 *
 */
struct Object0208c170 {
    uint8_t unknown_0x0000[0x208];
    uint64_t value_0x0208; /**< Read by auto_return_field_0208c170; meaning unknown. */
};
static_assert(offsetof(Object0208c170, value_0x0208) == 0x208);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0208c170(const Object0208c170 *self)
{
    return self->value_0x0208;
}

/**
 *
 * The part of the object that auto_return_field_0208c180 reads.
 *
 */
struct Object0208c180 {
    uint8_t unknown_0x0000[0x218];
    uint8_t value_0x0218; /**< Read by auto_return_field_0208c180; meaning unknown. */
};
static_assert(offsetof(Object0208c180, value_0x0218) == 0x218);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_0208c180(const Object0208c180 *self)
{
    return self->value_0x0218;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint64_t value_0208f2c0 = 0x1c00000016;

extern "C" uint64_t bb_auto_return_constant_0208f2c0()
{
    return value_0208f2c0;
}
