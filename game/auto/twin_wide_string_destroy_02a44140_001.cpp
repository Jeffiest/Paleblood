// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as engine_wide_string_destroy, in game/engine/wide_string_destroy.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../engine/wide_string.h"

// auto_wide_string_destroy_01448540: engine_wide_string_destroy with other addresses.
namespace twin_01448540 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_01448540(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_01448540

// auto_wide_string_destroy_0162c8e0: engine_wide_string_destroy with other addresses.
namespace twin_0162c8e0 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_0162c8e0(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_0162c8e0

// auto_wide_string_destroy_0162ee10: engine_wide_string_destroy with other addresses.
namespace twin_0162ee10 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_0162ee10(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_0162ee10

// auto_wide_string_destroy_016d6bf0: engine_wide_string_destroy with other addresses.
namespace twin_016d6bf0 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_016d6bf0(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_016d6bf0

// auto_wide_string_destroy_01799970: engine_wide_string_destroy with other addresses.
namespace twin_01799970 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_01799970(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_01799970

// auto_wide_string_destroy_017999b0: engine_wide_string_destroy with other addresses.
namespace twin_017999b0 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_017999b0(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_017999b0

// auto_wide_string_destroy_0190dfb0: engine_wide_string_destroy with other addresses.
namespace twin_0190dfb0 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_0190dfb0(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_0190dfb0

// auto_wide_string_destroy_01937390: engine_wide_string_destroy with other addresses.
namespace twin_01937390 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_01937390(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_01937390

// auto_wide_string_destroy_01943230: engine_wide_string_destroy with other addresses.
namespace twin_01943230 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_01943230(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_01943230

// auto_wide_string_destroy_01943270: engine_wide_string_destroy with other addresses.
namespace twin_01943270 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_01943270(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_01943270

// auto_wide_string_destroy_019433b0: engine_wide_string_destroy with other addresses.
namespace twin_019433b0 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_019433b0(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_019433b0

// auto_wide_string_destroy_019434f0: engine_wide_string_destroy with other addresses.
namespace twin_019434f0 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_019434f0(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_019434f0

// auto_wide_string_destroy_01943530: engine_wide_string_destroy with other addresses.
namespace twin_01943530 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_01943530(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_01943530

// auto_wide_string_destroy_01b13550: engine_wide_string_destroy with other addresses.
namespace twin_01b13550 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_01b13550(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_01b13550

// auto_wide_string_destroy_01d07c00: engine_wide_string_destroy with other addresses.
namespace twin_01d07c00 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_01d07c00(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_01d07c00

// auto_wide_string_destroy_02a7b950: engine_wide_string_destroy with other addresses.
namespace twin_02a7b950 {

// Release heap storage when selected by capacity, then reset the string to empty inline form.
// The ownership byte is not consulted or reset by this destructor.

extern "C" void bb_auto_wide_string_destroy_02a7b950(engine::WideString *value)
{
    engine::wide_string_release(value);
    // These stores follow the callback, including when it changes the object itself.
    value->capacity = engine::wide_string_inline_capacity - 1;
    value->size = 0;
    value->inline_text[0] = u'\0';
}

}  // namespace twin_02a7b950
