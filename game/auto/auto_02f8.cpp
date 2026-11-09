// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02f81200 reads.
 *
 */
struct Object02f81200 {
    uint8_t unknown_0x0000[0x830];
    uint32_t value_0x0830; /**< Read by auto_return_field_02f81200; meaning unknown. */
};
static_assert(offsetof(Object02f81200, value_0x0830) == 0x830);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f81200(const Object02f81200 *self)
{
    return self->value_0x0830;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f81360 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f81360()
{
    return value_02f81360;
}

/**
 *
 * The part of the object that auto_return_field_02f81370 reads.
 *
 */
struct Object02f81370 {
    uint8_t unknown_0x0000[0x828];
    uint64_t value_0x0828; /**< Read by auto_return_field_02f81370; meaning unknown. */
};
static_assert(offsetof(Object02f81370, value_0x0828) == 0x828);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f81370(const Object02f81370 *self)
{
    return self->value_0x0828;
}

/**
 *
 * The part of the object that auto_return_field_02f81570 reads.
 *
 */
struct Object02f81570 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02f81570; meaning unknown. */
};
static_assert(offsetof(Object02f81570, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f81570(const Object02f81570 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f81740()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f82200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f82210()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f82220 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f82220()
{
    return value_02f82220;
}

/**
 *
 * The part of the object that auto_return_field_02f829b0 reads.
 *
 */
struct Object02f829b0 {
    uint8_t unknown_0x0000[0x2c0];
    uint64_t value_0x02c0; /**< Read by auto_return_field_02f829b0; meaning unknown. */
};
static_assert(offsetof(Object02f829b0, value_0x02c0) == 0x2c0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f829b0(const Object02f829b0 *self)
{
    return self->value_0x02c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f829c0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f829c0()
{
    return value_02f829c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f829d0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f829e0 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02f829e0()
{
    return value_02f829e0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f829f0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f82a00 = 0x3;

extern "C" uint32_t bb_auto_return_constant_02f82a00()
{
    return value_02f82a00;
}

/**
 *
 * The part of the object that auto_return_field_02f82ad0 reads.
 *
 */
struct Object02f82ad0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f82ad0; meaning unknown. */
};
static_assert(offsetof(Object02f82ad0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f82ad0(const Object02f82ad0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f82ae0 reads.
 *
 */
struct Object02f82ae0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f82ae0; meaning unknown. */
};
static_assert(offsetof(Object02f82ae0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f82ae0(const Object02f82ae0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f82b30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f82c80 = 0x2e0;

extern "C" uint32_t bb_auto_return_constant_02f82c80()
{
    return value_02f82c80;
}

/**
 *
 * The part of the object that auto_return_field_02f8a7b0 reads.
 *
 */
struct Object02f8a7b0 {
    uint8_t unknown_0x0000[0xa0];
    uint8_t value_0x00a0; /**< Read by auto_return_field_02f8a7b0; meaning unknown. */
};
static_assert(offsetof(Object02f8a7b0, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02f8a7b0(const Object02f8a7b0 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f8a7c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f8a840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f8a890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f8a970()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f8a9e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f8aa90()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f8acd0 = 0xd;

extern "C" uint32_t bb_auto_return_constant_02f8acd0()
{
    return value_02f8acd0;
}

/**
 *
 * The part of the object that auto_return_field_02f8ace0 reads.
 *
 */
struct Object02f8ace0 {
    uint8_t unknown_0x0000[0x60];
    uint64_t value_0x0060; /**< Read by auto_return_field_02f8ace0; meaning unknown. */
};
static_assert(offsetof(Object02f8ace0, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f8ace0(const Object02f8ace0 *self)
{
    return self->value_0x0060;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f8d440 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f8d440()
{
    return value_02f8d440;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f8ffd0()
{
}
