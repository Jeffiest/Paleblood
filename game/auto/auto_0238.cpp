// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023814c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02384440()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023857e0()
{
}

/**
 *
 * The part of the object that auto_return_field_02386ba0 reads.
 *
 */
struct Object02386ba0 {
    uint8_t unknown_0x0000[0x15b];
    uint8_t value_0x015b; /**< Read by auto_return_field_02386ba0; meaning unknown. */
};
static_assert(offsetof(Object02386ba0, value_0x015b) == 0x15b);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02386ba0(const Object02386ba0 *self)
{
    return self->value_0x015b;
}

/**
 *
 * The part of the object that auto_return_field_02386bb0 reads.
 *
 */
struct Object02386bb0 {
    uint8_t unknown_0x0000[0x170];
    uint64_t value_0x0170; /**< Read by auto_return_field_02386bb0; meaning unknown. */
};
static_assert(offsetof(Object02386bb0, value_0x0170) == 0x170);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02386bb0(const Object02386bb0 *self)
{
    return self->value_0x0170;
}

/**
 *
 * The part of the object that auto_return_field_02386bc0 reads.
 *
 */
struct Object02386bc0 {
    uint8_t unknown_0x0000[0x180];
    uint64_t value_0x0180; /**< Read by auto_return_field_02386bc0; meaning unknown. */
};
static_assert(offsetof(Object02386bc0, value_0x0180) == 0x180);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02386bc0(const Object02386bc0 *self)
{
    return self->value_0x0180;
}

/**
 *
 * The part of the object that auto_return_field_02386bd0 reads.
 *
 */
struct Object02386bd0 {
    uint8_t unknown_0x0000[0x190];
    uint64_t value_0x0190; /**< Read by auto_return_field_02386bd0; meaning unknown. */
};
static_assert(offsetof(Object02386bd0, value_0x0190) == 0x190);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02386bd0(const Object02386bd0 *self)
{
    return self->value_0x0190;
}

/**
 *
 * The part of the object that auto_return_field_02386be0 reads.
 *
 */
struct Object02386be0 {
    uint8_t unknown_0x0000[0x160];
    uint32_t value_0x0160; /**< Read by auto_return_field_02386be0; meaning unknown. */
};
static_assert(offsetof(Object02386be0, value_0x0160) == 0x160);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02386be0(const Object02386be0 *self)
{
    return self->value_0x0160;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_023879a0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_023898a0 = 0x1a0;

extern "C" uint32_t bb_auto_return_constant_023898a0()
{
    return value_023898a0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02389bc0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02389bc0()
{
    return value_02389bc0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02389ee0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02389ee0()
{
    return value_02389ee0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0238c3e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0238ff10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0238ff70()
{
}
