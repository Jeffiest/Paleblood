// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "configured_holder.h"
#include "configured_record.h"
#include "misc.h"
#include "runtime/original.h"

namespace {

RT_ORIGINAL(0x00410290, fn_00410290, void(misc::ConfiguredHolder *self));
RT_ORIGINAL(0x0042e660, fn_0042e660, void(void *source, uint32_t mode));
RT_ORIGINAL(0x00411030, fn_00411030, void(void *detail, void *source, uint32_t mode));
RT_GLOBAL(0x0553c2a0, record_table, const uint8_t);

/** The offset of the record vtable inside its table. */
constexpr uint64_t record_vtable_offset = 0x10;
/** The bit of the flags that selects the mode of the blocks. */
constexpr uint32_t mode_flag = 0x10000000;
/** The position of the mode bit in the mode value. */
constexpr uint32_t mode_shift = 28;
/** The size of the source block, and of the detail block. */
constexpr uint32_t source_block_size = 0x28;
constexpr uint32_t detail_block_size = 0x58;
/** The size of the record. */
constexpr uint32_t record_size = 0x18;
/** The kind and the width the record is made with. */
constexpr uint32_t record_kind = 1;
constexpr uint32_t record_width = 0x10;
/** The ids the holder is configured with. */
constexpr uint32_t configure_detail_id = 0xc;
constexpr uint32_t configure_record_id = 0x10;
constexpr uint32_t configure_final_id = 0x1d;
/** The flags an allocation is made with. */
constexpr uint32_t allocation_flags = 0;

}  // namespace

/**
 *
 * Configures a holder from its arguments: it builds a source block and a detail block from the mode
 * bit of the flags, configures the detail with the first word, builds a record that it is configured
 * with, and returns the result of the final configuration. Without a detail block the final
 * configuration is not made and the result is left as the detail step leaves it.
 *
 */
extern "C" uint64_t bb_misc_configure_holder(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    fn_00410290(self);
    self->flags = args->flags;
    const uint32_t mode = (args->flags & mode_flag) >> mode_shift;

    misc::Service *service = misc::scratch_service.get();
    self->source = service->vtable->allocate(service, source_block_size, allocation_flags);
    fn_0042e660(self->source, mode);

    service = misc::scratch_service.get();
    void *detail = service->vtable->allocate(service, detail_block_size, allocation_flags);
    fn_00411030(detail, self->source, mode);
    self->detail = detail;
    if (detail == nullptr) {
        return 0;
    }

    self->vtable->configure(self, configure_detail_id, args->first);

    service = misc::scratch_service.get();
    auto *record = static_cast<misc::ConfiguredRecord *>(
        service->vtable->allocate(service, record_size, allocation_flags));
    record->vtable = static_cast<const uint8_t *>(record_table.address()) + record_vtable_offset;
    record->kind = record_kind;
    record->width = record_width;
    record->value = 0;
    self->vtable->configure(self, configure_record_id, reinterpret_cast<uint64_t>(record));
    misc::fn_0045a4c0(record);

    return self->vtable->configure(self, configure_final_id, args->second);
}
