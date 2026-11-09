// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_011009d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_011009e0()
{
}

/**
 *
 * The part of the object that auto_return_field_01100a10 reads.
 *
 */
struct Object01100a10 {
    uint8_t unknown_0x0000[0x1b8];
    uint64_t value_0x01b8; /**< Read by auto_return_field_01100a10; meaning unknown. */
};
static_assert(offsetof(Object01100a10, value_0x01b8) == 0x1b8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01100a10(const Object01100a10 *self)
{
    return self->value_0x01b8;
}

/**
 *
 * The part of the object that auto_return_field_01100a20 reads.
 *
 */
struct Object01100a20 {
    uint8_t unknown_0x0000[0x1b8];
    uint64_t value_0x01b8; /**< Read by auto_return_field_01100a20; meaning unknown. */
};
static_assert(offsetof(Object01100a20, value_0x01b8) == 0x1b8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01100a20(const Object01100a20 *self)
{
    return self->value_0x01b8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01100e50()
{
}

/**
 *
 * The part of the object that auto_return_field_011010c0 reads.
 *
 */
struct Object011010c0 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_011010c0; meaning unknown. */
};
static_assert(offsetof(Object011010c0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_011010c0(const Object011010c0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01101dd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01101fc0()
{
}

/**
 *
 * The part of the object that auto_return_field_011055e0 reads.
 *
 */
struct Object011055e0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_011055e0; meaning unknown. */
};
static_assert(offsetof(Object011055e0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_011055e0(const Object011055e0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01105cd0()
{
}

/**
 *
 * The part of the object that auto_return_field_01105ce0 reads.
 *
 */
struct Object01105ce0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_01105ce0; meaning unknown. */
};
static_assert(offsetof(Object01105ce0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01105ce0(const Object01105ce0 *self)
{
    return self->value_0x0008;
}
