// SPDX-License-Identifier: GPL-2.0-or-later
#include "field_copy_object.h"

/**
 *
 * Stores the field-copy vtable's address point and the default values of a field-copy object.
 *
 * The object has no source and its copied fields are left as they are. Nothing is returned.
 */
extern "C" void bb_misc_init_field_defaults(misc::FieldCopyObject *self)
{
    self->count_word_0x08 = misc::field_copy_default_count_word;
    self->vtable = misc::field_copy_vtable.address() + engine::vtable_address_point;
    self->zero_0x40 = 0;
    self->pointer_0x38 = 0;
    self->source_0x30 = nullptr;
    self->limit_high_0x44 = misc::field_copy_limit_high_bit;
    self->pointer_0x48 = 0;
    self->zero_0x50 = 0;
    self->limit_high_0x54 = misc::field_copy_limit_high_bit;
    self->pointer_0x58 = 0;
    self->zero_0x60 = 0;
    self->limit_high_0x64 = misc::field_copy_limit_high_bit;
    self->ones_0x68 = misc::field_copy_all_ones;
    self->ones_0x6c = misc::field_copy_all_ones;
    self->one_0x70 = 1;
    self->zero_0x80 = 0;
    self->zero_0x88 = 0;
}
