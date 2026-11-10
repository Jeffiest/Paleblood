// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_begin_configure_holder, in game/misc/begin_configure_holder.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include <cstdint>
#include "../misc/configured_holder.h"
#include "../misc/misc.h"
#include "runtime/original.h"

// auto_begin_configure_holder_00a14d40: misc_begin_configure_holder with other addresses.
namespace twin_00a14d40 {

namespace {

RT_ORIGINAL(0x00a3e670, fn_00a3e670, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x05658de0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_00a14d40(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_00a3e670(self, args);
}

}  // namespace twin_00a14d40

// auto_begin_configure_holder_011000a0: misc_begin_configure_holder with other addresses.
namespace twin_011000a0 {

namespace {

RT_ORIGINAL(0x02bca710, fn_02bca710, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056cd6f0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_011000a0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02bca710(self, args);
}

}  // namespace twin_011000a0

// auto_begin_configure_holder_01252e30: misc_begin_configure_holder with other addresses.
namespace twin_01252e30 {

namespace {

RT_ORIGINAL(0x01252e50, fn_01252e50, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e74b0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_01252e30(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_01252e50(self, args);
}

}  // namespace twin_01252e30

// auto_begin_configure_holder_0126c820: misc_begin_configure_holder with other addresses.
namespace twin_0126c820 {

namespace {

RT_ORIGINAL(0x0126c840, fn_0126c840, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e7fa0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_0126c820(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_0126c840(self, args);
}

}  // namespace twin_0126c820

// auto_begin_configure_holder_0126e1d0: misc_begin_configure_holder with other addresses.
namespace twin_0126e1d0 {

namespace {

RT_ORIGINAL(0x0126e1f0, fn_0126e1f0, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e8010, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_0126e1d0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_0126e1f0(self, args);
}

}  // namespace twin_0126e1d0

// auto_begin_configure_holder_012728c0: misc_begin_configure_holder with other addresses.
namespace twin_012728c0 {

namespace {

RT_ORIGINAL(0x012728e0, fn_012728e0, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e8390, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_012728c0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_012728e0(self, args);
}

}  // namespace twin_012728c0

// auto_begin_configure_holder_012760a0: misc_begin_configure_holder with other addresses.
namespace twin_012760a0 {

namespace {

RT_ORIGINAL(0x012760c0, fn_012760c0, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e8490, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_012760a0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_012760c0(self, args);
}

}  // namespace twin_012760a0

// auto_begin_configure_holder_01278ae0: misc_begin_configure_holder with other addresses.
namespace twin_01278ae0 {

namespace {

RT_ORIGINAL(0x01278b00, fn_01278b00, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e86e0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_01278ae0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_01278b00(self, args);
}

}  // namespace twin_01278ae0

// auto_begin_configure_holder_012797f0: misc_begin_configure_holder with other addresses.
namespace twin_012797f0 {

namespace {

RT_ORIGINAL(0x01279810, fn_01279810, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e8700, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_012797f0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_01279810(self, args);
}

}  // namespace twin_012797f0

// auto_begin_configure_holder_0127f210: misc_begin_configure_holder with other addresses.
namespace twin_0127f210 {

namespace {

RT_ORIGINAL(0x0127f230, fn_0127f230, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e8870, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_0127f210(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_0127f230(self, args);
}

}  // namespace twin_0127f210

// auto_begin_configure_holder_01280e40: misc_begin_configure_holder with other addresses.
namespace twin_01280e40 {

namespace {

RT_ORIGINAL(0x01280e60, fn_01280e60, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e88d0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_01280e40(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_01280e60(self, args);
}

}  // namespace twin_01280e40

// auto_begin_configure_holder_012825a0: misc_begin_configure_holder with other addresses.
namespace twin_012825a0 {

namespace {

RT_ORIGINAL(0x012825c0, fn_012825c0, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e88f0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_012825a0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_012825c0(self, args);
}

}  // namespace twin_012825a0

// auto_begin_configure_holder_01283950: misc_begin_configure_holder with other addresses.
namespace twin_01283950 {

namespace {

RT_ORIGINAL(0x01283970, fn_01283970, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e8910, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_01283950(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_01283970(self, args);
}

}  // namespace twin_01283950

// auto_begin_configure_holder_01285a50: misc_begin_configure_holder with other addresses.
namespace twin_01285a50 {

namespace {

RT_ORIGINAL(0x01285a70, fn_01285a70, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e8980, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_01285a50(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_01285a70(self, args);
}

}  // namespace twin_01285a50

// auto_begin_configure_holder_0128b330: misc_begin_configure_holder with other addresses.
namespace twin_0128b330 {

namespace {

RT_ORIGINAL(0x0128b350, fn_0128b350, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e8a20, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_0128b330(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_0128b350(self, args);
}

}  // namespace twin_0128b330

// auto_begin_configure_holder_0128ef80: misc_begin_configure_holder with other addresses.
namespace twin_0128ef80 {

namespace {

RT_ORIGINAL(0x0128efa0, fn_0128efa0, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e8b30, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_0128ef80(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_0128efa0(self, args);
}

}  // namespace twin_0128ef80

// auto_begin_configure_holder_0129eb30: misc_begin_configure_holder with other addresses.
namespace twin_0129eb30 {

namespace {

RT_ORIGINAL(0x0129eb50, fn_0129eb50, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e8ee0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_0129eb30(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_0129eb50(self, args);
}

}  // namespace twin_0129eb30

// auto_begin_configure_holder_0129f430: misc_begin_configure_holder with other addresses.
namespace twin_0129f430 {

namespace {

RT_ORIGINAL(0x0129f450, fn_0129f450, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e8f00, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_0129f430(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_0129f450(self, args);
}

}  // namespace twin_0129f430

// auto_begin_configure_holder_012d0f00: misc_begin_configure_holder with other addresses.
namespace twin_012d0f00 {

namespace {

RT_ORIGINAL(0x012d0f20, fn_012d0f20, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056ea260, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_012d0f00(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_012d0f20(self, args);
}

}  // namespace twin_012d0f00

// auto_begin_configure_holder_012fdc50: misc_begin_configure_holder with other addresses.
namespace twin_012fdc50 {

namespace {

RT_ORIGINAL(0x012fe0e0, fn_012fe0e0, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056eb320, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_012fdc50(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_012fe0e0(self, args);
}

}  // namespace twin_012fdc50

// auto_begin_configure_holder_01332d50: misc_begin_configure_holder with other addresses.
namespace twin_01332d50 {

namespace {

RT_ORIGINAL(0x01332d70, fn_01332d70, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056ebef0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_01332d50(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_01332d70(self, args);
}

}  // namespace twin_01332d50

// auto_begin_configure_holder_013885d0: misc_begin_configure_holder with other addresses.
namespace twin_013885d0 {

namespace {

RT_ORIGINAL(0x013885f0, fn_013885f0, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056f1780, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_013885d0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_013885f0(self, args);
}

}  // namespace twin_013885d0

// auto_begin_configure_holder_01388870: misc_begin_configure_holder with other addresses.
namespace twin_01388870 {

namespace {

RT_ORIGINAL(0x01388890, fn_01388890, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056f1780, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_01388870(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_01388890(self, args);
}

}  // namespace twin_01388870

// auto_begin_configure_holder_013d3b30: misc_begin_configure_holder with other addresses.
namespace twin_013d3b30 {

namespace {

RT_ORIGINAL(0x013d3b50, fn_013d3b50, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056f54a0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_013d3b30(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_013d3b50(self, args);
}

}  // namespace twin_013d3b30

// auto_begin_configure_holder_01463450: misc_begin_configure_holder with other addresses.
namespace twin_01463450 {

namespace {

RT_ORIGINAL(0x02783780, fn_02783780, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x05700230, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_01463450(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02783780(self, args);
}

}  // namespace twin_01463450

// auto_begin_configure_holder_02b124a0: misc_begin_configure_holder with other addresses.
namespace twin_02b124a0 {

namespace {

RT_ORIGINAL(0x02b0ca40, fn_02b0ca40, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056c4600, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02b124a0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02b0ca40(self, args);
}

}  // namespace twin_02b124a0

// auto_begin_configure_holder_02b19920: misc_begin_configure_holder with other addresses.
namespace twin_02b19920 {

namespace {

RT_ORIGINAL(0x02b15f90, fn_02b15f90, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056c5250, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02b19920(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02b15f90(self, args);
}

}  // namespace twin_02b19920

// auto_begin_configure_holder_02b1c5b0: misc_begin_configure_holder with other addresses.
namespace twin_02b1c5b0 {

namespace {

RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056c5430, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02b1c5b0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02fbe588(self, args);
}

}  // namespace twin_02b1c5b0

// auto_begin_configure_holder_02c0c370: misc_begin_configure_holder with other addresses.
namespace twin_02c0c370 {

namespace {

RT_ORIGINAL(0x02c0aa10, fn_02c0aa10, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056d05f0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02c0c370(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02c0aa10(self, args);
}

}  // namespace twin_02c0c370

// auto_begin_configure_holder_02cec740: misc_begin_configure_holder with other addresses.
namespace twin_02cec740 {

namespace {

RT_ORIGINAL(0x02e8eda0, fn_02e8eda0, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e3220, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02cec740(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02e8eda0(self, args);
}

}  // namespace twin_02cec740

// auto_begin_configure_holder_02ced940: misc_begin_configure_holder with other addresses.
namespace twin_02ced940 {

namespace {

RT_ORIGINAL(0x02e95920, fn_02e95920, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e3280, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02ced940(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02e95920(self, args);
}

}  // namespace twin_02ced940

// auto_begin_configure_holder_02cefbf0: misc_begin_configure_holder with other addresses.
namespace twin_02cefbf0 {

namespace {

RT_ORIGINAL(0x02e9a160, fn_02e9a160, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e32e0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02cefbf0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02e9a160(self, args);
}

}  // namespace twin_02cefbf0

// auto_begin_configure_holder_02cf05d0: misc_begin_configure_holder with other addresses.
namespace twin_02cf05d0 {

namespace {

RT_ORIGINAL(0x02ea24c0, fn_02ea24c0, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e3340, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02cf05d0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02ea24c0(self, args);
}

}  // namespace twin_02cf05d0

// auto_begin_configure_holder_02cf1490: misc_begin_configure_holder with other addresses.
namespace twin_02cf1490 {

namespace {

RT_ORIGINAL(0x02eaa520, fn_02eaa520, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e33a0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02cf1490(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02eaa520(self, args);
}

}  // namespace twin_02cf1490

// auto_begin_configure_holder_02cf1da0: misc_begin_configure_holder with other addresses.
namespace twin_02cf1da0 {

namespace {

RT_ORIGINAL(0x02eac1e0, fn_02eac1e0, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e3400, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02cf1da0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02eac1e0(self, args);
}

}  // namespace twin_02cf1da0

// auto_begin_configure_holder_02cf26c0: misc_begin_configure_holder with other addresses.
namespace twin_02cf26c0 {

namespace {

RT_ORIGINAL(0x02eaf260, fn_02eaf260, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e3460, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02cf26c0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02eaf260(self, args);
}

}  // namespace twin_02cf26c0

// auto_begin_configure_holder_02cf4080: misc_begin_configure_holder with other addresses.
namespace twin_02cf4080 {

namespace {

RT_ORIGINAL(0x02eb14b0, fn_02eb14b0, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e34c0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02cf4080(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02eb14b0(self, args);
}

}  // namespace twin_02cf4080

// auto_begin_configure_holder_02cf5c80: misc_begin_configure_holder with other addresses.
namespace twin_02cf5c80 {

namespace {

RT_ORIGINAL(0x02ebc240, fn_02ebc240, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e3570, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02cf5c80(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02ebc240(self, args);
}

}  // namespace twin_02cf5c80

// auto_begin_configure_holder_02cf7880: misc_begin_configure_holder with other addresses.
namespace twin_02cf7880 {

namespace {

RT_ORIGINAL(0x02ec0a20, fn_02ec0a20, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e35c0, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02cf7880(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02ec0a20(self, args);
}

}  // namespace twin_02cf7880

// auto_begin_configure_holder_02cf83c0: misc_begin_configure_holder with other addresses.
namespace twin_02cf83c0 {

namespace {

RT_ORIGINAL(0x02ec1d90, fn_02ec1d90, uint64_t(misc::ConfiguredHolder *self, misc::ConfigureArguments *args));
RT_GLOBAL(0x056e3610, holder_table, const uint8_t);

/** The offset of the holder vtable inside its table. */
constexpr uint64_t holder_vtable_offset = 0x10;

}  // namespace

/**
 *
 * Gives a holder its vtable and configures it through the full configuration, which returns the
 * configuration's result.
 *
 */
extern "C" uint64_t bb_auto_begin_configure_holder_02cf83c0(misc::ConfiguredHolder *self, misc::ConfigureArguments *args)
{
    self->vtable = reinterpret_cast<const misc::ConfiguredHolderVtable *>(
        static_cast<const uint8_t *>(holder_table.address()) + holder_vtable_offset);
    return fn_02ec1d90(self, args);
}

}  // namespace twin_02cf83c0
