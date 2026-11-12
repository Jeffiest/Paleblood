// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstdint>

#include "attached_record.h"
#include "record_acceptor.h"
#include "record_attach_owner.h"
#include "record_factory.h"
#include "runtime/original.h"

namespace {

RT_GLOBAL(0x0576e2b0, attached_record_vtable, const uint8_t);
RT_GLOBAL(0x04d605e6, attached_record_name, const char);

RT_ORIGINAL(0x018a9d20, fn_018a9d20, void());
RT_ORIGINAL(0x0140ce80, fn_0140ce80, misc::RecordFactory *());
RT_ORIGINAL(0x01401720, fn_01401720, void(misc::AttachedRecord *record));
RT_ORIGINAL(0x01402080, fn_01402080, void(misc::AttachedRecord *record));

/** The alignment the factory is asked for when it allocates a record. */
constexpr uint32_t record_alignment = 8;

/**
 *
 * Builds a new record: runs its constructor, then stores its name, vtable, owner, callback entry and two zero words.
 *
 */
void build_record(misc::AttachedRecord *record, misc::RecordAttachOwner *owner)
{
    fn_01402080(record);
    record->name_0x48 = attached_record_name.address();
    record->vtable = attached_record_vtable.address();
    record->owner_0x50 = owner;
    record->callback_0x58 = fn_018a9d20.address();
    record->zero_0x60 = 0;
    record->zero_0x68 = 0;
}

}  // namespace

/**
 *
 * Replaces the owner's attached record with a new one that the acceptor takes.
 *
 * A held record is destroyed and the slot cleared first. With no acceptor nothing else happens. Otherwise a
 * record is allocated from the factory and built when the allocation succeeds, and the acceptor's decision (its
 * low byte) decides whether the owner keeps it or holds nothing.
 *
 */
extern "C" void bb_misc_attach_record_when_accepted(misc::RecordAttachOwner *owner, misc::RecordAcceptor *acceptor)
{
    if (owner->attached_record_0xc0 != nullptr) {
        fn_01401720(owner->attached_record_0xc0);
        owner->attached_record_0xc0 = nullptr;
    }
    if (acceptor == nullptr) {
        return;
    }
    misc::RecordFactory *factory = fn_0140ce80();
    auto *record = static_cast<misc::AttachedRecord *>(
        factory->vtable->allocate(factory, static_cast<uint32_t>(misc::attached_record_size), record_alignment));
    if (record != nullptr) {
        build_record(record, owner);
    }
    const bool accepted = acceptor->vtable->accept(acceptor, record, true);
    owner->attached_record_0xc0 = accepted ? record : nullptr;
}
