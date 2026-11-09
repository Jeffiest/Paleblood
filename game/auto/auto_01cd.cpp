// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd3f60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd6870()
{
}

/**
 *
 * The part of the object that auto_return_field_01cd6880 reads.
 *
 */
struct Object01cd6880 {
    uint8_t unknown_0x0000[0x3b0];
    uint64_t value_0x03b0; /**< Read by auto_return_field_01cd6880; meaning unknown. */
};
static_assert(offsetof(Object01cd6880, value_0x03b0) == 0x3b0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01cd6880(const Object01cd6880 *self)
{
    return self->value_0x03b0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01cd6ff0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_01cd6ff0()
{
    return value_01cd6ff0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7000()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7010()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7030()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7040()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7050()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7060()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7070()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7080()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7090()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd70a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd70b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd70c0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd70d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01cd70e0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01cd70e0()
{
    return value_01cd70e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7130()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7190()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd71a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd71b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd71c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd71d0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd71e0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd71f0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7210()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7220()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7230()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd72f0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01cd7300 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01cd7300()
{
    return value_01cd7300;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7310()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7320()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7330()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7340()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7350()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7370()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7380()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7390()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd73a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd73b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd73c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd73d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd73e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd73f0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7400()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01cd7410 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01cd7410()
{
    return value_01cd7410;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7420()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01cd7430 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01cd7430()
{
    return value_01cd7430;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01cd7440 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01cd7440()
{
    return value_01cd7440;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01cd7450 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01cd7450()
{
    return value_01cd7450;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7460()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7480()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7490()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd74a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd74b0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd74c0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd74d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd74e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd74f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7500()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01cd7510 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01cd7510()
{
    return value_01cd7510;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7520()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01cd7530 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01cd7530()
{
    return value_01cd7530;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7540()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7550()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7560()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7570()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7580()
{
}

/**
 *
 * The part of the object that auto_return_field_01cd7590 reads.
 *
 */
struct Object01cd7590 {
    uint8_t unknown_0x0000[0x1f0];
    uint32_t value_0x01f0; /**< Read by auto_return_field_01cd7590; meaning unknown. */
};
static_assert(offsetof(Object01cd7590, value_0x01f0) == 0x1f0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01cd7590(const Object01cd7590 *self)
{
    return self->value_0x01f0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd75a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01cd75b0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01cd75b0()
{
    return value_01cd75b0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd75c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd75e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd75f0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7600()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7610()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7620()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7630()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01cd7640 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01cd7640()
{
    return value_01cd7640;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7650()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7660()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7670()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7680()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7710()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7730()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7740()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7750()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7760()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7770()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd7780()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7790()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01cd77a0 = 0xffffffff;

extern "C" uint32_t bb_auto_return_constant_01cd77a0()
{
    return value_01cd77a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd77b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7860()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd78c0()
{
}

/**
 *
 * The part of the object that auto_return_field_01cd7940 reads.
 *
 */
struct Object01cd7940 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01cd7940; meaning unknown. */
};
static_assert(offsetof(Object01cd7940, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01cd7940(const Object01cd7940 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01cd7950 reads.
 *
 */
struct Object01cd7950 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01cd7950; meaning unknown. */
};
static_assert(offsetof(Object01cd7950, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01cd7950(const Object01cd7950 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01cd79a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01cd7a40 = 0x3c0;

extern "C" uint32_t bb_auto_return_constant_01cd7a40()
{
    return value_01cd7a40;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7b20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7c30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cd7ff0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cdd4e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cdd6c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cde800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cde8d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cde930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cde990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01cdea60()
{
}
