// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as input_mouse_construct, in game/input/mouse_construct.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../engine/engine.h"
#include "../input/input.h"

// auto_mouse_construct_02a8c160: input_mouse_construct with other addresses.
namespace twin_02a8c160 {

// Input: constructs a mouse input object (auto_mouse_construct_02a8c160, 0x02a8c160).
//
// Called by the input setup at 0x02558dd0 and 0x02558f60 on a fresh 0x178-byte allocation, with
// the owner pointer those functions hold at +0x20. The object's base part is built first, then
// its vtable is set, its state is cleared, and libSceMouse is loaded and initialized. The
// object's virtual method at +0x100 runs last; if any step fails, the handle slot is cleared.

namespace {

/**
 * The system module id of libSceMouse.
 *
 * The module must be loaded before the mouse library is initialized.
 */
constexpr uint32_t mouse_module_id = 0xa9;

}  // namespace

/**
 * Constructs a mouse input object.
 *
 * The second argument is the register the caller fills with a value the constructor never reads.
 * The qword at 0x168 is cleared as one, and its low dword is cleared again on failure.
 */
extern "C" void bb_auto_mouse_construct_02a8c160(input::MouseInput *self, [[maybe_unused]] uint64_t unused_second_argument, void *owner)
{
    input::mouse_base_construct(self, owner);
    self->vtable = input::mouse_vtable.address() + engine::vtable_address_point;
    for (uint64_t &slot : self->unknown_0x0140) slot = 0;
    self->handle_0x0168 = 0;
    self->unknown_0x016c = 0;
    self->unknown_0x0170 = 0;

    const bool set_up = input::sysmodule_load_module(mouse_module_id) == 0 && input::mouse_init() == 0 &&
                        static_cast<const input::MouseVtable *>(self->vtable)->method_0x100(self) != 0;
    if (!set_up) self->handle_0x0168 = 0;
}

}  // namespace twin_02a8c160
