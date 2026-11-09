// SPDX-License-Identifier: GPL-2.0-or-later
#include <cstddef>
#include <cstdint>

#include "runtime/original.h"

namespace {

/** The query kind that lets the renderer's resource be forwarded. */
constexpr uint32_t kind_forwarded = 6;

struct ForwardRenderer;
struct ForwardResource;

struct ForwardRendererVtable {
    uint8_t unknown_0x0000[0x90];
    uint64_t (*query_kind)(ForwardRenderer *renderer);
};
static_assert(offsetof(ForwardRendererVtable, query_kind) == 0x90);

struct ForwardRendererChild {
    uint8_t unknown_0x0000[0x790];
    ForwardResource *resource;
};
static_assert(offsetof(ForwardRendererChild, resource) == 0x790);

struct ForwardRenderer {
    const ForwardRendererVtable *vtable;
    uint8_t unknown_0x0008[0xa8];
    ForwardRendererChild *child;
};
static_assert(offsetof(ForwardRenderer, child) == 0xb0);

struct ForwardScene {
    uint8_t unknown_0x0000[0x80];
    ForwardRenderer *renderer;
    uint8_t unknown_0x0088[0x1f8];
    ForwardRenderer *override_renderer;
};
static_assert(offsetof(ForwardScene, renderer) == 0x80);
static_assert(offsetof(ForwardScene, override_renderer) == 0x280);

struct ForwardContext {
    uint8_t unknown_0x0000[0x58];
    ForwardScene *scene;
};
static_assert(offsetof(ForwardContext, scene) == 0x58);

struct ForwardRequest {
    uint8_t unknown_0x0000[0x8];
    ForwardContext *context;
};
static_assert(offsetof(ForwardRequest, context) == 0x8);

RT_ORIGINAL(0x016355c0, fn_016355c0, uint64_t(ForwardResource *));

}  // namespace

/**
 *
 * Forwards the renderer's child resource to a callee when the renderer reports the forwarded kind.
 *
 * The renderer is the scene's override when that is set, otherwise the scene's own renderer. Its
 * query result is returned unchanged unless its low 32 bits are the forwarded kind. Then a renderer
 * with no child returns 0, and a child is passed, even with a null resource, to the callee whose
 * 64-bit result is returned.
 */
extern "C" uint64_t bb_misc_forward_renderer_resource(ForwardRequest *request)
{
    ForwardScene *scene = request->context->scene;
    ForwardRenderer *renderer = scene->override_renderer;
    if (renderer == nullptr) renderer = scene->renderer;

    const uint64_t kind = renderer->vtable->query_kind(renderer);
    if (static_cast<uint32_t>(kind) != kind_forwarded) return kind;

    ForwardRendererChild *child = renderer->child;
    if (child == nullptr) return 0;
    return fn_016355c0(child->resource);
}
