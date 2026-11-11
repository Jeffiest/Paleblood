// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: when the scan source is in its ready state, scans a list for the first item the accept routine takes and tests its rank and flag.
#include <cstddef>
#include <cstdint>

#include "../engine/engine.h"
#include "accept_scan.h"
#include "item_list.h"
#include "listed_item.h"
#include "runtime/original.h"
#include "scan_source.h"

namespace {

RT_GLOBAL(0x05940290, scan_source, misc::ScanSource *);
RT_GLOBAL(0x04d3b369, scan_file, const char);
RT_GLOBAL(0x04d3b3bd, scan_format, const char);
RT_GLOBAL(0x04d3a906, scan_argument, const char);
constexpr int32_t scan_line = 0xb1;

RT_ORIGINAL(0x0108fb30, begin_scan, void(misc::AcceptScan *scan));
RT_ORIGINAL(0x010a1570, finish_scan, void(misc::AcceptScan *scan));
RT_ORIGINAL(0x010a1c70, sink_accepts, uint8_t(void *sink, void *context));

constexpr int32_t rank_limit = 5;
constexpr uint8_t flagged_bit = 0x02;
constexpr int32_t ready_state = 6;

}  // namespace

/**
 *
 * Scans a list for the first item the accept routine takes and reports whether that item is unflagged and ranks at most five.
 *
 * Nothing is scanned unless the scan source's state word reads six. A missing scan source is a fatal error; the state
 * word is then read through the null source, which faults. A null item that is taken, or no item at all, reports false.
 *
 */
extern "C" uint8_t bb_misc_accepted_item_rank_flag_test(misc::ItemList *list)
{
    misc::ScanSource *source = scan_source.get();
    if (source == nullptr) {
        engine::fatal_error(scan_file.address(), scan_line, scan_format.address(), scan_argument.address());
        source = scan_source.get();
    }
    if (source->state_0x124 != ready_state) return false;

    misc::AcceptScan scan;
    begin_scan(&scan);
    misc::ListedItem **const end = list->end_0x18;
    for (misc::ListedItem **slot = list->begin_0x10; slot != end; ++slot) {
        misc::ListedItem *item = *slot;
        // The sink is addressed from the item's base even when the item is null, as the original does.
        const auto sink_address = reinterpret_cast<uintptr_t>(item) + offsetof(misc::ListedItem, sink_region);
        if (sink_accepts(reinterpret_cast<void *>(sink_address), &scan) != 0) {
            finish_scan(&scan);
            if (item == nullptr) return false;
            if (item->vtable->rank_0x58(item) > rank_limit) return false;
            return (item->flags_0xed & flagged_bit) == 0;
        }
    }
    finish_scan(&scan);
    return false;
}
