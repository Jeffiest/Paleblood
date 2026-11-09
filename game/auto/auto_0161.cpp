// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01610620 reads.
 *
 */
struct Object01610620 {
    uint8_t unknown_0x0000[0x28];
    uint32_t value_0x0028; /**< Read by auto_return_field_01610620; meaning unknown. */
};
static_assert(offsetof(Object01610620, value_0x0028) == 0x28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01610620(const Object01610620 *self)
{
    return self->value_0x0028;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016147a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016160e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01619e80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0161bda0()
{
}
