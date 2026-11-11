// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024619d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02461a30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024659f0()
{
}

/**
 *
 * The part of the object that auto_return_field_024676f0 reads.
 *
 */
struct Object024676f0 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_024676f0; meaning unknown. */
};
static_assert(offsetof(Object024676f0, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024676f0(const Object024676f0 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * The part of the object that auto_return_field_02467700 reads.
 *
 */
struct Object02467700 {
    uint8_t unknown_0x0000[0x79];
    uint8_t value_0x0079; /**< Read by auto_return_field_02467700; meaning unknown. */
};
static_assert(offsetof(Object02467700, value_0x0079) == 0x79);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02467700(const Object02467700 *self)
{
    return self->value_0x0079;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0246b340()
{
}
