// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dc1e40()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dc2110()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dca820()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dca880()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcb420()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcb4f0()
{
}

/**
 *
 * The part of the object that auto_return_field_02dcc950 reads.
 *
 */
struct Object02dcc950 {
    uint8_t unknown_0x0000[0xa28];
    uint64_t value_0x0a28; /**< Read by auto_return_field_02dcc950; meaning unknown. */
};
static_assert(offsetof(Object02dcc950, value_0x0a28) == 0xa28);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dcc950(const Object02dcc950 *self)
{
    return self->value_0x0a28;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dccb30()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dccc30()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcccf0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dccda0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcce60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dccf60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcd020()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dcd0d0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcd190()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dcd280()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcd340()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dcd3f0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcd4b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dcd560()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcd620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dcd640()
{
}

/**
 *
 * The part of the object that auto_return_field_02dcf6a0 reads.
 *
 */
struct Object02dcf6a0 {
    uint8_t unknown_0x0000[0x58];
    uint8_t value_0x0058; /**< Read by auto_return_field_02dcf6a0; meaning unknown. */
};
static_assert(offsetof(Object02dcf6a0, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02dcf6a0(const Object02dcf6a0 *self)
{
    return self->value_0x0058;
}
