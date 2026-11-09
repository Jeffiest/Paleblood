// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ac00e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ac0100()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ac0250 reads.
 *
 */
struct Object01ac0250 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ac0250; meaning unknown. */
};
static_assert(offsetof(Object01ac0250, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ac0250(const Object01ac0250 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ac0260 reads.
 *
 */
struct Object01ac0260 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ac0260; meaning unknown. */
};
static_assert(offsetof(Object01ac0260, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ac0260(const Object01ac0260 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ac02b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ac0530 = 0x198;

extern "C" uint32_t bb_auto_return_constant_01ac0530()
{
    return value_01ac0530;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ac2e70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ac2e90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ac2fe0 reads.
 *
 */
struct Object01ac2fe0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ac2fe0; meaning unknown. */
};
static_assert(offsetof(Object01ac2fe0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ac2fe0(const Object01ac2fe0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ac2ff0 reads.
 *
 */
struct Object01ac2ff0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ac2ff0; meaning unknown. */
};
static_assert(offsetof(Object01ac2ff0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ac2ff0(const Object01ac2ff0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ac3040()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ac32c0 = 0x1d8;

extern "C" uint32_t bb_auto_return_constant_01ac32c0()
{
    return value_01ac32c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ac5030()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ac5050()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ac51a0 reads.
 *
 */
struct Object01ac51a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ac51a0; meaning unknown. */
};
static_assert(offsetof(Object01ac51a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ac51a0(const Object01ac51a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ac51b0 reads.
 *
 */
struct Object01ac51b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ac51b0; meaning unknown. */
};
static_assert(offsetof(Object01ac51b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ac51b0(const Object01ac51b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ac5200()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ac5480 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01ac5480()
{
    return value_01ac5480;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ac6320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ac6ff0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ac7010()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ac7160 reads.
 *
 */
struct Object01ac7160 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ac7160; meaning unknown. */
};
static_assert(offsetof(Object01ac7160, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ac7160(const Object01ac7160 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ac7170 reads.
 *
 */
struct Object01ac7170 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ac7170; meaning unknown. */
};
static_assert(offsetof(Object01ac7170, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ac7170(const Object01ac7170 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ac71c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ac7440 = 0x1b0;

extern "C" uint32_t bb_auto_return_constant_01ac7440()
{
    return value_01ac7440;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01ac95b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ac95d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01ac9720 reads.
 *
 */
struct Object01ac9720 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01ac9720; meaning unknown. */
};
static_assert(offsetof(Object01ac9720, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ac9720(const Object01ac9720 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01ac9730 reads.
 *
 */
struct Object01ac9730 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01ac9730; meaning unknown. */
};
static_assert(offsetof(Object01ac9730, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01ac9730(const Object01ac9730 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01ac9780()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01ac9a00 = 0x1d0;

extern "C" uint32_t bb_auto_return_constant_01ac9a00()
{
    return value_01ac9a00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01acbb00()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01acbb20()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01acbc70 reads.
 *
 */
struct Object01acbc70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01acbc70; meaning unknown. */
};
static_assert(offsetof(Object01acbc70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01acbc70(const Object01acbc70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01acbc80 reads.
 *
 */
struct Object01acbc80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01acbc80; meaning unknown. */
};
static_assert(offsetof(Object01acbc80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01acbc80(const Object01acbc80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01acbcd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01acbf50 = 0x1b0;

extern "C" uint32_t bb_auto_return_constant_01acbf50()
{
    return value_01acbf50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01acd650()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01acd670()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01acd7c0 reads.
 *
 */
struct Object01acd7c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01acd7c0; meaning unknown. */
};
static_assert(offsetof(Object01acd7c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01acd7c0(const Object01acd7c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01acd7d0 reads.
 *
 */
struct Object01acd7d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01acd7d0; meaning unknown. */
};
static_assert(offsetof(Object01acd7d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01acd7d0(const Object01acd7d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01acd820()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01acdaa0 = 0x1b8;

extern "C" uint32_t bb_auto_return_constant_01acdaa0()
{
    return value_01acdaa0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01aceee0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01acef00()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01acf050 reads.
 *
 */
struct Object01acf050 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01acf050; meaning unknown. */
};
static_assert(offsetof(Object01acf050, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01acf050(const Object01acf050 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01acf060 reads.
 *
 */
struct Object01acf060 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01acf060; meaning unknown. */
};
static_assert(offsetof(Object01acf060, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01acf060(const Object01acf060 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01acf0b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01acf330 = 0x190;

extern "C" uint32_t bb_auto_return_constant_01acf330()
{
    return value_01acf330;
}
