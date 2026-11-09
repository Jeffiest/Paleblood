// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02da2620 reads.
 *
 */
struct Object02da2620 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da2620; meaning unknown. */
};
static_assert(offsetof(Object02da2620, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da2620(const Object02da2620 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da2630 reads.
 *
 */
struct Object02da2630 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da2630; meaning unknown. */
};
static_assert(offsetof(Object02da2630, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da2630(const Object02da2630 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da2680()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da26a0 = 0x38;

extern "C" uint32_t bb_auto_return_constant_02da26a0()
{
    return value_02da26a0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02da27f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02da2800()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da32e0 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02da32e0()
{
    return value_02da32e0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da3610 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02da3610()
{
    return value_02da3610;
}

/**
 *
 * The part of the object that auto_return_field_02da38b0 reads.
 *
 */
struct Object02da38b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da38b0; meaning unknown. */
};
static_assert(offsetof(Object02da38b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da38b0(const Object02da38b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da38c0 reads.
 *
 */
struct Object02da38c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da38c0; meaning unknown. */
};
static_assert(offsetof(Object02da38c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da38c0(const Object02da38c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da3910()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da3930 = 0x88;

extern "C" uint32_t bb_auto_return_constant_02da3930()
{
    return value_02da3930;
}

/**
 *
 * The part of the object that auto_return_field_02da45b0 reads.
 *
 */
struct Object02da45b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da45b0; meaning unknown. */
};
static_assert(offsetof(Object02da45b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da45b0(const Object02da45b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da45c0 reads.
 *
 */
struct Object02da45c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da45c0; meaning unknown. */
};
static_assert(offsetof(Object02da45c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da45c0(const Object02da45c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da4610()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da4630 = 0x58;

extern "C" uint32_t bb_auto_return_constant_02da4630()
{
    return value_02da4630;
}

/**
 *
 * The part of the object that auto_return_field_02da4ae0 reads.
 *
 */
struct Object02da4ae0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da4ae0; meaning unknown. */
};
static_assert(offsetof(Object02da4ae0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da4ae0(const Object02da4ae0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da4af0 reads.
 *
 */
struct Object02da4af0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da4af0; meaning unknown. */
};
static_assert(offsetof(Object02da4af0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da4af0(const Object02da4af0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da4b40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da4b60 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02da4b60()
{
    return value_02da4b60;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02da6180()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02da6190()
{
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da6230 = 0x1;

extern "C" uint32_t bb_auto_return_constant_02da6230()
{
    return value_02da6230;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da6510()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02da66f0 reads.
 *
 */
struct Object02da66f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da66f0; meaning unknown. */
};
static_assert(offsetof(Object02da66f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da66f0(const Object02da66f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da6700 reads.
 *
 */
struct Object02da6700 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da6700; meaning unknown. */
};
static_assert(offsetof(Object02da6700, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da6700(const Object02da6700 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da6750()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da6770 = 0x50;

extern "C" uint32_t bb_auto_return_constant_02da6770()
{
    return value_02da6770;
}

/**
 *
 * The part of the object that auto_return_field_02da6870 reads.
 *
 */
struct Object02da6870 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da6870; meaning unknown. */
};
static_assert(offsetof(Object02da6870, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da6870(const Object02da6870 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da6880 reads.
 *
 */
struct Object02da6880 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da6880; meaning unknown. */
};
static_assert(offsetof(Object02da6880, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da6880(const Object02da6880 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da68d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da68f0 = 0x30;

extern "C" uint32_t bb_auto_return_constant_02da68f0()
{
    return value_02da68f0;
}

/**
 *
 * The part of the object that auto_return_field_02da69c0 reads.
 *
 */
struct Object02da69c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da69c0; meaning unknown. */
};
static_assert(offsetof(Object02da69c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da69c0(const Object02da69c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da69d0 reads.
 *
 */
struct Object02da69d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da69d0; meaning unknown. */
};
static_assert(offsetof(Object02da69d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da69d0(const Object02da69d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da6a20()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da6a40 = 0x20;

extern "C" uint32_t bb_auto_return_constant_02da6a40()
{
    return value_02da6a40;
}

/**
 *
 * The part of the object that auto_return_field_02da7b90 reads.
 *
 */
struct Object02da7b90 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da7b90; meaning unknown. */
};
static_assert(offsetof(Object02da7b90, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da7b90(const Object02da7b90 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da7ba0 reads.
 *
 */
struct Object02da7ba0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da7ba0; meaning unknown. */
};
static_assert(offsetof(Object02da7ba0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da7ba0(const Object02da7ba0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da7bf0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da7c10 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02da7c10()
{
    return value_02da7c10;
}

/**
 *
 * The part of the object that auto_return_field_02da7ce0 reads.
 *
 */
struct Object02da7ce0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da7ce0; meaning unknown. */
};
static_assert(offsetof(Object02da7ce0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da7ce0(const Object02da7ce0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da7cf0 reads.
 *
 */
struct Object02da7cf0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da7cf0; meaning unknown. */
};
static_assert(offsetof(Object02da7cf0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da7cf0(const Object02da7cf0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da7d40()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da7d60 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02da7d60()
{
    return value_02da7d60;
}

/**
 *
 * The part of the object that auto_return_field_02da7e30 reads.
 *
 */
struct Object02da7e30 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da7e30; meaning unknown. */
};
static_assert(offsetof(Object02da7e30, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da7e30(const Object02da7e30 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da7e40 reads.
 *
 */
struct Object02da7e40 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da7e40; meaning unknown. */
};
static_assert(offsetof(Object02da7e40, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da7e40(const Object02da7e40 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da7e90()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da7eb0 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02da7eb0()
{
    return value_02da7eb0;
}

/**
 *
 * The part of the object that auto_return_field_02da7f80 reads.
 *
 */
struct Object02da7f80 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da7f80; meaning unknown. */
};
static_assert(offsetof(Object02da7f80, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da7f80(const Object02da7f80 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da7f90 reads.
 *
 */
struct Object02da7f90 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da7f90; meaning unknown. */
};
static_assert(offsetof(Object02da7f90, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da7f90(const Object02da7f90 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da7fe0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da8000 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02da8000()
{
    return value_02da8000;
}

/**
 *
 * The part of the object that auto_return_field_02da80d0 reads.
 *
 */
struct Object02da80d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da80d0; meaning unknown. */
};
static_assert(offsetof(Object02da80d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da80d0(const Object02da80d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da80e0 reads.
 *
 */
struct Object02da80e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da80e0; meaning unknown. */
};
static_assert(offsetof(Object02da80e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da80e0(const Object02da80e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da8130()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da8150 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02da8150()
{
    return value_02da8150;
}

/**
 *
 * The part of the object that auto_return_field_02da8220 reads.
 *
 */
struct Object02da8220 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da8220; meaning unknown. */
};
static_assert(offsetof(Object02da8220, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da8220(const Object02da8220 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da8230 reads.
 *
 */
struct Object02da8230 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da8230; meaning unknown. */
};
static_assert(offsetof(Object02da8230, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da8230(const Object02da8230 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da8280()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da82a0 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02da82a0()
{
    return value_02da82a0;
}

/**
 *
 * The part of the object that auto_return_field_02da8370 reads.
 *
 */
struct Object02da8370 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da8370; meaning unknown. */
};
static_assert(offsetof(Object02da8370, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da8370(const Object02da8370 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da8380 reads.
 *
 */
struct Object02da8380 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da8380; meaning unknown. */
};
static_assert(offsetof(Object02da8380, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da8380(const Object02da8380 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da83d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da83f0 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02da83f0()
{
    return value_02da83f0;
}

/**
 *
 * The part of the object that auto_return_field_02da84c0 reads.
 *
 */
struct Object02da84c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da84c0; meaning unknown. */
};
static_assert(offsetof(Object02da84c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da84c0(const Object02da84c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da84d0 reads.
 *
 */
struct Object02da84d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da84d0; meaning unknown. */
};
static_assert(offsetof(Object02da84d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da84d0(const Object02da84d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da8520()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da8540 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02da8540()
{
    return value_02da8540;
}

/**
 *
 * The part of the object that auto_return_field_02da8610 reads.
 *
 */
struct Object02da8610 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da8610; meaning unknown. */
};
static_assert(offsetof(Object02da8610, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da8610(const Object02da8610 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da8620 reads.
 *
 */
struct Object02da8620 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da8620; meaning unknown. */
};
static_assert(offsetof(Object02da8620, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da8620(const Object02da8620 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da8670()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da8690 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02da8690()
{
    return value_02da8690;
}

/**
 *
 * The part of the object that auto_return_field_02da8760 reads.
 *
 */
struct Object02da8760 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da8760; meaning unknown. */
};
static_assert(offsetof(Object02da8760, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da8760(const Object02da8760 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da8770 reads.
 *
 */
struct Object02da8770 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da8770; meaning unknown. */
};
static_assert(offsetof(Object02da8770, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da8770(const Object02da8770 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da87c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da87e0 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02da87e0()
{
    return value_02da87e0;
}

/**
 *
 * The part of the object that auto_return_field_02da88b0 reads.
 *
 */
struct Object02da88b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da88b0; meaning unknown. */
};
static_assert(offsetof(Object02da88b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da88b0(const Object02da88b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da88c0 reads.
 *
 */
struct Object02da88c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da88c0; meaning unknown. */
};
static_assert(offsetof(Object02da88c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da88c0(const Object02da88c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da8910()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da8930 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02da8930()
{
    return value_02da8930;
}

/**
 *
 * The part of the object that auto_return_field_02da8ad0 reads.
 *
 */
struct Object02da8ad0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da8ad0; meaning unknown. */
};
static_assert(offsetof(Object02da8ad0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da8ad0(const Object02da8ad0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da8ae0 reads.
 *
 */
struct Object02da8ae0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da8ae0; meaning unknown. */
};
static_assert(offsetof(Object02da8ae0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da8ae0(const Object02da8ae0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da8b30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da8b50 = 0x58;

extern "C" uint32_t bb_auto_return_constant_02da8b50()
{
    return value_02da8b50;
}

/**
 *
 * The part of the object that auto_return_field_02da9360 reads.
 *
 */
struct Object02da9360 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da9360; meaning unknown. */
};
static_assert(offsetof(Object02da9360, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9360(const Object02da9360 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da9370 reads.
 *
 */
struct Object02da9370 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da9370; meaning unknown. */
};
static_assert(offsetof(Object02da9370, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9370(const Object02da9370 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da93c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da93e0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_02da93e0()
{
    return value_02da93e0;
}

/**
 *
 * The part of the object that auto_return_field_02da9480 reads.
 *
 */
struct Object02da9480 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02da9480; meaning unknown. */
};
static_assert(offsetof(Object02da9480, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9480(const Object02da9480 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02da94c0 reads.
 *
 */
struct Object02da94c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da94c0; meaning unknown. */
};
static_assert(offsetof(Object02da94c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da94c0(const Object02da94c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da94d0 reads.
 *
 */
struct Object02da94d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da94d0; meaning unknown. */
};
static_assert(offsetof(Object02da94d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da94d0(const Object02da94d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da9520()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da9540 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02da9540()
{
    return value_02da9540;
}

/**
 *
 * The part of the object that auto_return_field_02da9610 reads.
 *
 */
struct Object02da9610 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da9610; meaning unknown. */
};
static_assert(offsetof(Object02da9610, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9610(const Object02da9610 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da9620 reads.
 *
 */
struct Object02da9620 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da9620; meaning unknown. */
};
static_assert(offsetof(Object02da9620, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9620(const Object02da9620 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da9670()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da9690 = 0x98;

extern "C" uint32_t bb_auto_return_constant_02da9690()
{
    return value_02da9690;
}

/**
 *
 * The part of the object that auto_return_field_02da9730 reads.
 *
 */
struct Object02da9730 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02da9730; meaning unknown. */
};
static_assert(offsetof(Object02da9730, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9730(const Object02da9730 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02da9770 reads.
 *
 */
struct Object02da9770 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da9770; meaning unknown. */
};
static_assert(offsetof(Object02da9770, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9770(const Object02da9770 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da9780 reads.
 *
 */
struct Object02da9780 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da9780; meaning unknown. */
};
static_assert(offsetof(Object02da9780, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9780(const Object02da9780 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da97d0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da97f0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02da97f0()
{
    return value_02da97f0;
}

/**
 *
 * The part of the object that auto_return_field_02da98c0 reads.
 *
 */
struct Object02da98c0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da98c0; meaning unknown. */
};
static_assert(offsetof(Object02da98c0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da98c0(const Object02da98c0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da98d0 reads.
 *
 */
struct Object02da98d0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da98d0; meaning unknown. */
};
static_assert(offsetof(Object02da98d0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da98d0(const Object02da98d0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da9920()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da9940 = 0x98;

extern "C" uint32_t bb_auto_return_constant_02da9940()
{
    return value_02da9940;
}

/**
 *
 * The part of the object that auto_return_field_02da99e0 reads.
 *
 */
struct Object02da99e0 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02da99e0; meaning unknown. */
};
static_assert(offsetof(Object02da99e0, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da99e0(const Object02da99e0 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02da9a20 reads.
 *
 */
struct Object02da9a20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da9a20; meaning unknown. */
};
static_assert(offsetof(Object02da9a20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9a20(const Object02da9a20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da9a30 reads.
 *
 */
struct Object02da9a30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da9a30; meaning unknown. */
};
static_assert(offsetof(Object02da9a30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9a30(const Object02da9a30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da9a80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da9aa0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02da9aa0()
{
    return value_02da9aa0;
}

/**
 *
 * The part of the object that auto_return_field_02da9b70 reads.
 *
 */
struct Object02da9b70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da9b70; meaning unknown. */
};
static_assert(offsetof(Object02da9b70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9b70(const Object02da9b70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da9b80 reads.
 *
 */
struct Object02da9b80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da9b80; meaning unknown. */
};
static_assert(offsetof(Object02da9b80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9b80(const Object02da9b80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da9bd0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da9bf0 = 0x70;

extern "C" uint32_t bb_auto_return_constant_02da9bf0()
{
    return value_02da9bf0;
}

/**
 *
 * The part of the object that auto_return_field_02da9c90 reads.
 *
 */
struct Object02da9c90 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02da9c90; meaning unknown. */
};
static_assert(offsetof(Object02da9c90, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9c90(const Object02da9c90 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02da9cd0 reads.
 *
 */
struct Object02da9cd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02da9cd0; meaning unknown. */
};
static_assert(offsetof(Object02da9cd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9cd0(const Object02da9cd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02da9ce0 reads.
 *
 */
struct Object02da9ce0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02da9ce0; meaning unknown. */
};
static_assert(offsetof(Object02da9ce0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02da9ce0(const Object02da9ce0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02da9d30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02da9d50 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02da9d50()
{
    return value_02da9d50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dab1d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dab520()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dab580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dac700()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dac730()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dac740()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dad550()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dad5b0()
{
}

/**
 *
 * The part of the object that auto_return_field_02dae740 reads.
 *
 */
struct Object02dae740 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dae740; meaning unknown. */
};
static_assert(offsetof(Object02dae740, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dae740(const Object02dae740 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dae750 reads.
 *
 */
struct Object02dae750 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dae750; meaning unknown. */
};
static_assert(offsetof(Object02dae750, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dae750(const Object02dae750 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dae7a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dae7c0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_02dae7c0()
{
    return value_02dae7c0;
}

/**
 *
 * The part of the object that auto_return_field_02dae860 reads.
 *
 */
struct Object02dae860 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02dae860; meaning unknown. */
};
static_assert(offsetof(Object02dae860, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dae860(const Object02dae860 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02dae8a0 reads.
 *
 */
struct Object02dae8a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dae8a0; meaning unknown. */
};
static_assert(offsetof(Object02dae8a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dae8a0(const Object02dae8a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dae8b0 reads.
 *
 */
struct Object02dae8b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dae8b0; meaning unknown. */
};
static_assert(offsetof(Object02dae8b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dae8b0(const Object02dae8b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dae900()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dae920 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02dae920()
{
    return value_02dae920;
}

/**
 *
 * The part of the object that auto_return_field_02dae9f0 reads.
 *
 */
struct Object02dae9f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dae9f0; meaning unknown. */
};
static_assert(offsetof(Object02dae9f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dae9f0(const Object02dae9f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02daea00 reads.
 *
 */
struct Object02daea00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02daea00; meaning unknown. */
};
static_assert(offsetof(Object02daea00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daea00(const Object02daea00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02daea50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02daea70 = 0x70;

extern "C" uint32_t bb_auto_return_constant_02daea70()
{
    return value_02daea70;
}

/**
 *
 * The part of the object that auto_return_field_02daeb10 reads.
 *
 */
struct Object02daeb10 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02daeb10; meaning unknown. */
};
static_assert(offsetof(Object02daeb10, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daeb10(const Object02daeb10 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02daeb50 reads.
 *
 */
struct Object02daeb50 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02daeb50; meaning unknown. */
};
static_assert(offsetof(Object02daeb50, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daeb50(const Object02daeb50 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02daeb60 reads.
 *
 */
struct Object02daeb60 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02daeb60; meaning unknown. */
};
static_assert(offsetof(Object02daeb60, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daeb60(const Object02daeb60 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02daebb0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02daebd0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02daebd0()
{
    return value_02daebd0;
}

/**
 *
 * The part of the object that auto_return_field_02daed00 reads.
 *
 */
struct Object02daed00 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02daed00; meaning unknown. */
};
static_assert(offsetof(Object02daed00, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daed00(const Object02daed00 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02daed10 reads.
 *
 */
struct Object02daed10 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02daed10; meaning unknown. */
};
static_assert(offsetof(Object02daed10, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daed10(const Object02daed10 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02daed60()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02daed80 = 0x48;

extern "C" uint32_t bb_auto_return_constant_02daed80()
{
    return value_02daed80;
}

/**
 *
 * The part of the object that auto_return_field_02daf450 reads.
 *
 */
struct Object02daf450 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02daf450; meaning unknown. */
};
static_assert(offsetof(Object02daf450, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daf450(const Object02daf450 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02daf460 reads.
 *
 */
struct Object02daf460 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02daf460; meaning unknown. */
};
static_assert(offsetof(Object02daf460, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daf460(const Object02daf460 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02daf4b0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02daf4d0 = 0x98;

extern "C" uint32_t bb_auto_return_constant_02daf4d0()
{
    return value_02daf4d0;
}

/**
 *
 * The part of the object that auto_return_field_02daf570 reads.
 *
 */
struct Object02daf570 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02daf570; meaning unknown. */
};
static_assert(offsetof(Object02daf570, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daf570(const Object02daf570 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02daf5b0 reads.
 *
 */
struct Object02daf5b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02daf5b0; meaning unknown. */
};
static_assert(offsetof(Object02daf5b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daf5b0(const Object02daf5b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02daf5c0 reads.
 *
 */
struct Object02daf5c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02daf5c0; meaning unknown. */
};
static_assert(offsetof(Object02daf5c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daf5c0(const Object02daf5c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02daf610()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02daf630 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02daf630()
{
    return value_02daf630;
}

/**
 *
 * The part of the object that auto_return_field_02daf700 reads.
 *
 */
struct Object02daf700 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02daf700; meaning unknown. */
};
static_assert(offsetof(Object02daf700, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daf700(const Object02daf700 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02daf710 reads.
 *
 */
struct Object02daf710 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02daf710; meaning unknown. */
};
static_assert(offsetof(Object02daf710, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daf710(const Object02daf710 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02daf760()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02daf780 = 0xb0;

extern "C" uint32_t bb_auto_return_constant_02daf780()
{
    return value_02daf780;
}

/**
 *
 * The part of the object that auto_return_field_02daf820 reads.
 *
 */
struct Object02daf820 {
    uint8_t unknown_0x0000[0x8];
    uint64_t value_0x0008; /**< Read by auto_return_field_02daf820; meaning unknown. */
};
static_assert(offsetof(Object02daf820, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daf820(const Object02daf820 *self)
{
    return self->value_0x0008;
}

/**
 *
 * The part of the object that auto_return_field_02daf860 reads.
 *
 */
struct Object02daf860 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02daf860; meaning unknown. */
};
static_assert(offsetof(Object02daf860, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daf860(const Object02daf860 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02daf870 reads.
 *
 */
struct Object02daf870 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02daf870; meaning unknown. */
};
static_assert(offsetof(Object02daf870, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02daf870(const Object02daf870 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02daf8c0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02daf8e0 = 0x10;

extern "C" uint32_t bb_auto_return_constant_02daf8e0()
{
    return value_02daf8e0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dafc60()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dafc70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dafc80()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dafc90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_02dafcd0 reads.
 *
 */
struct Object02dafcd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02dafcd0; meaning unknown. */
};
static_assert(offsetof(Object02dafcd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dafcd0(const Object02dafcd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02dafce0 reads.
 *
 */
struct Object02dafce0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02dafce0; meaning unknown. */
};
static_assert(offsetof(Object02dafce0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02dafce0(const Object02dafce0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02dafd30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02dafd50 = 0x60;

extern "C" uint32_t bb_auto_return_constant_02dafd50()
{
    return value_02dafd50;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dafec0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02dafed0()
{
}
