// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b12bc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b130f0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b13110()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b13260 reads.
 *
 */
struct Object01b13260 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b13260; meaning unknown. */
};
static_assert(offsetof(Object01b13260, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b13260(const Object01b13260 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b13270 reads.
 *
 */
struct Object01b13270 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b13270; meaning unknown. */
};
static_assert(offsetof(Object01b13270, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b13270(const Object01b13270 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b132c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b13540 = 0x200;

extern "C" uint32_t bb_auto_return_constant_01b13540()
{
    return value_01b13540;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b14a60()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b14a80()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b14bd0 reads.
 *
 */
struct Object01b14bd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b14bd0; meaning unknown. */
};
static_assert(offsetof(Object01b14bd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b14bd0(const Object01b14bd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b14be0 reads.
 *
 */
struct Object01b14be0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b14be0; meaning unknown. */
};
static_assert(offsetof(Object01b14be0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b14be0(const Object01b14be0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b14c30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b14eb0 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01b14eb0()
{
    return value_01b14eb0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b17800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b19440()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b19460()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b195b0 reads.
 *
 */
struct Object01b195b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b195b0; meaning unknown. */
};
static_assert(offsetof(Object01b195b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b195b0(const Object01b195b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b195c0 reads.
 *
 */
struct Object01b195c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b195c0; meaning unknown. */
};
static_assert(offsetof(Object01b195c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b195c0(const Object01b195c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b19610()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b19890 = 0x1a8;

extern "C" uint32_t bb_auto_return_constant_01b19890()
{
    return value_01b19890;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b1c9b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b1c9d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b1cb20 reads.
 *
 */
struct Object01b1cb20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b1cb20; meaning unknown. */
};
static_assert(offsetof(Object01b1cb20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b1cb20(const Object01b1cb20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b1cb30 reads.
 *
 */
struct Object01b1cb30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b1cb30; meaning unknown. */
};
static_assert(offsetof(Object01b1cb30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b1cb30(const Object01b1cb30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b1cb80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b1ce00 = 0x1d0;

extern "C" uint32_t bb_auto_return_constant_01b1ce00()
{
    return value_01b1ce00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01b1e7e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b1e800()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01b1e950 reads.
 *
 */
struct Object01b1e950 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01b1e950; meaning unknown. */
};
static_assert(offsetof(Object01b1e950, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b1e950(const Object01b1e950 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01b1e960 reads.
 *
 */
struct Object01b1e960 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01b1e960; meaning unknown. */
};
static_assert(offsetof(Object01b1e960, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01b1e960(const Object01b1e960 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01b1e9b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01b1ec30 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01b1ec30()
{
    return value_01b1ec30;
}
