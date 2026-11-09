// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f5bd20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f5be70 reads.
 *
 */
struct Object02f5be70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f5be70; meaning unknown. */
};
static_assert(offsetof(Object02f5be70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f5be70(const Object02f5be70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f5be80 reads.
 *
 */
struct Object02f5be80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f5be80; meaning unknown. */
};
static_assert(offsetof(Object02f5be80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f5be80(const Object02f5be80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f5bed0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f5c020 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f5c020()
{
    return value_02f5c020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5c420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5c890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5c8a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5c8e0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f5ca60 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f5ca60()
{
    return value_02f5ca60;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f5ce80 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f5ce80()
{
    return value_02f5ce80;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f5d520()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f5d670 reads.
 *
 */
struct Object02f5d670 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f5d670; meaning unknown. */
};
static_assert(offsetof(Object02f5d670, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f5d670(const Object02f5d670 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f5d680 reads.
 *
 */
struct Object02f5d680 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f5d680; meaning unknown. */
};
static_assert(offsetof(Object02f5d680, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f5d680(const Object02f5d680 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f5d6d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f5d820 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f5d820()
{
    return value_02f5d820;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5dc20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5dc70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5dc80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5ddf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5de40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5de50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5dfc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5e190()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5e1a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5e310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5e600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5e610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5e780()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5e890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5e8a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5ea10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5ec40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f5ec50()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f5ed90 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f5ed90()
{
    return value_02f5ed90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f5f1b0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f5f1b0()
{
    return value_02f5f1b0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f5f850()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f5f9a0 reads.
 *
 */
struct Object02f5f9a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f5f9a0; meaning unknown. */
};
static_assert(offsetof(Object02f5f9a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f5f9a0(const Object02f5f9a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f5f9b0 reads.
 *
 */
struct Object02f5f9b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f5f9b0; meaning unknown. */
};
static_assert(offsetof(Object02f5f9b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f5f9b0(const Object02f5f9b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f5fa00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f5fb50 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02f5fb50()
{
    return value_02f5fb50;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f5fc00 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f5fc00()
{
    return value_02f5fc00;
}
