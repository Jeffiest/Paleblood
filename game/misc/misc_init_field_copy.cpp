// SPDX-License-Identifier: GPL-2.0-or-later
#include "field_copy_object.h"

/**
 *
 * Stores the field-copy vtable's address point in an object and, when asked to, copies the four fields
 * of its source object into it.
 *
 * Nothing is copied when the flag is zero or the object has no source. Only the flag's low 32 bits are read.
 */
extern "C" void bb_misc_init_field_copy(misc::FieldCopyObject *self, int32_t copy_fields)
{
    self->vtable = misc::field_copy_vtable.address() + engine::vtable_address_point;
    if (copy_fields == 0) return;

    const misc::FieldCopyObject *source = self->source_0x30;
    if (source == nullptr) return;

    self->word_0x10 = source->word_0x10;
    self->dword_0x18 = source->dword_0x18;
    self->word_0x20 = source->word_0x20;
    self->dword_0x28 = source->dword_0x28;
}
