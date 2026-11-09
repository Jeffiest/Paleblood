// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c610f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c61100()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c61c00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c62130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c62140()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c63770()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c63d80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c63d90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c645d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c64d90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c64dc0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c66750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c68430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c68d20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02c69cd0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02c69cd0()
{
    return value_02c69cd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c69ce0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c69fe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c6a030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c6a040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c6a1b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c6a570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c6a580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c6a600()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02c6ad90()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c6b120 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c6b120()
{
    return value_02c6b120;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c6b540 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c6b540()
{
    return value_02c6b540;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c6bdb0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c6bf00 reads.
 *
 */
struct Object02c6bf00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c6bf00; meaning unknown. */
};
static_assert(offsetof(Object02c6bf00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c6bf00(const Object02c6bf00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c6bf10 reads.
 *
 */
struct Object02c6bf10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c6bf10; meaning unknown. */
};
static_assert(offsetof(Object02c6bf10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c6bf10(const Object02c6bf10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c6bf60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c6c0b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02c6c0b0()
{
    return value_02c6c0b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c6c160 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c6c160()
{
    return value_02c6c160;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c6c580 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02c6c580()
{
    return value_02c6c580;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c6cc20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02c6cd70 reads.
 *
 */
struct Object02c6cd70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02c6cd70; meaning unknown. */
};
static_assert(offsetof(Object02c6cd70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c6cd70(const Object02c6cd70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02c6cd80 reads.
 *
 */
struct Object02c6cd80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02c6cd80; meaning unknown. */
};
static_assert(offsetof(Object02c6cd80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02c6cd80(const Object02c6cd80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02c6cdd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02c6cf20 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02c6cf20()
{
    return value_02c6cf20;
}
