// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: looks up a request's list node when its flag bit is set, takes the pair singleton, and builds a lookup entry for the caller.
#include <cstddef>
#include <cstdint>

#include "lookup_request.h"
#include "pair_singleton.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x05ac76e8, pair_singleton_instance, misc::PairSingleton *);
RT_GLOBAL(0x05ac76f0, pair_singleton_pending, uint8_t);
RT_GLOBAL(0x05ac76f8, pair_singleton_storage, misc::PairSingleton);
RT_GLOBAL(0x05ac7748, pair_singleton_guard, uint8_t);
RT_GLOBAL(0x056c99a0, pair_singleton_vtable, uint8_t);
RT_GLOBAL(0x056c9820, lookup_entry_vtable, uint8_t);
RT_GLOBAL(0x05ac5f5c, lookup_key, uint8_t);

RT_ORIGINAL(0x024ede50, lazy_setup, void());
RT_ORIGINAL(0x024b6d00, construct, void(misc::PairSingleton *));
RT_ORIGINAL(0x02fbe538, guard_acquire, int32_t(uint8_t *));
RT_ORIGINAL(0x02fbe558, guard_release, void(uint8_t *));
RT_ORIGINAL(0x024b8500, find_lookup_node, uint64_t(uint64_t key));
RT_ORIGINAL(0x0247c4e0, allocate_entry, uint64_t(uint32_t size, uint32_t alignment, uint64_t pool));
RT_ORIGINAL(0x02baa950, fill_entry, void(uint8_t *payload, uint64_t source));

/** The offset of the usable vtable entry within the vtable block. */
constexpr uintptr_t vtable_address_point = 0x10;

/** The mode a request must hold for the lookup to run. */
constexpr uint8_t required_mode = 1;

/** The flag bit that selects the list walk and the primary source word. */
constexpr uint16_t primary_flag = 1;

/** The size and alignment of the entry the lookup allocates. */
constexpr uint32_t entry_size = 0x40;
constexpr uint32_t entry_alignment = 0x8;

/**
 *
 * Returns the pair singleton, building it in its storage when the instance pointer is still null.
 *
 * The build clears the pending flag when it is set, runs the one-time guard when the guard byte is clear, constructs
 * the singleton and then publishes it in the instance pointer.
 */
misc::PairSingleton *ensure_pair_singleton()
{
    misc::PairSingleton *singleton = pair_singleton_instance.get();
    if (singleton != nullptr) return singleton;
    lazy_setup();
    singleton = pair_singleton_instance.get();
    if (singleton != nullptr) return singleton;
    if (pair_singleton_pending.get() != 0) pair_singleton_pending.get() = 0;
    if (pair_singleton_guard.get() == 0 && guard_acquire(&pair_singleton_guard.get()) != 0) {
        guard_release(&pair_singleton_guard.get());
    }
    misc::PairSingleton *built = pair_singleton_storage.address();
    construct(built);
    built->vtable = pair_singleton_vtable.address() + vtable_address_point;
    built->value_0x48 = 0;
    built->value_0x40 = 0;
    pair_singleton_instance.get() = built;
    return built;
}

/**
 *
 * Reports whether the request's list holds the target node. The walk starts at the head and follows each node's link;
 * it fails when the list is empty or ends before the target.
 */
bool list_holds_node(const misc::LookupRequest *request, uint64_t target)
{
    misc::LookupNode *node = request->head;
    if (node == nullptr) return false;
    while (reinterpret_cast<uint64_t>(node) != target) {
        node = node->next;
        if (node == nullptr) return false;
    }
    return true;
}

/**
 *
 * Writes the pair the caller receives: the singleton and the result word. Returns the record's address, which the
 * original returns in RAX.
 */
uint64_t store_result(misc::PairSingletonResult *out, misc::PairSingleton *singleton, uint64_t result)
{
    out->singleton = singleton;
    out->result = result;
    return reinterpret_cast<uint64_t>(out);
}

}  // namespace

/**
 *
 * Fills the caller's pair. A request that is null or whose mode is not one gives a null pair. When the flag bit is set,
 * the key's list node must be found on the request's list, and the primary source word must be nonzero; otherwise the
 * pair is null. The pair singleton is then taken, and an entry is allocated from the request's pool and given its
 * vtable. The fill routine receives the primary word when the flag bit is set and the secondary word when it is clear.
 * An allocation that fails leaves the entry out: the pair then holds the singleton and a null result. The original
 * tests a second flag byte of the request before the allocation, but both of its outcomes make the same calls, so it
 * is not read here.
 */
extern "C" uint64_t bb_misc_pair_list_lookup_02ba9210(misc::PairSingletonResult *out,
                                                      uint64_t /* the original never reads RSI */,
                                                      misc::LookupRequest *request)
{
    if (request == nullptr || request->mode != required_mode) return store_result(out, nullptr, 0);

    const bool primary = (request->flags & primary_flag) != 0;
    if (primary) {
        if (request->primary_word == 0) return store_result(out, nullptr, 0);
        const uint64_t target = find_lookup_node(reinterpret_cast<uint64_t>(lookup_key.address()));
        if (target == 0 || !list_holds_node(request, target)) return store_result(out, nullptr, 0);
    }

    misc::PairSingleton *singleton = ensure_pair_singleton();
    const uint64_t entry_address = allocate_entry(entry_size, entry_alignment, request->pool);
    if (entry_address == 0) return store_result(out, singleton, 0);

    auto *entry = reinterpret_cast<misc::LookupEntry *>(entry_address);
    entry->vtable = lookup_entry_vtable.address() + vtable_address_point;
    fill_entry(entry->payload, primary ? request->primary_word : request->secondary_word);
    return store_result(out, singleton, entry_address);
}
