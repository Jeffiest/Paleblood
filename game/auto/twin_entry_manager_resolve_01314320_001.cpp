// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as engine_entry_manager_resolve, in game/engine/entry_manager_resolve.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../engine/entry_manager.h"
#include <cstring>

// auto_entry_manager_resolve_01314360: engine_entry_manager_resolve with other addresses.
namespace twin_01314360 {

// Resolve the handle's low-word table index (callers: the 0x02717f30-0x02718c80 family and
// 0x0210f5a0); this helper does not validate the handle's upper word.


extern "C" engine::HandleEntry *bb_auto_entry_manager_resolve_01314360(
    const engine::EntryManager *manager, const engine::EntryHandle *handle)
{
    // Disabled lookup must not read the handle, which may be absent on this path.
    if (manager->lookup_enabled == 0) return nullptr;

    // The original scalar loads also accept unaligned handle and table storage.
    engine::EntryHandle value;
    std::memcpy(&value, handle, sizeof(value));
    if (value == engine::invalid_entry_handle) return nullptr;
    const uint32_t index = static_cast<uint32_t>(value);
    if (index >= manager->capacity) return nullptr;

    engine::HandleEntry *entry;
    const auto *entries = reinterpret_cast<const uint8_t *>(manager->entries);
    std::memcpy(&entry, entries + index * sizeof(entry), sizeof(entry));
    if (reinterpret_cast<uintptr_t>(entry) == engine::missing_entry_address) return nullptr;
    return entry;
}

}  // namespace twin_01314360
