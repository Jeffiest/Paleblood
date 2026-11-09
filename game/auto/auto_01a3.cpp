// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a30d10()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a30d30()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a30e80 reads.
 *
 */
struct Object01a30e80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a30e80; meaning unknown. */
};
static_assert(offsetof(Object01a30e80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a30e80(const Object01a30e80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a30e90 reads.
 *
 */
struct Object01a30e90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a30e90; meaning unknown. */
};
static_assert(offsetof(Object01a30e90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a30e90(const Object01a30e90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a30ee0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a31160 = 0x48;

extern "C" uint32_t bb_auto_return_constant_01a31160()
{
    return value_01a31160;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a342e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a34720()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a34740()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a34890 reads.
 *
 */
struct Object01a34890 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a34890; meaning unknown. */
};
static_assert(offsetof(Object01a34890, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a34890(const Object01a34890 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a348a0 reads.
 *
 */
struct Object01a348a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a348a0; meaning unknown. */
};
static_assert(offsetof(Object01a348a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a348a0(const Object01a348a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a348f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a34b70 = 0x1f0;

extern "C" uint32_t bb_auto_return_constant_01a34b70()
{
    return value_01a34b70;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a36210()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a36530()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a36550()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a366a0 reads.
 *
 */
struct Object01a366a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a366a0; meaning unknown. */
};
static_assert(offsetof(Object01a366a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a366a0(const Object01a366a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a366b0 reads.
 *
 */
struct Object01a366b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a366b0; meaning unknown. */
};
static_assert(offsetof(Object01a366b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a366b0(const Object01a366b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a36700()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a36980 = 0x1a8;

extern "C" uint32_t bb_auto_return_constant_01a36980()
{
    return value_01a36980;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a370e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a37da0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a37dc0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a37f10 reads.
 *
 */
struct Object01a37f10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a37f10; meaning unknown. */
};
static_assert(offsetof(Object01a37f10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a37f10(const Object01a37f10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a37f20 reads.
 *
 */
struct Object01a37f20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a37f20; meaning unknown. */
};
static_assert(offsetof(Object01a37f20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a37f20(const Object01a37f20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a37f70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a381f0 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a381f0()
{
    return value_01a381f0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a3a7d0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a3a7f0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a3a940 reads.
 *
 */
struct Object01a3a940 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a3a940; meaning unknown. */
};
static_assert(offsetof(Object01a3a940, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a3a940(const Object01a3a940 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a3a950 reads.
 *
 */
struct Object01a3a950 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a3a950; meaning unknown. */
};
static_assert(offsetof(Object01a3a950, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a3a950(const Object01a3a950 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a3a9a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a3ac20 = 0xb88;

extern "C" uint32_t bb_auto_return_constant_01a3ac20()
{
    return value_01a3ac20;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a3c550()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a3c570()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a3c6c0 reads.
 *
 */
struct Object01a3c6c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a3c6c0; meaning unknown. */
};
static_assert(offsetof(Object01a3c6c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a3c6c0(const Object01a3c6c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a3c6d0 reads.
 *
 */
struct Object01a3c6d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a3c6d0; meaning unknown. */
};
static_assert(offsetof(Object01a3c6d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a3c6d0(const Object01a3c6d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a3c720()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a3c9a0 = 0x1a8;

extern "C" uint32_t bb_auto_return_constant_01a3c9a0()
{
    return value_01a3c9a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a3d8e0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a3d900()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a3da50 reads.
 *
 */
struct Object01a3da50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a3da50; meaning unknown. */
};
static_assert(offsetof(Object01a3da50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a3da50(const Object01a3da50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a3da60 reads.
 *
 */
struct Object01a3da60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a3da60; meaning unknown. */
};
static_assert(offsetof(Object01a3da60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a3da60(const Object01a3da60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a3dab0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a3dd30 = 0x48;

extern "C" uint32_t bb_auto_return_constant_01a3dd30()
{
    return value_01a3dd30;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01a3f2c0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a3f2e0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_01a3f430 reads.
 *
 */
struct Object01a3f430 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01a3f430; meaning unknown. */
};
static_assert(offsetof(Object01a3f430, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a3f430(const Object01a3f430 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01a3f440 reads.
 *
 */
struct Object01a3f440 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01a3f440; meaning unknown. */
};
static_assert(offsetof(Object01a3f440, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01a3f440(const Object01a3f440 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01a3f490()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01a3f710 = 0x188;

extern "C" uint32_t bb_auto_return_constant_01a3f710()
{
    return value_01a3f710;
}
