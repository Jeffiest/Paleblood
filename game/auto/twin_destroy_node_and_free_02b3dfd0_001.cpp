// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_destroy_node_and_free, in game/misc/destroy_node_and_free.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/destroyable_node.h"
#include "../engine/allocator.h"
#include "runtime/original.h"

// auto_destroy_node_and_free_01848c90: misc_destroy_node_and_free with other addresses.
namespace twin_01848c90 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_01848c90(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_01848c90

// auto_destroy_node_and_free_01d5da80: misc_destroy_node_and_free with other addresses.
namespace twin_01d5da80 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_01d5da80(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_01d5da80

// auto_destroy_node_and_free_01ecde50: misc_destroy_node_and_free with other addresses.
namespace twin_01ecde50 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_01ecde50(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_01ecde50

// auto_destroy_node_and_free_01ed1d40: misc_destroy_node_and_free with other addresses.
namespace twin_01ed1d40 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_01ed1d40(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_01ed1d40

// auto_destroy_node_and_free_01ed1dc0: misc_destroy_node_and_free with other addresses.
namespace twin_01ed1dc0 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_01ed1dc0(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_01ed1dc0

// auto_destroy_node_and_free_01ef63e0: misc_destroy_node_and_free with other addresses.
namespace twin_01ef63e0 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_01ef63e0(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_01ef63e0

// auto_destroy_node_and_free_01f16360: misc_destroy_node_and_free with other addresses.
namespace twin_01f16360 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_01f16360(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_01f16360

// auto_destroy_node_and_free_01f24fd0: misc_destroy_node_and_free with other addresses.
namespace twin_01f24fd0 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_01f24fd0(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_01f24fd0

// auto_destroy_node_and_free_01f46430: misc_destroy_node_and_free with other addresses.
namespace twin_01f46430 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_01f46430(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_01f46430

// auto_destroy_node_and_free_01ff0220: misc_destroy_node_and_free with other addresses.
namespace twin_01ff0220 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_01ff0220(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_01ff0220

// auto_destroy_node_and_free_01ff0280: misc_destroy_node_and_free with other addresses.
namespace twin_01ff0280 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_01ff0280(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_01ff0280

// auto_destroy_node_and_free_020626a0: misc_destroy_node_and_free with other addresses.
namespace twin_020626a0 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_020626a0(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_020626a0

// auto_destroy_node_and_free_020644c0: misc_destroy_node_and_free with other addresses.
namespace twin_020644c0 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_020644c0(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_020644c0

// auto_destroy_node_and_free_02088c50: misc_destroy_node_and_free with other addresses.
namespace twin_02088c50 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_02088c50(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_02088c50

// auto_destroy_node_and_free_02166c50: misc_destroy_node_and_free with other addresses.
namespace twin_02166c50 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_02166c50(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_02166c50

// auto_destroy_node_and_free_02359740: misc_destroy_node_and_free with other addresses.
namespace twin_02359740 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_02359740(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_02359740

// auto_destroy_node_and_free_025c4510: misc_destroy_node_and_free with other addresses.
namespace twin_025c4510 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_025c4510(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_025c4510

// auto_destroy_node_and_free_026f6c20: misc_destroy_node_and_free with other addresses.
namespace twin_026f6c20 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_026f6c20(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_026f6c20

// auto_destroy_node_and_free_02d051c0: misc_destroy_node_and_free with other addresses.
namespace twin_02d051c0 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_02d051c0(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_02d051c0

// auto_destroy_node_and_free_02d29200: misc_destroy_node_and_free with other addresses.
namespace twin_02d29200 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_02d29200(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_02d29200

// auto_destroy_node_and_free_02d42b80: misc_destroy_node_and_free with other addresses.
namespace twin_02d42b80 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_02d42b80(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_02d42b80

// auto_destroy_node_and_free_02d52e30: misc_destroy_node_and_free with other addresses.
namespace twin_02d52e30 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_02d52e30(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_02d52e30

// auto_destroy_node_and_free_02d54db0: misc_destroy_node_and_free with other addresses.
namespace twin_02d54db0 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_02d54db0(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_02d54db0

// auto_destroy_node_and_free_02d54df0: misc_destroy_node_and_free with other addresses.
namespace twin_02d54df0 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_02d54df0(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_02d54df0

// auto_destroy_node_and_free_02da92f0: misc_destroy_node_and_free with other addresses.
namespace twin_02da92f0 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_02da92f0(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_02da92f0

// auto_destroy_node_and_free_02ddb780: misc_destroy_node_and_free with other addresses.
namespace twin_02ddb780 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_02ddb780(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_02ddb780

// auto_destroy_node_and_free_02ddf940: misc_destroy_node_and_free with other addresses.
namespace twin_02ddf940 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Destroys a node and frees it through the allocator it was created with.
 *
 * The allocator is looked up first, then the node's destroy slot runs, then the allocator frees the
 * node. A null node does nothing. The original tail-jumps into the allocator's free slot, so the
 * free's result is not a value this routine gives back.
 */
extern "C" void bb_auto_destroy_node_and_free_02ddf940(misc::DestroyableNode *node)
{
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->destroy(node);
    allocator->free(node);
}

}  // namespace twin_02ddf940
