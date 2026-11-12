// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

namespace {

/** The value stored in the field: minus one, all 32 bits set. */
constexpr int32_t unset_value = -1;

/** An object as far as this function touches it: a 32-bit field at 0x54. */
struct FieldMinusOneObject {
    uint8_t unknown_0x0000[0x54];
    int32_t field_0x54;
};
static_assert(offsetof(FieldMinusOneObject, field_0x54) == 0x54);

}  // namespace

/**
 *
 * Sets the 32-bit field at offset 0x54 of the object to minus one and returns nothing.
 *
 * The object is written in place; the original leaves RAX alone, so the replacement returns nothing.
 */
extern "C" void bb_misc_set_field_minus_one(FieldMinusOneObject *object)
{
    object->field_0x54 = unset_value;
}
