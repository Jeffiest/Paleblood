// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d23c70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d25a10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d25a70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d25ad0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d27430()
{
}

/**
 *
 * The part of the object that auto_return_field_01d27500 reads.
 *
 */
struct Object01d27500 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d27500; meaning unknown. */
};
static_assert(offsetof(Object01d27500, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d27500(const Object01d27500 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d27510 reads.
 *
 */
struct Object01d27510 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d27510; meaning unknown. */
};
static_assert(offsetof(Object01d27510, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d27510(const Object01d27510 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d27560()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d277e0 = 0x80;

extern "C" uint32_t bb_auto_return_constant_01d277e0()
{
    return value_01d277e0;
}

/**
 *
 * The part of the object that auto_return_field_01d27820 reads.
 *
 */
struct Object01d27820 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d27820; meaning unknown. */
};
static_assert(offsetof(Object01d27820, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d27820(const Object01d27820 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d27830 reads.
 *
 */
struct Object01d27830 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d27830; meaning unknown. */
};
static_assert(offsetof(Object01d27830, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d27830(const Object01d27830 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d27880()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d27b00 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d27b00()
{
    return value_01d27b00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d2ac50()
{
}

/**
 *
 * The part of the object that auto_return_field_01d2ad20 reads.
 *
 */
struct Object01d2ad20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d2ad20; meaning unknown. */
};
static_assert(offsetof(Object01d2ad20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d2ad20(const Object01d2ad20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d2ad30 reads.
 *
 */
struct Object01d2ad30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d2ad30; meaning unknown. */
};
static_assert(offsetof(Object01d2ad30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d2ad30(const Object01d2ad30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d2ad80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d2b000 = 0x13bc0;

extern "C" uint32_t bb_auto_return_constant_01d2b000()
{
    return value_01d2b000;
}

/**
 *
 * The part of the object that auto_return_field_01d2b040 reads.
 *
 */
struct Object01d2b040 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d2b040; meaning unknown. */
};
static_assert(offsetof(Object01d2b040, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d2b040(const Object01d2b040 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d2b050 reads.
 *
 */
struct Object01d2b050 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d2b050; meaning unknown. */
};
static_assert(offsetof(Object01d2b050, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d2b050(const Object01d2b050 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d2b0a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d2b320 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d2b320()
{
    return value_01d2b320;
}

/**
 *
 * The part of the object that auto_return_field_01d2cfd0 reads.
 *
 */
struct Object01d2cfd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d2cfd0; meaning unknown. */
};
static_assert(offsetof(Object01d2cfd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d2cfd0(const Object01d2cfd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d2cfe0 reads.
 *
 */
struct Object01d2cfe0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d2cfe0; meaning unknown. */
};
static_assert(offsetof(Object01d2cfe0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d2cfe0(const Object01d2cfe0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d2d030()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d2d2b0 = 0x100;

extern "C" uint32_t bb_auto_return_constant_01d2d2b0()
{
    return value_01d2d2b0;
}

/**
 *
 * The part of the object that auto_return_field_01d2d2f0 reads.
 *
 */
struct Object01d2d2f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d2d2f0; meaning unknown. */
};
static_assert(offsetof(Object01d2d2f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d2d2f0(const Object01d2d2f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d2d300 reads.
 *
 */
struct Object01d2d300 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d2d300; meaning unknown. */
};
static_assert(offsetof(Object01d2d300, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d2d300(const Object01d2d300 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d2d350()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d2d5d0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d2d5d0()
{
    return value_01d2d5d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d2d950()
{
}
