// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_023521e0 reads.
 *
 */
struct Object023521e0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_023521e0; meaning unknown. */
};
static_assert(offsetof(Object023521e0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_023521e0(const Object023521e0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02352da0 reads.
 *
 */
struct Object02352da0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_02352da0; meaning unknown. */
};
static_assert(offsetof(Object02352da0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02352da0(const Object02352da0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02352e70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02352e80()
{
}

/**
 *
 * The part of the object that auto_return_field_02353170 reads.
 *
 */
struct Object02353170 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02353170; meaning unknown. */
};
static_assert(offsetof(Object02353170, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02353170(const Object02353170 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02353180 reads.
 *
 */
struct Object02353180 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02353180; meaning unknown. */
};
static_assert(offsetof(Object02353180, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02353180(const Object02353180 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023531d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02353450 = 0x158;

extern "C" uint32_t bb_auto_return_constant_02353450()
{
    return value_02353450;
}

/**
 *
 * The part of the object that auto_return_field_02353490 reads.
 *
 */
struct Object02353490 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02353490; meaning unknown. */
};
static_assert(offsetof(Object02353490, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02353490(const Object02353490 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023534a0 reads.
 *
 */
struct Object023534a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023534a0; meaning unknown. */
};
static_assert(offsetof(Object023534a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023534a0(const Object023534a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023534f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02353770 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02353770()
{
    return value_02353770;
}

/**
 *
 * The part of the object that auto_return_field_023537b0 reads.
 *
 */
struct Object023537b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_023537b0; meaning unknown. */
};
static_assert(offsetof(Object023537b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023537b0(const Object023537b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_023537c0 reads.
 *
 */
struct Object023537c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_023537c0; meaning unknown. */
};
static_assert(offsetof(Object023537c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_023537c0(const Object023537c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02353810()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02353a90 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02353a90()
{
    return value_02353a90;
}

/**
 *
 * The part of the object that auto_return_field_02353ad0 reads.
 *
 */
struct Object02353ad0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02353ad0; meaning unknown. */
};
static_assert(offsetof(Object02353ad0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02353ad0(const Object02353ad0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02353ae0 reads.
 *
 */
struct Object02353ae0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02353ae0; meaning unknown. */
};
static_assert(offsetof(Object02353ae0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02353ae0(const Object02353ae0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02353b30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02353db0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02353db0()
{
    return value_02353db0;
}

/**
 *
 * The part of the object that auto_return_field_023569d0 reads.
 *
 */
struct Object023569d0 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_023569d0; meaning unknown. */
};
static_assert(offsetof(Object023569d0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023569d0(const Object023569d0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02356aa0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02356ab0()
{
}

/**
 *
 * The part of the object that auto_return_field_02356d20 reads.
 *
 */
struct Object02356d20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02356d20; meaning unknown. */
};
static_assert(offsetof(Object02356d20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02356d20(const Object02356d20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02356d30 reads.
 *
 */
struct Object02356d30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02356d30; meaning unknown. */
};
static_assert(offsetof(Object02356d30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02356d30(const Object02356d30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02356d80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02357000 = 0xd8;

extern "C" uint32_t bb_auto_return_constant_02357000()
{
    return value_02357000;
}

/**
 *
 * The part of the object that auto_return_field_02357040 reads.
 *
 */
struct Object02357040 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02357040; meaning unknown. */
};
static_assert(offsetof(Object02357040, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02357040(const Object02357040 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02357050 reads.
 *
 */
struct Object02357050 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02357050; meaning unknown. */
};
static_assert(offsetof(Object02357050, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02357050(const Object02357050 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023570a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02357320 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02357320()
{
    return value_02357320;
}

/**
 *
 * The part of the object that auto_return_field_02357360 reads.
 *
 */
struct Object02357360 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02357360; meaning unknown. */
};
static_assert(offsetof(Object02357360, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02357360(const Object02357360 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02357370 reads.
 *
 */
struct Object02357370 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02357370; meaning unknown. */
};
static_assert(offsetof(Object02357370, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02357370(const Object02357370 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023573c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02357640 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02357640()
{
    return value_02357640;
}

/**
 *
 * The part of the object that auto_return_field_02357680 reads.
 *
 */
struct Object02357680 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02357680; meaning unknown. */
};
static_assert(offsetof(Object02357680, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02357680(const Object02357680 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02357690 reads.
 *
 */
struct Object02357690 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02357690; meaning unknown. */
};
static_assert(offsetof(Object02357690, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02357690(const Object02357690 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_023576e0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02357960 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02357960()
{
    return value_02357960;
}

/**
 *
 * The part of the object that auto_return_field_023592d0 reads.
 *
 */
struct Object023592d0 {
    uint8_t unknown_0x0000[0x50];
    uint8_t value_0x0050; /**< Read by auto_return_field_023592d0; meaning unknown. */
};
static_assert(offsetof(Object023592d0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_023592d0(const Object023592d0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * The part of the object that auto_return_field_023592e0 reads.
 *
 */
struct Object023592e0 {
    uint8_t unknown_0x0000[0x70];
    uint32_t value_0x0070; /**< Read by auto_return_field_023592e0; meaning unknown. */
};
static_assert(offsetof(Object023592e0, value_0x0070) == 0x70);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_023592e0(const Object023592e0 *self)
{
    return self->value_0x0070;
}

/**
 *
 * The part of the object that auto_return_field_02359810 reads.
 *
 */
struct Object02359810 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02359810; meaning unknown. */
};
static_assert(offsetof(Object02359810, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02359810(const Object02359810 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02359820 reads.
 *
 */
struct Object02359820 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02359820; meaning unknown. */
};
static_assert(offsetof(Object02359820, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02359820(const Object02359820 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02359870()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02359af0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_02359af0()
{
    return value_02359af0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0235a7b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0235c7b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0235c7c0()
{
}
