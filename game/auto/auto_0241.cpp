// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * The part of the object that auto_return_field_02411540 reads.
 *
 */
struct Object02411540 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_02411540; meaning unknown. */
};
static_assert(offsetof(Object02411540, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02411540(const Object02411540 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02411610()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02411620()
{
}

/**
 *
 * The part of the object that auto_return_field_02411890 reads.
 *
 */
struct Object02411890 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02411890; meaning unknown. */
};
static_assert(offsetof(Object02411890, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02411890(const Object02411890 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_024118a0 reads.
 *
 */
struct Object024118a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_024118a0; meaning unknown. */
};
static_assert(offsetof(Object024118a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024118a0(const Object024118a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_024118f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02411b70 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02411b70()
{
    return value_02411b70;
}

/**
 *
 * The part of the object that auto_return_field_02411bb0 reads.
 *
 */
struct Object02411bb0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02411bb0; meaning unknown. */
};
static_assert(offsetof(Object02411bb0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02411bb0(const Object02411bb0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02411bc0 reads.
 *
 */
struct Object02411bc0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02411bc0; meaning unknown. */
};
static_assert(offsetof(Object02411bc0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02411bc0(const Object02411bc0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02411c10()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02411e90 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_02411e90()
{
    return value_02411e90;
}

/**
 *
 * The part of the object that auto_return_field_02411ed0 reads.
 *
 */
struct Object02411ed0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_02411ed0; meaning unknown. */
};
static_assert(offsetof(Object02411ed0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02411ed0(const Object02411ed0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02411ee0 reads.
 *
 */
struct Object02411ee0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02411ee0; meaning unknown. */
};
static_assert(offsetof(Object02411ee0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02411ee0(const Object02411ee0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02411f30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024121b0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_024121b0()
{
    return value_024121b0;
}

/**
 *
 * The part of the object that auto_return_field_024121f0 reads.
 *
 */
struct Object024121f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_024121f0; meaning unknown. */
};
static_assert(offsetof(Object024121f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024121f0(const Object024121f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02412200 reads.
 *
 */
struct Object02412200 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02412200; meaning unknown. */
};
static_assert(offsetof(Object02412200, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02412200(const Object02412200 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02412250()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024124d0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_024124d0()
{
    return value_024124d0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_024132a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02413300()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02413400()
{
}

/**
 *
 * The part of the object that auto_return_field_024153a0 reads.
 *
 */
struct Object024153a0 {
    uint8_t unknown_0x0000[0x50];
    uint32_t value_0x0050; /**< Read by auto_return_field_024153a0; meaning unknown. */
};
static_assert(offsetof(Object024153a0, value_0x0050) == 0x50);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_024153a0(const Object024153a0 *self)
{
    return self->value_0x0050;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02415470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02415480()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02415590()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_field_024155d0 reads.
 *
 */
struct Object024155d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_024155d0; meaning unknown. */
};
static_assert(offsetof(Object024155d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024155d0(const Object024155d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_024155e0 reads.
 *
 */
struct Object024155e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_024155e0; meaning unknown. */
};
static_assert(offsetof(Object024155e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024155e0(const Object024155e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02415630()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_024158b0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_024158b0()
{
    return value_024158b0;
}

/**
 *
 * The part of the object that auto_return_field_024158f0 reads.
 *
 */
struct Object024158f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_024158f0; meaning unknown. */
};
static_assert(offsetof(Object024158f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_024158f0(const Object024158f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_02415900 reads.
 *
 */
struct Object02415900 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_02415900; meaning unknown. */
};
static_assert(offsetof(Object02415900, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_02415900(const Object02415900 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_02415950()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_02415bd0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_02415bd0()
{
    return value_02415bd0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02415d80()
{
}

/**
 *
 * The part of the object that auto_return_field_02416510 reads.
 *
 */
struct Object02416510 {
    uint8_t unknown_0x0000[0xd0];
    uint32_t value_0x00d0; /**< Read by auto_return_field_02416510; meaning unknown. */
};
static_assert(offsetof(Object02416510, value_0x00d0) == 0xd0);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02416510(const Object02416510 *self)
{
    return self->value_0x00d0;
}

/**
 *
 * The part of the object that auto_return_field_02416520 reads.
 *
 */
struct Object02416520 {
    uint8_t unknown_0x0000[0xd4];
    uint32_t value_0x00d4; /**< Read by auto_return_field_02416520; meaning unknown. */
};
static_assert(offsetof(Object02416520, value_0x00d4) == 0xd4);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_02416520(const Object02416520 *self)
{
    return self->value_0x00d4;
}

/**
 *
 * The part of the object that auto_return_member_address_02416530 reads.
 *
 */
struct Object02416530 {
    uint8_t unknown_0x0000[0xd8];
    uint8_t member_0x00d8; /**< Read by auto_return_member_address_02416530; meaning unknown. */
};
static_assert(offsetof(Object02416530, member_0x00d8) == 0xd8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_02416530(Object02416530 *self)
{
    return &self->member_0x00d8;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02417750()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_02417760()
{
}

/**
 *
 * The part of the object that auto_return_field_0241e720 reads.
 *
 */
struct Object0241e720 {
    uint8_t unknown_0x0000[0x58];
    uint32_t value_0x0058; /**< Read by auto_return_field_0241e720; meaning unknown. */
};
static_assert(offsetof(Object0241e720, value_0x0058) == 0x58);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_0241e720(const Object0241e720 *self)
{
    return self->value_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0241e7f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_0241e800()
{
}

/**
 *
 * The part of the object that auto_return_field_0241ee70 reads.
 *
 */
struct Object0241ee70 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0241ee70; meaning unknown. */
};
static_assert(offsetof(Object0241ee70, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0241ee70(const Object0241ee70 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0241ee80 reads.
 *
 */
struct Object0241ee80 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0241ee80; meaning unknown. */
};
static_assert(offsetof(Object0241ee80, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0241ee80(const Object0241ee80 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0241eed0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0241f150 = 0x2c8;

extern "C" uint32_t bb_auto_return_constant_0241f150()
{
    return value_0241f150;
}

/**
 *
 * The part of the object that auto_return_field_0241f190 reads.
 *
 */
struct Object0241f190 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0241f190; meaning unknown. */
};
static_assert(offsetof(Object0241f190, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0241f190(const Object0241f190 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0241f1a0 reads.
 *
 */
struct Object0241f1a0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0241f1a0; meaning unknown. */
};
static_assert(offsetof(Object0241f1a0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0241f1a0(const Object0241f1a0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0241f1f0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0241f470 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0241f470()
{
    return value_0241f470;
}

/**
 *
 * The part of the object that auto_return_field_0241f4b0 reads.
 *
 */
struct Object0241f4b0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0241f4b0; meaning unknown. */
};
static_assert(offsetof(Object0241f4b0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0241f4b0(const Object0241f4b0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0241f4c0 reads.
 *
 */
struct Object0241f4c0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0241f4c0; meaning unknown. */
};
static_assert(offsetof(Object0241f4c0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0241f4c0(const Object0241f4c0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0241f510()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0241f790 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0241f790()
{
    return value_0241f790;
}

/**
 *
 * The part of the object that auto_return_field_0241f7d0 reads.
 *
 */
struct Object0241f7d0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0241f7d0; meaning unknown. */
};
static_assert(offsetof(Object0241f7d0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0241f7d0(const Object0241f7d0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0241f7e0 reads.
 *
 */
struct Object0241f7e0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0241f7e0; meaning unknown. */
};
static_assert(offsetof(Object0241f7e0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0241f7e0(const Object0241f7e0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0241f830()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0241fab0 = 0xd0;

extern "C" uint32_t bb_auto_return_constant_0241fab0()
{
    return value_0241fab0;
}
