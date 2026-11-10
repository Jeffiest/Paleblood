// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as engine_initialize_static_wide_string_018867e0, in game/engine/static_wide_string_init_018867e0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../engine/static_wide_string.h"
#include "../engine/engine.h"

// auto_initialize_static_wide_string_01e44680: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e44680 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e44680()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e44680

// auto_initialize_static_wide_string_01e461a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e461a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e461a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e461a0

// auto_initialize_static_wide_string_01e47430: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e47430 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e47430()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e47430

// auto_initialize_static_wide_string_01e48780: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e48780 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e48780()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e48780

// auto_initialize_static_wide_string_01e52de0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e52de0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e52de0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e52de0

// auto_initialize_static_wide_string_01e584d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e584d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e584d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e584d0

// auto_initialize_static_wide_string_01e596e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e596e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e596e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e596e0

// auto_initialize_static_wide_string_01e5a3d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e5a3d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e5a3d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e5a3d0

// auto_initialize_static_wide_string_01e5be50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e5be50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e5be50()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e5be50

// auto_initialize_static_wide_string_01e5cb40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e5cb40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e5cb40()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e5cb40

// auto_initialize_static_wide_string_01e5dd00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e5dd00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e5dd00()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e5dd00

// auto_initialize_static_wide_string_01e5e7c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e5e7c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e5e7c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e5e7c0

// auto_initialize_static_wide_string_01e5f2d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e5f2d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e5f2d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e5f2d0

// auto_initialize_static_wide_string_01e619e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e619e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e619e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e619e0

// auto_initialize_static_wide_string_01e62880: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e62880 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e62880()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e62880

// auto_initialize_static_wide_string_01e63690: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e63690 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e63690()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e63690

// auto_initialize_static_wide_string_01e64260: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e64260 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e64260()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e64260

// auto_initialize_static_wide_string_01e658d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e658d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e658d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e658d0

// auto_initialize_static_wide_string_01e66350: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e66350 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e66350()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e66350

// auto_initialize_static_wide_string_01e664f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e664f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e664f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e664f0

// auto_initialize_static_wide_string_01e66c00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e66c00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e66c00()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e66c00

// auto_initialize_static_wide_string_01e674f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e674f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e674f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e674f0

// auto_initialize_static_wide_string_01e68960: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e68960 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e68960()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e68960

// auto_initialize_static_wide_string_01e6c2d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e6c2d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e6c2d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e6c2d0

// auto_initialize_static_wide_string_01e6c950: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e6c950 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e6c950()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e6c950

// auto_initialize_static_wide_string_01e6cfb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e6cfb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e6cfb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e6cfb0

// auto_initialize_static_wide_string_01e6f8b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e6f8b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e6f8b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e6f8b0

// auto_initialize_static_wide_string_01e737a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e737a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e737a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e737a0

// auto_initialize_static_wide_string_01e74e30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e74e30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e74e30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e74e30

// auto_initialize_static_wide_string_01e77270: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e77270 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e77270()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e77270

// auto_initialize_static_wide_string_01e78e50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e78e50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e78e50()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e78e50

// auto_initialize_static_wide_string_01e79030: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e79030 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e79030()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e79030

// auto_initialize_static_wide_string_01e79350: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e79350 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e79350()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e79350

// auto_initialize_static_wide_string_01e79cc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e79cc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e79cc0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e79cc0

// auto_initialize_static_wide_string_01e7ec60: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e7ec60 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e7ec60()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e7ec60

// auto_initialize_static_wide_string_01e80e10: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e80e10 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e80e10()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e80e10

// auto_initialize_static_wide_string_01e80fb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e80fb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e80fb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e80fb0

// auto_initialize_static_wide_string_01e82be0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e82be0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e82be0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e82be0

// auto_initialize_static_wide_string_01e841c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e841c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e841c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e841c0

// auto_initialize_static_wide_string_01e84de0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e84de0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e84de0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e84de0

// auto_initialize_static_wide_string_01e851d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e851d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e851d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e851d0

// auto_initialize_static_wide_string_01e85390: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e85390 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e85390()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e85390

// auto_initialize_static_wide_string_01e85560: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e85560 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e85560()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e85560

// auto_initialize_static_wide_string_01e85860: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e85860 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e85860()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e85860

// auto_initialize_static_wide_string_01e86000: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e86000 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e86000()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e86000

// auto_initialize_static_wide_string_01e86780: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e86780 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e86780()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e86780

// auto_initialize_static_wide_string_01e88f40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e88f40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e88f40()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e88f40

// auto_initialize_static_wide_string_01e89db0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e89db0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e89db0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e89db0

// auto_initialize_static_wide_string_01e89f50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e89f50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e89f50()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e89f50

// auto_initialize_static_wide_string_01e8a290: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e8a290 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e8a290()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e8a290

// auto_initialize_static_wide_string_01e8ace0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e8ace0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e8ace0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e8ace0

// auto_initialize_static_wide_string_01e8b9d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e8b9d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e8b9d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e8b9d0

// auto_initialize_static_wide_string_01e8c1f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e8c1f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e8c1f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e8c1f0

// auto_initialize_static_wide_string_01e8c390: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e8c390 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e8c390()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e8c390

// auto_initialize_static_wide_string_01e8d090: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e8d090 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e8d090()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e8d090

// auto_initialize_static_wide_string_01e8e290: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e8e290 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e8e290()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e8e290

// auto_initialize_static_wide_string_01e8ea80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e8ea80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e8ea80()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e8ea80

// auto_initialize_static_wide_string_01e8f1a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e8f1a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e8f1a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e8f1a0

// auto_initialize_static_wide_string_01e90380: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e90380 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e90380()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e90380

// auto_initialize_static_wide_string_01e90990: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e90990 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e90990()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e90990

// auto_initialize_static_wide_string_01e91640: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e91640 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e91640()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e91640

// auto_initialize_static_wide_string_01e91e00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e91e00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e91e00()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e91e00

// auto_initialize_static_wide_string_01e92fa0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e92fa0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e92fa0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e92fa0

// auto_initialize_static_wide_string_01e93370: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e93370 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e93370()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e93370

// auto_initialize_static_wide_string_01e935a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e935a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e935a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e935a0

// auto_initialize_static_wide_string_01e937b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e937b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e937b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e937b0

// auto_initialize_static_wide_string_01e93eb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e93eb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e93eb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e93eb0

// auto_initialize_static_wide_string_01e94880: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e94880 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e94880()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e94880

// auto_initialize_static_wide_string_01e94f80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e94f80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e94f80()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e94f80

// auto_initialize_static_wide_string_01e99340: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e99340 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e99340()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e99340

// auto_initialize_static_wide_string_01e99e70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e99e70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e99e70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e99e70

// auto_initialize_static_wide_string_01e9a630: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e9a630 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e9a630()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e9a630

// auto_initialize_static_wide_string_01e9d810: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01e9d810 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01e9d810()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01e9d810

// auto_initialize_static_wide_string_01ea0840: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ea0840 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ea0840()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ea0840

// auto_initialize_static_wide_string_01ea2750: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ea2750 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ea2750()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ea2750

// auto_initialize_static_wide_string_01eaa7f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01eaa7f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01eaa7f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01eaa7f0

// auto_initialize_static_wide_string_01eaed20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01eaed20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01eaed20()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01eaed20

// auto_initialize_static_wide_string_01eb02e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01eb02e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01eb02e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01eb02e0

// auto_initialize_static_wide_string_01eb1720: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01eb1720 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01eb1720()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01eb1720

// auto_initialize_static_wide_string_01eb3cc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01eb3cc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01eb3cc0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01eb3cc0

// auto_initialize_static_wide_string_01ebf440: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ebf440 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ebf440()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ebf440

// auto_initialize_static_wide_string_01ec4410: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ec4410 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ec4410()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ec4410

// auto_initialize_static_wide_string_01ec4ac0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ec4ac0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ec4ac0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ec4ac0

// auto_initialize_static_wide_string_01ec5230: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ec5230 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ec5230()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ec5230

// auto_initialize_static_wide_string_01ec6380: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ec6380 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ec6380()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ec6380

// auto_initialize_static_wide_string_01ec66c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ec66c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ec66c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ec66c0

// auto_initialize_static_wide_string_01ec68a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ec68a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ec68a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ec68a0

// auto_initialize_static_wide_string_01ec6ed0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ec6ed0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ec6ed0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ec6ed0

// auto_initialize_static_wide_string_01ec7110: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ec7110 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ec7110()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ec7110

// auto_initialize_static_wide_string_01ec7a50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ec7a50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ec7a50()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ec7a50

// auto_initialize_static_wide_string_01ecb310: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ecb310 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ecb310()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ecb310

// auto_initialize_static_wide_string_01ecb630: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ecb630 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ecb630()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ecb630

// auto_initialize_static_wide_string_01ecd2a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ecd2a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ecd2a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ecd2a0

// auto_initialize_static_wide_string_01ecdd40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ecdd40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ecdd40()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ecdd40

// auto_initialize_static_wide_string_01ece2e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ece2e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ece2e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ece2e0

// auto_initialize_static_wide_string_01ece530: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ece530 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ece530()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ece530

// auto_initialize_static_wide_string_01ed1b90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ed1b90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ed1b90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ed1b90

// auto_initialize_static_wide_string_01ed2a40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ed2a40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ed2a40()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ed2a40

// auto_initialize_static_wide_string_01ed3c00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ed3c00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ed3c00()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ed3c00

// auto_initialize_static_wide_string_01ed72f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ed72f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ed72f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ed72f0

// auto_initialize_static_wide_string_01ed8b10: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ed8b10 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ed8b10()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ed8b10

// auto_initialize_static_wide_string_01ed8fc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ed8fc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ed8fc0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ed8fc0

// auto_initialize_static_wide_string_01ed9900: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ed9900 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ed9900()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ed9900

// auto_initialize_static_wide_string_01ed9cc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ed9cc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ed9cc0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ed9cc0

// auto_initialize_static_wide_string_01edaa40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01edaa40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01edaa40()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01edaa40

// auto_initialize_static_wide_string_01edad10: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01edad10 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01edad10()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01edad10

// auto_initialize_static_wide_string_01edbb70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01edbb70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01edbb70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01edbb70

// auto_initialize_static_wide_string_01edc7c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01edc7c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01edc7c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01edc7c0

// auto_initialize_static_wide_string_01edcd80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01edcd80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01edcd80()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01edcd80

// auto_initialize_static_wide_string_01edd4e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01edd4e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01edd4e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01edd4e0

// auto_initialize_static_wide_string_01edd8a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01edd8a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01edd8a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01edd8a0

// auto_initialize_static_wide_string_01eddc80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01eddc80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01eddc80()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01eddc80

// auto_initialize_static_wide_string_01edf450: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01edf450 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01edf450()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01edf450

// auto_initialize_static_wide_string_01edf7d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01edf7d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01edf7d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01edf7d0

// auto_initialize_static_wide_string_01edfa00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01edfa00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01edfa00()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01edfa00

// auto_initialize_static_wide_string_01edfbd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01edfbd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01edfbd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01edfbd0

// auto_initialize_static_wide_string_01ee3900: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ee3900 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ee3900()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ee3900

// auto_initialize_static_wide_string_01ee7100: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ee7100 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ee7100()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ee7100

// auto_initialize_static_wide_string_01ee9750: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ee9750 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ee9750()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ee9750

// auto_initialize_static_wide_string_01ee9960: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ee9960 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ee9960()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ee9960

// auto_initialize_static_wide_string_01ee9cb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ee9cb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ee9cb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ee9cb0

// auto_initialize_static_wide_string_01eebe30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01eebe30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01eebe30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01eebe30

// auto_initialize_static_wide_string_01ef4fd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ef4fd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ef4fd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ef4fd0

// auto_initialize_static_wide_string_01f02630: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f02630 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f02630()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f02630

// auto_initialize_static_wide_string_01f08160: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f08160 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f08160()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f08160

// auto_initialize_static_wide_string_01f0f0c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f0f0c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f0f0c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f0f0c0

// auto_initialize_static_wide_string_01f120f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f120f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f120f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f120f0

// auto_initialize_static_wide_string_01f16190: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f16190 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f16190()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f16190

// auto_initialize_static_wide_string_01f17fe0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f17fe0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f17fe0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f17fe0

// auto_initialize_static_wide_string_01f1b130: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f1b130 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f1b130()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f1b130

// auto_initialize_static_wide_string_01f1de30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f1de30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f1de30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f1de30

// auto_initialize_static_wide_string_01f23fa0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f23fa0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f23fa0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f23fa0

// auto_initialize_static_wide_string_01f2efe0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f2efe0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f2efe0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f2efe0

// auto_initialize_static_wide_string_01f32eb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f32eb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f32eb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f32eb0

// auto_initialize_static_wide_string_01f37a80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f37a80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f37a80()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f37a80

// auto_initialize_static_wide_string_01f3c260: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f3c260 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f3c260()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f3c260

// auto_initialize_static_wide_string_01f4fcf0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f4fcf0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f4fcf0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f4fcf0

// auto_initialize_static_wide_string_01f557d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f557d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f557d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f557d0

// auto_initialize_static_wide_string_01f57c30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f57c30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f57c30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f57c30

// auto_initialize_static_wide_string_01f57f30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f57f30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f57f30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f57f30

// auto_initialize_static_wide_string_01f5a460: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f5a460 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f5a460()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f5a460

// auto_initialize_static_wide_string_01f5a990: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f5a990 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f5a990()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f5a990

// auto_initialize_static_wide_string_01f5abd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f5abd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f5abd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f5abd0

// auto_initialize_static_wide_string_01f5b830: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f5b830 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f5b830()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f5b830

// auto_initialize_static_wide_string_01f5c710: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f5c710 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f5c710()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f5c710

// auto_initialize_static_wide_string_01f5fd70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f5fd70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f5fd70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f5fd70

// auto_initialize_static_wide_string_01f648a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f648a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f648a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f648a0

// auto_initialize_static_wide_string_01f65560: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f65560 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f65560()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f65560

// auto_initialize_static_wide_string_01f6a750: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f6a750 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f6a750()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f6a750

// auto_initialize_static_wide_string_01f84070: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f84070 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f84070()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f84070

// auto_initialize_static_wide_string_01f9f200: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01f9f200 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01f9f200()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01f9f200

// auto_initialize_static_wide_string_01fac580: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01fac580 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01fac580()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01fac580

// auto_initialize_static_wide_string_01fb3260: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01fb3260 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01fb3260()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01fb3260

// auto_initialize_static_wide_string_01fc2de0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01fc2de0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01fc2de0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01fc2de0

// auto_initialize_static_wide_string_01fe04a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01fe04a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01fe04a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01fe04a0

// auto_initialize_static_wide_string_01fe3800: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01fe3800 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01fe3800()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01fe3800

// auto_initialize_static_wide_string_01fe5db0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01fe5db0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01fe5db0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01fe5db0

// auto_initialize_static_wide_string_01feb700: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01feb700 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01feb700()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01feb700

// auto_initialize_static_wide_string_01fed770: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01fed770 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01fed770()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01fed770

// auto_initialize_static_wide_string_01feeb20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01feeb20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01feeb20()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01feeb20

// auto_initialize_static_wide_string_01fef6a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01fef6a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01fef6a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01fef6a0

// auto_initialize_static_wide_string_01ff0030: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ff0030 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ff0030()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ff0030

// auto_initialize_static_wide_string_01ff07f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ff07f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ff07f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ff07f0

// auto_initialize_static_wide_string_01ff0990: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01ff0990 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01ff0990()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01ff0990

// auto_initialize_static_wide_string_020001e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_020001e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_020001e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_020001e0

// auto_initialize_static_wide_string_0200cc70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0200cc70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0200cc70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0200cc70

// auto_initialize_static_wide_string_020194f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_020194f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_020194f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_020194f0

// auto_initialize_static_wide_string_02019b90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02019b90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02019b90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02019b90

// auto_initialize_static_wide_string_0201af70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0201af70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0201af70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0201af70

// auto_initialize_static_wide_string_0201b720: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0201b720 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0201b720()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0201b720

// auto_initialize_static_wide_string_0201bac0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0201bac0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0201bac0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0201bac0

// auto_initialize_static_wide_string_0201c330: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0201c330 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0201c330()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0201c330

// auto_initialize_static_wide_string_0201e030: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0201e030 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0201e030()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0201e030

// auto_initialize_static_wide_string_020239c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_020239c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_020239c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_020239c0

// auto_initialize_static_wide_string_0202d130: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0202d130 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0202d130()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0202d130

// auto_initialize_static_wide_string_02033ba0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02033ba0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02033ba0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02033ba0

// auto_initialize_static_wide_string_0203d170: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0203d170 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0203d170()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0203d170

// auto_initialize_static_wide_string_0204a3f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0204a3f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0204a3f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0204a3f0

// auto_initialize_static_wide_string_0204c2a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0204c2a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0204c2a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0204c2a0

// auto_initialize_static_wide_string_0204e4c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0204e4c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0204e4c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0204e4c0

// auto_initialize_static_wide_string_02053770: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02053770 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02053770()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02053770

// auto_initialize_static_wide_string_02055d90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02055d90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02055d90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02055d90

// auto_initialize_static_wide_string_020563d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_020563d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_020563d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_020563d0

// auto_initialize_static_wide_string_02056700: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02056700 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02056700()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02056700

// auto_initialize_static_wide_string_02056d20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02056d20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02056d20()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02056d20

// auto_initialize_static_wide_string_02057140: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02057140 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02057140()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02057140

// auto_initialize_static_wide_string_020575c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_020575c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_020575c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_020575c0

// auto_initialize_static_wide_string_02058490: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02058490 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02058490()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02058490

// auto_initialize_static_wide_string_0205ab00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0205ab00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0205ab00()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0205ab00

// auto_initialize_static_wide_string_02061f70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02061f70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02061f70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02061f70

// auto_initialize_static_wide_string_02068110: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02068110 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02068110()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02068110

// auto_initialize_static_wide_string_0206a9b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0206a9b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0206a9b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0206a9b0

// auto_initialize_static_wide_string_0206ee90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0206ee90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0206ee90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0206ee90

// auto_initialize_static_wide_string_02076d30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02076d30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02076d30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02076d30

// auto_initialize_static_wide_string_02088a60: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02088a60 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02088a60()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02088a60

// auto_initialize_static_wide_string_020899f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_020899f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_020899f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_020899f0

// auto_initialize_static_wide_string_0208ad70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0208ad70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0208ad70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0208ad70

// auto_initialize_static_wide_string_0208b1d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0208b1d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0208b1d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0208b1d0

// auto_initialize_static_wide_string_02090ac0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02090ac0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02090ac0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02090ac0

// auto_initialize_static_wide_string_02093610: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02093610 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02093610()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02093610
