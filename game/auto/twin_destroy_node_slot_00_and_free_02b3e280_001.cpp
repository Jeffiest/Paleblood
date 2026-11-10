// SPDX-License-Identifier: GPL-2.0-or-later
// Functions with the same instructions as misc_destroy_node_slot_00_and_free, in game/misc/destroy_node_slot_00_and_free.cpp, each using other addresses.
// Every block below is that function's source with the addresses exchanged: the names and
// comments in a block were written for that function and are carried over unchanged.
#include "../misc/destroyable_node.h"
#include "../engine/allocator.h"
#include "runtime/original.h"

// auto_destroy_node_slot_00_and_free_01bc9010: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_01bc9010 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_01bc9010(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_01bc9010

// auto_destroy_node_slot_00_and_free_01c34aa0: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_01c34aa0 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_01c34aa0(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_01c34aa0

// auto_destroy_node_slot_00_and_free_01c34b00: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_01c34b00 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_01c34b00(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_01c34b00

// auto_destroy_node_slot_00_and_free_01c34b60: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_01c34b60 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_01c34b60(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_01c34b60

// auto_destroy_node_slot_00_and_free_01c34e50: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_01c34e50 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_01c34e50(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_01c34e50

// auto_destroy_node_slot_00_and_free_01c34eb0: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_01c34eb0 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_01c34eb0(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_01c34eb0

// auto_destroy_node_slot_00_and_free_01c34f10: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_01c34f10 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_01c34f10(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_01c34f10

// auto_destroy_node_slot_00_and_free_01c34f70: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_01c34f70 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_01c34f70(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_01c34f70

// auto_destroy_node_slot_00_and_free_02413780: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_02413780 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_02413780(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_02413780

// auto_destroy_node_slot_00_and_free_02592a20: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_02592a20 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_02592a20(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_02592a20

// auto_destroy_node_slot_00_and_free_02592a90: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_02592a90 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_02592a90(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_02592a90

// auto_destroy_node_slot_00_and_free_02592b00: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_02592b00 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_02592b00(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_02592b00

// auto_destroy_node_slot_00_and_free_02784980: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_02784980 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_02784980(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_02784980

// auto_destroy_node_slot_00_and_free_02785100: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_02785100 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_02785100(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_02785100

// auto_destroy_node_slot_00_and_free_02b3e700: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_02b3e700 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_02b3e700(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_02b3e700

// auto_destroy_node_slot_00_and_free_02dbad20: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_02dbad20 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_02dbad20(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_02dbad20

// auto_destroy_node_slot_00_and_free_02dbad70: misc_destroy_node_slot_00_and_free with other addresses.
namespace twin_02dbad70 {

namespace {

/** The allocator a node was created with, found from the node's address. */
RT_ORIGINAL(0x0247b720, allocator_of, engine::Allocator *(misc::DestroyableNode *node));

}  // namespace

/**
 *
 * Releases what a node holds through its first vtable slot, then frees the node through the
 * allocator it was created with.
 *
 * The node is the second argument; the first is not read. The allocator is looked up first, as in
 * the destroy routine. A null node does nothing. The free is a tail call in the original, so the
 * free's result is not returned here.
 */
extern "C" void bb_auto_destroy_node_slot_00_and_free_02dbad70(void *unused_first, misc::DestroyableNode *node)
{
    (void)unused_first;
    if (node == nullptr) {
        return;
    }
    engine::Allocator *allocator = allocator_of(node);
    node->vtable->slot_00(node);
    allocator->free(node);
}

}  // namespace twin_02dbad70
