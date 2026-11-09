// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b60e70()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b60e90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b60fe0 reads.
 *
 */
struct Object01b60fe0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b60fe0; meaning unknown. */
};
static_assert(offsetof(Object01b60fe0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b60fe0(const Object01b60fe0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b60ff0 reads.
 *
 */
struct Object01b60ff0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b60ff0; meaning unknown. */
};
static_assert(offsetof(Object01b60ff0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b60ff0(const Object01b60ff0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b61040()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b612c0 = 0x170;

extern "C" uint32_t bb_auto_return_constant_01b612c0()
{
    return value_01b612c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b61570()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b61590()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b616e0 reads.
 *
 */
struct Object01b616e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b616e0; meaning unknown. */
};
static_assert(offsetof(Object01b616e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b616e0(const Object01b616e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b616f0 reads.
 *
 */
struct Object01b616f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b616f0; meaning unknown. */
};
static_assert(offsetof(Object01b616f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b616f0(const Object01b616f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b61740()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b619c0 = 0x170;

extern "C" uint32_t bb_auto_return_constant_01b619c0()
{
    return value_01b619c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b622d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b622e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b622f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b62300()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01b62720 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01b62720()
{
    return value_01b62720;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01b6a8f0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01b6a8f0()
{
    return value_01b6a8f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b6c5c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b6c750()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01b6d310 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01b6d310()
{
    return value_01b6d310;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b6d360()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b6d370()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01b6df20 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01b6df20()
{
    return value_01b6df20;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01b6e030 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01b6e030()
{
    return value_01b6e030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b6e090()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b6e7f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b6edb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b6ee10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b6ee70()
{
}
