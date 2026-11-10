// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as render_clear_swap_chain_curve, in game/render/clear_swap_chain_curve.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../render/swap_chain_cleanup.h"

// auto_clear_swap_chain_curve_02572770: render_clear_swap_chain_curve with other addresses.
namespace twin_02572770 {

// Release the borrowed cleanup resource and clear its slot after the callback.

extern "C" void bb_auto_clear_swap_chain_curve_02572770(render::SwapChainCleanupRecord *record)
{
    render::clear_swap_chain_cleanup_record(record);
}

}  // namespace twin_02572770
