// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_lookup_second_list_address, in game/misc/lookup_second_list_address.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstddef>
#include <cstdint>
#include "../misc/link_lookup_table.h"

// auto_lookup_second_list_address_0094bc10: misc_lookup_second_list_address with other addresses.
namespace twin_0094bc10 {

/**
 *
 * Returns the address of a lookup table's second list field, without reading the table.
 *
 */
extern "C" uint64_t bb_auto_lookup_second_list_address_0094bc10(misc::LinkLookupTable *table)
{
    return reinterpret_cast<uint64_t>(table) + offsetof(misc::LinkLookupTable, second_entries);
}

}  // namespace twin_0094bc10

// auto_lookup_second_list_address_00958550: misc_lookup_second_list_address with other addresses.
namespace twin_00958550 {

/**
 *
 * Returns the address of a lookup table's second list field, without reading the table.
 *
 */
extern "C" uint64_t bb_auto_lookup_second_list_address_00958550(misc::LinkLookupTable *table)
{
    return reinterpret_cast<uint64_t>(table) + offsetof(misc::LinkLookupTable, second_entries);
}

}  // namespace twin_00958550

// auto_lookup_second_list_address_016ede30: misc_lookup_second_list_address with other addresses.
namespace twin_016ede30 {

/**
 *
 * Returns the address of a lookup table's second list field, without reading the table.
 *
 */
extern "C" uint64_t bb_auto_lookup_second_list_address_016ede30(misc::LinkLookupTable *table)
{
    return reinterpret_cast<uint64_t>(table) + offsetof(misc::LinkLookupTable, second_entries);
}

}  // namespace twin_016ede30

// auto_lookup_second_list_address_021372c0: misc_lookup_second_list_address with other addresses.
namespace twin_021372c0 {

/**
 *
 * Returns the address of a lookup table's second list field, without reading the table.
 *
 */
extern "C" uint64_t bb_auto_lookup_second_list_address_021372c0(misc::LinkLookupTable *table)
{
    return reinterpret_cast<uint64_t>(table) + offsetof(misc::LinkLookupTable, second_entries);
}

}  // namespace twin_021372c0
