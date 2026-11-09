// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_01800230 reads.
 *
 */
struct Object01800230 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01800230; meaning unknown. */
};
static_assert(offsetof(Object01800230, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01800230(const Object01800230 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01800240 reads.
 *
 */
struct Object01800240 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01800240; meaning unknown. */
};
static_assert(offsetof(Object01800240, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01800240(const Object01800240 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01800290()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01800510 = 0x90;

extern "C" uint32_t bb_auto_return_constant_01800510()
{
    return value_01800510;
}

/**
 *
 * The part of the object that auto_return_field_018019c0 reads.
 *
 */
struct Object018019c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_018019c0; meaning unknown. */
};
static_assert(offsetof(Object018019c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018019c0(const Object018019c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_018019d0 reads.
 *
 */
struct Object018019d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_018019d0; meaning unknown. */
};
static_assert(offsetof(Object018019d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018019d0(const Object018019d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01801a20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01801ca0 = 0x120;

extern "C" uint32_t bb_auto_return_constant_01801ca0()
{
    return value_01801ca0;
}

/**
 *
 * The part of the object that auto_return_field_01803b00 reads.
 *
 */
struct Object01803b00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01803b00; meaning unknown. */
};
static_assert(offsetof(Object01803b00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01803b00(const Object01803b00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01803b10 reads.
 *
 */
struct Object01803b10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01803b10; meaning unknown. */
};
static_assert(offsetof(Object01803b10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01803b10(const Object01803b10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01803b60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01803de0 = 0xc0;

extern "C" uint32_t bb_auto_return_constant_01803de0()
{
    return value_01803de0;
}

/**
 *
 * The part of the object that auto_return_field_018050e0 reads.
 *
 */
struct Object018050e0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_018050e0; meaning unknown. */
};
static_assert(offsetof(Object018050e0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018050e0(const Object018050e0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_018050f0 reads.
 *
 */
struct Object018050f0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_018050f0; meaning unknown. */
};
static_assert(offsetof(Object018050f0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018050f0(const Object018050f0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01805140()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018053c0 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_018053c0()
{
    return value_018053c0;
}

/**
 *
 * The part of the object that auto_return_field_01806070 reads.
 *
 */
struct Object01806070 {
    uint8_t unknown_0x0000[0x90];
    uint32_t value_0x0090; /**< Read by auto_return_field_01806070; meaning unknown. */
};
static_assert(offsetof(Object01806070, value_0x0090) == 0x90);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_01806070(const Object01806070 *self)
{
    return self->value_0x0090;
}

/**
 *
 * The part of the object that auto_return_field_01806640 reads.
 *
 */
struct Object01806640 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01806640; meaning unknown. */
};
static_assert(offsetof(Object01806640, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01806640(const Object01806640 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01806650 reads.
 *
 */
struct Object01806650 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01806650; meaning unknown. */
};
static_assert(offsetof(Object01806650, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01806650(const Object01806650 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018066a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01806920 = 0xb8;

extern "C" uint32_t bb_auto_return_constant_01806920()
{
    return value_01806920;
}

/**
 *
 * The part of the object that auto_return_field_01807590 reads.
 *
 */
struct Object01807590 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01807590; meaning unknown. */
};
static_assert(offsetof(Object01807590, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01807590(const Object01807590 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_018075a0 reads.
 *
 */
struct Object018075a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_018075a0; meaning unknown. */
};
static_assert(offsetof(Object018075a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018075a0(const Object018075a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018075f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01807870 = 0x90;

extern "C" uint32_t bb_auto_return_constant_01807870()
{
    return value_01807870;
}

/**
 *
 * The part of the object that auto_return_field_01807e20 reads.
 *
 */
struct Object01807e20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01807e20; meaning unknown. */
};
static_assert(offsetof(Object01807e20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01807e20(const Object01807e20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01807e30 reads.
 *
 */
struct Object01807e30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01807e30; meaning unknown. */
};
static_assert(offsetof(Object01807e30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01807e30(const Object01807e30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01807e80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01808100 = 0x98;

extern "C" uint32_t bb_auto_return_constant_01808100()
{
    return value_01808100;
}

/**
 *
 * The part of the object that auto_return_field_01808c70 reads.
 *
 */
struct Object01808c70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01808c70; meaning unknown. */
};
static_assert(offsetof(Object01808c70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01808c70(const Object01808c70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01808c80 reads.
 *
 */
struct Object01808c80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01808c80; meaning unknown. */
};
static_assert(offsetof(Object01808c80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01808c80(const Object01808c80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01808cd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01808f50 = 0x98;

extern "C" uint32_t bb_auto_return_constant_01808f50()
{
    return value_01808f50;
}

/**
 *
 * The part of the object that auto_return_field_01809de0 reads.
 *
 */
struct Object01809de0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01809de0; meaning unknown. */
};
static_assert(offsetof(Object01809de0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01809de0(const Object01809de0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01809df0 reads.
 *
 */
struct Object01809df0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01809df0; meaning unknown. */
};
static_assert(offsetof(Object01809df0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01809df0(const Object01809df0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01809e40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0180a0c0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0180a0c0()
{
    return value_0180a0c0;
}

/**
 *
 * The part of the object that auto_return_field_0180afe0 reads.
 *
 */
struct Object0180afe0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0180afe0; meaning unknown. */
};
static_assert(offsetof(Object0180afe0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0180afe0(const Object0180afe0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0180aff0 reads.
 *
 */
struct Object0180aff0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0180aff0; meaning unknown. */
};
static_assert(offsetof(Object0180aff0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0180aff0(const Object0180aff0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0180b040()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0180b2c0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_0180b2c0()
{
    return value_0180b2c0;
}

/**
 *
 * The part of the object that auto_return_field_0180bfd0 reads.
 *
 */
struct Object0180bfd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0180bfd0; meaning unknown. */
};
static_assert(offsetof(Object0180bfd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0180bfd0(const Object0180bfd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0180bfe0 reads.
 *
 */
struct Object0180bfe0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0180bfe0; meaning unknown. */
};
static_assert(offsetof(Object0180bfe0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0180bfe0(const Object0180bfe0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0180c030()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0180c2b0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_0180c2b0()
{
    return value_0180c2b0;
}

/**
 *
 * The part of the object that auto_return_field_0180d3c0 reads.
 *
 */
struct Object0180d3c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0180d3c0; meaning unknown. */
};
static_assert(offsetof(Object0180d3c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0180d3c0(const Object0180d3c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0180d3d0 reads.
 *
 */
struct Object0180d3d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0180d3d0; meaning unknown. */
};
static_assert(offsetof(Object0180d3d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0180d3d0(const Object0180d3d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0180d420()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0180d6a0 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_0180d6a0()
{
    return value_0180d6a0;
}

/**
 *
 * The part of the object that auto_return_field_0180e3b0 reads.
 *
 */
struct Object0180e3b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0180e3b0; meaning unknown. */
};
static_assert(offsetof(Object0180e3b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0180e3b0(const Object0180e3b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0180e3c0 reads.
 *
 */
struct Object0180e3c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0180e3c0; meaning unknown. */
};
static_assert(offsetof(Object0180e3c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0180e3c0(const Object0180e3c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0180e410()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0180e690 = 0x90;

extern "C" uint32_t bb_auto_return_constant_0180e690()
{
    return value_0180e690;
}

/**
 *
 * The part of the object that auto_return_field_0180ec40 reads.
 *
 */
struct Object0180ec40 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0180ec40; meaning unknown. */
};
static_assert(offsetof(Object0180ec40, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0180ec40(const Object0180ec40 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0180ec50 reads.
 *
 */
struct Object0180ec50 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0180ec50; meaning unknown. */
};
static_assert(offsetof(Object0180ec50, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0180ec50(const Object0180ec50 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0180eca0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0180ef20 = 0x98;

extern "C" uint32_t bb_auto_return_constant_0180ef20()
{
    return value_0180ef20;
}

/**
 *
 * The part of the object that auto_return_field_0180fe90 reads.
 *
 */
struct Object0180fe90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0180fe90; meaning unknown. */
};
static_assert(offsetof(Object0180fe90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0180fe90(const Object0180fe90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0180fea0 reads.
 *
 */
struct Object0180fea0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0180fea0; meaning unknown. */
};
static_assert(offsetof(Object0180fea0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0180fea0(const Object0180fea0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0180fef0()
{
    return 0;
}
