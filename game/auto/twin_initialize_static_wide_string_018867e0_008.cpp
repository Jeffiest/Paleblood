// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as engine_initialize_static_wide_string_018867e0, in game/engine/static_wide_string_init_018867e0.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../engine/static_wide_string.h"
#include "../engine/engine.h"

// auto_initialize_static_wide_string_0216b4f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0216b4f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0216b4f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0216b4f0

// auto_initialize_static_wide_string_0216c1e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0216c1e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0216c1e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0216c1e0

// auto_initialize_static_wide_string_0216c730: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0216c730 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0216c730()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0216c730

// auto_initialize_static_wide_string_0216d660: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0216d660 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0216d660()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0216d660

// auto_initialize_static_wide_string_0216e270: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0216e270 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0216e270()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0216e270

// auto_initialize_static_wide_string_02171b60: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02171b60 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02171b60()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02171b60

// auto_initialize_static_wide_string_02172610: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02172610 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02172610()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02172610

// auto_initialize_static_wide_string_021729b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021729b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021729b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021729b0

// auto_initialize_static_wide_string_02173330: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02173330 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02173330()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02173330

// auto_initialize_static_wide_string_021734d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021734d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021734d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021734d0

// auto_initialize_static_wide_string_02173eb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02173eb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02173eb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02173eb0

// auto_initialize_static_wide_string_02174bf0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02174bf0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02174bf0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02174bf0

// auto_initialize_static_wide_string_02175960: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02175960 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02175960()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02175960

// auto_initialize_static_wide_string_02176520: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02176520 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02176520()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02176520

// auto_initialize_static_wide_string_021772a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021772a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021772a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021772a0

// auto_initialize_static_wide_string_02177e60: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02177e60 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02177e60()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02177e60

// auto_initialize_static_wide_string_02178b00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02178b00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02178b00()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02178b00

// auto_initialize_static_wide_string_02179850: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02179850 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02179850()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02179850

// auto_initialize_static_wide_string_0217a5d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0217a5d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0217a5d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0217a5d0

// auto_initialize_static_wide_string_0217b1a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0217b1a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0217b1a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0217b1a0

// auto_initialize_static_wide_string_0217bf20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0217bf20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0217bf20()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0217bf20

// auto_initialize_static_wide_string_0217cae0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0217cae0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0217cae0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0217cae0

// auto_initialize_static_wide_string_0217d860: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0217d860 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0217d860()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0217d860

// auto_initialize_static_wide_string_0217e420: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0217e420 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0217e420()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0217e420

// auto_initialize_static_wide_string_0217f5b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0217f5b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0217f5b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0217f5b0

// auto_initialize_static_wide_string_02180b80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02180b80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02180b80()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02180b80

// auto_initialize_static_wide_string_02181ac0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02181ac0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02181ac0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02181ac0

// auto_initialize_static_wide_string_02181cd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02181cd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02181cd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02181cd0

// auto_initialize_static_wide_string_02181f70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02181f70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02181f70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02181f70

// auto_initialize_static_wide_string_02182210: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02182210 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02182210()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02182210

// auto_initialize_static_wide_string_021824b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021824b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021824b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021824b0

// auto_initialize_static_wide_string_021826b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021826b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021826b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021826b0

// auto_initialize_static_wide_string_02182a40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02182a40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02182a40()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02182a40

// auto_initialize_static_wide_string_02183920: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02183920 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02183920()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02183920

// auto_initialize_static_wide_string_021840e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021840e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021840e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021840e0

// auto_initialize_static_wide_string_02184980: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02184980 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02184980()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02184980

// auto_initialize_static_wide_string_021850d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021850d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021850d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021850d0

// auto_initialize_static_wide_string_021858a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021858a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021858a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021858a0

// auto_initialize_static_wide_string_02185d90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02185d90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02185d90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02185d90

// auto_initialize_static_wide_string_02189fc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02189fc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02189fc0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02189fc0

// auto_initialize_static_wide_string_0218cbd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0218cbd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0218cbd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0218cbd0

// auto_initialize_static_wide_string_0218d6e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0218d6e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0218d6e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0218d6e0

// auto_initialize_static_wide_string_0218e6b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0218e6b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0218e6b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0218e6b0

// auto_initialize_static_wide_string_0218ff70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0218ff70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0218ff70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0218ff70

// auto_initialize_static_wide_string_02190270: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02190270 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02190270()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02190270

// auto_initialize_static_wide_string_021904e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021904e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021904e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021904e0

// auto_initialize_static_wide_string_02190dc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02190dc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02190dc0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02190dc0

// auto_initialize_static_wide_string_021912f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021912f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021912f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021912f0

// auto_initialize_static_wide_string_02192660: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02192660 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02192660()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02192660

// auto_initialize_static_wide_string_02198e90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02198e90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02198e90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02198e90

// auto_initialize_static_wide_string_0219b4a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0219b4a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0219b4a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0219b4a0

// auto_initialize_static_wide_string_0219e350: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0219e350 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0219e350()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0219e350

// auto_initialize_static_wide_string_0219e950: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0219e950 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0219e950()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0219e950

// auto_initialize_static_wide_string_0219f360: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0219f360 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0219f360()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0219f360

// auto_initialize_static_wide_string_0219f860: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0219f860 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0219f860()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0219f860

// auto_initialize_static_wide_string_0219fee0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0219fee0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0219fee0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0219fee0

// auto_initialize_static_wide_string_021a04e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021a04e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021a04e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021a04e0

// auto_initialize_static_wide_string_021a06e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021a06e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021a06e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021a06e0

// auto_initialize_static_wide_string_021a08d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021a08d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021a08d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021a08d0

// auto_initialize_static_wide_string_021a0c30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021a0c30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021a0c30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021a0c30

// auto_initialize_static_wide_string_021a10d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021a10d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021a10d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021a10d0

// auto_initialize_static_wide_string_021a12d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021a12d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021a12d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021a12d0

// auto_initialize_static_wide_string_021a1e50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021a1e50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021a1e50()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021a1e50

// auto_initialize_static_wide_string_021a2480: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021a2480 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021a2480()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021a2480

// auto_initialize_static_wide_string_021a2dd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021a2dd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021a2dd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021a2dd0

// auto_initialize_static_wide_string_021a52d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021a52d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021a52d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021a52d0

// auto_initialize_static_wide_string_021a6cb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021a6cb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021a6cb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021a6cb0

// auto_initialize_static_wide_string_021a8cb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021a8cb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021a8cb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021a8cb0

// auto_initialize_static_wide_string_021ac790: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021ac790 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021ac790()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021ac790

// auto_initialize_static_wide_string_021b0e50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021b0e50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021b0e50()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021b0e50

// auto_initialize_static_wide_string_021b32d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021b32d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021b32d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021b32d0

// auto_initialize_static_wide_string_021b4800: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021b4800 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021b4800()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021b4800

// auto_initialize_static_wide_string_021b4ee0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021b4ee0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021b4ee0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021b4ee0

// auto_initialize_static_wide_string_021b5280: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021b5280 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021b5280()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021b5280

// auto_initialize_static_wide_string_021b6740: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021b6740 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021b6740()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021b6740

// auto_initialize_static_wide_string_021b7100: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021b7100 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021b7100()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021b7100

// auto_initialize_static_wide_string_021b7950: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021b7950 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021b7950()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021b7950

// auto_initialize_static_wide_string_021b7af0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021b7af0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021b7af0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021b7af0

// auto_initialize_static_wide_string_021b8aa0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021b8aa0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021b8aa0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021b8aa0

// auto_initialize_static_wide_string_021bac20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021bac20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021bac20()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021bac20

// auto_initialize_static_wide_string_021be060: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021be060 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021be060()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021be060

// auto_initialize_static_wide_string_021be650: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021be650 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021be650()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021be650

// auto_initialize_static_wide_string_021c0cc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c0cc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c0cc0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c0cc0

// auto_initialize_static_wide_string_021c1bd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c1bd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c1bd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c1bd0

// auto_initialize_static_wide_string_021c2460: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c2460 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c2460()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c2460

// auto_initialize_static_wide_string_021c3200: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c3200 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c3200()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c3200

// auto_initialize_static_wide_string_021c3cb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c3cb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c3cb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c3cb0

// auto_initialize_static_wide_string_021c4960: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c4960 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c4960()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c4960

// auto_initialize_static_wide_string_021c5410: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c5410 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c5410()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c5410

// auto_initialize_static_wide_string_021c5df0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c5df0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c5df0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c5df0

// auto_initialize_static_wide_string_021c61b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c61b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c61b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c61b0

// auto_initialize_static_wide_string_021c63d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c63d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c63d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c63d0

// auto_initialize_static_wide_string_021c6570: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c6570 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c6570()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c6570

// auto_initialize_static_wide_string_021c6aa0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c6aa0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c6aa0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c6aa0

// auto_initialize_static_wide_string_021c78c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c78c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c78c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c78c0

// auto_initialize_static_wide_string_021c8390: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c8390 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c8390()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c8390

// auto_initialize_static_wide_string_021c8860: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c8860 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c8860()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c8860

// auto_initialize_static_wide_string_021c9270: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021c9270 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021c9270()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021c9270

// auto_initialize_static_wide_string_021ca000: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021ca000 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021ca000()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021ca000

// auto_initialize_static_wide_string_021cb820: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021cb820 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021cb820()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021cb820

// auto_initialize_static_wide_string_021cc8d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021cc8d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021cc8d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021cc8d0

// auto_initialize_static_wide_string_021d38d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021d38d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021d38d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021d38d0

// auto_initialize_static_wide_string_021d56d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021d56d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021d56d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021d56d0

// auto_initialize_static_wide_string_021d8840: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021d8840 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021d8840()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021d8840

// auto_initialize_static_wide_string_021da6a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021da6a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021da6a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021da6a0

// auto_initialize_static_wide_string_021dace0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021dace0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021dace0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021dace0

// auto_initialize_static_wide_string_021dbaa0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021dbaa0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021dbaa0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021dbaa0

// auto_initialize_static_wide_string_021dc0f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021dc0f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021dc0f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021dc0f0

// auto_initialize_static_wide_string_021dcc00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021dcc00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021dcc00()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021dcc00

// auto_initialize_static_wide_string_021dd3a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021dd3a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021dd3a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021dd3a0

// auto_initialize_static_wide_string_021dd640: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021dd640 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021dd640()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021dd640

// auto_initialize_static_wide_string_021de900: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021de900 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021de900()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021de900

// auto_initialize_static_wide_string_021df180: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021df180 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021df180()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021df180

// auto_initialize_static_wide_string_021e0c50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021e0c50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021e0c50()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021e0c50

// auto_initialize_static_wide_string_021e1350: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021e1350 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021e1350()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021e1350

// auto_initialize_static_wide_string_021e25c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021e25c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021e25c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021e25c0

// auto_initialize_static_wide_string_021e2a90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021e2a90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021e2a90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021e2a90

// auto_initialize_static_wide_string_021e3b30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021e3b30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021e3b30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021e3b30

// auto_initialize_static_wide_string_021f5d90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_021f5d90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_021f5d90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_021f5d90

// auto_initialize_static_wide_string_02201b90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02201b90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02201b90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02201b90

// auto_initialize_static_wide_string_02201e80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02201e80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02201e80()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02201e80

// auto_initialize_static_wide_string_02202020: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02202020 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02202020()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02202020

// auto_initialize_static_wide_string_022025f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022025f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022025f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022025f0

// auto_initialize_static_wide_string_02202790: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02202790 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02202790()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02202790

// auto_initialize_static_wide_string_02203010: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02203010 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02203010()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02203010

// auto_initialize_static_wide_string_022032d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022032d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022032d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022032d0

// auto_initialize_static_wide_string_02203920: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02203920 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02203920()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02203920

// auto_initialize_static_wide_string_022049f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022049f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022049f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022049f0

// auto_initialize_static_wide_string_02206200: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02206200 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02206200()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02206200

// auto_initialize_static_wide_string_02206f60: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02206f60 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02206f60()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02206f60

// auto_initialize_static_wide_string_02207c00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02207c00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02207c00()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02207c00

// auto_initialize_static_wide_string_02208970: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02208970 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02208970()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02208970

// auto_initialize_static_wide_string_02209610: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02209610 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02209610()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02209610

// auto_initialize_static_wide_string_0220a570: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0220a570 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0220a570()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0220a570

// auto_initialize_static_wide_string_0220b300: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0220b300 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0220b300()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0220b300

// auto_initialize_static_wide_string_0220c290: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0220c290 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0220c290()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0220c290

// auto_initialize_static_wide_string_0220d0d0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0220d0d0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0220d0d0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0220d0d0

// auto_initialize_static_wide_string_0220d330: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0220d330 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0220d330()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0220d330

// auto_initialize_static_wide_string_02210570: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02210570 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02210570()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02210570

// auto_initialize_static_wide_string_02210f70: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02210f70 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02210f70()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02210f70

// auto_initialize_static_wide_string_022112e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022112e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022112e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022112e0

// auto_initialize_static_wide_string_02211e80: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02211e80 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02211e80()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02211e80

// auto_initialize_static_wide_string_022148b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022148b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022148b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022148b0

// auto_initialize_static_wide_string_022171f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022171f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022171f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022171f0

// auto_initialize_static_wide_string_02218770: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02218770 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02218770()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02218770

// auto_initialize_static_wide_string_02218b20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02218b20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02218b20()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02218b20

// auto_initialize_static_wide_string_0221a4e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0221a4e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0221a4e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0221a4e0

// auto_initialize_static_wide_string_0221e710: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0221e710 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0221e710()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0221e710

// auto_initialize_static_wide_string_02221f90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02221f90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02221f90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02221f90

// auto_initialize_static_wide_string_022235a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022235a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022235a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022235a0

// auto_initialize_static_wide_string_02223e90: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02223e90 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02223e90()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02223e90

// auto_initialize_static_wide_string_02224630: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02224630 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02224630()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02224630

// auto_initialize_static_wide_string_02227f50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02227f50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02227f50()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02227f50

// auto_initialize_static_wide_string_02228ad0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02228ad0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02228ad0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02228ad0

// auto_initialize_static_wide_string_02232b60: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02232b60 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02232b60()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02232b60

// auto_initialize_static_wide_string_02234050: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02234050 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02234050()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02234050

// auto_initialize_static_wide_string_02236ef0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02236ef0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02236ef0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02236ef0

// auto_initialize_static_wide_string_02237ff0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02237ff0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02237ff0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02237ff0

// auto_initialize_static_wide_string_02238bc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02238bc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02238bc0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02238bc0

// auto_initialize_static_wide_string_02238e20: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02238e20 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02238e20()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02238e20

// auto_initialize_static_wide_string_02239870: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02239870 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02239870()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02239870

// auto_initialize_static_wide_string_0223a0f0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0223a0f0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0223a0f0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0223a0f0

// auto_initialize_static_wide_string_0223b250: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0223b250 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0223b250()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0223b250

// auto_initialize_static_wide_string_0223c510: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0223c510 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0223c510()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0223c510

// auto_initialize_static_wide_string_0223d0a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0223d0a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0223d0a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0223d0a0

// auto_initialize_static_wide_string_0223eef0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0223eef0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0223eef0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0223eef0

// auto_initialize_static_wide_string_0223f5c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0223f5c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0223f5c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0223f5c0

// auto_initialize_static_wide_string_02240ca0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02240ca0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02240ca0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02240ca0

// auto_initialize_static_wide_string_02241a60: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02241a60 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02241a60()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02241a60

// auto_initialize_static_wide_string_02242ce0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02242ce0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02242ce0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02242ce0

// auto_initialize_static_wide_string_02245120: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02245120 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02245120()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02245120

// auto_initialize_static_wide_string_02247cb0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02247cb0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02247cb0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02247cb0

// auto_initialize_static_wide_string_02249e00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02249e00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02249e00()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02249e00

// auto_initialize_static_wide_string_0224a7e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0224a7e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0224a7e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0224a7e0

// auto_initialize_static_wide_string_0224bca0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0224bca0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0224bca0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0224bca0

// auto_initialize_static_wide_string_02250e30: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02250e30 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02250e30()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02250e30

// auto_initialize_static_wide_string_02255900: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02255900 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02255900()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02255900

// auto_initialize_static_wide_string_02255ee0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02255ee0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02255ee0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02255ee0

// auto_initialize_static_wide_string_02256470: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02256470 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02256470()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02256470

// auto_initialize_static_wide_string_02257900: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02257900 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02257900()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02257900

// auto_initialize_static_wide_string_0225be00: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0225be00 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0225be00()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0225be00

// auto_initialize_static_wide_string_0225cb40: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0225cb40 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0225cb40()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0225cb40

// auto_initialize_static_wide_string_0225f040: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0225f040 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0225f040()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0225f040

// auto_initialize_static_wide_string_022604b0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022604b0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022604b0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022604b0

// auto_initialize_static_wide_string_02266690: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02266690 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02266690()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02266690

// auto_initialize_static_wide_string_02268a50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02268a50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02268a50()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02268a50

// auto_initialize_static_wide_string_02268ec0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02268ec0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02268ec0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02268ec0

// auto_initialize_static_wide_string_0226e5a0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0226e5a0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0226e5a0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0226e5a0

// auto_initialize_static_wide_string_02273630: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02273630 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02273630()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02273630

// auto_initialize_static_wide_string_022747e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022747e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022747e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022747e0

// auto_initialize_static_wide_string_02274c50: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02274c50 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02274c50()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02274c50

// auto_initialize_static_wide_string_02274df0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02274df0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02274df0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02274df0

// auto_initialize_static_wide_string_02276bc0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_02276bc0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_02276bc0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_02276bc0

// auto_initialize_static_wide_string_022788e0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022788e0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022788e0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022788e0

// auto_initialize_static_wide_string_0227bdd0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0227bdd0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0227bdd0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0227bdd0

// auto_initialize_static_wide_string_0227c0c0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0227c0c0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0227c0c0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0227c0c0

// auto_initialize_static_wide_string_0227c470: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_0227c470 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_0227c470()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_0227c470

// auto_initialize_static_wide_string_022a7120: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022a7120 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022a7120()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022a7120

// auto_initialize_static_wide_string_022b3be0: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022b3be0 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022b3be0()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022b3be0

// auto_initialize_static_wide_string_022b5500: engine_initialize_static_wide_string_018867e0 with other addresses.
namespace twin_022b5500 {

// Initialize one static empty wide string and register its original destructor. The guard
// is tested as a byte, then published as a full qword only after registration returns.

extern "C" void bb_auto_initialize_static_wide_string_022b5500()
{
    namespace string = engine::static_wide_string;
    if (static_cast<uint8_t>(string::initialization_guard.get()) != 0) return;

    engine::Allocator *allocator = string::default_allocator.get();
    if (!allocator) {
        allocator = string::acquire_default_allocator();
        string::default_allocator.get() = allocator;
    }

    engine::AllocatorInfo info;
    allocator->vtable->info(&info, allocator, 0);
    if ((info.flags & engine::allocator_info_valid) == 0) {
        engine::fatal_error(nullptr, string::invalid_heap_line, string::invalid_heap_message.address());
    }

    // Retain the captured allocator even if the info or diagnostic call changes its singleton.
    engine::WideString &value = string::instance.get();
    value.allocator = allocator;
    value.capacity = engine::wide_string_inline_capacity - 1;
    value.size = 0;
    value.inline_text[0] = u'\0';
    value.owns = 1;
    const auto destructor = reinterpret_cast<string::Destructor>(string::destroy_instance.address());
    (void)string::register_destructor(destructor, &value, string::destructor_dso.address());
    string::initialization_guard.get() = 1;
}

}  // namespace twin_022b5500
