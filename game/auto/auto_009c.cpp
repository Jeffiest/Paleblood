// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c08f0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_009c3240 reads.
 *
 */
struct Object009c3240 {
    uint8_t unknown_0x0000[0x30];
    uint8_t member_0x0030; /**< Read by auto_return_member_address_009c3240; meaning unknown. */
};
static_assert(offsetof(Object009c3240, member_0x0030) == 0x30);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_009c3240(Object009c3240 *self)
{
    return &self->member_0x0030;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c3250()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c3570()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c3580()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c3590()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c35a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c35b0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c6110()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c6120()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c6220()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009c6230()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c6240()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c6260()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c6270()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c6280()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009c6290()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009c62a0()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009c62b0()
{
    return 0;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c6590()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c66a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c66c0()
{
}

/**
 *
 * The part of the object that auto_return_field_009c73b0 reads.
 *
 */
struct Object009c73b0 {
    uint8_t unknown_0x0000[0x18];
    uint32_t value_0x0018; /**< Read by auto_return_field_009c73b0; meaning unknown. */
};
static_assert(offsetof(Object009c73b0, value_0x0018) == 0x18);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_009c73b0(const Object009c73b0 *self)
{
    return self->value_0x0018;
}

/**
 *
 * The part of the object that auto_return_member_address_009c8c00 reads.
 *
 */
struct Object009c8c00 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_009c8c00; meaning unknown. */
};
static_assert(offsetof(Object009c8c00, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_009c8c00(Object009c8c00 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c8c50()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009c8ca0()
{
}

/**
 *
 * The part of the object that auto_return_field_009c9a00 reads.
 *
 */
struct Object009c9a00 {
    uint8_t unknown_0x0000[0x60];
    uint32_t value_0x0060; /**< Read by auto_return_field_009c9a00; meaning unknown. */
};
static_assert(offsetof(Object009c9a00, value_0x0060) == 0x60);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_009c9a00(const Object009c9a00 *self)
{
    return self->value_0x0060;
}

/**
 *
 * The part of the object that auto_return_field_009c9a10 reads.
 *
 */
struct Object009c9a10 {
    uint8_t unknown_0x0000[0x40];
    uint32_t value_0x0040; /**< Read by auto_return_field_009c9a10; meaning unknown. */
};
static_assert(offsetof(Object009c9a10, value_0x0040) == 0x40);

/**
 *
 * Returns a field of its object.
 *
 */
extern "C" uint32_t bb_auto_return_field_009c9a10(const Object009c9a10 *self)
{
    return self->value_0x0040;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009c9a20()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009c9a30()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009c9a80()
{
    return 0;
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009c9a90()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_009c9d30 reads.
 *
 */
struct Object009c9d30 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_009c9d30; meaning unknown. */
};
static_assert(offsetof(Object009c9d30, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_009c9d30(Object009c9d30 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * The part of the object that auto_return_member_address_009cb350 reads.
 *
 */
struct Object009cb350 {
    uint8_t unknown_0x0000[0x58];
    uint8_t member_0x0058; /**< Read by auto_return_member_address_009cb350; meaning unknown. */
};
static_assert(offsetof(Object009cb350, member_0x0058) == 0x58);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_009cb350(Object009cb350 *self)
{
    return &self->member_0x0058;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009cc270()
{
}

/**
 *
 * Returns zero.
 *
 */
extern "C" uint64_t bb_auto_return_zero_009cc280()
{
    return 0;
}

/**
 *
 * The part of the object that auto_return_member_address_009cd520 reads.
 *
 */
struct Object009cd520 {
    uint8_t unknown_0x0000[0x20];
    uint8_t member_0x0020; /**< Read by auto_return_member_address_009cd520; meaning unknown. */
};
static_assert(offsetof(Object009cd520, member_0x0020) == 0x20);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_009cd520(Object009cd520 *self)
{
    return &self->member_0x0020;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009cd5a0()
{
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009cdfb0()
{
}

/**
 *
 * The part of the object that auto_return_member_address_009ce9e0 reads.
 *
 */
struct Object009ce9e0 {
    uint8_t unknown_0x0000[0x18];
    uint8_t member_0x0018; /**< Read by auto_return_member_address_009ce9e0; meaning unknown. */
};
static_assert(offsetof(Object009ce9e0, member_0x0018) == 0x18);

/**
 *
 * Returns the address of a member of its object.
 *
 */
extern "C" void *bb_auto_return_member_address_009ce9e0(Object009ce9e0 *self)
{
    return &self->member_0x0018;
}

/**
 *
 * Does nothing.
 *
 */
extern "C" void bb_auto_empty_009cf4f0()
{
}
