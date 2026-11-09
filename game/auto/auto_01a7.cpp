// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a717e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a71800()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a71950 reads.
 *
 */
struct Object01a71950 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a71950; meaning unknown. */
};
static_assert(offsetof(Object01a71950, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a71950(const Object01a71950 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a71960 reads.
 *
 */
struct Object01a71960 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a71960; meaning unknown. */
};
static_assert(offsetof(Object01a71960, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a71960(const Object01a71960 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a719b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a71c30 = 0x898;

extern "C" uint32_t bb_auto_return_constant_01a71c30()
{
    return value_01a71c30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a71ed0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a71ee0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a71f80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a71f90()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a72b80()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a72ba0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a72cf0 reads.
 *
 */
struct Object01a72cf0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a72cf0; meaning unknown. */
};
static_assert(offsetof(Object01a72cf0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a72cf0(const Object01a72cf0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a72d00 reads.
 *
 */
struct Object01a72d00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a72d00; meaning unknown. */
};
static_assert(offsetof(Object01a72d00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a72d00(const Object01a72d00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a72d50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a72fd0 = 0x48;

extern "C" uint32_t bb_auto_return_constant_01a72fd0()
{
    return value_01a72fd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a741a0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a741c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a74310 reads.
 *
 */
struct Object01a74310 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a74310; meaning unknown. */
};
static_assert(offsetof(Object01a74310, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a74310(const Object01a74310 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a74320 reads.
 *
 */
struct Object01a74320 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a74320; meaning unknown. */
};
static_assert(offsetof(Object01a74320, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a74320(const Object01a74320 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a74370()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a745f0 = 0x58;

extern "C" uint32_t bb_auto_return_constant_01a745f0()
{
    return value_01a745f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a754b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a754d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a75620 reads.
 *
 */
struct Object01a75620 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a75620; meaning unknown. */
};
static_assert(offsetof(Object01a75620, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a75620(const Object01a75620 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a75630 reads.
 *
 */
struct Object01a75630 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a75630; meaning unknown. */
};
static_assert(offsetof(Object01a75630, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a75630(const Object01a75630 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a75680()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a75900 = 0x40;

extern "C" uint32_t bb_auto_return_constant_01a75900()
{
    return value_01a75900;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a777e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a77800()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a77950 reads.
 *
 */
struct Object01a77950 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a77950; meaning unknown. */
};
static_assert(offsetof(Object01a77950, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a77950(const Object01a77950 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a77960 reads.
 *
 */
struct Object01a77960 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a77960; meaning unknown. */
};
static_assert(offsetof(Object01a77960, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a77960(const Object01a77960 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a779b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a77c30 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01a77c30()
{
    return value_01a77c30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a78070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a78080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a78fe0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a79000()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a79150 reads.
 *
 */
struct Object01a79150 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a79150; meaning unknown. */
};
static_assert(offsetof(Object01a79150, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a79150(const Object01a79150 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a79160 reads.
 *
 */
struct Object01a79160 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a79160; meaning unknown. */
};
static_assert(offsetof(Object01a79160, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a79160(const Object01a79160 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a791b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a79430 = 0x78;

extern "C" uint32_t bb_auto_return_constant_01a79430()
{
    return value_01a79430;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a7a480()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a7a4a0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a7a5f0 reads.
 *
 */
struct Object01a7a5f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a7a5f0; meaning unknown. */
};
static_assert(offsetof(Object01a7a5f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a7a5f0(const Object01a7a5f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a7a600 reads.
 *
 */
struct Object01a7a600 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a7a600; meaning unknown. */
};
static_assert(offsetof(Object01a7a600, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a7a600(const Object01a7a600 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a7a650()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a7a8d0 = 0x178;

extern "C" uint32_t bb_auto_return_constant_01a7a8d0()
{
    return value_01a7a8d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a7b8b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a7b8d0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a7ba20 reads.
 *
 */
struct Object01a7ba20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a7ba20; meaning unknown. */
};
static_assert(offsetof(Object01a7ba20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a7ba20(const Object01a7ba20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a7ba30 reads.
 *
 */
struct Object01a7ba30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a7ba30; meaning unknown. */
};
static_assert(offsetof(Object01a7ba30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a7ba30(const Object01a7ba30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a7ba80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a7bd00 = 0x180;

extern "C" uint32_t bb_auto_return_constant_01a7bd00()
{
    return value_01a7bd00;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a7fc50()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a7fc70()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a7fdc0 reads.
 *
 */
struct Object01a7fdc0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a7fdc0; meaning unknown. */
};
static_assert(offsetof(Object01a7fdc0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a7fdc0(const Object01a7fdc0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a7fdd0 reads.
 *
 */
struct Object01a7fdd0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a7fdd0; meaning unknown. */
};
static_assert(offsetof(Object01a7fdd0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a7fdd0(const Object01a7fdd0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a7fe20()
{
    return 0;
}
