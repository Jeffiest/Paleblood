// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01870100()
{
}

/**
 *
 * The part of the object that auto_return_field_018703b0 reads.
 *
 */
struct Object018703b0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_018703b0; meaning unknown. */
};
static_assert(offsetof(Object018703b0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_018703b0(const Object018703b0 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01870cb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01871870()
{
}

/**
 *
 * The part of the object that auto_return_field_018721b0 reads.
 *
 */
struct Object018721b0 {
    uint8_t unknown_0x0000[0x1c];
    uint8_t value_0x001c; /**< Read by auto_return_field_018721b0; meaning unknown. */
};
static_assert(offsetof(Object018721b0, value_0x001c) == 0x1c);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_018721b0(const Object018721b0 *self)
{
    return self->value_0x001c;
}

/**
 *
 * The part of the object that auto_return_field_018721d0 reads.
 *
 */
struct Object018721d0 {
    uint8_t unknown_0x0000[0x1d];
    uint8_t value_0x001d; /**< Read by auto_return_field_018721d0; meaning unknown. */
};
static_assert(offsetof(Object018721d0, value_0x001d) == 0x1d);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_018721d0(const Object018721d0 *self)
{
    return self->value_0x001d;
}

/**
 *
 * The part of the object that auto_return_field_018721f0 reads.
 *
 */
struct Object018721f0 {
    uint8_t unknown_0x0000[0x1e];
    uint8_t value_0x001e; /**< Read by auto_return_field_018721f0; meaning unknown. */
};
static_assert(offsetof(Object018721f0, value_0x001e) == 0x1e);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_018721f0(const Object018721f0 *self)
{
    return self->value_0x001e;
}

/**
 *
 * The part of the object that auto_return_field_01872210 reads.
 *
 */
struct Object01872210 {
    uint8_t unknown_0x0000[0x1f];
    uint8_t value_0x001f; /**< Read by auto_return_field_01872210; meaning unknown. */
};
static_assert(offsetof(Object01872210, value_0x001f) == 0x1f);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01872210(const Object01872210 *self)
{
    return self->value_0x001f;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01872910()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01877070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01878700()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01879820()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0187db10 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0187db10()
{
    return value_0187db10;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0187f820()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0187f8f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0187f950()
{
}
