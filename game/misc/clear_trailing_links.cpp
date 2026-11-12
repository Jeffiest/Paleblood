// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "trailing_link_block.h"

/**
 *
 * Clears the four link words at the end of a block, leaving the leading part untouched.
 *
 * The block's address is the only input, and the function returns nothing.
 */
extern "C" void bb_misc_clear_trailing_links(misc::TrailingLinkBlock *block)
{
    block->link_d = 0;
    block->link_c = 0;
    block->link_b = 0;
    block->link_a = 0;
}
