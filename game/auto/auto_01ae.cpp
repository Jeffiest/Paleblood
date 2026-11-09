// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ae55a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ae6010 = 0x4;

extern "C" uint32_t bb_auto_return_constant_01ae6010()
{
    return value_01ae6010;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ae66d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ae66f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ae6840 reads.
 *
 */
struct Object01ae6840 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ae6840; meaning unknown. */
};
static_assert(offsetof(Object01ae6840, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ae6840(const Object01ae6840 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ae6850 reads.
 *
 */
struct Object01ae6850 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ae6850; meaning unknown. */
};
static_assert(offsetof(Object01ae6850, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ae6850(const Object01ae6850 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ae68a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ae6b20 = 0x240;

extern "C" uint32_t bb_auto_return_constant_01ae6b20()
{
    return value_01ae6b20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ae7140 = 0x2;

extern "C" uint32_t bb_auto_return_constant_01ae7140()
{
    return value_01ae7140;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ae91d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ae91f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ae9340 reads.
 *
 */
struct Object01ae9340 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ae9340; meaning unknown. */
};
static_assert(offsetof(Object01ae9340, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ae9340(const Object01ae9340 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ae9350 reads.
 *
 */
struct Object01ae9350 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ae9350; meaning unknown. */
};
static_assert(offsetof(Object01ae9350, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ae9350(const Object01ae9350 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ae93a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ae9620 = 0x1b0;

extern "C" uint32_t bb_auto_return_constant_01ae9620()
{
    return value_01ae9620;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01aeaa90()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aeaab0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01aeac00 reads.
 *
 */
struct Object01aeac00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01aeac00; meaning unknown. */
};
static_assert(offsetof(Object01aeac00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aeac00(const Object01aeac00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01aeac10 reads.
 *
 */
struct Object01aeac10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01aeac10; meaning unknown. */
};
static_assert(offsetof(Object01aeac10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aeac10(const Object01aeac10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aeac60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01aeaee0 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01aeaee0()
{
    return value_01aeaee0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01aec3e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01aec400()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01aec550 reads.
 *
 */
struct Object01aec550 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01aec550; meaning unknown. */
};
static_assert(offsetof(Object01aec550, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aec550(const Object01aec550 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01aec560 reads.
 *
 */
struct Object01aec560 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01aec560; meaning unknown. */
};
static_assert(offsetof(Object01aec560, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01aec560(const Object01aec560 *self)
{
    return self->value_0x0048;
}
