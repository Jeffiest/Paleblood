// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02460590 reads.
 *
 */
struct Object02460590 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02460590; meaning unknown. */
};
static_assert(offsetof(Object02460590, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02460590(const Object02460590 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_024605a0 reads.
 *
 */
struct Object024605a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_024605a0; meaning unknown. */
};
static_assert(offsetof(Object024605a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024605a0(const Object024605a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024605f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02460870 = 0x98;

extern "C" uint32_t bb_auto_return_constant_02460870()
{
    return value_02460870;
}

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
 * The part of the object that auto_return_field_02461ac0 reads.
 *
 */
struct Object02461ac0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02461ac0; meaning unknown. */
};
static_assert(offsetof(Object02461ac0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02461ac0(const Object02461ac0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02461ad0 reads.
 *
 */
struct Object02461ad0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02461ad0; meaning unknown. */
};
static_assert(offsetof(Object02461ad0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02461ad0(const Object02461ad0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02461b20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02461da0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_02461da0()
{
    return value_02461da0;
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02466730 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02466730()
{
    return value_02466730;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02466740 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02466740()
{
    return value_02466740;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024667b0()
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
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02467710 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02467710()
{
    return value_02467710;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02467720 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02467720()
{
    return value_02467720;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02467790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0246b340()
{
}

/**
 *
 * The part of the object that auto_return_field_0246cf30 reads.
 *
 */
struct Object0246cf30 {
    uint8_t unknown_0x0000[0x50];
    uint64_t value_0x0050; /**< Read by auto_return_field_0246cf30; meaning unknown. */
};
static_assert(offsetof(Object0246cf30, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0246cf30(const Object0246cf30 *self)
{
    return self->value_0x0050;
}
