// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: look up an object from a source, make two child objects of it, and register their
// fields with the object. Nothing is done when the source is null.
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

struct Object;

/** The object's virtual function at slot 0x78, called with the object and a flag. */
struct ObjectVtable {
    uint8_t unknown_0x0000[0x78];
    void (*update_0x78)(Object *object, void *child, uint32_t flag);
};
static_assert(offsetof(ObjectVtable, update_0x78) == 0x78);

struct Object {
    const ObjectVtable *vtable;
};

/** The holder's fields, which are only passed on by address. */
struct AttachHolder {
    static constexpr auto word_bytes = 8;
    static constexpr auto half_bytes = 4;
    static constexpr auto span_bytes = 0x1c;
    uint8_t unknown_0x0000[word_bytes];
    uint8_t word_field[half_bytes];
    uint8_t span_field[span_bytes];
    uint8_t tail_field[half_bytes];
    uint8_t last_field[half_bytes];
};
static_assert(offsetof(AttachHolder, word_field) == AttachHolder::word_bytes);
static_assert(offsetof(AttachHolder, span_field) == AttachHolder::word_bytes + AttachHolder::half_bytes);
static_assert(offsetof(AttachHolder, tail_field) == AttachHolder::word_bytes + AttachHolder::half_bytes + AttachHolder::span_bytes);

/** The size and alignment of each child object. */
constexpr uint32_t child_size = 0x50;
constexpr uint32_t child_alignment = 8;
/** The flag passed to each object update. */
constexpr uint32_t update_flag = 1;

RT_GLOBAL(0x04cb8c10, lookup_name, uint8_t);
RT_GLOBAL(0x04cb8c40, first_init_name, uint8_t);
RT_GLOBAL(0x04cb8c4e, second_init_name, uint8_t);
RT_GLOBAL(0x04cb8c5c, field_name, uint8_t);
RT_GLOBAL(0x04cb8c7c, second_field_name, uint8_t);

RT_ORIGINAL(0x0140a410, find_object, Object *(void *source, const void *name));
RT_ORIGINAL(0x0140ce80, allocation_context, uint64_t());
RT_ORIGINAL(0x0247c4e0, allocate_child, void *(uint32_t size, uint32_t alignment, uint64_t context));
RT_ORIGINAL(0x01401c90, initialize_child, void(void *child, const void *name));
RT_ORIGINAL(0x02d85350, register_field, void(Object *object, const void *name, void *field));

/** Allocates a child, initializes it with the name when the allocation succeeded, and returns it. */
void *make_child(const void *init_name)
{
    void *child = allocate_child(child_size, child_alignment, allocation_context());
    if (child != nullptr) initialize_child(child, init_name);
    return child;
}

}  // namespace

/**
 *
 * Attaches two children to the object found from the source, then registers the holder's fields.
 *
 * The first child is made and the first field pair registered, then the second child with the
 * second pair, as the original does. The last registration is the function's tail call.
 */
extern "C" void bb_misc_attach_two_objects(AttachHolder *holder, void *source)
{
    if (source == nullptr) return;
    Object *object = find_object(source, lookup_name.address());
    void *first_child = make_child(first_init_name.address());
    object->vtable->update_0x78(object, first_child, update_flag);
    register_field(object, field_name.address(), &holder->span_field);
    register_field(object, second_field_name.address(), &holder->word_field);
    void *second_child = make_child(second_init_name.address());
    object->vtable->update_0x78(object, second_child, update_flag);
    register_field(object, field_name.address(), &holder->last_field);
    register_field(object, second_field_name.address(), &holder->tail_field);
}
