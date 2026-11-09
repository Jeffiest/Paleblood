// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f70030 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02f70030()
{
    return value_02f70030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f70430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f70750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f70760()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f707b0()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f707d0 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f707d0()
{
    return value_02f707d0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f709c0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f709c0()
{
    return value_02f709c0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f70de0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f70de0()
{
    return value_02f70de0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f71160()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f714c0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f71610 reads.
 *
 */
struct Object02f71610 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f71610; meaning unknown. */
};
static_assert(offsetof(Object02f71610, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f71610(const Object02f71610 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f71620 reads.
 *
 */
struct Object02f71620 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f71620; meaning unknown. */
};
static_assert(offsetof(Object02f71620, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f71620(const Object02f71620 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f71670()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f717c0 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02f717c0()
{
    return value_02f717c0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f71bc0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f71dd0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f71de0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f71e20()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_02f71e40 = 0x1;

extern "C" uint8_t bb_auto_return_constant_02f71e40()
{
    return value_02f71e40;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f71f90 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f71f90()
{
    return value_02f71f90;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f723b0 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f723b0()
{
    return value_02f723b0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f72a50()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f72ba0 reads.
 *
 */
struct Object02f72ba0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f72ba0; meaning unknown. */
};
static_assert(offsetof(Object02f72ba0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f72ba0(const Object02f72ba0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f72bb0 reads.
 *
 */
struct Object02f72bb0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f72bb0; meaning unknown. */
};
static_assert(offsetof(Object02f72bb0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f72bb0(const Object02f72bb0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f72c00()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f72d50 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f72d50()
{
    return value_02f72d50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f73150()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f74890()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f748a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f74a10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f75200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f75210()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f75350 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f75350()
{
    return value_02f75350;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f75770 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f75770()
{
    return value_02f75770;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f767b0()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f77580()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f776d0 reads.
 *
 */
struct Object02f776d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f776d0; meaning unknown. */
};
static_assert(offsetof(Object02f776d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f776d0(const Object02f776d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f776e0 reads.
 *
 */
struct Object02f776e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f776e0; meaning unknown. */
};
static_assert(offsetof(Object02f776e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f776e0(const Object02f776e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f77730()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f77880 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f77880()
{
    return value_02f77880;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f77930 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f77930()
{
    return value_02f77930;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f77d50 = 0x2;

extern "C" uint32_t bb_auto_return_constant_02f77d50()
{
    return value_02f77d50;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f7eed0()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02f7f020 reads.
 *
 */
struct Object02f7f020 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02f7f020; meaning unknown. */
};
static_assert(offsetof(Object02f7f020, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f7f020(const Object02f7f020 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02f7f030 reads.
 *
 */
struct Object02f7f030 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02f7f030; meaning unknown. */
};
static_assert(offsetof(Object02f7f030, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f7f030(const Object02f7f030 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02f7f080()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02f7f1d0 = 0x18;

extern "C" uint32_t bb_auto_return_constant_02f7f1d0()
{
    return value_02f7f1d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02f7f7d0()
{
}

/**
 *
 * The part of the object that auto_return_field_02f7f940 reads.
 *
 */
struct Object02f7f940 {
    uint32_t value_0x0000; /**< Read by auto_return_field_02f7f940; meaning unknown. */
};
static_assert(offsetof(Object02f7f940, value_0x0000) == 0x0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f7f940(const Object02f7f940 *self)
{
    return self->value_0x0000;
}

/**
 *
 * The part of the object that auto_return_field_02f7fa00 reads.
 *
 */
struct Object02f7fa00 {
    uint8_t unknown_0x0000[0x19];
    uint8_t value_0x0019; /**< Read by auto_return_field_02f7fa00; meaning unknown. */
};
static_assert(offsetof(Object02f7fa00, value_0x0019) == 0x19);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02f7fa00(const Object02f7fa00 *self)
{
    return self->value_0x0019;
}

/**
 *
 * The part of the object that auto_return_field_02f7fa10 reads.
 *
 */
struct Object02f7fa10 {
    uint8_t unknown_0x0000[0x18];
    uint8_t value_0x0018; /**< Read by auto_return_field_02f7fa10; meaning unknown. */
};
static_assert(offsetof(Object02f7fa10, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_02f7fa10(const Object02f7fa10 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_field_02f7fc10 reads.
 *
 */
struct Object02f7fc10 {
    uint8_t unknown_0x0000[0x10];
    uint32_t value_0x0010; /**< Read by auto_return_field_02f7fc10; meaning unknown. */
};
static_assert(offsetof(Object02f7fc10, value_0x0010) == 0x10);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02f7fc10(const Object02f7fc10 *self)
{
    return self->value_0x0010;
}

/**
 *
 * The part of the object that auto_return_field_02f7fce0 reads.
 *
 */
struct Object02f7fce0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02f7fce0; meaning unknown. */
};
static_assert(offsetof(Object02f7fce0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02f7fce0(const Object02f7fce0 *self)
{
    return self->value_0x0008;
}
