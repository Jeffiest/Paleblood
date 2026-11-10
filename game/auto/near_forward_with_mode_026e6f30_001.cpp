// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the instructions of misc_forward_with_mode, in game/misc/forward_with_mode.cpp, each using other addresses and constants.
// Every block below is one source text with the addresses and constants exchanged.
#include <cstddef>
#include <cstdint>
#include "../misc/root_state.h"
#include "runtime/original.h"

// auto_forward_with_mode_01274a90: misc_forward_with_mode with other addresses and constants.
namespace near_01274a90 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x60;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_01274a90(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_01274a90

// auto_forward_with_mode_0127b270: misc_forward_with_mode with other addresses and constants.
namespace near_0127b270 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x5c;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_0127b270(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_0127b270

// auto_forward_with_mode_0127d990: misc_forward_with_mode with other addresses and constants.
namespace near_0127d990 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x64;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_0127d990(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_0127d990

// auto_forward_with_mode_012899b0: misc_forward_with_mode with other addresses and constants.
namespace near_012899b0 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x50;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_012899b0(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_012899b0

// auto_forward_with_mode_01291530: misc_forward_with_mode with other addresses and constants.
namespace near_01291530 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x74;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_01291530(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_01291530

// auto_forward_with_mode_025e1380: misc_forward_with_mode with other addresses and constants.
namespace near_025e1380 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x4c;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_025e1380(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_025e1380

// auto_forward_with_mode_025e6190: misc_forward_with_mode with other addresses and constants.
namespace near_025e6190 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x3c;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_025e6190(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_025e6190

// auto_forward_with_mode_025e9ff0: misc_forward_with_mode with other addresses and constants.
namespace near_025e9ff0 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x40;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_025e9ff0(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_025e9ff0

// auto_forward_with_mode_025ef1a0: misc_forward_with_mode with other addresses and constants.
namespace near_025ef1a0 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x38;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_025ef1a0(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_025ef1a0

// auto_forward_with_mode_025f2a50: misc_forward_with_mode with other addresses and constants.
namespace near_025f2a50 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x44;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_025f2a50(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_025f2a50

// auto_forward_with_mode_025f6770: misc_forward_with_mode with other addresses and constants.
namespace near_025f6770 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x54;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_025f6770(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_025f6770

// auto_forward_with_mode_025fa320: misc_forward_with_mode with other addresses and constants.
namespace near_025fa320 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x48;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_025fa320(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_025fa320

// auto_forward_with_mode_025fe830: misc_forward_with_mode with other addresses and constants.
namespace near_025fe830 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x30;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_025fe830(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_025fe830

// auto_forward_with_mode_02604360: misc_forward_with_mode with other addresses and constants.
namespace near_02604360 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x34;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_02604360(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_02604360

// auto_forward_with_mode_0261c240: misc_forward_with_mode with other addresses and constants.
namespace near_0261c240 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x58;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_0261c240(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_0261c240

// auto_forward_with_mode_0261ed80: misc_forward_with_mode with other addresses and constants.
namespace near_0261ed80 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x84;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_0261ed80(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_0261ed80

// auto_forward_with_mode_02625a70: misc_forward_with_mode with other addresses and constants.
namespace near_02625a70 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x7c;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_02625a70(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_02625a70

// auto_forward_with_mode_0262d210: misc_forward_with_mode with other addresses and constants.
namespace near_0262d210 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x68;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_0262d210(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_0262d210

// auto_forward_with_mode_02632780: misc_forward_with_mode with other addresses and constants.
namespace near_02632780 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x6c;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_02632780(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_02632780

// auto_forward_with_mode_02636f20: misc_forward_with_mode with other addresses and constants.
namespace near_02636f20 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x88;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_02636f20(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_02636f20

// auto_forward_with_mode_0263a780: misc_forward_with_mode with other addresses and constants.
namespace near_0263a780 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x70;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_0263a780(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_0263a780

// auto_forward_with_mode_0266a0a0: misc_forward_with_mode with other addresses and constants.
namespace near_0266a0a0 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x58;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_0266a0a0(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_0266a0a0

// auto_forward_with_mode_026da650: misc_forward_with_mode with other addresses and constants.
namespace near_026da650 {

namespace {

RT_ORIGINAL(0x02586da0, fn_02586da0, uint64_t(misc::ResourceManager *, int32_t, uint32_t, uint32_t, int64_t));
RT_GLOBAL(0x05940dd8, root_state_instance, misc::RootState *);

/** Where the resource manager keeps the word passed on as the routine's second argument. */
constexpr size_t manager_word_offset = 0x78;

/** The last argument of the routine: all bits set. */
constexpr int64_t all_ones_argument = -1;

// The manager's 32-bit word that goes with every request made here.
int32_t manager_word(const misc::ResourceManager *manager)
{
    return *reinterpret_cast<const int32_t *>(reinterpret_cast<const uint8_t *>(manager) + manager_word_offset);
}

}  // namespace

/**
 *
 * Passes the two 32-bit arguments on to a routine of the resource manager.
 *
 * The first argument is not used. The manager comes from the root state, and one of its words is the
 * second argument of the routine. The routine's result is returned as it is.
 */
extern "C" uint64_t bb_auto_forward_with_mode_026da650(void *, uint32_t second, uint32_t third)
{
    misc::ResourceManager *manager = root_state_instance.get()->resources_0x5ad0;
    return fn_02586da0(manager, manager_word(manager), second, third, all_ones_argument);
}

}  // namespace near_026da650
