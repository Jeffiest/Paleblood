// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c2330()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c2930()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c36c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c4310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c4e80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c58f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c6280()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c6b30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c72f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c79c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c7fb0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c8e20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016c9b60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016ca7b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016cb320()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016cbd90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016cc720()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016ccfd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016cd790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016cde60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016ce470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016ce9b0()
{
}

/**
 *
 * The part of the object that auto_return_field_016cf2e0 reads.
 *
 */
struct Object016cf2e0 {
    uint8_t unknown_0x0000[0x98];
    uint32_t value_0x0098; /**< Read by auto_return_field_016cf2e0; meaning unknown. */
};
static_assert(offsetof(Object016cf2e0, value_0x0098) == 0x98);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016cf2e0(const Object016cf2e0 *self)
{
    return self->value_0x0098;
}

/**
 *
 * The part of the object that auto_return_field_016cf2f0 reads.
 *
 */
struct Object016cf2f0 {
    uint8_t unknown_0x0000[0xa8];
    int8_t value_0x00a8; /**< Read by auto_return_field_016cf2f0; meaning unknown. */
};
static_assert(offsetof(Object016cf2f0, value_0x00a8) == 0xa8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" int32_t bb_auto_return_field_016cf2f0(const Object016cf2f0 *self)
{
    return self->value_0x00a8;
}

/**
 *
 * The part of the object that auto_return_field_016cf440 reads.
 *
 */
struct Object016cf440 {
    uint8_t unknown_0x0000[0x90];
    uint32_t value_0x0090; /**< Read by auto_return_field_016cf440; meaning unknown. */
};
static_assert(offsetof(Object016cf440, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_016cf440(const Object016cf440 *self)
{
    return self->value_0x0090;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016cfb80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_016cfbe0()
{
}
