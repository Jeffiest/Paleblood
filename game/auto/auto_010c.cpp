// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010c1390()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010c13a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010c1820()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010c1830()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010c6380()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_010c6b60()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010c1260 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010c1260()
{
    return value_010c1260;
}

/**
 *
 * The part of the object that auto_return_field_010c2850 reads.
 *
 */
struct Object010c2850 {
    uint8_t unknown_0x0000[0x29];
    uint8_t value_0x0029; /**< Read by auto_return_field_010c2850; meaning unknown. */
};
static_assert(offsetof(Object010c2850, value_0x0029) == 0x29);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_010c2850(const Object010c2850 *self)
{
    return self->value_0x0029;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_010c6600 = 0x1;

extern "C" uint8_t bb_auto_return_constant_010c6600()
{
    return value_010c6600;
}

/**
 *
 * The part of the object that auto_return_field_010c7370 reads.
 *
 */
struct Object010c7370 {
    uint8_t unknown_0x0000[0x68];
    uint16_t value_0x0068; /**< Read by auto_return_field_010c7370; meaning unknown. */
};
static_assert(offsetof(Object010c7370, value_0x0068) == 0x68);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_010c7370(const Object010c7370 *self)
{
    return self->value_0x0068;
}

/**
 *
 * The part of the object that auto_return_field_010cc200 reads.
 *
 */
struct Object010cc200 {
    uint64_t value_0x0000; /**< Read by auto_return_field_010cc200; meaning unknown. */
};
static_assert(offsetof(Object010cc200, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010cc200(const Object010cc200 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_010cc210 reads.
 *
 */
struct Object010cc210 {
    uint64_t value_0x0000; /**< Read by auto_return_field_010cc210; meaning unknown. */
};
static_assert(offsetof(Object010cc210, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_010cc210(const Object010cc210 *self)
{
    return self->value_0x0000;
}
