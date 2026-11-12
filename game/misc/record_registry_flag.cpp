// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "record_registry.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x05527af8, record_registry_flag, int32_t);
RT_GLOBAL(0x04d3b369, record_registry_source_file, const char);
RT_GLOBAL(0x04d3b3bd, record_registry_null_message, const char);

RT_ORIGINAL(0x024b55b0, fn_024b55b0, void(const char *file, int32_t line, const char *message, ...));

/** The source line the engine reports when the registry is missing. */
constexpr int32_t registry_missing_line = 0xb1;
/** The mask of the low byte, the part of RAX that the flag test replaces. */
constexpr uint64_t low_byte_mask = 0xff;
/** The bit of the mode word that the result is taken from. */
constexpr uint32_t mode_bit_shift = 0x16;
/** The mask of that single mode bit. */
constexpr uint64_t mode_bit_mask = 1;

}  // namespace

/**
 *
 * Returns the registry flag: a non-negative flag gives whether it is set, otherwise the mode bit of the registry.
 *
 * The registry is fetched from its global; a missing registry is reported through the engine's fatal report, which
 * returns, and the fetch is repeated. The low byte of the result is replaced, the upper bytes keep the value that
 * was in RAX (the registry pointer, or the shifted mode word).
 *
 */
extern "C" uint64_t bb_misc_record_registry_flag()
{
    misc::RecordRegistry *registry = misc::record_registry.get();
    if (registry == nullptr) {
        fn_024b55b0(record_registry_source_file.address(), registry_missing_line,
                    record_registry_null_message.address(), misc::record_registry_name.address());
        registry = misc::record_registry.get();
    }
    const int32_t flag = record_registry_flag.get();
    if (flag >= 0) {
        const uint64_t registry_bits = reinterpret_cast<uint64_t>(registry);
        const uint64_t flag_bit = (flag != 0) ? mode_bit_mask : 0;
        return (registry_bits & ~low_byte_mask) | flag_bit;
    }
    const uint64_t shifted = registry->mode_word_0xa60 >> mode_bit_shift;
    return (shifted & ~low_byte_mask) | (shifted & mode_bit_mask);
}
