// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02360d70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023625b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02363b40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02363ba0()
{
}

/**
 *
 * The part of the object that auto_return_field_02363fb0 reads.
 *
 */
struct Object02363fb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02363fb0; meaning unknown. */
};
static_assert(offsetof(Object02363fb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02363fb0(const Object02363fb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02363fc0 reads.
 *
 */
struct Object02363fc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02363fc0; meaning unknown. */
};
static_assert(offsetof(Object02363fc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02363fc0(const Object02363fc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02364010()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02364290 = 0xd7c8;

extern "C" uint32_t bb_auto_return_constant_02364290()
{
    return value_02364290;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02364340()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02364350 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02364350()
{
    return value_02364350;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02364360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02366c80()
{
}

/**
 *
 * The part of the object that auto_return_field_023677b0 reads.
 *
 */
struct Object023677b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023677b0; meaning unknown. */
};
static_assert(offsetof(Object023677b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023677b0(const Object023677b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023677c0 reads.
 *
 */
struct Object023677c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023677c0; meaning unknown. */
};
static_assert(offsetof(Object023677c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023677c0(const Object023677c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02367810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02367a90 = 0x8;

extern "C" uint32_t bb_auto_return_constant_02367a90()
{
    return value_02367a90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02367e80()
{
}

/**
 *
 * The part of the object that auto_return_field_023682f0 reads.
 *
 */
struct Object023682f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023682f0; meaning unknown. */
};
static_assert(offsetof(Object023682f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023682f0(const Object023682f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02368300 reads.
 *
 */
struct Object02368300 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02368300; meaning unknown. */
};
static_assert(offsetof(Object02368300, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02368300(const Object02368300 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02368350()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023683f0 = 0x8;

extern "C" uint32_t bb_auto_return_constant_023683f0()
{
    return value_023683f0;
}

/**
 *
 * The part of the object that auto_return_field_0236a1c0 reads.
 *
 */
struct Object0236a1c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0236a1c0; meaning unknown. */
};
static_assert(offsetof(Object0236a1c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0236a1c0(const Object0236a1c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0236a1d0 reads.
 *
 */
struct Object0236a1d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0236a1d0; meaning unknown. */
};
static_assert(offsetof(Object0236a1d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0236a1d0(const Object0236a1d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0236a220()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0236a4a0 = 0x38;

extern "C" uint32_t bb_auto_return_constant_0236a4a0()
{
    return value_0236a4a0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0236a540()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_0236b960 = 0x1;

extern "C" uint8_t bb_auto_return_constant_0236b960()
{
    return value_0236b960;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0236bd10()
{
}

/**
 *
 * The part of the object that auto_return_field_0236ca90 reads.
 *
 */
struct Object0236ca90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0236ca90; meaning unknown. */
};
static_assert(offsetof(Object0236ca90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0236ca90(const Object0236ca90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0236caa0 reads.
 *
 */
struct Object0236caa0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0236caa0; meaning unknown. */
};
static_assert(offsetof(Object0236caa0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0236caa0(const Object0236caa0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0236caf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0236cd70 = 0x28;

extern "C" uint32_t bb_auto_return_constant_0236cd70()
{
    return value_0236cd70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0236ed60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0236ed70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0236f070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0236f0d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0236f130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0236f190()
{
}
