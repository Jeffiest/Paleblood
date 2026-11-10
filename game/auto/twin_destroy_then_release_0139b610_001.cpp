// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_destroy_then_release, in game/misc/destroy_then_release.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "runtime/original.h"

// auto_destroy_then_release_00457850: misc_destroy_then_release with other addresses.
namespace twin_00457850 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x00457870, fn_00457870, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_00457850(void *object)
{
    fn_00457870(object);
    return fn_02fbe588(object);
}

}  // namespace twin_00457850

// auto_destroy_then_release_00483e80: misc_destroy_then_release with other addresses.
namespace twin_00483e80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x00483ea0, fn_00483ea0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_00483e80(void *object)
{
    fn_00483ea0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_00483e80

// auto_destroy_then_release_0051d7e0: misc_destroy_then_release with other addresses.
namespace twin_0051d7e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0051d830, fn_0051d830, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0051d7e0(void *object)
{
    fn_0051d830(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0051d7e0

// auto_destroy_then_release_00524080: misc_destroy_then_release with other addresses.
namespace twin_00524080 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x005240a0, fn_005240a0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_00524080(void *object)
{
    fn_005240a0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_00524080

// auto_destroy_then_release_005c8260: misc_destroy_then_release with other addresses.
namespace twin_005c8260 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x00574de0, fn_00574de0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_005c8260(void *object)
{
    fn_00574de0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_005c8260

// auto_destroy_then_release_005c8ff0: misc_destroy_then_release with other addresses.
namespace twin_005c8ff0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x005c9010, fn_005c9010, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_005c8ff0(void *object)
{
    fn_005c9010(object);
    return fn_02fbe588(object);
}

}  // namespace twin_005c8ff0

// auto_destroy_then_release_0071c0d0: misc_destroy_then_release with other addresses.
namespace twin_0071c0d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0071c0f0, fn_0071c0f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0071c0d0(void *object)
{
    fn_0071c0f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0071c0d0

// auto_destroy_then_release_00e19840: misc_destroy_then_release with other addresses.
namespace twin_00e19840 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x00e19860, fn_00e19860, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_00e19840(void *object)
{
    fn_00e19860(object);
    return fn_02fbe588(object);
}

}  // namespace twin_00e19840

// auto_destroy_then_release_00ffd880: misc_destroy_then_release with other addresses.
namespace twin_00ffd880 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x00ffd8a0, fn_00ffd8a0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_00ffd880(void *object)
{
    fn_00ffd8a0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_00ffd880

// auto_destroy_then_release_0101eaa0: misc_destroy_then_release with other addresses.
namespace twin_0101eaa0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0101eac0, fn_0101eac0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0101eaa0(void *object)
{
    fn_0101eac0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0101eaa0

// auto_destroy_then_release_0106e650: misc_destroy_then_release with other addresses.
namespace twin_0106e650 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0106e670, fn_0106e670, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0106e650(void *object)
{
    fn_0106e670(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0106e650

// auto_destroy_then_release_0106ef60: misc_destroy_then_release with other addresses.
namespace twin_0106ef60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0106e670, fn_0106e670, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0106ef60(void *object)
{
    fn_0106e670(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0106ef60

// auto_destroy_then_release_0106f160: misc_destroy_then_release with other addresses.
namespace twin_0106f160 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0106e670, fn_0106e670, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0106f160(void *object)
{
    fn_0106e670(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0106f160

// auto_destroy_then_release_0106fc10: misc_destroy_then_release with other addresses.
namespace twin_0106fc10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0106fc30, fn_0106fc30, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0106fc10(void *object)
{
    fn_0106fc30(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0106fc10

// auto_destroy_then_release_01074060: misc_destroy_then_release with other addresses.
namespace twin_01074060 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01074080, fn_01074080, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01074060(void *object)
{
    fn_01074080(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01074060

// auto_destroy_then_release_010774a0: misc_destroy_then_release with other addresses.
namespace twin_010774a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010774c0, fn_010774c0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010774a0(void *object)
{
    fn_010774c0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010774a0

// auto_destroy_then_release_01079b70: misc_destroy_then_release with other addresses.
namespace twin_01079b70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01079b90, fn_01079b90, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01079b70(void *object)
{
    fn_01079b90(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01079b70

// auto_destroy_then_release_0107ac40: misc_destroy_then_release with other addresses.
namespace twin_0107ac40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0107ac60, fn_0107ac60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0107ac40(void *object)
{
    fn_0107ac60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0107ac40

// auto_destroy_then_release_0107b2b0: misc_destroy_then_release with other addresses.
namespace twin_0107b2b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0107b2d0, fn_0107b2d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0107b2b0(void *object)
{
    fn_0107b2d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0107b2b0

// auto_destroy_then_release_0107c7c0: misc_destroy_then_release with other addresses.
namespace twin_0107c7c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0107c7e0, fn_0107c7e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0107c7c0(void *object)
{
    fn_0107c7e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0107c7c0

// auto_destroy_then_release_01083030: misc_destroy_then_release with other addresses.
namespace twin_01083030 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01077230, fn_01077230, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01083030(void *object)
{
    fn_01077230(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01083030

// auto_destroy_then_release_010920a0: misc_destroy_then_release with other addresses.
namespace twin_010920a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010920c0, fn_010920c0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010920a0(void *object)
{
    fn_010920c0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010920a0

// auto_destroy_then_release_01096800: misc_destroy_then_release with other addresses.
namespace twin_01096800 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01096850, fn_01096850, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01096800(void *object)
{
    fn_01096850(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01096800

// auto_destroy_then_release_0109e0c0: misc_destroy_then_release with other addresses.
namespace twin_0109e0c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0109e110, fn_0109e110, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0109e0c0(void *object)
{
    fn_0109e110(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0109e0c0

// auto_destroy_then_release_0109fc50: misc_destroy_then_release with other addresses.
namespace twin_0109fc50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0109fc70, fn_0109fc70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0109fc50(void *object)
{
    fn_0109fc70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0109fc50

// auto_destroy_then_release_010a3260: misc_destroy_then_release with other addresses.
namespace twin_010a3260 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010cbfc0, fn_010cbfc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010a3260(void *object)
{
    fn_010cbfc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010a3260

// auto_destroy_then_release_010a7180: misc_destroy_then_release with other addresses.
namespace twin_010a7180 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010a71a0, fn_010a71a0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010a7180(void *object)
{
    fn_010a71a0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010a7180

// auto_destroy_then_release_010aad90: misc_destroy_then_release with other addresses.
namespace twin_010aad90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010aadb0, fn_010aadb0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010aad90(void *object)
{
    fn_010aadb0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010aad90

// auto_destroy_then_release_010abd80: misc_destroy_then_release with other addresses.
namespace twin_010abd80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010abda0, fn_010abda0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010abd80(void *object)
{
    fn_010abda0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010abd80

// auto_destroy_then_release_010ad120: misc_destroy_then_release with other addresses.
namespace twin_010ad120 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ad140, fn_010ad140, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010ad120(void *object)
{
    fn_010ad140(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010ad120

// auto_destroy_then_release_010ade60: misc_destroy_then_release with other addresses.
namespace twin_010ade60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ade80, fn_010ade80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010ade60(void *object)
{
    fn_010ade80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010ade60

// auto_destroy_then_release_010af630: misc_destroy_then_release with other addresses.
namespace twin_010af630 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010af650, fn_010af650, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010af630(void *object)
{
    fn_010af650(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010af630

// auto_destroy_then_release_010b1440: misc_destroy_then_release with other addresses.
namespace twin_010b1440 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010b1460, fn_010b1460, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010b1440(void *object)
{
    fn_010b1460(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010b1440

// auto_destroy_then_release_010b4bd0: misc_destroy_then_release with other addresses.
namespace twin_010b4bd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010b4bf0, fn_010b4bf0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010b4bd0(void *object)
{
    fn_010b4bf0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010b4bd0

// auto_destroy_then_release_010b8e90: misc_destroy_then_release with other addresses.
namespace twin_010b8e90 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010b8eb0, fn_010b8eb0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010b8e90(void *object)
{
    fn_010b8eb0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010b8e90

// auto_destroy_then_release_010ba9e0: misc_destroy_then_release with other addresses.
namespace twin_010ba9e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010baa00, fn_010baa00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010ba9e0(void *object)
{
    fn_010baa00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010ba9e0

// auto_destroy_then_release_010bc1f0: misc_destroy_then_release with other addresses.
namespace twin_010bc1f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010bc240, fn_010bc240, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010bc1f0(void *object)
{
    fn_010bc240(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010bc1f0

// auto_destroy_then_release_010becc0: misc_destroy_then_release with other addresses.
namespace twin_010becc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010bece0, fn_010bece0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010becc0(void *object)
{
    fn_010bece0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010becc0

// auto_destroy_then_release_010c1b30: misc_destroy_then_release with other addresses.
namespace twin_010c1b30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010c1b80, fn_010c1b80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010c1b30(void *object)
{
    fn_010c1b80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010c1b30

// auto_destroy_then_release_010c6dc0: misc_destroy_then_release with other addresses.
namespace twin_010c6dc0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010a04b0, fn_010a04b0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010c6dc0(void *object)
{
    fn_010a04b0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010c6dc0

// auto_destroy_then_release_010c8820: misc_destroy_then_release with other addresses.
namespace twin_010c8820 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010c8840, fn_010c8840, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010c8820(void *object)
{
    fn_010c8840(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010c8820

// auto_destroy_then_release_010cbfa0: misc_destroy_then_release with other addresses.
namespace twin_010cbfa0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010cbfc0, fn_010cbfc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010cbfa0(void *object)
{
    fn_010cbfc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010cbfa0

// auto_destroy_then_release_010cc730: misc_destroy_then_release with other addresses.
namespace twin_010cc730 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010dafc0, fn_010dafc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010cc730(void *object)
{
    fn_010dafc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010cc730

// auto_destroy_then_release_010d6a60: misc_destroy_then_release with other addresses.
namespace twin_010d6a60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010d6ab0, fn_010d6ab0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010d6a60(void *object)
{
    fn_010d6ab0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010d6a60

// auto_destroy_then_release_010da090: misc_destroy_then_release with other addresses.
namespace twin_010da090 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010da0b0, fn_010da0b0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010da090(void *object)
{
    fn_010da0b0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010da090

// auto_destroy_then_release_010df1a0: misc_destroy_then_release with other addresses.
namespace twin_010df1a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010df1c0, fn_010df1c0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010df1a0(void *object)
{
    fn_010df1c0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010df1a0

// auto_destroy_then_release_010e6f50: misc_destroy_then_release with other addresses.
namespace twin_010e6f50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e6f70, fn_010e6f70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010e6f50(void *object)
{
    fn_010e6f70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010e6f50

// auto_destroy_then_release_010e7c80: misc_destroy_then_release with other addresses.
namespace twin_010e7c80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010e7ca0, fn_010e7ca0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010e7c80(void *object)
{
    fn_010e7ca0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010e7c80

// auto_destroy_then_release_010ef130: misc_destroy_then_release with other addresses.
namespace twin_010ef130 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010ef150, fn_010ef150, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010ef130(void *object)
{
    fn_010ef150(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010ef130

// auto_destroy_then_release_010f1e80: misc_destroy_then_release with other addresses.
namespace twin_010f1e80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010df1c0, fn_010df1c0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010f1e80(void *object)
{
    fn_010df1c0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010f1e80

// auto_destroy_then_release_010f23b0: misc_destroy_then_release with other addresses.
namespace twin_010f23b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010f23d0, fn_010f23d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010f23b0(void *object)
{
    fn_010f23d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010f23b0

// auto_destroy_then_release_010f3e60: misc_destroy_then_release with other addresses.
namespace twin_010f3e60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010f3e80, fn_010f3e80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010f3e60(void *object)
{
    fn_010f3e80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010f3e60

// auto_destroy_then_release_010f9e00: misc_destroy_then_release with other addresses.
namespace twin_010f9e00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02b351f0, fn_02b351f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_010f9e00(void *object)
{
    fn_02b351f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_010f9e00

// auto_destroy_then_release_011000c0: misc_destroy_then_release with other addresses.
namespace twin_011000c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x011000e0, fn_011000e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_011000c0(void *object)
{
    fn_011000e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_011000c0

// auto_destroy_then_release_011009a0: misc_destroy_then_release with other addresses.
namespace twin_011009a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x010f1ea0, fn_010f1ea0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_011009a0(void *object)
{
    fn_010f1ea0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_011009a0

// auto_destroy_then_release_01100de0: misc_destroy_then_release with other addresses.
namespace twin_01100de0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01104e80, fn_01104e80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01100de0(void *object)
{
    fn_01104e80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01100de0

// auto_destroy_then_release_01104e60: misc_destroy_then_release with other addresses.
namespace twin_01104e60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01104e80, fn_01104e80, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01104e60(void *object)
{
    fn_01104e80(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01104e60

// auto_destroy_then_release_011055a0: misc_destroy_then_release with other addresses.
namespace twin_011055a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02b351f0, fn_02b351f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_011055a0(void *object)
{
    fn_02b351f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_011055a0

// auto_destroy_then_release_01236df0: misc_destroy_then_release with other addresses.
namespace twin_01236df0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01236e10, fn_01236e10, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01236df0(void *object)
{
    fn_01236e10(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01236df0

// auto_destroy_then_release_0124c9d0: misc_destroy_then_release with other addresses.
namespace twin_0124c9d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0124c440, fn_0124c440, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0124c9d0(void *object)
{
    fn_0124c440(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0124c9d0

// auto_destroy_then_release_0124f380: misc_destroy_then_release with other addresses.
namespace twin_0124f380 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0124f3a0, fn_0124f3a0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0124f380(void *object)
{
    fn_0124f3a0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0124f380

// auto_destroy_then_release_01256fd0: misc_destroy_then_release with other addresses.
namespace twin_01256fd0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01256ff0, fn_01256ff0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01256fd0(void *object)
{
    fn_01256ff0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01256fd0

// auto_destroy_then_release_0125cb30: misc_destroy_then_release with other addresses.
namespace twin_0125cb30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0125cb50, fn_0125cb50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0125cb30(void *object)
{
    fn_0125cb50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0125cb30

// auto_destroy_then_release_0125fb70: misc_destroy_then_release with other addresses.
namespace twin_0125fb70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0125fb90, fn_0125fb90, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0125fb70(void *object)
{
    fn_0125fb90(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0125fb70

// auto_destroy_then_release_012643f0: misc_destroy_then_release with other addresses.
namespace twin_012643f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02670fe0, fn_02670fe0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_012643f0(void *object)
{
    fn_02670fe0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_012643f0

// auto_destroy_then_release_012661f0: misc_destroy_then_release with other addresses.
namespace twin_012661f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01266210, fn_01266210, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_012661f0(void *object)
{
    fn_01266210(object);
    return fn_02fbe588(object);
}

}  // namespace twin_012661f0

// auto_destroy_then_release_01271810: misc_destroy_then_release with other addresses.
namespace twin_01271810 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01271830, fn_01271830, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01271810(void *object)
{
    fn_01271830(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01271810

// auto_destroy_then_release_01292780: misc_destroy_then_release with other addresses.
namespace twin_01292780 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x012927a0, fn_012927a0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01292780(void *object)
{
    fn_012927a0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01292780

// auto_destroy_then_release_01293870: misc_destroy_then_release with other addresses.
namespace twin_01293870 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01293890, fn_01293890, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01293870(void *object)
{
    fn_01293890(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01293870

// auto_destroy_then_release_01298070: misc_destroy_then_release with other addresses.
namespace twin_01298070 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01298090, fn_01298090, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01298070(void *object)
{
    fn_01298090(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01298070

// auto_destroy_then_release_0129c430: misc_destroy_then_release with other addresses.
namespace twin_0129c430 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0129c450, fn_0129c450, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0129c430(void *object)
{
    fn_0129c450(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0129c430

// auto_destroy_then_release_012b3e70: misc_destroy_then_release with other addresses.
namespace twin_012b3e70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x012b3e90, fn_012b3e90, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_012b3e70(void *object)
{
    fn_012b3e90(object);
    return fn_02fbe588(object);
}

}  // namespace twin_012b3e70

// auto_destroy_then_release_012c2810: misc_destroy_then_release with other addresses.
namespace twin_012c2810 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x012c2830, fn_012c2830, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_012c2810(void *object)
{
    fn_012c2830(object);
    return fn_02fbe588(object);
}

}  // namespace twin_012c2810

// auto_destroy_then_release_012c4b50: misc_destroy_then_release with other addresses.
namespace twin_012c4b50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x012c4b70, fn_012c4b70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_012c4b50(void *object)
{
    fn_012c4b70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_012c4b50

// auto_destroy_then_release_012c5370: misc_destroy_then_release with other addresses.
namespace twin_012c5370 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x026830f0, fn_026830f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_012c5370(void *object)
{
    fn_026830f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_012c5370

// auto_destroy_then_release_01313d20: misc_destroy_then_release with other addresses.
namespace twin_01313d20 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01313d40, fn_01313d40, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01313d20(void *object)
{
    fn_01313d40(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01313d20

// auto_destroy_then_release_013161d0: misc_destroy_then_release with other addresses.
namespace twin_013161d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02e82cd0, fn_02e82cd0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013161d0(void *object)
{
    fn_02e82cd0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013161d0

// auto_destroy_then_release_01316460: misc_destroy_then_release with other addresses.
namespace twin_01316460 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02cf8e50, fn_02cf8e50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01316460(void *object)
{
    fn_02cf8e50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01316460

// auto_destroy_then_release_01316e50: misc_destroy_then_release with other addresses.
namespace twin_01316e50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x02f7f7d0, fn_02f7f7d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01316e50(void *object)
{
    fn_02f7f7d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01316e50

// auto_destroy_then_release_013250e0: misc_destroy_then_release with other addresses.
namespace twin_013250e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01325100, fn_01325100, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013250e0(void *object)
{
    fn_01325100(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013250e0

// auto_destroy_then_release_0132a120: misc_destroy_then_release with other addresses.
namespace twin_0132a120 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0132a140, fn_0132a140, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0132a120(void *object)
{
    fn_0132a140(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0132a120

// auto_destroy_then_release_0132e3c0: misc_destroy_then_release with other addresses.
namespace twin_0132e3c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0132e3e0, fn_0132e3e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0132e3c0(void *object)
{
    fn_0132e3e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0132e3c0

// auto_destroy_then_release_0133c740: misc_destroy_then_release with other addresses.
namespace twin_0133c740 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0133c760, fn_0133c760, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0133c740(void *object)
{
    fn_0133c760(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0133c740

// auto_destroy_then_release_013438a0: misc_destroy_then_release with other addresses.
namespace twin_013438a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013438c0, fn_013438c0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013438a0(void *object)
{
    fn_013438c0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013438a0

// auto_destroy_then_release_01344590: misc_destroy_then_release with other addresses.
namespace twin_01344590 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013445b0, fn_013445b0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01344590(void *object)
{
    fn_013445b0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01344590

// auto_destroy_then_release_013478c0: misc_destroy_then_release with other addresses.
namespace twin_013478c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013478e0, fn_013478e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013478c0(void *object)
{
    fn_013478e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013478c0

// auto_destroy_then_release_0134a450: misc_destroy_then_release with other addresses.
namespace twin_0134a450 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0134a470, fn_0134a470, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0134a450(void *object)
{
    fn_0134a470(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0134a450

// auto_destroy_then_release_0134c120: misc_destroy_then_release with other addresses.
namespace twin_0134c120 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0134c140, fn_0134c140, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0134c120(void *object)
{
    fn_0134c140(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0134c120

// auto_destroy_then_release_0134e050: misc_destroy_then_release with other addresses.
namespace twin_0134e050 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0134e070, fn_0134e070, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0134e050(void *object)
{
    fn_0134e070(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0134e050

// auto_destroy_then_release_0134f6d0: misc_destroy_then_release with other addresses.
namespace twin_0134f6d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0134f6f0, fn_0134f6f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0134f6d0(void *object)
{
    fn_0134f6f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0134f6d0

// auto_destroy_then_release_01351770: misc_destroy_then_release with other addresses.
namespace twin_01351770 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01351790, fn_01351790, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01351770(void *object)
{
    fn_01351790(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01351770

// auto_destroy_then_release_01352920: misc_destroy_then_release with other addresses.
namespace twin_01352920 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01352940, fn_01352940, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01352920(void *object)
{
    fn_01352940(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01352920

// auto_destroy_then_release_01354430: misc_destroy_then_release with other addresses.
namespace twin_01354430 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01354450, fn_01354450, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01354430(void *object)
{
    fn_01354450(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01354430

// auto_destroy_then_release_013554c0: misc_destroy_then_release with other addresses.
namespace twin_013554c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013554e0, fn_013554e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013554c0(void *object)
{
    fn_013554e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013554c0

// auto_destroy_then_release_0135b050: misc_destroy_then_release with other addresses.
namespace twin_0135b050 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0135b070, fn_0135b070, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0135b050(void *object)
{
    fn_0135b070(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0135b050

// auto_destroy_then_release_0135d5f0: misc_destroy_then_release with other addresses.
namespace twin_0135d5f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0135d610, fn_0135d610, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0135d5f0(void *object)
{
    fn_0135d610(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0135d5f0

// auto_destroy_then_release_0135e420: misc_destroy_then_release with other addresses.
namespace twin_0135e420 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01364230, fn_01364230, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0135e420(void *object)
{
    fn_01364230(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0135e420

// auto_destroy_then_release_0136e5b0: misc_destroy_then_release with other addresses.
namespace twin_0136e5b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0136e5d0, fn_0136e5d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0136e5b0(void *object)
{
    fn_0136e5d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0136e5b0

// auto_destroy_then_release_01372800: misc_destroy_then_release with other addresses.
namespace twin_01372800 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01372820, fn_01372820, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01372800(void *object)
{
    fn_01372820(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01372800

// auto_destroy_then_release_0137d850: misc_destroy_then_release with other addresses.
namespace twin_0137d850 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0137d870, fn_0137d870, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0137d850(void *object)
{
    fn_0137d870(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0137d850

// auto_destroy_then_release_0137db10: misc_destroy_then_release with other addresses.
namespace twin_0137db10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0137db30, fn_0137db30, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0137db10(void *object)
{
    fn_0137db30(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0137db10

// auto_destroy_then_release_013805d0: misc_destroy_then_release with other addresses.
namespace twin_013805d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013805f0, fn_013805f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013805d0(void *object)
{
    fn_013805f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013805d0

// auto_destroy_then_release_01382c00: misc_destroy_then_release with other addresses.
namespace twin_01382c00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013e7090, fn_013e7090, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01382c00(void *object)
{
    fn_013e7090(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01382c00

// auto_destroy_then_release_01383290: misc_destroy_then_release with other addresses.
namespace twin_01383290 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01382c20, fn_01382c20, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01383290(void *object)
{
    fn_01382c20(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01383290

// auto_destroy_then_release_01384730: misc_destroy_then_release with other addresses.
namespace twin_01384730 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01383d50, fn_01383d50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01384730(void *object)
{
    fn_01383d50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01384730

// auto_destroy_then_release_013855d0: misc_destroy_then_release with other addresses.
namespace twin_013855d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01385970, fn_01385970, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013855d0(void *object)
{
    fn_01385970(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013855d0

// auto_destroy_then_release_01385950: misc_destroy_then_release with other addresses.
namespace twin_01385950 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013e5c40, fn_013e5c40, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01385950(void *object)
{
    fn_013e5c40(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01385950

// auto_destroy_then_release_013864b0: misc_destroy_then_release with other addresses.
namespace twin_013864b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01386840, fn_01386840, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013864b0(void *object)
{
    fn_01386840(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013864b0

// auto_destroy_then_release_013865e0: misc_destroy_then_release with other addresses.
namespace twin_013865e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01386840, fn_01386840, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013865e0(void *object)
{
    fn_01386840(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013865e0

// auto_destroy_then_release_01386710: misc_destroy_then_release with other addresses.
namespace twin_01386710 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01386840, fn_01386840, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01386710(void *object)
{
    fn_01386840(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01386710

// auto_destroy_then_release_01387600: misc_destroy_then_release with other addresses.
namespace twin_01387600 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0135bf50, fn_0135bf50, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01387600(void *object)
{
    fn_0135bf50(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01387600

// auto_destroy_then_release_0138a030: misc_destroy_then_release with other addresses.
namespace twin_0138a030 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01389900, fn_01389900, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0138a030(void *object)
{
    fn_01389900(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0138a030

// auto_destroy_then_release_0138a850: misc_destroy_then_release with other addresses.
namespace twin_0138a850 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0138a870, fn_0138a870, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0138a850(void *object)
{
    fn_0138a870(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0138a850

// auto_destroy_then_release_0138cbe0: misc_destroy_then_release with other addresses.
namespace twin_0138cbe0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0138cc00, fn_0138cc00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0138cbe0(void *object)
{
    fn_0138cc00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0138cbe0

// auto_destroy_then_release_013915c0: misc_destroy_then_release with other addresses.
namespace twin_013915c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013915e0, fn_013915e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013915c0(void *object)
{
    fn_013915e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013915c0

// auto_destroy_then_release_013986b0: misc_destroy_then_release with other addresses.
namespace twin_013986b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013986d0, fn_013986d0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013986b0(void *object)
{
    fn_013986d0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013986b0

// auto_destroy_then_release_0139c730: misc_destroy_then_release with other addresses.
namespace twin_0139c730 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0139c960, fn_0139c960, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0139c730(void *object)
{
    fn_0139c960(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0139c730

// auto_destroy_then_release_013a53a0: misc_destroy_then_release with other addresses.
namespace twin_013a53a0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013a53c0, fn_013a53c0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013a53a0(void *object)
{
    fn_013a53c0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013a53a0

// auto_destroy_then_release_013a75b0: misc_destroy_then_release with other addresses.
namespace twin_013a75b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01400850, fn_01400850, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013a75b0(void *object)
{
    fn_01400850(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013a75b0

// auto_destroy_then_release_013b1ce0: misc_destroy_then_release with other addresses.
namespace twin_013b1ce0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013b1d00, fn_013b1d00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013b1ce0(void *object)
{
    fn_013b1d00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013b1ce0

// auto_destroy_then_release_013b4500: misc_destroy_then_release with other addresses.
namespace twin_013b4500 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013b4520, fn_013b4520, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013b4500(void *object)
{
    fn_013b4520(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013b4500

// auto_destroy_then_release_013b50c0: misc_destroy_then_release with other addresses.
namespace twin_013b50c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013915e0, fn_013915e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013b50c0(void *object)
{
    fn_013915e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013b50c0

// auto_destroy_then_release_013b5480: misc_destroy_then_release with other addresses.
namespace twin_013b5480 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013915e0, fn_013915e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013b5480(void *object)
{
    fn_013915e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013b5480

// auto_destroy_then_release_013b8a30: misc_destroy_then_release with other addresses.
namespace twin_013b8a30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0139b630, fn_0139b630, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013b8a30(void *object)
{
    fn_0139b630(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013b8a30

// auto_destroy_then_release_013b9b70: misc_destroy_then_release with other addresses.
namespace twin_013b9b70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013b9b90, fn_013b9b90, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013b9b70(void *object)
{
    fn_013b9b90(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013b9b70

// auto_destroy_then_release_013bc930: misc_destroy_then_release with other addresses.
namespace twin_013bc930 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013bc950, fn_013bc950, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013bc930(void *object)
{
    fn_013bc950(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013bc930

// auto_destroy_then_release_013be0e0: misc_destroy_then_release with other addresses.
namespace twin_013be0e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013be100, fn_013be100, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013be0e0(void *object)
{
    fn_013be100(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013be0e0

// auto_destroy_then_release_013c05e0: misc_destroy_then_release with other addresses.
namespace twin_013c05e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013c0600, fn_013c0600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013c05e0(void *object)
{
    fn_013c0600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013c05e0

// auto_destroy_then_release_013c32d0: misc_destroy_then_release with other addresses.
namespace twin_013c32d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013c32f0, fn_013c32f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013c32d0(void *object)
{
    fn_013c32f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013c32d0

// auto_destroy_then_release_013c3bf0: misc_destroy_then_release with other addresses.
namespace twin_013c3bf0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013c3c10, fn_013c3c10, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013c3bf0(void *object)
{
    fn_013c3c10(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013c3bf0

// auto_destroy_then_release_013c54d0: misc_destroy_then_release with other addresses.
namespace twin_013c54d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013c54f0, fn_013c54f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013c54d0(void *object)
{
    fn_013c54f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013c54d0

// auto_destroy_then_release_013c7970: misc_destroy_then_release with other addresses.
namespace twin_013c7970 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013c7ec0, fn_013c7ec0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013c7970(void *object)
{
    fn_013c7ec0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013c7970

// auto_destroy_then_release_013d4f40: misc_destroy_then_release with other addresses.
namespace twin_013d4f40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013d4f60, fn_013d4f60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013d4f40(void *object)
{
    fn_013d4f60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013d4f40

// auto_destroy_then_release_013d6700: misc_destroy_then_release with other addresses.
namespace twin_013d6700 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013d6720, fn_013d6720, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013d6700(void *object)
{
    fn_013d6720(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013d6700

// auto_destroy_then_release_013e3c40: misc_destroy_then_release with other addresses.
namespace twin_013e3c40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01386bc0, fn_01386bc0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013e3c40(void *object)
{
    fn_01386bc0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013e3c40

// auto_destroy_then_release_013e8230: misc_destroy_then_release with other addresses.
namespace twin_013e8230 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01384750, fn_01384750, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013e8230(void *object)
{
    fn_01384750(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013e8230

// auto_destroy_then_release_013f2320: misc_destroy_then_release with other addresses.
namespace twin_013f2320 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013f2340, fn_013f2340, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013f2320(void *object)
{
    fn_013f2340(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013f2320

// auto_destroy_then_release_013f6db0: misc_destroy_then_release with other addresses.
namespace twin_013f6db0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x013f6dd0, fn_013f6dd0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_013f6db0(void *object)
{
    fn_013f6dd0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_013f6db0

// auto_destroy_then_release_01400980: misc_destroy_then_release with other addresses.
namespace twin_01400980 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x014009a0, fn_014009a0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01400980(void *object)
{
    fn_014009a0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01400980

// auto_destroy_then_release_01401f60: misc_destroy_then_release with other addresses.
namespace twin_01401f60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01401f60(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01401f60

// auto_destroy_then_release_01403910: misc_destroy_then_release with other addresses.
namespace twin_01403910 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01403910(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01403910

// auto_destroy_then_release_0140b920: misc_destroy_then_release with other addresses.
namespace twin_0140b920 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01400850, fn_01400850, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0140b920(void *object)
{
    fn_01400850(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0140b920

// auto_destroy_then_release_01414ae0: misc_destroy_then_release with other addresses.
namespace twin_01414ae0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01414b00, fn_01414b00, void(void *));
RT_ORIGINAL(0x01414d90, fn_01414d90, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01414ae0(void *object)
{
    fn_01414b00(object);
    return fn_01414d90(object);
}

}  // namespace twin_01414ae0

// auto_destroy_then_release_0141fee0: misc_destroy_then_release with other addresses.
namespace twin_0141fee0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0141ff00, fn_0141ff00, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0141fee0(void *object)
{
    fn_0141ff00(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0141fee0

// auto_destroy_then_release_01438d00: misc_destroy_then_release with other addresses.
namespace twin_01438d00 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x014395e0, fn_014395e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01438d00(void *object)
{
    fn_014395e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01438d00

// auto_destroy_then_release_01439310: misc_destroy_then_release with other addresses.
namespace twin_01439310 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01466d70, fn_01466d70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01439310(void *object)
{
    fn_01466d70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01439310

// auto_destroy_then_release_014395c0: misc_destroy_then_release with other addresses.
namespace twin_014395c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x014395e0, fn_014395e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_014395c0(void *object)
{
    fn_014395e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_014395c0

// auto_destroy_then_release_0143e750: misc_destroy_then_release with other addresses.
namespace twin_0143e750 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0143e770, fn_0143e770, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0143e750(void *object)
{
    fn_0143e770(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0143e750

// auto_destroy_then_release_014413c0: misc_destroy_then_release with other addresses.
namespace twin_014413c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0139b630, fn_0139b630, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_014413c0(void *object)
{
    fn_0139b630(object);
    return fn_02fbe588(object);
}

}  // namespace twin_014413c0

// auto_destroy_then_release_01444570: misc_destroy_then_release with other addresses.
namespace twin_01444570 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01444590, fn_01444590, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01444570(void *object)
{
    fn_01444590(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01444570

// auto_destroy_then_release_01444b40: misc_destroy_then_release with other addresses.
namespace twin_01444b40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01400080, fn_01400080, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01444b40(void *object)
{
    fn_01400080(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01444b40

// auto_destroy_then_release_01444ed0: misc_destroy_then_release with other addresses.
namespace twin_01444ed0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01400850, fn_01400850, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01444ed0(void *object)
{
    fn_01400850(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01444ed0

// auto_destroy_then_release_0144a9c0: misc_destroy_then_release with other addresses.
namespace twin_0144a9c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0136cf90, fn_0136cf90, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0144a9c0(void *object)
{
    fn_0136cf90(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0144a9c0

// auto_destroy_then_release_01458440: misc_destroy_then_release with other addresses.
namespace twin_01458440 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01458460, fn_01458460, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01458440(void *object)
{
    fn_01458460(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01458440

// auto_destroy_then_release_0145c890: misc_destroy_then_release with other addresses.
namespace twin_0145c890 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0145bc70, fn_0145bc70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0145c890(void *object)
{
    fn_0145bc70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0145c890

// auto_destroy_then_release_0145cc80: misc_destroy_then_release with other addresses.
namespace twin_0145cc80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0145cc80(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0145cc80

// auto_destroy_then_release_0145d140: misc_destroy_then_release with other addresses.
namespace twin_0145d140 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01401600, fn_01401600, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0145d140(void *object)
{
    fn_01401600(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0145d140

// auto_destroy_then_release_01464640: misc_destroy_then_release with other addresses.
namespace twin_01464640 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01464660, fn_01464660, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01464640(void *object)
{
    fn_01464660(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01464640

// auto_destroy_then_release_014aa270: misc_destroy_then_release with other addresses.
namespace twin_014aa270 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x014aa290, fn_014aa290, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_014aa270(void *object)
{
    fn_014aa290(object);
    return fn_02fbe588(object);
}

}  // namespace twin_014aa270

// auto_destroy_then_release_015d6b20: misc_destroy_then_release with other addresses.
namespace twin_015d6b20 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x015d6b40, fn_015d6b40, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_015d6b20(void *object)
{
    fn_015d6b40(object);
    return fn_02fbe588(object);
}

}  // namespace twin_015d6b20

// auto_destroy_then_release_015daff0: misc_destroy_then_release with other addresses.
namespace twin_015daff0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x015db010, fn_015db010, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_015daff0(void *object)
{
    fn_015db010(object);
    return fn_02fbe588(object);
}

}  // namespace twin_015daff0

// auto_destroy_then_release_015e5640: misc_destroy_then_release with other addresses.
namespace twin_015e5640 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x015e5660, fn_015e5660, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_015e5640(void *object)
{
    fn_015e5660(object);
    return fn_02fbe588(object);
}

}  // namespace twin_015e5640

// auto_destroy_then_release_015ee8c0: misc_destroy_then_release with other addresses.
namespace twin_015ee8c0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x015ee8e0, fn_015ee8e0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_015ee8c0(void *object)
{
    fn_015ee8e0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_015ee8c0

// auto_destroy_then_release_0163fad0: misc_destroy_then_release with other addresses.
namespace twin_0163fad0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0163fad0(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0163fad0

// auto_destroy_then_release_01640040: misc_destroy_then_release with other addresses.
namespace twin_01640040 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01640040(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01640040

// auto_destroy_then_release_016402d0: misc_destroy_then_release with other addresses.
namespace twin_016402d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_016402d0(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_016402d0

// auto_destroy_then_release_016408f0: misc_destroy_then_release with other addresses.
namespace twin_016408f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_016408f0(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_016408f0

// auto_destroy_then_release_01640e50: misc_destroy_then_release with other addresses.
namespace twin_01640e50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01640e50(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01640e50

// auto_destroy_then_release_01643370: misc_destroy_then_release with other addresses.
namespace twin_01643370 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01643370(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01643370

// auto_destroy_then_release_01643780: misc_destroy_then_release with other addresses.
namespace twin_01643780 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01643780(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01643780

// auto_destroy_then_release_01643ae0: misc_destroy_then_release with other addresses.
namespace twin_01643ae0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01643ae0(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01643ae0

// auto_destroy_then_release_01643b10: misc_destroy_then_release with other addresses.
namespace twin_01643b10 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01643b10(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01643b10

// auto_destroy_then_release_01644070: misc_destroy_then_release with other addresses.
namespace twin_01644070 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01644070(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01644070

// auto_destroy_then_release_01644780: misc_destroy_then_release with other addresses.
namespace twin_01644780 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01644780(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01644780

// auto_destroy_then_release_01644aa0: misc_destroy_then_release with other addresses.
namespace twin_01644aa0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01644aa0(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01644aa0

// auto_destroy_then_release_01645490: misc_destroy_then_release with other addresses.
namespace twin_01645490 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01645490(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01645490

// auto_destroy_then_release_01645c40: misc_destroy_then_release with other addresses.
namespace twin_01645c40 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01645c40(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01645c40

// auto_destroy_then_release_016481e0: misc_destroy_then_release with other addresses.
namespace twin_016481e0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_016481e0(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_016481e0

// auto_destroy_then_release_01648210: misc_destroy_then_release with other addresses.
namespace twin_01648210 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01648210(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01648210

// auto_destroy_then_release_01648240: misc_destroy_then_release with other addresses.
namespace twin_01648240 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01648240(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01648240

// auto_destroy_then_release_01648270: misc_destroy_then_release with other addresses.
namespace twin_01648270 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01648270(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01648270

// auto_destroy_then_release_016486f0: misc_destroy_then_release with other addresses.
namespace twin_016486f0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_016486f0(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_016486f0

// auto_destroy_then_release_01649050: misc_destroy_then_release with other addresses.
namespace twin_01649050 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01649050(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01649050

// auto_destroy_then_release_01649830: misc_destroy_then_release with other addresses.
namespace twin_01649830 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01649830(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01649830

// auto_destroy_then_release_0164a050: misc_destroy_then_release with other addresses.
namespace twin_0164a050 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0164a050(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0164a050

// auto_destroy_then_release_0164a830: misc_destroy_then_release with other addresses.
namespace twin_0164a830 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0164a830(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0164a830

// auto_destroy_then_release_0164ac60: misc_destroy_then_release with other addresses.
namespace twin_0164ac60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0164ac60(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0164ac60

// auto_destroy_then_release_0164aea0: misc_destroy_then_release with other addresses.
namespace twin_0164aea0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x01640e70, fn_01640e70, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0164aea0(void *object)
{
    fn_01640e70(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0164aea0

// auto_destroy_then_release_01652560: misc_destroy_then_release with other addresses.
namespace twin_01652560 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01652560(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01652560

// auto_destroy_then_release_01653ea0: misc_destroy_then_release with other addresses.
namespace twin_01653ea0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01653ea0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01653ea0

// auto_destroy_then_release_01656690: misc_destroy_then_release with other addresses.
namespace twin_01656690 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_01656690(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_01656690

// auto_destroy_then_release_0167ae80: misc_destroy_then_release with other addresses.
namespace twin_0167ae80 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0167ae80(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0167ae80

// auto_destroy_then_release_0168de60: misc_destroy_then_release with other addresses.
namespace twin_0168de60 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_0168de60(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_0168de60

// auto_destroy_then_release_016a2930: misc_destroy_then_release with other addresses.
namespace twin_016a2930 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_016a2930(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_016a2930

// auto_destroy_then_release_016a2c50: misc_destroy_then_release with other addresses.
namespace twin_016a2c50 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_016a2c50(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_016a2c50

// auto_destroy_then_release_016a2f70: misc_destroy_then_release with other addresses.
namespace twin_016a2f70 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_016a2f70(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_016a2f70

// auto_destroy_then_release_016a3290: misc_destroy_then_release with other addresses.
namespace twin_016a3290 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_016a3290(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_016a3290

// auto_destroy_then_release_016a35b0: misc_destroy_then_release with other addresses.
namespace twin_016a35b0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_016a35b0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_016a35b0

// auto_destroy_then_release_016a38d0: misc_destroy_then_release with other addresses.
namespace twin_016a38d0 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x024b5a60, fn_024b5a60, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_016a38d0(void *object)
{
    fn_024b5a60(object);
    return fn_02fbe588(object);
}

}  // namespace twin_016a38d0

// auto_destroy_then_release_016a4c30: misc_destroy_then_release with other addresses.
namespace twin_016a4c30 {

// Misc: runs the object's destruction routine, then hands the object to the library release.

namespace {

RT_ORIGINAL(0x0139c4f0, fn_0139c4f0, void(void *));
RT_ORIGINAL(0x02fbe588, fn_02fbe588, uint64_t(void *));

}  // namespace

/**
 *
 * Destroys the object through its destruction routine, then passes it to the library release.
 *
 * The object is the same argument for both calls, and the library's result is the function's result.
 */
extern "C" uint64_t bb_auto_destroy_then_release_016a4c30(void *object)
{
    fn_0139c4f0(object);
    return fn_02fbe588(object);
}

}  // namespace twin_016a4c30
