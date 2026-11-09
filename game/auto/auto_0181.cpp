// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01810170 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_01810170()
{
    return value_01810170;
}

/**
 *
 * The part of the object that auto_return_field_01810dd0 reads.
 *
 */
struct Object01810dd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01810dd0; meaning unknown. */
};
static_assert(offsetof(Object01810dd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01810dd0(const Object01810dd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01810de0 reads.
 *
 */
struct Object01810de0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01810de0; meaning unknown. */
};
static_assert(offsetof(Object01810de0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01810de0(const Object01810de0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01810e30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018110b0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_018110b0()
{
    return value_018110b0;
}

/**
 *
 * The part of the object that auto_return_field_01811df0 reads.
 *
 */
struct Object01811df0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01811df0; meaning unknown. */
};
static_assert(offsetof(Object01811df0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01811df0(const Object01811df0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01811e00 reads.
 *
 */
struct Object01811e00 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01811e00; meaning unknown. */
};
static_assert(offsetof(Object01811e00, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01811e00(const Object01811e00 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01811e50()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018120d0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_018120d0()
{
    return value_018120d0;
}

/**
 *
 * The part of the object that auto_return_field_018130a0 reads.
 *
 */
struct Object018130a0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_018130a0; meaning unknown. */
};
static_assert(offsetof(Object018130a0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018130a0(const Object018130a0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_018130b0 reads.
 *
 */
struct Object018130b0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_018130b0; meaning unknown. */
};
static_assert(offsetof(Object018130b0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018130b0(const Object018130b0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01813100()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01813380 = 0x98;

extern "C" uint32_t bb_auto_return_constant_01813380()
{
    return value_01813380;
}

/**
 *
 * The part of the object that auto_return_field_01814240 reads.
 *
 */
struct Object01814240 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01814240; meaning unknown. */
};
static_assert(offsetof(Object01814240, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01814240(const Object01814240 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01814250 reads.
 *
 */
struct Object01814250 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01814250; meaning unknown. */
};
static_assert(offsetof(Object01814250, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01814250(const Object01814250 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018142a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01814520 = 0x98;

extern "C" uint32_t bb_auto_return_constant_01814520()
{
    return value_01814520;
}

/**
 *
 * The part of the object that auto_return_field_01814ad0 reads.
 *
 */
struct Object01814ad0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01814ad0; meaning unknown. */
};
static_assert(offsetof(Object01814ad0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01814ad0(const Object01814ad0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01814ae0 reads.
 *
 */
struct Object01814ae0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01814ae0; meaning unknown. */
};
static_assert(offsetof(Object01814ae0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01814ae0(const Object01814ae0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01814b30()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01814db0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_01814db0()
{
    return value_01814db0;
}

/**
 *
 * The part of the object that auto_return_field_018155f0 reads.
 *
 */
struct Object018155f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_018155f0; meaning unknown. */
};
static_assert(offsetof(Object018155f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_018155f0(const Object018155f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01815600 reads.
 *
 */
struct Object01815600 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01815600; meaning unknown. */
};
static_assert(offsetof(Object01815600, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01815600(const Object01815600 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01815650()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018158d0 = 0x90;

extern "C" uint32_t bb_auto_return_constant_018158d0()
{
    return value_018158d0;
}

/**
 *
 * The part of the object that auto_return_field_01816540 reads.
 *
 */
struct Object01816540 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01816540; meaning unknown. */
};
static_assert(offsetof(Object01816540, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01816540(const Object01816540 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01816550 reads.
 *
 */
struct Object01816550 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01816550; meaning unknown. */
};
static_assert(offsetof(Object01816550, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01816550(const Object01816550 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018165a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01816820 = 0x90;

extern "C" uint32_t bb_auto_return_constant_01816820()
{
    return value_01816820;
}

/**
 *
 * The part of the object that auto_return_field_01817540 reads.
 *
 */
struct Object01817540 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01817540; meaning unknown. */
};
static_assert(offsetof(Object01817540, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01817540(const Object01817540 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01817550 reads.
 *
 */
struct Object01817550 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01817550; meaning unknown. */
};
static_assert(offsetof(Object01817550, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01817550(const Object01817550 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_018175a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_01817820 = 0x90;

extern "C" uint32_t bb_auto_return_constant_01817820()
{
    return value_01817820;
}

/**
 *
 * The part of the object that auto_return_field_01818fd0 reads.
 *
 */
struct Object01818fd0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01818fd0; meaning unknown. */
};
static_assert(offsetof(Object01818fd0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01818fd0(const Object01818fd0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01818fe0 reads.
 *
 */
struct Object01818fe0 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01818fe0; meaning unknown. */
};
static_assert(offsetof(Object01818fe0, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01818fe0(const Object01818fe0 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01819030()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_018192b0 = 0xa0;

extern "C" uint32_t bb_auto_return_constant_018192b0()
{
    return value_018192b0;
}

/**
 *
 * The part of the object that auto_return_field_01819e20 reads.
 *
 */
struct Object01819e20 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_01819e20; meaning unknown. */
};
static_assert(offsetof(Object01819e20, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01819e20(const Object01819e20 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_01819e30 reads.
 *
 */
struct Object01819e30 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_01819e30; meaning unknown. */
};
static_assert(offsetof(Object01819e30, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_01819e30(const Object01819e30 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_01819e80()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0181a100 = 0x98;

extern "C" uint32_t bb_auto_return_constant_0181a100()
{
    return value_0181a100;
}

/**
 *
 * The part of the object that auto_return_field_0181af10 reads.
 *
 */
struct Object0181af10 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0181af10; meaning unknown. */
};
static_assert(offsetof(Object0181af10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0181af10(const Object0181af10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0181af20 reads.
 *
 */
struct Object0181af20 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0181af20; meaning unknown. */
};
static_assert(offsetof(Object0181af20, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0181af20(const Object0181af20 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0181af70()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0181b1f0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0181b1f0()
{
    return value_0181b1f0;
}

/**
 *
 * The part of the object that auto_return_field_0181c000 reads.
 *
 */
struct Object0181c000 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0181c000; meaning unknown. */
};
static_assert(offsetof(Object0181c000, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0181c000(const Object0181c000 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0181c010 reads.
 *
 */
struct Object0181c010 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0181c010; meaning unknown. */
};
static_assert(offsetof(Object0181c010, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0181c010(const Object0181c010 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0181c060()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0181c2e0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0181c2e0()
{
    return value_0181c2e0;
}

/**
 *
 * The part of the object that auto_return_field_0181d0f0 reads.
 *
 */
struct Object0181d0f0 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0181d0f0; meaning unknown. */
};
static_assert(offsetof(Object0181d0f0, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0181d0f0(const Object0181d0f0 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0181d100 reads.
 *
 */
struct Object0181d100 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0181d100; meaning unknown. */
};
static_assert(offsetof(Object0181d100, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0181d100(const Object0181d100 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0181d150()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0181d3d0 = 0xc8;

extern "C" uint32_t bb_auto_return_constant_0181d3d0()
{
    return value_0181d3d0;
}

/**
 *
 * The part of the object that auto_return_field_0181e340 reads.
 *
 */
struct Object0181e340 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0181e340; meaning unknown. */
};
static_assert(offsetof(Object0181e340, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0181e340(const Object0181e340 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0181e350 reads.
 *
 */
struct Object0181e350 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0181e350; meaning unknown. */
};
static_assert(offsetof(Object0181e350, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0181e350(const Object0181e350 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0181e3a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0181e620 = 0x98;

extern "C" uint32_t bb_auto_return_constant_0181e620()
{
    return value_0181e620;
}

/**
 *
 * The part of the object that auto_return_field_0181f640 reads.
 *
 */
struct Object0181f640 {
    uint8_t unknown_0x0000[0x40];
    uint64_t value_0x0040; /**< Read by auto_return_field_0181f640; meaning unknown. */
};
static_assert(offsetof(Object0181f640, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0181f640(const Object0181f640 *self)
{
    return self->value_0x0040;
}

/**
 *
 * The part of the object that auto_return_field_0181f650 reads.
 *
 */
struct Object0181f650 {
    uint8_t unknown_0x0000[0x48];
    uint64_t value_0x0048; /**< Read by auto_return_field_0181f650; meaning unknown. */
};
static_assert(offsetof(Object0181f650, value_0x0048) == 0x48);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint64_t bb_auto_return_field_0181f650(const Object0181f650 *self)
{
    return self->value_0x0048;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_0181f6a0()
{
    return 0;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint32_t value_0181f920 = 0x98;

extern "C" uint32_t bb_auto_return_constant_0181f920()
{
    return value_0181f920;
}
