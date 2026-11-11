// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc37a0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc37c0 reads.
 *
 */
struct Object01fc37c0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc37c0; meaning unknown. */
};
static_assert(offsetof(Object01fc37c0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc37c0(Object01fc37c0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc39c0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc39e0 reads.
 *
 */
struct Object01fc39e0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc39e0; meaning unknown. */
};
static_assert(offsetof(Object01fc39e0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc39e0(Object01fc39e0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc3d70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc4920()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc4e20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc5c80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc5e60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc5f80()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fc5fa0 reads.
 *
 */
struct Object01fc5fa0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fc5fa0; meaning unknown. */
};
static_assert(offsetof(Object01fc5fa0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc5fa0(Object01fc5fa0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * The part of the object that auto_return_member_address_01fc6230 reads.
 *
 */
struct Object01fc6230 {
    uint8_t unknown_0x0000[0xdf8];
    uint8_t member_0x0df8; /**< Read by auto_return_member_address_01fc6230; meaning unknown. */
};
static_assert(offsetof(Object01fc6230, member_0x0df8) == 0xdf8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fc6230(Object01fc6230 *self)
{
    return &self->member_0x0df8;
}

/**
 *
 * Returns a fixed value whose meaning is unknown.
 *
 */
constexpr uint8_t value_01fc6240 = 0x1;

extern "C" uint8_t bb_auto_return_constant_01fc6240()
{
    return value_01fc6240;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc6810()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc6910()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc6a20()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc6b30()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc6c40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc6fa0()
{
}

/**
 *
 * The part of the object that auto_return_field_01fc7050 reads.
 *
 */
struct Object01fc7050 {
    uint8_t unknown_0x0000[0x8];
    uint8_t value_0x0008; /**< Read by auto_return_field_01fc7050; meaning unknown. */
};
static_assert(offsetof(Object01fc7050, value_0x0008) == 0x8);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint8_t bb_auto_return_field_01fc7050(const Object01fc7050 *self)
{
    return self->value_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc70a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc8990()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc9470()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc95f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc97d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fc9c40()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fca230()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fca3f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fca980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcaaf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcade0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcaf50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb0f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb200()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb3a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb4b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb620()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb790()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcb900()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcba70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcbbe0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcbcf0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcbe60()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcbf70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc0e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc1f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc310()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc430()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc5f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc6f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcc9d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fccae0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fccf70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcd080()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcd2d0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcd3e0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcd4f0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcd6a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcd850()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcdbd0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fcdbf0 reads.
 *
 */
struct Object01fcdbf0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fcdbf0; meaning unknown. */
};
static_assert(offsetof(Object01fcdbf0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fcdbf0(Object01fcdbf0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcdf70()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fce070()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fce590()
{
}

/**
 *
 * The part of the object that auto_return_member_address_01fce5b0 reads.
 *
 */
struct Object01fce5b0 {
    uint8_t unknown_0x0000[0x8];
    uint8_t member_0x0008; /**< Read by auto_return_member_address_01fce5b0; meaning unknown. */
};
static_assert(offsetof(Object01fce5b0, member_0x0008) == 0x8);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_01fce5b0(Object01fce5b0 *self)
{
    return &self->member_0x0008;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fce840()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fced10()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcf1c0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcf390()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcf4a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcf650()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcf800()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcf980()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcfb00()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcfc80()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_01fcfe30()
{
}
