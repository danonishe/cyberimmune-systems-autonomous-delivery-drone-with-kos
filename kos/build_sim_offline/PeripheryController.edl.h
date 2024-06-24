#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt8__RAWTYPE__
#define ____UInt8__RAWTYPE__
nk_static_assert(sizeof(nk_uint8_t) == 1, bad_nk_uint8_t_size);
nk_static_assert(nk_alignof(nk_uint8_t) == 1, bad_nk_uint8_t_align);

#endif /* ____UInt8__RAWTYPE__ */

#ifndef __drone_controller__Initialization__INTERFACE__
#define __drone_controller__Initialization__INTERFACE__
enum {
    drone_controller_Initialization_WaitForInit_mid,
    drone_controller_Initialization_mid_max,
};
enum {
    drone_controller_Initialization_WaitForInit_req_arena_size =
    0,
    drone_controller_Initialization_WaitForInit_res_arena_size =
    0,
    drone_controller_Initialization_WaitForInit_req_handles =
    0,
    drone_controller_Initialization_WaitForInit_res_handles =
    0,
    drone_controller_Initialization_WaitForInit_err_handles =
    0,
    drone_controller_Initialization_req_arena_size =
    0,
    drone_controller_Initialization_res_arena_size =
    0,
    drone_controller_Initialization_arena_size =
    0,
    drone_controller_Initialization_req_handles =
    0,
    drone_controller_Initialization_res_handles =
    0,
    drone_controller_Initialization_err_handles =
    0,
};
typedef struct __nk_packed drone_controller_Initialization_WaitForInit_req {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_Initialization_WaitForInit_req;
#pragma pack(push, 8) /* drone_controller_Initialization_WaitForInit_res */
typedef struct drone_controller_Initialization_WaitForInit_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_Initialization_WaitForInit_err;
typedef struct drone_controller_Initialization_WaitForInit_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                } res_;
                struct drone_controller_Initialization_WaitForInit_err err_;
            };
        }
drone_controller_Initialization_WaitForInit_res;
#pragma pack(pop) /* drone_controller_Initialization_WaitForInit_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Initialization_WaitForInit_mid drone_controller_Initialization_WaitForInit_mid
#define Initialization_mid_max drone_controller_Initialization_mid_max
#define Initialization_WaitForInit_req_arena_size drone_controller_Initialization_WaitForInit_req_arena_size
#define Initialization_WaitForInit_res_arena_size drone_controller_Initialization_WaitForInit_res_arena_size
#define Initialization_WaitForInit_req_handles drone_controller_Initialization_WaitForInit_req_handles
#define Initialization_WaitForInit_res_handles drone_controller_Initialization_WaitForInit_res_handles
#define Initialization_WaitForInit_err_handles drone_controller_Initialization_WaitForInit_err_handles
#define Initialization_req_arena_size drone_controller_Initialization_req_arena_size
#define Initialization_res_arena_size drone_controller_Initialization_res_arena_size
#define Initialization_arena_size drone_controller_Initialization_arena_size
#define Initialization_req_handles drone_controller_Initialization_req_handles
#define Initialization_res_handles drone_controller_Initialization_res_handles
#define Initialization_err_handles drone_controller_Initialization_err_handles
#define Initialization_WaitForInit_req drone_controller_Initialization_WaitForInit_req
#define Initialization_WaitForInit_res drone_controller_Initialization_WaitForInit_res
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__Initialization__INTERFACE__ */

#ifndef __drone_controller__PeripheryControllerInterface__INTERFACE__
#define __drone_controller__PeripheryControllerInterface__INTERFACE__
enum {
    drone_controller_PeripheryControllerInterface_EnableBuzzer_mid,
    drone_controller_PeripheryControllerInterface_SetKillSwitch_mid,
    drone_controller_PeripheryControllerInterface_SetCargoLock_mid,
    drone_controller_PeripheryControllerInterface_mid_max,
};
enum {
    drone_controller_PeripheryControllerInterface_EnableBuzzer_req_arena_size =
    0,
    drone_controller_PeripheryControllerInterface_EnableBuzzer_res_arena_size =
    0,
    drone_controller_PeripheryControllerInterface_EnableBuzzer_req_handles =
    0,
    drone_controller_PeripheryControllerInterface_EnableBuzzer_res_handles =
    0,
    drone_controller_PeripheryControllerInterface_EnableBuzzer_err_handles =
    0,
    drone_controller_PeripheryControllerInterface_SetKillSwitch_req_arena_size =
    0,
    drone_controller_PeripheryControllerInterface_SetKillSwitch_res_arena_size =
    0,
    drone_controller_PeripheryControllerInterface_SetKillSwitch_req_handles =
    0,
    drone_controller_PeripheryControllerInterface_SetKillSwitch_res_handles =
    0,
    drone_controller_PeripheryControllerInterface_SetKillSwitch_err_handles =
    0,
    drone_controller_PeripheryControllerInterface_SetCargoLock_req_arena_size =
    0,
    drone_controller_PeripheryControllerInterface_SetCargoLock_res_arena_size =
    0,
    drone_controller_PeripheryControllerInterface_SetCargoLock_req_handles =
    0,
    drone_controller_PeripheryControllerInterface_SetCargoLock_res_handles =
    0,
    drone_controller_PeripheryControllerInterface_SetCargoLock_err_handles =
    0,
    drone_controller_PeripheryControllerInterface_req_arena_size =
    0,
    drone_controller_PeripheryControllerInterface_res_arena_size =
    0,
    drone_controller_PeripheryControllerInterface_arena_size =
    0,
    drone_controller_PeripheryControllerInterface_req_handles =
    0,
    drone_controller_PeripheryControllerInterface_res_handles =
    0,
    drone_controller_PeripheryControllerInterface_err_handles =
    0,
};
typedef struct __nk_packed drone_controller_PeripheryControllerInterface_EnableBuzzer_req {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_PeripheryControllerInterface_EnableBuzzer_req;
#pragma pack(push, 8) /* drone_controller_PeripheryControllerInterface_EnableBuzzer_res */
typedef struct drone_controller_PeripheryControllerInterface_EnableBuzzer_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_PeripheryControllerInterface_EnableBuzzer_err;
typedef struct drone_controller_PeripheryControllerInterface_EnableBuzzer_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                } res_;
                struct drone_controller_PeripheryControllerInterface_EnableBuzzer_err err_;
            };
        }
drone_controller_PeripheryControllerInterface_EnableBuzzer_res;
#pragma pack(pop) /* drone_controller_PeripheryControllerInterface_EnableBuzzer_res */
typedef struct __nk_packed drone_controller_PeripheryControllerInterface_SetKillSwitch_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(1) nk_uint8_t enable;
        }
drone_controller_PeripheryControllerInterface_SetKillSwitch_req;
#pragma pack(push, 8) /* drone_controller_PeripheryControllerInterface_SetKillSwitch_res */
typedef struct drone_controller_PeripheryControllerInterface_SetKillSwitch_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_PeripheryControllerInterface_SetKillSwitch_err;
typedef struct drone_controller_PeripheryControllerInterface_SetKillSwitch_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                } res_;
                struct drone_controller_PeripheryControllerInterface_SetKillSwitch_err err_;
            };
        }
drone_controller_PeripheryControllerInterface_SetKillSwitch_res;
#pragma pack(pop) /* drone_controller_PeripheryControllerInterface_SetKillSwitch_res */
typedef struct __nk_packed drone_controller_PeripheryControllerInterface_SetCargoLock_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(1) nk_uint8_t enable;
        }
drone_controller_PeripheryControllerInterface_SetCargoLock_req;
#pragma pack(push, 8) /* drone_controller_PeripheryControllerInterface_SetCargoLock_res */
typedef struct drone_controller_PeripheryControllerInterface_SetCargoLock_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_PeripheryControllerInterface_SetCargoLock_err;
typedef struct drone_controller_PeripheryControllerInterface_SetCargoLock_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                } res_;
                struct drone_controller_PeripheryControllerInterface_SetCargoLock_err err_;
            };
        }
drone_controller_PeripheryControllerInterface_SetCargoLock_res;
#pragma pack(pop) /* drone_controller_PeripheryControllerInterface_SetCargoLock_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define PeripheryControllerInterface_EnableBuzzer_mid drone_controller_PeripheryControllerInterface_EnableBuzzer_mid
#define PeripheryControllerInterface_SetKillSwitch_mid drone_controller_PeripheryControllerInterface_SetKillSwitch_mid
#define PeripheryControllerInterface_SetCargoLock_mid drone_controller_PeripheryControllerInterface_SetCargoLock_mid
#define PeripheryControllerInterface_mid_max drone_controller_PeripheryControllerInterface_mid_max
#define PeripheryControllerInterface_EnableBuzzer_req_arena_size drone_controller_PeripheryControllerInterface_EnableBuzzer_req_arena_size
#define PeripheryControllerInterface_EnableBuzzer_res_arena_size drone_controller_PeripheryControllerInterface_EnableBuzzer_res_arena_size
#define PeripheryControllerInterface_EnableBuzzer_req_handles drone_controller_PeripheryControllerInterface_EnableBuzzer_req_handles
#define PeripheryControllerInterface_EnableBuzzer_res_handles drone_controller_PeripheryControllerInterface_EnableBuzzer_res_handles
#define PeripheryControllerInterface_EnableBuzzer_err_handles drone_controller_PeripheryControllerInterface_EnableBuzzer_err_handles
#define PeripheryControllerInterface_SetKillSwitch_req_arena_size drone_controller_PeripheryControllerInterface_SetKillSwitch_req_arena_size
#define PeripheryControllerInterface_SetKillSwitch_res_arena_size drone_controller_PeripheryControllerInterface_SetKillSwitch_res_arena_size
#define PeripheryControllerInterface_SetKillSwitch_req_handles drone_controller_PeripheryControllerInterface_SetKillSwitch_req_handles
#define PeripheryControllerInterface_SetKillSwitch_res_handles drone_controller_PeripheryControllerInterface_SetKillSwitch_res_handles
#define PeripheryControllerInterface_SetKillSwitch_err_handles drone_controller_PeripheryControllerInterface_SetKillSwitch_err_handles
#define PeripheryControllerInterface_SetCargoLock_req_arena_size drone_controller_PeripheryControllerInterface_SetCargoLock_req_arena_size
#define PeripheryControllerInterface_SetCargoLock_res_arena_size drone_controller_PeripheryControllerInterface_SetCargoLock_res_arena_size
#define PeripheryControllerInterface_SetCargoLock_req_handles drone_controller_PeripheryControllerInterface_SetCargoLock_req_handles
#define PeripheryControllerInterface_SetCargoLock_res_handles drone_controller_PeripheryControllerInterface_SetCargoLock_res_handles
#define PeripheryControllerInterface_SetCargoLock_err_handles drone_controller_PeripheryControllerInterface_SetCargoLock_err_handles
#define PeripheryControllerInterface_req_arena_size drone_controller_PeripheryControllerInterface_req_arena_size
#define PeripheryControllerInterface_res_arena_size drone_controller_PeripheryControllerInterface_res_arena_size
#define PeripheryControllerInterface_arena_size drone_controller_PeripheryControllerInterface_arena_size
#define PeripheryControllerInterface_req_handles drone_controller_PeripheryControllerInterface_req_handles
#define PeripheryControllerInterface_res_handles drone_controller_PeripheryControllerInterface_res_handles
#define PeripheryControllerInterface_err_handles drone_controller_PeripheryControllerInterface_err_handles
#define PeripheryControllerInterface_EnableBuzzer_req drone_controller_PeripheryControllerInterface_EnableBuzzer_req
#define PeripheryControllerInterface_EnableBuzzer_res drone_controller_PeripheryControllerInterface_EnableBuzzer_res
#define PeripheryControllerInterface_SetKillSwitch_req drone_controller_PeripheryControllerInterface_SetKillSwitch_req
#define PeripheryControllerInterface_SetKillSwitch_res drone_controller_PeripheryControllerInterface_SetKillSwitch_res
#define PeripheryControllerInterface_SetCargoLock_req drone_controller_PeripheryControllerInterface_SetCargoLock_req
#define PeripheryControllerInterface_SetCargoLock_res drone_controller_PeripheryControllerInterface_SetCargoLock_res
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__PeripheryControllerInterface__INTERFACE__ */

#ifndef __drone_controller__PeripheryController__COMPONENT_ENDPOINTS__
#define __drone_controller__PeripheryController__COMPONENT_ENDPOINTS__
enum {
    drone_controller_PeripheryController_waitForInit_iid,
    drone_controller_PeripheryController_interface_iid,
    drone_controller_PeripheryController_iidMax,
};
enum {
    drone_controller_PeripheryController_iidOffset =
    0,
};
enum {
    drone_controller_PeripheryController_securityIidMax,
};
enum {
    drone_controller_PeripheryController_component_req_arena_size =
    0,
    drone_controller_PeripheryController_component_res_arena_size =
    0,
    drone_controller_PeripheryController_component_arena_size =
    0,
    drone_controller_PeripheryController_component_req_handles =
    0,
    drone_controller_PeripheryController_component_res_handles =
    0,
    drone_controller_PeripheryController_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define PeripheryController_waitForInit_iid drone_controller_PeripheryController_waitForInit_iid
#define PeripheryController_interface_iid drone_controller_PeripheryController_interface_iid
#define PeripheryController_iidMax drone_controller_PeripheryController_iidMax
#define PeripheryController_iidOffset drone_controller_PeripheryController_iidOffset
#define PeripheryController_securityIidMax drone_controller_PeripheryController_securityIidMax
#define PeripheryController_component_req_arena_size drone_controller_PeripheryController_component_req_arena_size
#define PeripheryController_component_res_arena_size drone_controller_PeripheryController_component_res_arena_size
#define PeripheryController_component_arena_size drone_controller_PeripheryController_component_arena_size
#define PeripheryController_component_req_handles drone_controller_PeripheryController_component_req_handles
#define PeripheryController_component_res_handles drone_controller_PeripheryController_component_res_handles
#define PeripheryController_component_err_handles drone_controller_PeripheryController_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__PeripheryController__COMPONENT_ENDPOINTS__ */

#ifndef __drone_controller__PeripheryController__TASK_ENDPOINTS__
#define __drone_controller__PeripheryController__TASK_ENDPOINTS__
enum {
    drone_controller_PeripheryController_entity_req_arena_size =
    drone_controller_PeripheryController_component_req_arena_size,
    drone_controller_PeripheryController_entity_res_arena_size =
    drone_controller_PeripheryController_component_res_arena_size,
    drone_controller_PeripheryController_entity_arena_size =
    drone_controller_PeripheryController_component_arena_size,
    drone_controller_PeripheryController_entity_req_handles =
    drone_controller_PeripheryController_component_req_handles,
    drone_controller_PeripheryController_entity_res_handles =
    drone_controller_PeripheryController_component_res_handles,
    drone_controller_PeripheryController_entity_err_handles =
    drone_controller_PeripheryController_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define PeripheryController_entity_req_arena_size drone_controller_PeripheryController_entity_req_arena_size
#define PeripheryController_entity_res_arena_size drone_controller_PeripheryController_entity_res_arena_size
#define PeripheryController_entity_arena_size drone_controller_PeripheryController_entity_arena_size
#define PeripheryController_entity_req_handles drone_controller_PeripheryController_entity_req_handles
#define PeripheryController_entity_res_handles drone_controller_PeripheryController_entity_res_handles
#define PeripheryController_entity_err_handles drone_controller_PeripheryController_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__PeripheryController__TASK_ENDPOINTS__ */

#ifndef __drone_controller__Initialization__VTABLE__
#define __drone_controller__Initialization__VTABLE__
typedef struct drone_controller_Initialization {
            const
            struct drone_controller_Initialization_ops *ops;
        } drone_controller_Initialization;
typedef nk_err_t
drone_controller_Initialization_WaitForInit_fn(struct drone_controller_Initialization *,
                                               const
                                               struct drone_controller_Initialization_WaitForInit_req *,
                                               const
                                               struct nk_arena *,
                                               struct drone_controller_Initialization_WaitForInit_res *,
                                               struct nk_arena *);
typedef struct drone_controller_Initialization_ops {
            drone_controller_Initialization_WaitForInit_fn *WaitForInit;
        } drone_controller_Initialization_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Initialization_WaitForInit_fn drone_controller_Initialization_WaitForInit_fn
#define Initialization_ops drone_controller_Initialization_ops
#define Initialization drone_controller_Initialization
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__Initialization__VTABLE__ */

#ifndef __drone_controller__PeripheryControllerInterface__VTABLE__
#define __drone_controller__PeripheryControllerInterface__VTABLE__
typedef struct drone_controller_PeripheryControllerInterface {
            const
            struct drone_controller_PeripheryControllerInterface_ops *ops;
        }
drone_controller_PeripheryControllerInterface;
typedef nk_err_t
drone_controller_PeripheryControllerInterface_EnableBuzzer_fn(struct drone_controller_PeripheryControllerInterface *,
                                                              const
                                                              struct drone_controller_PeripheryControllerInterface_EnableBuzzer_req *,
                                                              const
                                                              struct nk_arena *,
                                                              struct drone_controller_PeripheryControllerInterface_EnableBuzzer_res *,
                                                              struct nk_arena *);
typedef nk_err_t
drone_controller_PeripheryControllerInterface_SetKillSwitch_fn(struct drone_controller_PeripheryControllerInterface *,
                                                               const
                                                               struct drone_controller_PeripheryControllerInterface_SetKillSwitch_req *,
                                                               const
                                                               struct nk_arena *,
                                                               struct drone_controller_PeripheryControllerInterface_SetKillSwitch_res *,
                                                               struct nk_arena *);
typedef nk_err_t
drone_controller_PeripheryControllerInterface_SetCargoLock_fn(struct drone_controller_PeripheryControllerInterface *,
                                                              const
                                                              struct drone_controller_PeripheryControllerInterface_SetCargoLock_req *,
                                                              const
                                                              struct nk_arena *,
                                                              struct drone_controller_PeripheryControllerInterface_SetCargoLock_res *,
                                                              struct nk_arena *);
typedef struct drone_controller_PeripheryControllerInterface_ops {
            drone_controller_PeripheryControllerInterface_EnableBuzzer_fn *EnableBuzzer;
            drone_controller_PeripheryControllerInterface_SetKillSwitch_fn *SetKillSwitch;
            drone_controller_PeripheryControllerInterface_SetCargoLock_fn *SetCargoLock;
        }
drone_controller_PeripheryControllerInterface_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define PeripheryControllerInterface_EnableBuzzer_fn drone_controller_PeripheryControllerInterface_EnableBuzzer_fn
#define PeripheryControllerInterface_SetKillSwitch_fn drone_controller_PeripheryControllerInterface_SetKillSwitch_fn
#define PeripheryControllerInterface_SetCargoLock_fn drone_controller_PeripheryControllerInterface_SetCargoLock_fn
#define PeripheryControllerInterface_ops drone_controller_PeripheryControllerInterface_ops
#define PeripheryControllerInterface drone_controller_PeripheryControllerInterface
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__PeripheryControllerInterface__VTABLE__ */

#ifndef __drone_controller__Initialization__SERVER__
#define __drone_controller__Initialization__SERVER__
typedef union drone_controller_Initialization_req {
            struct nk_message base_;
            struct drone_controller_Initialization_WaitForInit_req WaitForInit;
        } drone_controller_Initialization_req;
typedef union drone_controller_Initialization_res {
            struct nk_message base_;
            struct drone_controller_Initialization_WaitForInit_res WaitForInit;
        } drone_controller_Initialization_res;
static inline
nk_err_t drone_controller_Initialization_interface_dispatch(struct drone_controller_Initialization *impl,
                                                            nk_iid_t iid,
                                                            const
                                                            struct nk_message *req,
                                                            const
                                                            struct nk_arena *req_arena,
                                                            struct nk_message *res,
                                                            struct nk_arena *res_arena)
{
    nk_err_t rc = NK_ENOENT;
    nk_iid_t req_iid;
    nk_mid_t req_mid;
    
    nk_assert(impl != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(impl);
    nk_unused(req_arena);
    nk_unused(res_arena);
    if (req->iid == iid) {
        req_iid = req->iid;
        req_mid = req->mid;
        switch (req->mid) {
            
          case drone_controller_Initialization_WaitForInit_mid:
            {
                struct drone_controller_Initialization_WaitForInit_res
                *res_ =
                (struct drone_controller_Initialization_WaitForInit_res *) res;
                
                rc = impl->ops->WaitForInit(impl,
                                            (const
                                             struct drone_controller_Initialization_WaitForInit_req *) req,
                                            req_arena,
                                            res_,
                                            res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_Initialization_WaitForInit_res_handles);
                }
                break;
            }
            
          default:
            ;
        }
        res->iid = req_iid;
        res->mid = req_mid;
    }
    return rc;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Initialization_req drone_controller_Initialization_req
#define Initialization_res drone_controller_Initialization_res
#define Initialization_interface_dispatch drone_controller_Initialization_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__Initialization__SERVER__ */

#ifndef __drone_controller__PeripheryControllerInterface__SERVER__
#define __drone_controller__PeripheryControllerInterface__SERVER__
typedef union drone_controller_PeripheryControllerInterface_req {
            struct nk_message base_;
            struct drone_controller_PeripheryControllerInterface_EnableBuzzer_req EnableBuzzer;
            struct drone_controller_PeripheryControllerInterface_SetKillSwitch_req SetKillSwitch;
            struct drone_controller_PeripheryControllerInterface_SetCargoLock_req SetCargoLock;
        }
drone_controller_PeripheryControllerInterface_req;
typedef union drone_controller_PeripheryControllerInterface_res {
            struct nk_message base_;
            struct drone_controller_PeripheryControllerInterface_EnableBuzzer_res EnableBuzzer;
            struct drone_controller_PeripheryControllerInterface_SetKillSwitch_res SetKillSwitch;
            struct drone_controller_PeripheryControllerInterface_SetCargoLock_res SetCargoLock;
        }
drone_controller_PeripheryControllerInterface_res;
static inline
nk_err_t drone_controller_PeripheryControllerInterface_interface_dispatch(struct drone_controller_PeripheryControllerInterface *impl,
                                                                          nk_iid_t iid,
                                                                          const
                                                                          struct nk_message *req,
                                                                          const
                                                                          struct nk_arena *req_arena,
                                                                          struct nk_message *res,
                                                                          struct nk_arena *res_arena)
{
    nk_err_t rc = NK_ENOENT;
    nk_iid_t req_iid;
    nk_mid_t req_mid;
    
    nk_assert(impl != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(impl);
    nk_unused(req_arena);
    nk_unused(res_arena);
    if (req->iid == iid) {
        req_iid = req->iid;
        req_mid = req->mid;
        switch (req->mid) {
            
          case drone_controller_PeripheryControllerInterface_EnableBuzzer_mid:
            {
                struct drone_controller_PeripheryControllerInterface_EnableBuzzer_res
                *res_ =
                (struct drone_controller_PeripheryControllerInterface_EnableBuzzer_res *) res;
                
                rc = impl->ops->EnableBuzzer(impl,
                                             (const
                                              struct drone_controller_PeripheryControllerInterface_EnableBuzzer_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_PeripheryControllerInterface_EnableBuzzer_res_handles);
                }
                break;
            }
            
          case drone_controller_PeripheryControllerInterface_SetKillSwitch_mid:
            {
                struct drone_controller_PeripheryControllerInterface_SetKillSwitch_res
                *res_ =
                (struct drone_controller_PeripheryControllerInterface_SetKillSwitch_res *) res;
                
                rc =
                    impl->ops->SetKillSwitch(impl,
                                             (const
                                              struct drone_controller_PeripheryControllerInterface_SetKillSwitch_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_PeripheryControllerInterface_SetKillSwitch_res_handles);
                }
                break;
            }
            
          case drone_controller_PeripheryControllerInterface_SetCargoLock_mid:
            {
                struct drone_controller_PeripheryControllerInterface_SetCargoLock_res
                *res_ =
                (struct drone_controller_PeripheryControllerInterface_SetCargoLock_res *) res;
                
                rc = impl->ops->SetCargoLock(impl,
                                             (const
                                              struct drone_controller_PeripheryControllerInterface_SetCargoLock_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_PeripheryControllerInterface_SetCargoLock_res_handles);
                }
                break;
            }
            
          default:
            ;
        }
        res->iid = req_iid;
        res->mid = req_mid;
    }
    return rc;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define PeripheryControllerInterface_req drone_controller_PeripheryControllerInterface_req
#define PeripheryControllerInterface_res drone_controller_PeripheryControllerInterface_res
#define PeripheryControllerInterface_interface_dispatch drone_controller_PeripheryControllerInterface_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__PeripheryControllerInterface__SERVER__ */

#ifndef __drone_controller__PeripheryController__COMPONENT_SERVER_TYPES__
#define __drone_controller__PeripheryController__COMPONENT_SERVER_TYPES__
typedef struct drone_controller_PeripheryController_component {
            struct drone_controller_Initialization *waitForInit;
            struct drone_controller_PeripheryControllerInterface *interface;
        }
drone_controller_PeripheryController_component;

#endif /* __drone_controller__PeripheryController__COMPONENT_SERVER_TYPES__ */

#ifndef __drone_controller__PeripheryController__COMPONENT_SERVER_DISPATCHER__
#define __drone_controller__PeripheryController__COMPONENT_SERVER_DISPATCHER__
static inline
void drone_controller_PeripheryController_component_init(struct drone_controller_PeripheryController_component *self,
                                                         struct drone_controller_Initialization *waitForInit,
                                                         struct drone_controller_PeripheryControllerInterface *interface)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->waitForInit = waitForInit;
    self->interface = interface;
}
typedef union drone_controller_PeripheryController_component_req {
            struct nk_message base_;
            drone_controller_Initialization_req waitForInit;
            drone_controller_PeripheryControllerInterface_req interface;
        }
drone_controller_PeripheryController_component_req;
typedef union drone_controller_PeripheryController_component_res {
            struct nk_message base_;
            drone_controller_Initialization_res waitForInit;
            drone_controller_PeripheryControllerInterface_res interface;
        }
drone_controller_PeripheryController_component_res;
static inline
nk_err_t drone_controller_PeripheryController_component_dispatch(struct drone_controller_PeripheryController_component *self,
                                                                 nk_iid_t iidOffset,
                                                                 const
                                                                 struct nk_message *req,
                                                                 const
                                                                 struct nk_arena *req_arena,
                                                                 struct nk_message *res,
                                                                 struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(self);
    nk_unused(req_arena);
    nk_unused(res);
    nk_unused(res_arena);
    if (req->iid < iidOffset)
        return NK_ENOENT;
    switch (req->iid - iidOffset) {
        
      case drone_controller_PeripheryController_waitForInit_iid:
        return drone_controller_Initialization_interface_dispatch(self->waitForInit,
                                                                  req->iid,
                                                                  req,
                                                                  req_arena,
                                                                  res,
                                                                  res_arena);
        
      case drone_controller_PeripheryController_interface_iid:
        return drone_controller_PeripheryControllerInterface_interface_dispatch(self->interface,
                                                                                req->iid,
                                                                                req,
                                                                                req_arena,
                                                                                res,
                                                                                res_arena);
        
      default:
        ;
    }
    return NK_ENOENT;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define PeripheryController_component drone_controller_PeripheryController_component
#define PeripheryController_component_init drone_controller_PeripheryController_component_init
#define PeripheryController_component_req drone_controller_PeripheryController_component_req
#define PeripheryController_component_res drone_controller_PeripheryController_component_res
#define PeripheryController_component_dispatch drone_controller_PeripheryController_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__PeripheryController__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __drone_controller__PeripheryController__ENTITY_SERVER__
#define __drone_controller__PeripheryController__ENTITY_SERVER__
#define drone_controller_PeripheryController_entity_res drone_controller_PeripheryController_component_res
#define drone_controller_PeripheryController_entity_req drone_controller_PeripheryController_component_req
#define drone_controller_PeripheryController_entity drone_controller_PeripheryController_component
static inline
void drone_controller_PeripheryController_entity_init(struct drone_controller_PeripheryController_entity *self,
                                                      struct drone_controller_Initialization *waitForInit,
                                                      struct drone_controller_PeripheryControllerInterface *interface)
{
    drone_controller_PeripheryController_component_init(self,
                                                        waitForInit,
                                                        interface);
}
static inline
nk_err_t drone_controller_PeripheryController_entity_dispatch(struct drone_controller_PeripheryController_entity *self,
                                                              const
                                                              struct nk_message *req,
                                                              const
                                                              struct nk_arena *req_arena,
                                                              struct nk_message *res,
                                                              struct nk_arena *res_arena)
{
    return drone_controller_PeripheryController_component_dispatch(self,
                                                                   0,
                                                                   req,
                                                                   req_arena,
                                                                   res,
                                                                   res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define PeripheryController_entity drone_controller_PeripheryController_entity
#define PeripheryController_entity_init drone_controller_PeripheryController_entity_init
#define PeripheryController_entity_req drone_controller_PeripheryController_entity_req
#define PeripheryController_entity_res drone_controller_PeripheryController_entity_res
#define PeripheryController_entity_dispatch drone_controller_PeripheryController_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__PeripheryController__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

