// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: allocates a lookup entry from the request's pool, or from the shared pool when there is no request, and fills it.
#include <cstddef>
#include <cstdint>

#include "lookup_request.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x05940670, shared_pool, uint64_t);
RT_GLOBAL(0x056c9820, lookup_entry_vtable, uint8_t);

RT_ORIGINAL(0x0247c4e0, allocate_entry, uint64_t(uint32_t size, uint32_t alignment, uint64_t pool));
RT_ORIGINAL(0x02fa2b10, make_shared_pool, uint64_t());
RT_ORIGINAL(0x02baa950, fill_entry, void(uint8_t *payload, uint64_t source));

/** The offset of the usable vtable entry within the vtable block. */
constexpr uintptr_t vtable_address_point = 0x10;

/** The size and alignment of the entry the routine allocates. */
constexpr uint32_t entry_size = 0x40;
constexpr uint32_t entry_alignment = 0x8;

/** The source word the entry's fill routine receives: the original passes zero. */
constexpr uint64_t fill_source = 0;

}  // namespace

/**
 *
 * Builds a lookup entry for the caller and returns it, or returns zero when the allocation fails. A request gives the
 * pool to allocate from; without one the shared pool is used, and it is made on first use and kept. The entry takes
 * its vtable and is filled with a zero source word. The request's flag byte is not read by the original.
 */
extern "C" uint64_t bb_misc_list_entry_from_pool_02baa150(uint64_t /* the original never reads RDI */,
                                                          misc::LookupRequest *request)
{
    uint64_t pool = 0;
    if (request != nullptr) {
        pool = request->pool;
    } else {
        if (shared_pool.get() == 0) shared_pool.get() = make_shared_pool();
        pool = shared_pool.get();
    }

    const uint64_t entry_address = allocate_entry(entry_size, entry_alignment, pool);
    if (entry_address == 0) return 0;

    auto *entry = reinterpret_cast<misc::LookupEntry *>(entry_address);
    entry->vtable = lookup_entry_vtable.address() + vtable_address_point;
    fill_entry(entry->payload, fill_source);
    return entry_address;
}
