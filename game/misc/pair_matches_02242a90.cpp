// SPDX-License-Identifier: GPL-2.0-or-later
#include "pair_key_owner.h"

/**
 *
 * Reports whether a two-word pair of the pair size matches the owner's two keys.
 *
 */
extern "C" bool bb_misc_pair_matches_02242a90(const misc::PairKeyOwner *owner, const misc::KeyPair *pair, int32_t size)
{
    return misc::pair_matches(owner, pair, size);
}
