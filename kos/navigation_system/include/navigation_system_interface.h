#pragma once

#define NK_USE_UNQUALIFIED_NAMES
#include <drone_controller/NavigationSystemInterface.idl.h>

nk_err_t GetCoordsImpl(struct NavigationSystemInterface *self,
                    const NavigationSystemInterface_GetCoords_req *req, const struct nk_arena *reqArena,
                    NavigationSystemInterface_GetCoords_res *res, struct nk_arena *resArena);
nk_err_t GetDopImpl(struct NavigationSystemInterface *self,
                    const NavigationSystemInterface_GetDop_req *req, const struct nk_arena *reqArena,
                    NavigationSystemInterface_GetDop_res *res, struct nk_arena *resArena);

static struct NavigationSystemInterface *CreateNavigationSystemInterfaceImpl(void) {
    static const struct NavigationSystemInterface_ops Ops = {
        .GetCoords = GetCoordsImpl, .GetDop = GetDopImpl
    };

    static NavigationSystemInterface obj = {
        .ops = &Ops
    };

    return &obj;
}