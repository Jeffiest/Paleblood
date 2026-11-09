// SPDX-License-Identifier: GPL-2.0-or-later
// Engine: the payload address of a handle owner, from its cached pointer or from its handle's entry.
// Same lookup as engine_handle_payload, with a second fallback global for a zero handle.
#include "handle_entry.h"

#include "runtime/original.h"

namespace {

/**
 *
 * Global whose address is returned when the owner has neither a cached payload nor a handle.
 *
 */
RT_GLOBAL(0x05ac5570, fallback_payload, uint8_t);

/**
 *
 * The fields of an owner that the payload lookup reads.
 *
 */
struct PayloadOwner {
    uint8_t unknown_0x0000[0x48];
    uint64_t handle; /**< Handle of the entry whose payload is returned when no cached payload is set. */
    uint8_t unknown_0x0050[0x10];
    uintptr_t cached_payload; /**< Payload address returned as it is when not zero. */
};
static_assert(offsetof(PayloadOwner, handle) == 0x48);
static_assert(offsetof(PayloadOwner, cached_payload) == 0x60);

}  // namespace

/**
 *
 * Returns the payload address of an owner.
 *
 * The cached payload wins when set. Otherwise a non-zero handle gives its entry's payload, and a zero
 * handle gives the address of the fallback global.
 *
 */
extern "C" uintptr_t bb_engine_handle_payload_alt(const PayloadOwner *owner)
{
    if (owner->cached_payload != 0) return owner->cached_payload;
    if (owner->handle == 0) return reinterpret_cast<uintptr_t>(fallback_payload.address());
    return reinterpret_cast<uintptr_t>(&engine::handle::resolve(owner->handle)->payload[0]);
}
