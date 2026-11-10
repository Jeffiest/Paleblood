// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as render_record_step_user_pa_enabled, in game/render/record_step_user_pa_enabled.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "runtime/original.h"

namespace render {}

// auto_record_step_user_pa_enabled_01489b60: render_record_step_user_pa_enabled with other addresses.
namespace twin_01489b60 {
namespace render { using namespace ::render; }

// Normalize the user-PA query result to the byte predicate used by record-step dispatch.



namespace render {
// Record-step dispatch tests the low 32 bits of the original query result for zero.
RT_ORIGINAL(0x02fc06c8, native_is_user_pa_enabled, uint32_t());

// Return one when the query's low DWORD is nonzero, otherwise zero.
RT_ORIGINAL(0x01489b60, record_step_user_pa_enabled, uint8_t());
}  // namespace render

// Query the actual import once; no cached global, fallback or service value is invented.

extern "C" uint8_t bb_auto_record_step_user_pa_enabled_01489b60()
{
    return static_cast<uint8_t>(render::native_is_user_pa_enabled() != 0);
}

}  // namespace twin_01489b60

// auto_record_step_user_pa_enabled_01489c30: render_record_step_user_pa_enabled with other addresses.
namespace twin_01489c30 {
namespace render { using namespace ::render; }

// Normalize the user-PA query result to the byte predicate used by record-step dispatch.



namespace render {
// Record-step dispatch tests the low 32 bits of the original query result for zero.
RT_ORIGINAL(0x02fc0798, native_is_user_pa_enabled, uint32_t());

// Return one when the query's low DWORD is nonzero, otherwise zero.
RT_ORIGINAL(0x01489c30, record_step_user_pa_enabled, uint8_t());
}  // namespace render

// Query the actual import once; no cached global, fallback or service value is invented.

extern "C" uint8_t bb_auto_record_step_user_pa_enabled_01489c30()
{
    return static_cast<uint8_t>(render::native_is_user_pa_enabled() != 0);
}

}  // namespace twin_01489c30

// auto_record_step_user_pa_enabled_0172f9f0: render_record_step_user_pa_enabled with other addresses.
namespace twin_0172f9f0 {
namespace render { using namespace ::render; }

// Normalize the user-PA query result to the byte predicate used by record-step dispatch.



namespace render {
// Record-step dispatch tests the low 32 bits of the original query result for zero.
RT_ORIGINAL(0x01b6b7e0, native_is_user_pa_enabled, uint32_t());

// Return one when the query's low DWORD is nonzero, otherwise zero.
RT_ORIGINAL(0x0172f9f0, record_step_user_pa_enabled, uint8_t());
}  // namespace render

// Query the actual import once; no cached global, fallback or service value is invented.

extern "C" uint8_t bb_auto_record_step_user_pa_enabled_0172f9f0()
{
    return static_cast<uint8_t>(render::native_is_user_pa_enabled() != 0);
}

}  // namespace twin_0172f9f0
