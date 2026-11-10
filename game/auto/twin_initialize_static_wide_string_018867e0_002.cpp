// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as engine_initialize_static_wide_string_018867e0, in game/engine/static_wide_string_init_018867e0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../engine/static_wide_string.h"
#include "../engine/engine.h"

// auto_initialize_static_wide_string_017c6950: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017c6950 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017c6950()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017c6950

// auto_initialize_static_wide_string_017c7fe0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017c7fe0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017c7fe0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017c7fe0

// auto_initialize_static_wide_string_017c8c80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017c8c80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017c8c80()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017c8c80

// auto_initialize_static_wide_string_017cef40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017cef40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017cef40()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017cef40

// auto_initialize_static_wide_string_017d14c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d14c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d14c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d14c0

// auto_initialize_static_wide_string_017d2720: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d2720 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d2720()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d2720

// auto_initialize_static_wide_string_017d3590: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d3590 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d3590()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d3590

// auto_initialize_static_wide_string_017d4250: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d4250 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d4250()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d4250

// auto_initialize_static_wide_string_017d4910: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d4910 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d4910()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d4910

// auto_initialize_static_wide_string_017d4e10: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d4e10 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d4e10()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d4e10

// auto_initialize_static_wide_string_017d5620: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d5620 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d5620()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d5620

// auto_initialize_static_wide_string_017d5df0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d5df0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d5df0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d5df0

// auto_initialize_static_wide_string_017d6460: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d6460 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d6460()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d6460

// auto_initialize_static_wide_string_017d6740: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d6740 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d6740()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d6740

// auto_initialize_static_wide_string_017d6de0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d6de0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d6de0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d6de0

// auto_initialize_static_wide_string_017d7170: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d7170 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d7170()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d7170

// auto_initialize_static_wide_string_017d7a70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d7a70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d7a70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d7a70

// auto_initialize_static_wide_string_017d8090: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d8090 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d8090()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d8090

// auto_initialize_static_wide_string_017d85a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d85a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d85a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d85a0

// auto_initialize_static_wide_string_017d94a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d94a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d94a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d94a0

// auto_initialize_static_wide_string_017d9cb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017d9cb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017d9cb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017d9cb0

// auto_initialize_static_wide_string_017dae90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017dae90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017dae90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017dae90

// auto_initialize_static_wide_string_017db190: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017db190 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017db190()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017db190

// auto_initialize_static_wide_string_017db5e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017db5e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017db5e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017db5e0

// auto_initialize_static_wide_string_017dbfa0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017dbfa0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017dbfa0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017dbfa0

// auto_initialize_static_wide_string_017dc980: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017dc980 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017dc980()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017dc980

// auto_initialize_static_wide_string_017ddc10: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017ddc10 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017ddc10()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017ddc10

// auto_initialize_static_wide_string_017df050: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017df050 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017df050()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017df050

// auto_initialize_static_wide_string_017e0120: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017e0120 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017e0120()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017e0120

// auto_initialize_static_wide_string_017e0940: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017e0940 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017e0940()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017e0940

// auto_initialize_static_wide_string_017e1760: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017e1760 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017e1760()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017e1760

// auto_initialize_static_wide_string_017e2150: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017e2150 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017e2150()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017e2150

// auto_initialize_static_wide_string_017e3110: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017e3110 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017e3110()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017e3110

// auto_initialize_static_wide_string_017e42c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017e42c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017e42c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017e42c0

// auto_initialize_static_wide_string_017e6290: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017e6290 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017e6290()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017e6290

// auto_initialize_static_wide_string_017e9980: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017e9980 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017e9980()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017e9980

// auto_initialize_static_wide_string_017ea960: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017ea960 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017ea960()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017ea960

// auto_initialize_static_wide_string_017eb940: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017eb940 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017eb940()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017eb940

// auto_initialize_static_wide_string_017ec990: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017ec990 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017ec990()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017ec990

// auto_initialize_static_wide_string_017ed7a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017ed7a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017ed7a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017ed7a0

// auto_initialize_static_wide_string_017ee500: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017ee500 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017ee500()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017ee500

// auto_initialize_static_wide_string_017f0760: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017f0760 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017f0760()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017f0760

// auto_initialize_static_wide_string_017f1af0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017f1af0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017f1af0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017f1af0

// auto_initialize_static_wide_string_017f3480: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017f3480 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017f3480()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017f3480

// auto_initialize_static_wide_string_017f4460: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017f4460 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017f4460()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017f4460

// auto_initialize_static_wide_string_017f53b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017f53b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017f53b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017f53b0

// auto_initialize_static_wide_string_017f7ba0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017f7ba0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017f7ba0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017f7ba0

// auto_initialize_static_wide_string_017f91e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017f91e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017f91e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017f91e0

// auto_initialize_static_wide_string_017fa140: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017fa140 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017fa140()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017fa140

// auto_initialize_static_wide_string_017fb340: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017fb340 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017fb340()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017fb340

// auto_initialize_static_wide_string_017fc530: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017fc530 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017fc530()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017fc530

// auto_initialize_static_wide_string_017fdbd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017fdbd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017fdbd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017fdbd0

// auto_initialize_static_wide_string_017fedd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017fedd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017fedd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017fedd0

// auto_initialize_static_wide_string_017ffd20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_017ffd20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_017ffd20()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_017ffd20

// auto_initialize_static_wide_string_018014b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018014b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018014b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018014b0

// auto_initialize_static_wide_string_018035f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018035f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018035f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018035f0

// auto_initialize_static_wide_string_01804bd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01804bd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01804bd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01804bd0

// auto_initialize_static_wide_string_01806130: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01806130 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01806130()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01806130

// auto_initialize_static_wide_string_01807080: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01807080 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01807080()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01807080

// auto_initialize_static_wide_string_01807910: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01807910 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01807910()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01807910

// auto_initialize_static_wide_string_01808760: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01808760 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01808760()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01808760

// auto_initialize_static_wide_string_018098d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018098d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018098d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018098d0

// auto_initialize_static_wide_string_0180aad0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0180aad0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0180aad0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0180aad0

// auto_initialize_static_wide_string_0180bac0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0180bac0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0180bac0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0180bac0

// auto_initialize_static_wide_string_0180ceb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0180ceb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0180ceb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0180ceb0

// auto_initialize_static_wide_string_0180dea0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0180dea0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0180dea0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0180dea0

// auto_initialize_static_wide_string_0180e730: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0180e730 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0180e730()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0180e730

// auto_initialize_static_wide_string_0180f980: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0180f980 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0180f980()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0180f980

// auto_initialize_static_wide_string_018108c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018108c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018108c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018108c0

// auto_initialize_static_wide_string_018118e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018118e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018118e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018118e0

// auto_initialize_static_wide_string_01812b90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01812b90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01812b90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01812b90

// auto_initialize_static_wide_string_01813d30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01813d30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01813d30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01813d30

// auto_initialize_static_wide_string_018145c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018145c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018145c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018145c0

// auto_initialize_static_wide_string_018150e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018150e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018150e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018150e0

// auto_initialize_static_wide_string_01816030: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01816030 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01816030()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01816030

// auto_initialize_static_wide_string_01817030: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01817030 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01817030()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01817030

// auto_initialize_static_wide_string_01818ac0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01818ac0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01818ac0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01818ac0

// auto_initialize_static_wide_string_01819910: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01819910 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01819910()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01819910

// auto_initialize_static_wide_string_0181aa00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0181aa00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0181aa00()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0181aa00

// auto_initialize_static_wide_string_0181baf0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0181baf0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0181baf0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0181baf0

// auto_initialize_static_wide_string_0181cbe0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0181cbe0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0181cbe0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0181cbe0

// auto_initialize_static_wide_string_0181de30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0181de30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0181de30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0181de30

// auto_initialize_static_wide_string_0181f130: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0181f130 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0181f130()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0181f130

// auto_initialize_static_wide_string_018207d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018207d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018207d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018207d0

// auto_initialize_static_wide_string_018268b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018268b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018268b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018268b0

// auto_initialize_static_wide_string_01828e70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01828e70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01828e70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01828e70

// auto_initialize_static_wide_string_0182a090: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0182a090 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0182a090()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0182a090

// auto_initialize_static_wide_string_0182abb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0182abb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0182abb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0182abb0

// auto_initialize_static_wide_string_0182c390: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0182c390 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0182c390()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0182c390

// auto_initialize_static_wide_string_0182faf0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0182faf0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0182faf0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0182faf0

// auto_initialize_static_wide_string_01830a90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01830a90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01830a90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01830a90

// auto_initialize_static_wide_string_01831a10: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01831a10 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01831a10()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01831a10

// auto_initialize_static_wide_string_018322a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018322a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018322a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018322a0

// auto_initialize_static_wide_string_01832fb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01832fb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01832fb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01832fb0

// auto_initialize_static_wide_string_01835510: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01835510 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01835510()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01835510

// auto_initialize_static_wide_string_01837ab0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01837ab0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01837ab0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01837ab0

// auto_initialize_static_wide_string_01839df0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01839df0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01839df0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01839df0

// auto_initialize_static_wide_string_01842450: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01842450 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01842450()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01842450

// auto_initialize_static_wide_string_01842f60: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01842f60 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01842f60()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01842f60

// auto_initialize_static_wide_string_01843860: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01843860 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01843860()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01843860

// auto_initialize_static_wide_string_018445e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018445e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018445e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018445e0

// auto_initialize_static_wide_string_01845680: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01845680 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01845680()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01845680

// auto_initialize_static_wide_string_018464e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018464e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018464e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018464e0

// auto_initialize_static_wide_string_01846d70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01846d70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01846d70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01846d70

// auto_initialize_static_wide_string_01847600: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01847600 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01847600()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01847600

// auto_initialize_static_wide_string_01847e90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01847e90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01847e90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01847e90

// auto_initialize_static_wide_string_01848b80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01848b80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01848b80()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01848b80

// auto_initialize_static_wide_string_01849620: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01849620 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01849620()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01849620

// auto_initialize_static_wide_string_01849cd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01849cd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01849cd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01849cd0

// auto_initialize_static_wide_string_0184a560: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0184a560 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0184a560()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0184a560

// auto_initialize_static_wide_string_0184ae50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0184ae50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0184ae50()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0184ae50

// auto_initialize_static_wide_string_0184b530: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0184b530 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0184b530()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0184b530

// auto_initialize_static_wide_string_0184be30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0184be30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0184be30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0184be30

// auto_initialize_static_wide_string_0184bfd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0184bfd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0184bfd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0184bfd0

// auto_initialize_static_wide_string_0184c860: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0184c860 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0184c860()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0184c860

// auto_initialize_static_wide_string_0184d560: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0184d560 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0184d560()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0184d560

// auto_initialize_static_wide_string_0184da70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0184da70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0184da70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0184da70

// auto_initialize_static_wide_string_0184ef10: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0184ef10 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0184ef10()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0184ef10

// auto_initialize_static_wide_string_01850010: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01850010 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01850010()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01850010

// auto_initialize_static_wide_string_01850ca0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01850ca0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01850ca0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01850ca0

// auto_initialize_static_wide_string_01851660: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01851660 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01851660()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01851660

// auto_initialize_static_wide_string_01852210: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01852210 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01852210()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01852210

// auto_initialize_static_wide_string_01852d50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01852d50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01852d50()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01852d50

// auto_initialize_static_wide_string_01853950: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01853950 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01853950()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01853950

// auto_initialize_static_wide_string_018543e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018543e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018543e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018543e0

// auto_initialize_static_wide_string_01854fa0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01854fa0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01854fa0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01854fa0

// auto_initialize_static_wide_string_01856520: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01856520 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01856520()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01856520

// auto_initialize_static_wide_string_01858dc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01858dc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01858dc0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01858dc0

// auto_initialize_static_wide_string_0185fde0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0185fde0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0185fde0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0185fde0

// auto_initialize_static_wide_string_01862150: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01862150 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01862150()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01862150

// auto_initialize_static_wide_string_01863240: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01863240 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01863240()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01863240

// auto_initialize_static_wide_string_01868440: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01868440 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01868440()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01868440

// auto_initialize_static_wide_string_018692f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018692f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018692f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018692f0

// auto_initialize_static_wide_string_0186af90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0186af90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0186af90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0186af90

// auto_initialize_static_wide_string_0186f150: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0186f150 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0186f150()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0186f150

// auto_initialize_static_wide_string_01871910: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01871910 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01871910()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01871910

// auto_initialize_static_wide_string_01872800: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01872800 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01872800()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01872800

// auto_initialize_static_wide_string_01874120: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01874120 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01874120()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01874120

// auto_initialize_static_wide_string_01874c30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01874c30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01874c30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01874c30

// auto_initialize_static_wide_string_01876280: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01876280 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01876280()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01876280

// auto_initialize_static_wide_string_018765d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018765d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018765d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018765d0

// auto_initialize_static_wide_string_01876f60: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01876f60 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01876f60()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01876f60

// auto_initialize_static_wide_string_01877450: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01877450 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01877450()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01877450

// auto_initialize_static_wide_string_018785f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018785f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018785f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018785f0

// auto_initialize_static_wide_string_01879710: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01879710 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01879710()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01879710

// auto_initialize_static_wide_string_01879ac0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01879ac0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01879ac0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01879ac0

// auto_initialize_static_wide_string_0187cc10: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0187cc10 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0187cc10()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0187cc10

// auto_initialize_static_wide_string_0187f710: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0187f710 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0187f710()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0187f710

// auto_initialize_static_wide_string_01880010: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01880010 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01880010()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01880010

// auto_initialize_static_wide_string_01882d10: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01882d10 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01882d10()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01882d10

// auto_initialize_static_wide_string_018846c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018846c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018846c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018846c0

// auto_initialize_static_wide_string_01884d80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01884d80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01884d80()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01884d80

// auto_initialize_static_wide_string_01885380: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01885380 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01885380()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01885380

// auto_initialize_static_wide_string_01886610: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01886610 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01886610()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01886610

// auto_initialize_static_wide_string_01889200: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01889200 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01889200()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01889200

// auto_initialize_static_wide_string_0188dfa0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0188dfa0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0188dfa0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0188dfa0

// auto_initialize_static_wide_string_01890bd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01890bd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01890bd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01890bd0

// auto_initialize_static_wide_string_01891080: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01891080 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01891080()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01891080

// auto_initialize_static_wide_string_01893660: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01893660 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01893660()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01893660

// auto_initialize_static_wide_string_01895bc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01895bc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01895bc0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01895bc0

// auto_initialize_static_wide_string_01898920: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_01898920 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_01898920()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_01898920

// auto_initialize_static_wide_string_0189e1c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0189e1c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0189e1c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0189e1c0

// auto_initialize_static_wide_string_0189eab0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0189eab0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0189eab0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0189eab0

// auto_initialize_static_wide_string_0189ffd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0189ffd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0189ffd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0189ffd0

// auto_initialize_static_wide_string_018a30d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018a30d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018a30d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018a30d0

// auto_initialize_static_wide_string_018a3750: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018a3750 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018a3750()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018a3750

// auto_initialize_static_wide_string_018a3eb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018a3eb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018a3eb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018a3eb0

// auto_initialize_static_wide_string_018aa360: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018aa360 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018aa360()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018aa360

// auto_initialize_static_wide_string_018aa7e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018aa7e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018aa7e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018aa7e0

// auto_initialize_static_wide_string_018ad340: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018ad340 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018ad340()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018ad340

// auto_initialize_static_wide_string_018ae2f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018ae2f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018ae2f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018ae2f0

// auto_initialize_static_wide_string_018afbe0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018afbe0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018afbe0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018afbe0

// auto_initialize_static_wide_string_018b1610: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018b1610 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018b1610()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018b1610

// auto_initialize_static_wide_string_018b1860: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018b1860 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018b1860()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018b1860

// auto_initialize_static_wide_string_018b2200: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018b2200 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018b2200()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018b2200

// auto_initialize_static_wide_string_018b33a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018b33a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018b33a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018b33a0

// auto_initialize_static_wide_string_018b3ee0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018b3ee0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018b3ee0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018b3ee0

// auto_initialize_static_wide_string_018bb6a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018bb6a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018bb6a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018bb6a0

// auto_initialize_static_wide_string_018bfb20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018bfb20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018bfb20()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018bfb20

// auto_initialize_static_wide_string_018c0f80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018c0f80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018c0f80()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018c0f80

// auto_initialize_static_wide_string_018c1700: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018c1700 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018c1700()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018c1700

// auto_initialize_static_wide_string_018c18a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018c18a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018c18a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018c18a0

// auto_initialize_static_wide_string_018c1a40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018c1a40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018c1a40()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018c1a40

// auto_initialize_static_wide_string_018c63c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018c63c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018c63c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018c63c0

// auto_initialize_static_wide_string_018c7000: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018c7000 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018c7000()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018c7000

// auto_initialize_static_wide_string_018c7fe0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018c7fe0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018c7fe0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018c7fe0

// auto_initialize_static_wide_string_018ca4c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018ca4c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018ca4c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018ca4c0

// auto_initialize_static_wide_string_018ca930: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018ca930 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018ca930()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018ca930

// auto_initialize_static_wide_string_018cc030: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018cc030 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018cc030()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018cc030

// auto_initialize_static_wide_string_018d6e10: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018d6e10 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018d6e10()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018d6e10

// auto_initialize_static_wide_string_018dd2e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018dd2e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018dd2e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018dd2e0

// auto_initialize_static_wide_string_018df9a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018df9a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018df9a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018df9a0

// auto_initialize_static_wide_string_018e1890: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018e1890 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018e1890()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018e1890

// auto_initialize_static_wide_string_018e1ea0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018e1ea0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018e1ea0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018e1ea0

// auto_initialize_static_wide_string_018e2040: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018e2040 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018e2040()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018e2040

// auto_initialize_static_wide_string_018e4a60: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018e4a60 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018e4a60()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018e4a60

// auto_initialize_static_wide_string_018ec490: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018ec490 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018ec490()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018ec490

// auto_initialize_static_wide_string_018ed6b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018ed6b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018ed6b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018ed6b0

// auto_initialize_static_wide_string_018ee5e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018ee5e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018ee5e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018ee5e0

// auto_initialize_static_wide_string_018ee8b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_018ee8b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_018ee8b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_018ee8b0
