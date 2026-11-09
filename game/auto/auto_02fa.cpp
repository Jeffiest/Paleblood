// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02fa2a20 reads.
 *
 */
struct Object02fa2a20 {
    uint8_t unknown_0x0000[0x58];
    uint64_t value_0x0058; /**< Read by auto_return_field_02fa2a20; meaning unknown. */
};
static_assert(offsetof(Object02fa2a20, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02fa2a20(const Object02fa2a20 *self)
{
    return self->value_0x0058;
}

/**
 *
 * The part of the object that auto_return_field_02fa2ae0 reads.
 *
 */
struct Object02fa2ae0 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02fa2ae0; meaning unknown. */
};
static_assert(offsetof(Object02fa2ae0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02fa2ae0(const Object02fa2ae0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_02fa2af0 reads.
 *
 */
struct Object02fa2af0 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02fa2af0; meaning unknown. */
};
static_assert(offsetof(Object02fa2af0, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02fa2af0(const Object02fa2af0 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_02fa2b00 reads.
 *
 */
struct Object02fa2b00 {
    uint64_t value_0x0000; /**< Read by auto_return_field_02fa2b00; meaning unknown. */
};
static_assert(offsetof(Object02fa2b00, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02fa2b00(const Object02fa2b00 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_02fa4900 reads.
 *
 */
struct Object02fa4900 {
    uint8_t unknown_0x0000[0x18];
    uint64_t value_0x0018; /**< Read by auto_return_field_02fa4900; meaning unknown. */
};
static_assert(offsetof(Object02fa4900, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02fa4900(const Object02fa4900 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02fa6230 reads.
 *
 */
struct Object02fa6230 {
    uint8_t unknown_0x0000[0x10];
    uint64_t value_0x0010; /**< Read by auto_return_field_02fa6230; meaning unknown. */
};
static_assert(offsetof(Object02fa6230, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02fa6230(const Object02fa6230 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02fa6390 reads.
 *
 */
struct Object02fa6390 {
    uint8_t unknown_0x0000[0x20];
    uint64_t value_0x0020; /**< Read by auto_return_field_02fa6390; meaning unknown. */
};
static_assert(offsetof(Object02fa6390, value_0x0020) == 0x20);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02fa6390(const Object02fa6390 *self)
{
    return self->value_0x0020;
}
