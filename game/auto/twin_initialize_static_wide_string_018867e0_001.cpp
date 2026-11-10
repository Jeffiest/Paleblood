// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as engine_initialize_static_wide_string_018867e0, in game/engine/static_wide_string_init_018867e0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../engine/static_wide_string.h"
#include "../engine/engine.h"

// auto_initialize_static_wide_string_01391390: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01391390 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01391390()
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

}  // namespace twin_01391390

// auto_initialize_static_wide_string_01395810: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01395810 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01395810()
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

}  // namespace twin_01395810

// auto_initialize_static_wide_string_013a6410: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_013a6410 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_013a6410()
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

}  // namespace twin_013a6410

// auto_initialize_static_wide_string_013bfef0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_013bfef0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_013bfef0()
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

}  // namespace twin_013bfef0

// auto_initialize_static_wide_string_013c1930: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_013c1930 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_013c1930()
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

}  // namespace twin_013c1930

// auto_initialize_static_wide_string_013c3070: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_013c3070 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_013c3070()
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

}  // namespace twin_013c3070

// auto_initialize_static_wide_string_013c38c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_013c38c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_013c38c0()
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

}  // namespace twin_013c38c0

// auto_initialize_static_wide_string_013c5090: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_013c5090 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_013c5090()
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

}  // namespace twin_013c5090

// auto_initialize_static_wide_string_013c6ef0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_013c6ef0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_013c6ef0()
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

}  // namespace twin_013c6ef0

// auto_initialize_static_wide_string_013c73c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_013c73c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_013c73c0()
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

}  // namespace twin_013c73c0

// auto_initialize_static_wide_string_013c7af0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_013c7af0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_013c7af0()
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

}  // namespace twin_013c7af0

// auto_initialize_static_wide_string_013c7f70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_013c7f70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_013c7f70()
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

}  // namespace twin_013c7f70

// auto_initialize_static_wide_string_013cc4a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_013cc4a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_013cc4a0()
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

}  // namespace twin_013cc4a0

// auto_initialize_static_wide_string_013cd5e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_013cd5e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_013cd5e0()
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

}  // namespace twin_013cd5e0

// auto_initialize_static_wide_string_0161fe10: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0161fe10 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0161fe10()
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

}  // namespace twin_0161fe10

// auto_initialize_static_wide_string_01621e40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01621e40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01621e40()
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

}  // namespace twin_01621e40

// auto_initialize_static_wide_string_01624040: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01624040 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01624040()
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

}  // namespace twin_01624040

// auto_initialize_static_wide_string_01625420: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01625420 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01625420()
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

}  // namespace twin_01625420

// auto_initialize_static_wide_string_016260a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016260a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016260a0()
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

}  // namespace twin_016260a0

// auto_initialize_static_wide_string_016263c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016263c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016263c0()
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

}  // namespace twin_016263c0

// auto_initialize_static_wide_string_01626f80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01626f80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01626f80()
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

}  // namespace twin_01626f80

// auto_initialize_static_wide_string_01627cd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01627cd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01627cd0()
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

}  // namespace twin_01627cd0

// auto_initialize_static_wide_string_0162a230: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0162a230 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0162a230()
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

}  // namespace twin_0162a230

// auto_initialize_static_wide_string_0162c670: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0162c670 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0162c670()
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

}  // namespace twin_0162c670

// auto_initialize_static_wide_string_0162e940: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0162e940 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0162e940()
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

}  // namespace twin_0162e940

// auto_initialize_static_wide_string_0162fa80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0162fa80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0162fa80()
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

}  // namespace twin_0162fa80

// auto_initialize_static_wide_string_01631540: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01631540 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01631540()
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

}  // namespace twin_01631540

// auto_initialize_static_wide_string_016322d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016322d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016322d0()
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

}  // namespace twin_016322d0

// auto_initialize_static_wide_string_01632a00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01632a00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01632a00()
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

}  // namespace twin_01632a00

// auto_initialize_static_wide_string_01633340: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01633340 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01633340()
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

}  // namespace twin_01633340

// auto_initialize_static_wide_string_01633eb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01633eb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01633eb0()
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

}  // namespace twin_01633eb0

// auto_initialize_static_wide_string_01636de0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01636de0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01636de0()
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

}  // namespace twin_01636de0

// auto_initialize_static_wide_string_01637dd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01637dd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01637dd0()
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

}  // namespace twin_01637dd0

// auto_initialize_static_wide_string_0163c370: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0163c370 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0163c370()
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

}  // namespace twin_0163c370

// auto_initialize_static_wide_string_0163e710: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0163e710 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0163e710()
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

}  // namespace twin_0163e710

// auto_initialize_static_wide_string_0163f680: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0163f680 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0163f680()
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

}  // namespace twin_0163f680

// auto_initialize_static_wide_string_0163f9b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0163f9b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0163f9b0()
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

}  // namespace twin_0163f9b0

// auto_initialize_static_wide_string_0163fb80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0163fb80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0163fb80()
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

}  // namespace twin_0163fb80

// auto_initialize_static_wide_string_0163ff20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0163ff20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0163ff20()
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

}  // namespace twin_0163ff20

// auto_initialize_static_wide_string_016401b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016401b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016401b0()
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

}  // namespace twin_016401b0

// auto_initialize_static_wide_string_016407d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016407d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016407d0()
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

}  // namespace twin_016407d0

// auto_initialize_static_wide_string_01641fb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01641fb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01641fb0()
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

}  // namespace twin_01641fb0

// auto_initialize_static_wide_string_01643250: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01643250 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01643250()
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

}  // namespace twin_01643250

// auto_initialize_static_wide_string_01643660: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01643660 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01643660()
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

}  // namespace twin_01643660

// auto_initialize_static_wide_string_016439c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016439c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016439c0()
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

}  // namespace twin_016439c0

// auto_initialize_static_wide_string_01643f50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01643f50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01643f50()
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

}  // namespace twin_01643f50

// auto_initialize_static_wide_string_01644640: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01644640 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01644640()
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

}  // namespace twin_01644640

// auto_initialize_static_wide_string_01644980: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01644980 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01644980()
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

}  // namespace twin_01644980

// auto_initialize_static_wide_string_01645350: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01645350 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01645350()
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

}  // namespace twin_01645350

// auto_initialize_static_wide_string_01645b20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01645b20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01645b20()
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

}  // namespace twin_01645b20

// auto_initialize_static_wide_string_016480a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016480a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016480a0()
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

}  // namespace twin_016480a0

// auto_initialize_static_wide_string_016485d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016485d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016485d0()
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

}  // namespace twin_016485d0

// auto_initialize_static_wide_string_01648f30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01648f30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01648f30()
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

}  // namespace twin_01648f30

// auto_initialize_static_wide_string_01649710: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01649710 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01649710()
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

}  // namespace twin_01649710

// auto_initialize_static_wide_string_01649f30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01649f30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01649f30()
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

}  // namespace twin_01649f30

// auto_initialize_static_wide_string_0164a710: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0164a710 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0164a710()
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

}  // namespace twin_0164a710

// auto_initialize_static_wide_string_0164ab40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0164ab40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0164ab40()
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

}  // namespace twin_0164ab40

// auto_initialize_static_wide_string_0164ad80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0164ad80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0164ad80()
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

}  // namespace twin_0164ad80

// auto_initialize_static_wide_string_0164eea0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0164eea0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0164eea0()
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

}  // namespace twin_0164eea0

// auto_initialize_static_wide_string_016511c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016511c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016511c0()
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

}  // namespace twin_016511c0

// auto_initialize_static_wide_string_01652d00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01652d00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01652d00()
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

}  // namespace twin_01652d00

// auto_initialize_static_wide_string_01654790: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01654790 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01654790()
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

}  // namespace twin_01654790

// auto_initialize_static_wide_string_01655170: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01655170 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01655170()
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

}  // namespace twin_01655170

// auto_initialize_static_wide_string_0165d480: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0165d480 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0165d480()
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

}  // namespace twin_0165d480

// auto_initialize_static_wide_string_0167d0f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0167d0f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0167d0f0()
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

}  // namespace twin_0167d0f0

// auto_initialize_static_wide_string_0167fa70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0167fa70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0167fa70()
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

}  // namespace twin_0167fa70

// auto_initialize_static_wide_string_01699040: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01699040 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01699040()
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

}  // namespace twin_01699040

// auto_initialize_static_wide_string_0169a7c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0169a7c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0169a7c0()
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

}  // namespace twin_0169a7c0

// auto_initialize_static_wide_string_0169b180: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0169b180 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0169b180()
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

}  // namespace twin_0169b180

// auto_initialize_static_wide_string_0169b8d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0169b8d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0169b8d0()
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

}  // namespace twin_0169b8d0

// auto_initialize_static_wide_string_0169baf0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0169baf0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0169baf0()
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

}  // namespace twin_0169baf0

// auto_initialize_static_wide_string_0169bcd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0169bcd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0169bcd0()
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

}  // namespace twin_0169bcd0

// auto_initialize_static_wide_string_0169bf20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0169bf20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0169bf20()
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

}  // namespace twin_0169bf20

// auto_initialize_static_wide_string_0169c0f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0169c0f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0169c0f0()
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

}  // namespace twin_0169c0f0

// auto_initialize_static_wide_string_0169cda0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0169cda0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0169cda0()
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

}  // namespace twin_0169cda0

// auto_initialize_static_wide_string_0169ddc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0169ddc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0169ddc0()
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

}  // namespace twin_0169ddc0

// auto_initialize_static_wide_string_0169e9f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0169e9f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0169e9f0()
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

}  // namespace twin_0169e9f0

// auto_initialize_static_wide_string_016a0890: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016a0890 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016a0890()
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

}  // namespace twin_016a0890

// auto_initialize_static_wide_string_016a49f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016a49f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016a49f0()
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

}  // namespace twin_016a49f0

// auto_initialize_static_wide_string_016a68a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016a68a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016a68a0()
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

}  // namespace twin_016a68a0

// auto_initialize_static_wide_string_016a8010: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016a8010 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016a8010()
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

}  // namespace twin_016a8010

// auto_initialize_static_wide_string_016aa440: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016aa440 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016aa440()
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

}  // namespace twin_016aa440

// auto_initialize_static_wide_string_016af570: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016af570 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016af570()
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

}  // namespace twin_016af570

// auto_initialize_static_wide_string_016b5bc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016b5bc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016b5bc0()
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

}  // namespace twin_016b5bc0

// auto_initialize_static_wide_string_016b6540: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016b6540 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016b6540()
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

}  // namespace twin_016b6540

// auto_initialize_static_wide_string_016b6ee0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016b6ee0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016b6ee0()
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

}  // namespace twin_016b6ee0

// auto_initialize_static_wide_string_016ba930: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016ba930 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016ba930()
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

}  // namespace twin_016ba930

// auto_initialize_static_wide_string_016bb270: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016bb270 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016bb270()
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

}  // namespace twin_016bb270

// auto_initialize_static_wide_string_016cf820: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016cf820 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016cf820()
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

}  // namespace twin_016cf820

// auto_initialize_static_wide_string_016d0b60: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016d0b60 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016d0b60()
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

}  // namespace twin_016d0b60

// auto_initialize_static_wide_string_016d1db0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016d1db0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016d1db0()
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

}  // namespace twin_016d1db0

// auto_initialize_static_wide_string_016d3750: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016d3750 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016d3750()
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

}  // namespace twin_016d3750

// auto_initialize_static_wide_string_016d5380: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016d5380 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016d5380()
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

}  // namespace twin_016d5380

// auto_initialize_static_wide_string_016d7a90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016d7a90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016d7a90()
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

}  // namespace twin_016d7a90

// auto_initialize_static_wide_string_016d7de0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016d7de0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016d7de0()
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

}  // namespace twin_016d7de0

// auto_initialize_static_wide_string_016d90d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016d90d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016d90d0()
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

}  // namespace twin_016d90d0

// auto_initialize_static_wide_string_016da590: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016da590 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016da590()
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

}  // namespace twin_016da590

// auto_initialize_static_wide_string_016db040: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016db040 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016db040()
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

}  // namespace twin_016db040

// auto_initialize_static_wide_string_016df870: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016df870 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016df870()
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

}  // namespace twin_016df870

// auto_initialize_static_wide_string_016e20b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016e20b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016e20b0()
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

}  // namespace twin_016e20b0

// auto_initialize_static_wide_string_016e5bd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016e5bd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016e5bd0()
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

}  // namespace twin_016e5bd0

// auto_initialize_static_wide_string_016e64e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016e64e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016e64e0()
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

}  // namespace twin_016e64e0

// auto_initialize_static_wide_string_016e6a20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016e6a20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016e6a20()
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

}  // namespace twin_016e6a20

// auto_initialize_static_wide_string_016e6be0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016e6be0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016e6be0()
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

}  // namespace twin_016e6be0

// auto_initialize_static_wide_string_016e6f50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016e6f50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016e6f50()
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

}  // namespace twin_016e6f50

// auto_initialize_static_wide_string_016e73a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016e73a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016e73a0()
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

}  // namespace twin_016e73a0

// auto_initialize_static_wide_string_016e7540: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016e7540 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016e7540()
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

}  // namespace twin_016e7540

// auto_initialize_static_wide_string_016e7aa0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016e7aa0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016e7aa0()
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

}  // namespace twin_016e7aa0

// auto_initialize_static_wide_string_016e8490: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016e8490 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016e8490()
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

}  // namespace twin_016e8490

// auto_initialize_static_wide_string_016e87f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016e87f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016e87f0()
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

}  // namespace twin_016e87f0

// auto_initialize_static_wide_string_016e93f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016e93f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016e93f0()
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

}  // namespace twin_016e93f0

// auto_initialize_static_wide_string_016ea2c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016ea2c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016ea2c0()
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

}  // namespace twin_016ea2c0

// auto_initialize_static_wide_string_016ea460: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016ea460 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016ea460()
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

}  // namespace twin_016ea460

// auto_initialize_static_wide_string_016ea600: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016ea600 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016ea600()
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

}  // namespace twin_016ea600

// auto_initialize_static_wide_string_016eb260: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016eb260 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016eb260()
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

}  // namespace twin_016eb260

// auto_initialize_static_wide_string_016eb660: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016eb660 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016eb660()
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

}  // namespace twin_016eb660

// auto_initialize_static_wide_string_016eb840: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016eb840 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016eb840()
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

}  // namespace twin_016eb840

// auto_initialize_static_wide_string_016eba40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016eba40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016eba40()
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

}  // namespace twin_016eba40

// auto_initialize_static_wide_string_016ebee0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016ebee0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016ebee0()
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

}  // namespace twin_016ebee0

// auto_initialize_static_wide_string_016ec880: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016ec880 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016ec880()
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

}  // namespace twin_016ec880

// auto_initialize_static_wide_string_016edce0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016edce0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016edce0()
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

}  // namespace twin_016edce0

// auto_initialize_static_wide_string_016ee860: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016ee860 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016ee860()
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

}  // namespace twin_016ee860

// auto_initialize_static_wide_string_016eef40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016eef40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016eef40()
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

}  // namespace twin_016eef40

// auto_initialize_static_wide_string_016ef5b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016ef5b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016ef5b0()
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

}  // namespace twin_016ef5b0

// auto_initialize_static_wide_string_016ef750: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016ef750 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016ef750()
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

}  // namespace twin_016ef750

// auto_initialize_static_wide_string_016f1ac0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016f1ac0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016f1ac0()
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

}  // namespace twin_016f1ac0

// auto_initialize_static_wide_string_016f2680: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016f2680 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016f2680()
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

}  // namespace twin_016f2680

// auto_initialize_static_wide_string_016f4f30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016f4f30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016f4f30()
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

}  // namespace twin_016f4f30

// auto_initialize_static_wide_string_016f94a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016f94a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016f94a0()
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

}  // namespace twin_016f94a0

// auto_initialize_static_wide_string_016fa450: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016fa450 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016fa450()
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

}  // namespace twin_016fa450

// auto_initialize_static_wide_string_016fa870: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016fa870 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016fa870()
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

}  // namespace twin_016fa870

// auto_initialize_static_wide_string_016fd030: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016fd030 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016fd030()
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

}  // namespace twin_016fd030

// auto_initialize_static_wide_string_016fd680: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016fd680 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016fd680()
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

}  // namespace twin_016fd680

// auto_initialize_static_wide_string_016fdf40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016fdf40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016fdf40()
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

}  // namespace twin_016fdf40

// auto_initialize_static_wide_string_016fe4c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016fe4c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016fe4c0()
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

}  // namespace twin_016fe4c0

// auto_initialize_static_wide_string_016feb20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016feb20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016feb20()
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

}  // namespace twin_016feb20

// auto_initialize_static_wide_string_016ff6c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_016ff6c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_016ff6c0()
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

}  // namespace twin_016ff6c0

// auto_initialize_static_wide_string_01700010: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01700010 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01700010()
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

}  // namespace twin_01700010

// auto_initialize_static_wide_string_01700740: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01700740 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01700740()
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

}  // namespace twin_01700740

// auto_initialize_static_wide_string_01700d20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01700d20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01700d20()
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

}  // namespace twin_01700d20

// auto_initialize_static_wide_string_01702e60: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01702e60 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01702e60()
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

}  // namespace twin_01702e60

// auto_initialize_static_wide_string_01704510: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01704510 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01704510()
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

}  // namespace twin_01704510

// auto_initialize_static_wide_string_01704bc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01704bc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01704bc0()
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

}  // namespace twin_01704bc0

// auto_initialize_static_wide_string_01704de0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01704de0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01704de0()
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

}  // namespace twin_01704de0

// auto_initialize_static_wide_string_01705370: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01705370 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01705370()
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

}  // namespace twin_01705370

// auto_initialize_static_wide_string_01705730: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01705730 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01705730()
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

}  // namespace twin_01705730

// auto_initialize_static_wide_string_01705b30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01705b30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01705b30()
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

}  // namespace twin_01705b30

// auto_initialize_static_wide_string_01706320: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01706320 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01706320()
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

}  // namespace twin_01706320

// auto_initialize_static_wide_string_01707020: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01707020 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01707020()
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

}  // namespace twin_01707020

// auto_initialize_static_wide_string_01707240: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01707240 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01707240()
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

}  // namespace twin_01707240

// auto_initialize_static_wide_string_01707610: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01707610 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01707610()
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

}  // namespace twin_01707610

// auto_initialize_static_wide_string_01707830: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01707830 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01707830()
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

}  // namespace twin_01707830

// auto_initialize_static_wide_string_01707da0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01707da0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01707da0()
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

}  // namespace twin_01707da0

// auto_initialize_static_wide_string_01708250: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01708250 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01708250()
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

}  // namespace twin_01708250

// auto_initialize_static_wide_string_01708710: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01708710 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01708710()
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

}  // namespace twin_01708710

// auto_initialize_static_wide_string_01708bb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01708bb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01708bb0()
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

}  // namespace twin_01708bb0

// auto_initialize_static_wide_string_017092b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017092b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017092b0()
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

}  // namespace twin_017092b0

// auto_initialize_static_wide_string_01709870: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01709870 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01709870()
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

}  // namespace twin_01709870

// auto_initialize_static_wide_string_01709c00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01709c00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01709c00()
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

}  // namespace twin_01709c00

// auto_initialize_static_wide_string_01709ef0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01709ef0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01709ef0()
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

}  // namespace twin_01709ef0

// auto_initialize_static_wide_string_0170a6d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170a6d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170a6d0()
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

}  // namespace twin_0170a6d0

// auto_initialize_static_wide_string_0170ae40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170ae40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170ae40()
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

}  // namespace twin_0170ae40

// auto_initialize_static_wide_string_0170b770: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170b770 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170b770()
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

}  // namespace twin_0170b770

// auto_initialize_static_wide_string_0170bdf0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170bdf0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170bdf0()
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

}  // namespace twin_0170bdf0

// auto_initialize_static_wide_string_0170c3b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170c3b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170c3b0()
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

}  // namespace twin_0170c3b0

// auto_initialize_static_wide_string_0170cbe0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170cbe0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170cbe0()
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

}  // namespace twin_0170cbe0

// auto_initialize_static_wide_string_0170d020: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170d020 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170d020()
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

}  // namespace twin_0170d020

// auto_initialize_static_wide_string_0170d460: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170d460 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170d460()
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

}  // namespace twin_0170d460

// auto_initialize_static_wide_string_0170d7b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170d7b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170d7b0()
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

}  // namespace twin_0170d7b0

// auto_initialize_static_wide_string_0170d9d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170d9d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170d9d0()
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

}  // namespace twin_0170d9d0

// auto_initialize_static_wide_string_0170dd70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170dd70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170dd70()
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

}  // namespace twin_0170dd70

// auto_initialize_static_wide_string_0170e160: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170e160 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170e160()
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

}  // namespace twin_0170e160

// auto_initialize_static_wide_string_0170f730: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0170f730 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0170f730()
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

}  // namespace twin_0170f730

// auto_initialize_static_wide_string_01711a50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01711a50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01711a50()
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

}  // namespace twin_01711a50

// auto_initialize_static_wide_string_01712560: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01712560 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01712560()
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

}  // namespace twin_01712560

// auto_initialize_static_wide_string_01712760: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01712760 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01712760()
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

}  // namespace twin_01712760

// auto_initialize_static_wide_string_01721cf0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01721cf0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01721cf0()
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

}  // namespace twin_01721cf0

// auto_initialize_static_wide_string_017278e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017278e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017278e0()
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

}  // namespace twin_017278e0

// auto_initialize_static_wide_string_0178d4a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0178d4a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0178d4a0()
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

}  // namespace twin_0178d4a0

// auto_initialize_static_wide_string_017940e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017940e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017940e0()
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

}  // namespace twin_017940e0

// auto_initialize_static_wide_string_01798fa0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01798fa0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01798fa0()
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

}  // namespace twin_01798fa0

// auto_initialize_static_wide_string_01799fc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01799fc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01799fc0()
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

}  // namespace twin_01799fc0

// auto_initialize_static_wide_string_0179a1f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0179a1f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0179a1f0()
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

}  // namespace twin_0179a1f0

// auto_initialize_static_wide_string_0179b150: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0179b150 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0179b150()
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

}  // namespace twin_0179b150

// auto_initialize_static_wide_string_0179c180: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0179c180 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0179c180()
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

}  // namespace twin_0179c180

// auto_initialize_static_wide_string_0179c990: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0179c990 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0179c990()
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

}  // namespace twin_0179c990

// auto_initialize_static_wide_string_0179d310: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0179d310 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0179d310()
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

}  // namespace twin_0179d310

// auto_initialize_static_wide_string_0179e8a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0179e8a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0179e8a0()
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

}  // namespace twin_0179e8a0

// auto_initialize_static_wide_string_0179f740: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0179f740 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0179f740()
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

}  // namespace twin_0179f740

// auto_initialize_static_wide_string_0179fba0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0179fba0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0179fba0()
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

}  // namespace twin_0179fba0

// auto_initialize_static_wide_string_017a7550: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017a7550 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017a7550()
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

}  // namespace twin_017a7550

// auto_initialize_static_wide_string_017a8d50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017a8d50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017a8d50()
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

}  // namespace twin_017a8d50

// auto_initialize_static_wide_string_017a98e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017a98e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017a98e0()
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

}  // namespace twin_017a98e0

// auto_initialize_static_wide_string_017ac070: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017ac070 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017ac070()
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

}  // namespace twin_017ac070

// auto_initialize_static_wide_string_017b12b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017b12b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017b12b0()
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

}  // namespace twin_017b12b0

// auto_initialize_static_wide_string_017b3bf0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017b3bf0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017b3bf0()
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

}  // namespace twin_017b3bf0

// auto_initialize_static_wide_string_017b4b70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017b4b70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017b4b70()
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

}  // namespace twin_017b4b70

// auto_initialize_static_wide_string_017b5700: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017b5700 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017b5700()
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

}  // namespace twin_017b5700

// auto_initialize_static_wide_string_017c3880: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017c3880 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017c3880()
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

}  // namespace twin_017c3880

// auto_initialize_static_wide_string_017c6770: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017c6770 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017c6770()
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

}  // namespace twin_017c6770
