// SPDX-License-Identifier: GPL-2.0-or-later
// Misc: formats a diagnostic line for a kind-two event: a label first, then the source's fields and text into the event's name.
#include <cstdint>

#include "diagnostic_event.h"
#include "diagnostic_source.h"
#include "formatted_name.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x01890a20, fn_01890a20, void(misc::FormattedName *text, const uint8_t *label));
RT_ORIGINAL(0x02b62d00, format_line, void(misc::FormattedName *name, const char *format, ...));

RT_GLOBAL(0x04d5684a, diagnostic_format, const char);
RT_GLOBAL(0x04dd85f0, diagnostic_unknown_kind, const char);
RT_GLOBAL(0x05724610, diagnostic_kind_names, const char *const);
RT_GLOBAL(0x05724590, diagnostic_index_names, const char *const);

/** The only event kind that produces a line. */
constexpr int32_t diagnostic_event_kind = 2;
/** The last kind that selects its name from the first table; larger kinds (and negative ones) use the default name. */
constexpr uint64_t last_kind_index = 0x34;
/** The flag value shown when the first or second flag is set. */
constexpr int32_t flag_text_set = 0x25cb;
/** The flag value shown when the first or second flag is clear. */
constexpr int32_t flag_text_clear = 0xd7;

}  // namespace

/**
 *
 * Formats a diagnostic line for a kind-two event into the event's name. The label is formatted first into a local
 * name; the line then takes the kind's name (or the default name), the source's numeric fields, the label's and the
 * source's text, the two flag values, the indexed name and the scale.
 *
 * A source whose event is another kind does nothing. The local name is freed through its allocator when its text
 * outgrew the inline buffer.
 *
 */
extern "C" void bb_misc_format_diagnostic_line(misc::DiagnosticSource *source, const misc::DiagnosticEvent *event)
{
    if (event->kind_0x00 != diagnostic_event_kind) {
        return;
    }

    const uint64_t kind_index = static_cast<uint64_t>(static_cast<int64_t>(source->kind_0x08));
    const char *kind_name = diagnostic_unknown_kind.address();
    if (kind_index <= last_kind_index) {
        kind_name = diagnostic_kind_names.address()[kind_index];
    }

    misc::FormattedName label_name;
    fn_01890a20(&label_name, source->label_0x2c);
    const char *label_text = label_name.text();
    const char *source_text = source->text_0x70.text();
    const int32_t first_flag = source->first_flag_0xba ? flag_text_set : flag_text_clear;
    const int32_t second_flag = source->second_flag_0xbb ? flag_text_set : flag_text_clear;
    const uint32_t index = source->index_0xb0;
    const char *index_name = diagnostic_index_names.address()[index];

    format_line(event->name_0x08, diagnostic_format.address(), kind_name, source->value_0x0c, source->value_0x18,
                source->value_0x1c, source->value_0x20, label_text, source_text, first_flag, second_flag, index_name,
                index, static_cast<double>(source->scale_0xb4));

    if (label_name.on_heap()) {
        label_name.allocator_0x28->free(label_name.text_0x08.heap_text);
    }
}
