#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____SInt32__RAWTYPE__
#define ____SInt32__RAWTYPE__
nk_static_assert(sizeof(nk_sint32_t) == 4, bad_nk_sint32_t_size);
nk_static_assert(nk_alignof(nk_sint32_t) == 4, bad_nk_sint32_t_align);

#endif /* ____SInt32__RAWTYPE__ */

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

#ifndef __drone_controller__NavigationSystemInterface__INTERFACE__
#define __drone_controller__NavigationSystemInterface__INTERFACE__
enum {
    drone_controller_NavigationSystemInterface_GetCoords_mid,
    drone_controller_NavigationSystemInterface_GetGpsInfo_mid,
    drone_controller_NavigationSystemInterface_mid_max,
};
enum {
    drone_controller_NavigationSystemInterface_GetCoords_req_arena_size =
    0,
    drone_controller_NavigationSystemInterface_GetCoords_res_arena_size =
    0,
    drone_controller_NavigationSystemInterface_GetCoords_req_handles =
    0,
    drone_controller_NavigationSystemInterface_GetCoords_res_handles =
    0,
    drone_controller_NavigationSystemInterface_GetCoords_err_handles =
    0,
    drone_controller_NavigationSystemInterface_GetGpsInfo_req_arena_size =
    0,
    drone_controller_NavigationSystemInterface_GetGpsInfo_res_arena_size =
    0,
    drone_controller_NavigationSystemInterface_GetGpsInfo_req_handles =
    0,
    drone_controller_NavigationSystemInterface_GetGpsInfo_res_handles =
    0,
    drone_controller_NavigationSystemInterface_GetGpsInfo_err_handles =
    0,
    drone_controller_NavigationSystemInterface_req_arena_size =
    0,
    drone_controller_NavigationSystemInterface_res_arena_size =
    0,
    drone_controller_NavigationSystemInterface_arena_size =
    0,
    drone_controller_NavigationSystemInterface_req_handles =
    0,
    drone_controller_NavigationSystemInterface_res_handles =
    0,
    drone_controller_NavigationSystemInterface_err_handles =
    0,
};
typedef struct __nk_packed drone_controller_NavigationSystemInterface_GetCoords_req {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_NavigationSystemInterface_GetCoords_req;
#pragma pack(push, 8) /* drone_controller_NavigationSystemInterface_GetCoords_res */
typedef struct drone_controller_NavigationSystemInterface_GetCoords_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_NavigationSystemInterface_GetCoords_err;
typedef struct drone_controller_NavigationSystemInterface_GetCoords_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                    __nk_alignas(4)
                    nk_sint32_t lat;
                    __nk_alignas(4)
                    nk_sint32_t lng;
                    __nk_alignas(4)
                    nk_sint32_t alt;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                    __nk_alignas(4)
                    nk_sint32_t lat;
                    __nk_alignas(4)
                    nk_sint32_t lng;
                    __nk_alignas(4)
                    nk_sint32_t alt;
                } res_;
                struct drone_controller_NavigationSystemInterface_GetCoords_err err_;
            };
        }
drone_controller_NavigationSystemInterface_GetCoords_res;
#pragma pack(pop) /* drone_controller_NavigationSystemInterface_GetCoords_res */
typedef struct __nk_packed drone_controller_NavigationSystemInterface_GetGpsInfo_req {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_NavigationSystemInterface_GetGpsInfo_req;
#pragma pack(push, 8) /* drone_controller_NavigationSystemInterface_GetGpsInfo_res */
typedef struct drone_controller_NavigationSystemInterface_GetGpsInfo_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_NavigationSystemInterface_GetGpsInfo_err;
typedef struct drone_controller_NavigationSystemInterface_GetGpsInfo_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                    __nk_alignas(4)
                    nk_sint32_t dop;
                    __nk_alignas(4)
                    nk_sint32_t sats;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                    __nk_alignas(4)
                    nk_sint32_t dop;
                    __nk_alignas(4)
                    nk_sint32_t sats;
                } res_;
                struct drone_controller_NavigationSystemInterface_GetGpsInfo_err err_;
            };
        }
drone_controller_NavigationSystemInterface_GetGpsInfo_res;
#pragma pack(pop) /* drone_controller_NavigationSystemInterface_GetGpsInfo_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define NavigationSystemInterface_GetCoords_mid drone_controller_NavigationSystemInterface_GetCoords_mid
#define NavigationSystemInterface_GetGpsInfo_mid drone_controller_NavigationSystemInterface_GetGpsInfo_mid
#define NavigationSystemInterface_mid_max drone_controller_NavigationSystemInterface_mid_max
#define NavigationSystemInterface_GetCoords_req_arena_size drone_controller_NavigationSystemInterface_GetCoords_req_arena_size
#define NavigationSystemInterface_GetCoords_res_arena_size drone_controller_NavigationSystemInterface_GetCoords_res_arena_size
#define NavigationSystemInterface_GetCoords_req_handles drone_controller_NavigationSystemInterface_GetCoords_req_handles
#define NavigationSystemInterface_GetCoords_res_handles drone_controller_NavigationSystemInterface_GetCoords_res_handles
#define NavigationSystemInterface_GetCoords_err_handles drone_controller_NavigationSystemInterface_GetCoords_err_handles
#define NavigationSystemInterface_GetGpsInfo_req_arena_size drone_controller_NavigationSystemInterface_GetGpsInfo_req_arena_size
#define NavigationSystemInterface_GetGpsInfo_res_arena_size drone_controller_NavigationSystemInterface_GetGpsInfo_res_arena_size
#define NavigationSystemInterface_GetGpsInfo_req_handles drone_controller_NavigationSystemInterface_GetGpsInfo_req_handles
#define NavigationSystemInterface_GetGpsInfo_res_handles drone_controller_NavigationSystemInterface_GetGpsInfo_res_handles
#define NavigationSystemInterface_GetGpsInfo_err_handles drone_controller_NavigationSystemInterface_GetGpsInfo_err_handles
#define NavigationSystemInterface_req_arena_size drone_controller_NavigationSystemInterface_req_arena_size
#define NavigationSystemInterface_res_arena_size drone_controller_NavigationSystemInterface_res_arena_size
#define NavigationSystemInterface_arena_size drone_controller_NavigationSystemInterface_arena_size
#define NavigationSystemInterface_req_handles drone_controller_NavigationSystemInterface_req_handles
#define NavigationSystemInterface_res_handles drone_controller_NavigationSystemInterface_res_handles
#define NavigationSystemInterface_err_handles drone_controller_NavigationSystemInterface_err_handles
#define NavigationSystemInterface_GetCoords_req drone_controller_NavigationSystemInterface_GetCoords_req
#define NavigationSystemInterface_GetCoords_res drone_controller_NavigationSystemInterface_GetCoords_res
#define NavigationSystemInterface_GetGpsInfo_req drone_controller_NavigationSystemInterface_GetGpsInfo_req
#define NavigationSystemInterface_GetGpsInfo_res drone_controller_NavigationSystemInterface_GetGpsInfo_res
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__NavigationSystemInterface__INTERFACE__ */

#ifndef __drone_controller__NavigationSystem__COMPONENT_ENDPOINTS__
#define __drone_controller__NavigationSystem__COMPONENT_ENDPOINTS__
enum {
    drone_controller_NavigationSystem_waitForInit_iid,
    drone_controller_NavigationSystem_interface_iid,
    drone_controller_NavigationSystem_iidMax,
};
enum {
    drone_controller_NavigationSystem_iidOffset =
    0,
};
enum {
    drone_controller_NavigationSystem_securityIidMax,
};
enum {
    drone_controller_NavigationSystem_component_req_arena_size =
    0,
    drone_controller_NavigationSystem_component_res_arena_size =
    0,
    drone_controller_NavigationSystem_component_arena_size =
    0,
    drone_controller_NavigationSystem_component_req_handles =
    0,
    drone_controller_NavigationSystem_component_res_handles =
    0,
    drone_controller_NavigationSystem_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define NavigationSystem_waitForInit_iid drone_controller_NavigationSystem_waitForInit_iid
#define NavigationSystem_interface_iid drone_controller_NavigationSystem_interface_iid
#define NavigationSystem_iidMax drone_controller_NavigationSystem_iidMax
#define NavigationSystem_iidOffset drone_controller_NavigationSystem_iidOffset
#define NavigationSystem_securityIidMax drone_controller_NavigationSystem_securityIidMax
#define NavigationSystem_component_req_arena_size drone_controller_NavigationSystem_component_req_arena_size
#define NavigationSystem_component_res_arena_size drone_controller_NavigationSystem_component_res_arena_size
#define NavigationSystem_component_arena_size drone_controller_NavigationSystem_component_arena_size
#define NavigationSystem_component_req_handles drone_controller_NavigationSystem_component_req_handles
#define NavigationSystem_component_res_handles drone_controller_NavigationSystem_component_res_handles
#define NavigationSystem_component_err_handles drone_controller_NavigationSystem_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__NavigationSystem__COMPONENT_ENDPOINTS__ */

#ifndef __drone_controller__NavigationSystem__TASK_ENDPOINTS__
#define __drone_controller__NavigationSystem__TASK_ENDPOINTS__
enum {
    drone_controller_NavigationSystem_entity_req_arena_size =
    drone_controller_NavigationSystem_component_req_arena_size,
    drone_controller_NavigationSystem_entity_res_arena_size =
    drone_controller_NavigationSystem_component_res_arena_size,
    drone_controller_NavigationSystem_entity_arena_size =
    drone_controller_NavigationSystem_component_arena_size,
    drone_controller_NavigationSystem_entity_req_handles =
    drone_controller_NavigationSystem_component_req_handles,
    drone_controller_NavigationSystem_entity_res_handles =
    drone_controller_NavigationSystem_component_res_handles,
    drone_controller_NavigationSystem_entity_err_handles =
    drone_controller_NavigationSystem_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define NavigationSystem_entity_req_arena_size drone_controller_NavigationSystem_entity_req_arena_size
#define NavigationSystem_entity_res_arena_size drone_controller_NavigationSystem_entity_res_arena_size
#define NavigationSystem_entity_arena_size drone_controller_NavigationSystem_entity_arena_size
#define NavigationSystem_entity_req_handles drone_controller_NavigationSystem_entity_req_handles
#define NavigationSystem_entity_res_handles drone_controller_NavigationSystem_entity_res_handles
#define NavigationSystem_entity_err_handles drone_controller_NavigationSystem_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__NavigationSystem__TASK_ENDPOINTS__ */

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

#ifndef __drone_controller__NavigationSystemInterface__VTABLE__
#define __drone_controller__NavigationSystemInterface__VTABLE__
typedef struct drone_controller_NavigationSystemInterface {
            const
            struct drone_controller_NavigationSystemInterface_ops *ops;
        }
drone_controller_NavigationSystemInterface;
typedef nk_err_t
drone_controller_NavigationSystemInterface_GetCoords_fn(struct drone_controller_NavigationSystemInterface *,
                                                        const
                                                        struct drone_controller_NavigationSystemInterface_GetCoords_req *,
                                                        const
                                                        struct nk_arena *,
                                                        struct drone_controller_NavigationSystemInterface_GetCoords_res *,
                                                        struct nk_arena *);
typedef nk_err_t
drone_controller_NavigationSystemInterface_GetGpsInfo_fn(struct drone_controller_NavigationSystemInterface *,
                                                         const
                                                         struct drone_controller_NavigationSystemInterface_GetGpsInfo_req *,
                                                         const
                                                         struct nk_arena *,
                                                         struct drone_controller_NavigationSystemInterface_GetGpsInfo_res *,
                                                         struct nk_arena *);
typedef struct drone_controller_NavigationSystemInterface_ops {
            drone_controller_NavigationSystemInterface_GetCoords_fn *GetCoords;
            drone_controller_NavigationSystemInterface_GetGpsInfo_fn *GetGpsInfo;
        }
drone_controller_NavigationSystemInterface_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define NavigationSystemInterface_GetCoords_fn drone_controller_NavigationSystemInterface_GetCoords_fn
#define NavigationSystemInterface_GetGpsInfo_fn drone_controller_NavigationSystemInterface_GetGpsInfo_fn
#define NavigationSystemInterface_ops drone_controller_NavigationSystemInterface_ops
#define NavigationSystemInterface drone_controller_NavigationSystemInterface
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__NavigationSystemInterface__VTABLE__ */

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

#ifndef __drone_controller__NavigationSystemInterface__SERVER__
#define __drone_controller__NavigationSystemInterface__SERVER__
typedef union drone_controller_NavigationSystemInterface_req {
            struct nk_message base_;
            struct drone_controller_NavigationSystemInterface_GetCoords_req GetCoords;
            struct drone_controller_NavigationSystemInterface_GetGpsInfo_req GetGpsInfo;
        }
drone_controller_NavigationSystemInterface_req;
typedef union drone_controller_NavigationSystemInterface_res {
            struct nk_message base_;
            struct drone_controller_NavigationSystemInterface_GetCoords_res GetCoords;
            struct drone_controller_NavigationSystemInterface_GetGpsInfo_res GetGpsInfo;
        }
drone_controller_NavigationSystemInterface_res;
static inline
nk_err_t drone_controller_NavigationSystemInterface_interface_dispatch(struct drone_controller_NavigationSystemInterface *impl,
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
            
          case drone_controller_NavigationSystemInterface_GetCoords_mid:
            {
                struct drone_controller_NavigationSystemInterface_GetCoords_res
                *res_ =
                (struct drone_controller_NavigationSystemInterface_GetCoords_res *) res;
                
                rc = impl->ops->GetCoords(impl,
                                          (const
                                           struct drone_controller_NavigationSystemInterface_GetCoords_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_NavigationSystemInterface_GetCoords_res_handles);
                }
                break;
            }
            
          case drone_controller_NavigationSystemInterface_GetGpsInfo_mid:
            {
                struct drone_controller_NavigationSystemInterface_GetGpsInfo_res
                *res_ =
                (struct drone_controller_NavigationSystemInterface_GetGpsInfo_res *) res;
                
                rc = impl->ops->GetGpsInfo(impl,
                                           (const
                                            struct drone_controller_NavigationSystemInterface_GetGpsInfo_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_NavigationSystemInterface_GetGpsInfo_res_handles);
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
#define NavigationSystemInterface_req drone_controller_NavigationSystemInterface_req
#define NavigationSystemInterface_res drone_controller_NavigationSystemInterface_res
#define NavigationSystemInterface_interface_dispatch drone_controller_NavigationSystemInterface_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__NavigationSystemInterface__SERVER__ */

#ifndef __drone_controller__NavigationSystem__COMPONENT_SERVER_TYPES__
#define __drone_controller__NavigationSystem__COMPONENT_SERVER_TYPES__
typedef struct drone_controller_NavigationSystem_component {
            struct drone_controller_Initialization *waitForInit;
            struct drone_controller_NavigationSystemInterface *interface;
        }
drone_controller_NavigationSystem_component;

#endif /* __drone_controller__NavigationSystem__COMPONENT_SERVER_TYPES__ */

#ifndef __drone_controller__NavigationSystem__COMPONENT_SERVER_DISPATCHER__
#define __drone_controller__NavigationSystem__COMPONENT_SERVER_DISPATCHER__
static inline
void drone_controller_NavigationSystem_component_init(struct drone_controller_NavigationSystem_component *self,
                                                      struct drone_controller_Initialization *waitForInit,
                                                      struct drone_controller_NavigationSystemInterface *interface)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->waitForInit = waitForInit;
    self->interface = interface;
}
typedef union drone_controller_NavigationSystem_component_req {
            struct nk_message base_;
            drone_controller_Initialization_req waitForInit;
            drone_controller_NavigationSystemInterface_req interface;
        }
drone_controller_NavigationSystem_component_req;
typedef union drone_controller_NavigationSystem_component_res {
            struct nk_message base_;
            drone_controller_Initialization_res waitForInit;
            drone_controller_NavigationSystemInterface_res interface;
        }
drone_controller_NavigationSystem_component_res;
static inline
nk_err_t drone_controller_NavigationSystem_component_dispatch(struct drone_controller_NavigationSystem_component *self,
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
        
      case drone_controller_NavigationSystem_waitForInit_iid:
        return drone_controller_Initialization_interface_dispatch(self->waitForInit,
                                                                  req->iid,
                                                                  req,
                                                                  req_arena,
                                                                  res,
                                                                  res_arena);
        
      case drone_controller_NavigationSystem_interface_iid:
        return drone_controller_NavigationSystemInterface_interface_dispatch(self->interface,
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
#define NavigationSystem_component drone_controller_NavigationSystem_component
#define NavigationSystem_component_init drone_controller_NavigationSystem_component_init
#define NavigationSystem_component_req drone_controller_NavigationSystem_component_req
#define NavigationSystem_component_res drone_controller_NavigationSystem_component_res
#define NavigationSystem_component_dispatch drone_controller_NavigationSystem_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__NavigationSystem__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __drone_controller__NavigationSystem__ENTITY_SERVER__
#define __drone_controller__NavigationSystem__ENTITY_SERVER__
#define drone_controller_NavigationSystem_entity_res drone_controller_NavigationSystem_component_res
#define drone_controller_NavigationSystem_entity_req drone_controller_NavigationSystem_component_req
#define drone_controller_NavigationSystem_entity drone_controller_NavigationSystem_component
static inline
void drone_controller_NavigationSystem_entity_init(struct drone_controller_NavigationSystem_entity *self,
                                                   struct drone_controller_Initialization *waitForInit,
                                                   struct drone_controller_NavigationSystemInterface *interface)
{
    drone_controller_NavigationSystem_component_init(self,
                                                     waitForInit,
                                                     interface);
}
static inline
nk_err_t drone_controller_NavigationSystem_entity_dispatch(struct drone_controller_NavigationSystem_entity *self,
                                                           const
                                                           struct nk_message *req,
                                                           const
                                                           struct nk_arena *req_arena,
                                                           struct nk_message *res,
                                                           struct nk_arena *res_arena)
{
    return drone_controller_NavigationSystem_component_dispatch(self,
                                                                0,
                                                                req,
                                                                req_arena,
                                                                res,
                                                                res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define NavigationSystem_entity drone_controller_NavigationSystem_entity
#define NavigationSystem_entity_init drone_controller_NavigationSystem_entity_init
#define NavigationSystem_entity_req drone_controller_NavigationSystem_entity_req
#define NavigationSystem_entity_res drone_controller_NavigationSystem_entity_res
#define NavigationSystem_entity_dispatch drone_controller_NavigationSystem_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__NavigationSystem__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

