// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "runtime/original.h"

namespace {

/** Query record kind the game sets on every query this function builds. */
constexpr int32_t query_kind_one = 1;

/** Query record flag the game sets on every query it builds. */
constexpr int32_t query_flag_set = 1;

/** Index the game leaves unset on every query it builds. */
constexpr int32_t query_index_unset = -1;

/** Size of the query record in bytes, as the game stores it. */
constexpr uint32_t query_record_size = 0x14;

/** Stride between entries of the item table, in bytes. */
constexpr size_t item_entry_size = 0xd8;

struct ItemQuery {
    int32_t kind;
    int32_t flag;
    uint32_t value;
    int32_t index;
    uint32_t record_size;
};
static_assert(offsetof(ItemQuery, value) == 0x8);
static_assert(offsetof(ItemQuery, record_size) == 0x10);

struct ItemEntry {
    uint8_t unknown_0x0000[item_entry_size];
};
static_assert(sizeof(ItemEntry) == item_entry_size);

struct ItemTable {
    uint8_t unknown_0x0000[0x20];
    int32_t count;
    uint8_t unknown_0x0024[0x4];
    ItemEntry *entries;
};
static_assert(offsetof(ItemTable, count) == 0x20);
static_assert(offsetof(ItemTable, entries) == 0x28);

struct ItemQuerySource {
    uint8_t unknown_0x0000[0x8];
    uint32_t value;
};
static_assert(offsetof(ItemQuerySource, value) == 0x8);

struct ItemQueryRequest {
    uint8_t unknown_0x0000[0x8];
    const ItemQuerySource *source;
};
static_assert(offsetof(ItemQueryRequest, source) == 0x8);

RT_ORIGINAL(0x016e5320, fn_016e5320, void(ItemEntry *, ItemQuery *));
RT_GLOBAL(0x0593b0a0, item_table_global, ItemTable *);
RT_GLOBAL(0x04d35687, item_table_name, const char);

}  // namespace

/**
 *
 * Runs a kind 1 query for every entry of the global item table, using the value of the request's source.
 *
 * A null source returns at once. Otherwise the table must exist (a missing one is reported by name,
 * and the table is read again). Each entry, in order, is passed with a query record holding kind 1,
 * the set flag, the source value, the unset index and the record size. The table count is read once,
 * the entries pointer on every pass.
 */
extern "C" void bb_misc_query_each_table_item_kind1(ItemQueryRequest *request)
{
    const ItemQuerySource *source = request->source;
    if (source == nullptr) return;

    ItemQuery query{};
    query.kind = query_kind_one;
    query.flag = query_flag_set;
    query.value = source->value;
    query.index = query_index_unset;
    query.record_size = query_record_size;

    ItemTable *table = engine::require(item_table_global, item_table_name.address());
    const int32_t count = table->count;
    for (int32_t position = 0; position < count; ++position) {
        fn_016e5320(&table->entries[position], &query);
    }
}
