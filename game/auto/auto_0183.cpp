// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01830ba0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01830c00()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01832200 = 0xe0;

extern "C" uint32_t bb_auto_return_constant_01832200()
{
    return value_01832200;
}

/**
 *
 * The part of the object that auto_return_field_01839cf0 reads.
 *
 */
struct Object01839cf0 {
    uint8_t unknown_0x0000[0x71];
    uint8_t value_0x0071; /**< Read by auto_return_field_01839cf0; meaning unknown. */
};
static_assert(offsetof(Object01839cf0, value_0x0071) == 0x71);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01839cf0(const Object01839cf0 *self)
{
    return self->value_0x0071;
}
