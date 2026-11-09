// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01651f40()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01651f60 = 0x3;

extern "C" uint32_t bb_auto_return_constant_01651f60()
{
    return value_01651f60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01652410()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01652430()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01652580 reads.
 *
 */
struct Object01652580 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01652580; meaning unknown. */
};
static_assert(offsetof(Object01652580, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01652580(const Object01652580 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01652590 reads.
 *
 */
struct Object01652590 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01652590; meaning unknown. */
};
static_assert(offsetof(Object01652590, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01652590(const Object01652590 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_016525e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01652860 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01652860()
{
    return value_01652860;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01653860()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01653880 = 0x1;

extern "C" uint32_t bb_auto_return_constant_01653880()
{
    return value_01653880;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01653d50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01653d70()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01653ec0 reads.
 *
 */
struct Object01653ec0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01653ec0; meaning unknown. */
};
static_assert(offsetof(Object01653ec0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01653ec0(const Object01653ec0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01653ed0 reads.
 *
 */
struct Object01653ed0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01653ed0; meaning unknown. */
};
static_assert(offsetof(Object01653ed0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01653ed0(const Object01653ed0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01653f20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_016541a0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_016541a0()
{
    return value_016541a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01655e30()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01655e50 = 0x2;

extern "C" uint32_t bb_auto_return_constant_01655e50()
{
    return value_01655e50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01656520()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01656540 = 0x2;

extern "C" uint32_t bb_auto_return_constant_01656540()
{
    return value_01656540;
}

/**
 *
 * The part of the object that auto_return_field_016566b0 reads.
 *
 */
struct Object016566b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_016566b0; meaning unknown. */
};
static_assert(offsetof(Object016566b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016566b0(const Object016566b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_016566c0 reads.
 *
 */
struct Object016566c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_016566c0; meaning unknown. */
};
static_assert(offsetof(Object016566c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_016566c0(const Object016566c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01656710()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01656990 = 0x10;

extern "C" uint32_t bb_auto_return_constant_01656990()
{
    return value_01656990;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01656fb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016575e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016592f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01659300()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01659320()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016593e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0165bbb0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0165bbc0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0165bbd0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0165cce0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0165ccf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0165ce80()
{
}
