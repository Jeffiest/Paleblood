// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d30140()
{
}

/**
 *
 * The part of the object that auto_return_field_01d30210 reads.
 *
 */
struct Object01d30210 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d30210; meaning unknown. */
};
static_assert(offsetof(Object01d30210, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d30210(const Object01d30210 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d30220 reads.
 *
 */
struct Object01d30220 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d30220; meaning unknown. */
};
static_assert(offsetof(Object01d30220, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d30220(const Object01d30220 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d30270()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d304f0 = 0x198;

extern "C" uint32_t bb_auto_return_constant_01d304f0()
{
    return value_01d304f0;
}

/**
 *
 * The part of the object that auto_return_field_01d30530 reads.
 *
 */
struct Object01d30530 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d30530; meaning unknown. */
};
static_assert(offsetof(Object01d30530, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d30530(const Object01d30530 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d30540 reads.
 *
 */
struct Object01d30540 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d30540; meaning unknown. */
};
static_assert(offsetof(Object01d30540, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d30540(const Object01d30540 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d30590()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d30810 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d30810()
{
    return value_01d30810;
}

/**
 *
 * The part of the object that auto_return_field_01d31c80 reads.
 *
 */
struct Object01d31c80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d31c80; meaning unknown. */
};
static_assert(offsetof(Object01d31c80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d31c80(const Object01d31c80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d31c90 reads.
 *
 */
struct Object01d31c90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d31c90; meaning unknown. */
};
static_assert(offsetof(Object01d31c90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d31c90(const Object01d31c90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d31ce0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d31f60 = 0x98;

extern "C" uint32_t bb_auto_return_constant_01d31f60()
{
    return value_01d31f60;
}

/**
 *
 * The part of the object that auto_return_field_01d31fa0 reads.
 *
 */
struct Object01d31fa0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d31fa0; meaning unknown. */
};
static_assert(offsetof(Object01d31fa0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d31fa0(const Object01d31fa0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d31fb0 reads.
 *
 */
struct Object01d31fb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d31fb0; meaning unknown. */
};
static_assert(offsetof(Object01d31fb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d31fb0(const Object01d31fb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d32000()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d32280 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d32280()
{
    return value_01d32280;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d33140()
{
}

/**
 *
 * The part of the object that auto_return_field_01d33210 reads.
 *
 */
struct Object01d33210 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d33210; meaning unknown. */
};
static_assert(offsetof(Object01d33210, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d33210(const Object01d33210 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d33220 reads.
 *
 */
struct Object01d33220 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d33220; meaning unknown. */
};
static_assert(offsetof(Object01d33220, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d33220(const Object01d33220 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d33270()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d334f0 = 0x38;

extern "C" uint32_t bb_auto_return_constant_01d334f0()
{
    return value_01d334f0;
}

/**
 *
 * The part of the object that auto_return_field_01d33530 reads.
 *
 */
struct Object01d33530 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d33530; meaning unknown. */
};
static_assert(offsetof(Object01d33530, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d33530(const Object01d33530 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d33540 reads.
 *
 */
struct Object01d33540 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d33540; meaning unknown. */
};
static_assert(offsetof(Object01d33540, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d33540(const Object01d33540 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d33590()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d33810 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d33810()
{
    return value_01d33810;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d33a60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d33a70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d345c0()
{
}

/**
 *
 * The part of the object that auto_return_field_01d34690 reads.
 *
 */
struct Object01d34690 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d34690; meaning unknown. */
};
static_assert(offsetof(Object01d34690, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d34690(const Object01d34690 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d346a0 reads.
 *
 */
struct Object01d346a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d346a0; meaning unknown. */
};
static_assert(offsetof(Object01d346a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d346a0(const Object01d346a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d346f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d34970 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d34970()
{
    return value_01d34970;
}

/**
 *
 * The part of the object that auto_return_field_01d349b0 reads.
 *
 */
struct Object01d349b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d349b0; meaning unknown. */
};
static_assert(offsetof(Object01d349b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d349b0(const Object01d349b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d349c0 reads.
 *
 */
struct Object01d349c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d349c0; meaning unknown. */
};
static_assert(offsetof(Object01d349c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d349c0(const Object01d349c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d34a10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d34c90 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d34c90()
{
    return value_01d34c90;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01d35ae0()
{
}

/**
 *
 * The part of the object that auto_return_field_01d35bb0 reads.
 *
 */
struct Object01d35bb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d35bb0; meaning unknown. */
};
static_assert(offsetof(Object01d35bb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d35bb0(const Object01d35bb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d35bc0 reads.
 *
 */
struct Object01d35bc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d35bc0; meaning unknown. */
};
static_assert(offsetof(Object01d35bc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d35bc0(const Object01d35bc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d35c10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d35e90 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01d35e90()
{
    return value_01d35e90;
}

/**
 *
 * The part of the object that auto_return_field_01d35ed0 reads.
 *
 */
struct Object01d35ed0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d35ed0; meaning unknown. */
};
static_assert(offsetof(Object01d35ed0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d35ed0(const Object01d35ed0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d35ee0 reads.
 *
 */
struct Object01d35ee0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d35ee0; meaning unknown. */
};
static_assert(offsetof(Object01d35ee0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d35ee0(const Object01d35ee0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d35f30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d361b0 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d361b0()
{
    return value_01d361b0;
}

/**
 *
 * The part of the object that auto_return_field_01d36d10 reads.
 *
 */
struct Object01d36d10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d36d10; meaning unknown. */
};
static_assert(offsetof(Object01d36d10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d36d10(const Object01d36d10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d36d20 reads.
 *
 */
struct Object01d36d20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d36d20; meaning unknown. */
};
static_assert(offsetof(Object01d36d20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d36d20(const Object01d36d20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d36d70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d36ff0 = 0x78;

extern "C" uint32_t bb_auto_return_constant_01d36ff0()
{
    return value_01d36ff0;
}

/**
 *
 * The part of the object that auto_return_field_01d37030 reads.
 *
 */
struct Object01d37030 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01d37030; meaning unknown. */
};
static_assert(offsetof(Object01d37030, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d37030(const Object01d37030 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01d37040 reads.
 *
 */
struct Object01d37040 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01d37040; meaning unknown. */
};
static_assert(offsetof(Object01d37040, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01d37040(const Object01d37040 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01d37090()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01d37310 = 0x28;

extern "C" uint32_t bb_auto_return_constant_01d37310()
{
    return value_01d37310;
}
