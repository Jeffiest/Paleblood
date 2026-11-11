// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02a24950 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02a24950()
{
    return value_02a24950;
}

/**
 *
 * The part of the object that auto_return_field_02a25260 reads.
 *
 */
struct Object02a25260 {
    uint8_t unknown_0x0000[0x100];
    uint64_t value_0x0100; /**< Read by auto_return_field_02a25260; meaning unknown. */
};
static_assert(offsetof(Object02a25260, value_0x0100) == 0x100);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a25260(const Object02a25260 *self)
{
    return self->value_0x0100;
}

/**
 *
 * The part of the object that auto_return_field_02a26ee0 reads.
 *
 */
struct Object02a26ee0 {
    uint8_t unknown_0x0000[0xb0];
    uint64_t value_0x00b0; /**< Read by auto_return_field_02a26ee0; meaning unknown. */
};
static_assert(offsetof(Object02a26ee0, value_0x00b0) == 0xb0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a26ee0(const Object02a26ee0 *self)
{
    return self->value_0x00b0;
}

/**
 *
 * The part of the object that auto_return_field_02a26ef0 reads.
 *
 */
struct Object02a26ef0 {
    uint8_t unknown_0x0000[0x79];
    uint8_t value_0x0079; /**< Read by auto_return_field_02a26ef0; meaning unknown. */
};
static_assert(offsetof(Object02a26ef0, value_0x0079) == 0x79);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02a26ef0(const Object02a26ef0 *self)
{
    return self->value_0x0079;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02a27e40()
{
}

/**
 *
 * The part of the object that auto_return_field_02a29ee0 reads.
 *
 */
struct Object02a29ee0 {
    uint8_t unknown_0x0000[0xa0];
    uint64_t value_0x00a0; /**< Read by auto_return_field_02a29ee0; meaning unknown. */
};
static_assert(offsetof(Object02a29ee0, value_0x00a0) == 0xa0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a29ee0(const Object02a29ee0 *self)
{
    return self->value_0x00a0;
}

/**
 *
 * The part of the object that auto_return_field_02a2fe40 reads.
 *
 */
struct Object02a2fe40 {
    uint8_t unknown_0x0000[0xe0];
    uint64_t value_0x00e0; /**< Read by auto_return_field_02a2fe40; meaning unknown. */
};
static_assert(offsetof(Object02a2fe40, value_0x00e0) == 0xe0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02a2fe40(const Object02a2fe40 *self)
{
    return self->value_0x00e0;
}
