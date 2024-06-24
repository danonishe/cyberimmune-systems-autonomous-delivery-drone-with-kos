#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt8__RAWTYPE__
#define ____UInt8__RAWTYPE__
nk_static_assert(sizeof(nk_uint8_t) == 1, bad_nk_uint8_t_size);
nk_static_assert(nk_alignof(nk_uint8_t) == 1, bad_nk_uint8_t_align);

#endif /* ____UInt8__RAWTYPE__ */

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

#ifndef __drone_controller__PeripheryControllerInterface__CLIENT__
#define __drone_controller__PeripheryControllerInterface__CLIENT__
typedef struct drone_controller_PeripheryControllerInterface_proxy {
            struct drone_controller_PeripheryControllerInterface base;
            struct nk_transport *transport;
            nk_iid_t iid;
        }
drone_controller_PeripheryControllerInterface_proxy;
static inline
nk_err_t drone_controller_PeripheryControllerInterface_EnableBuzzer_proxy(struct drone_controller_PeripheryControllerInterface_proxy *self,
                                                                          struct drone_controller_PeripheryControllerInterface_EnableBuzzer_req *req,
                                                                          const
                                                                          struct nk_arena *req_arena,
                                                                          struct drone_controller_PeripheryControllerInterface_EnableBuzzer_res *res,
                                                                          struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_PeripheryControllerInterface_EnableBuzzer_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_PeripheryControllerInterface_EnableBuzzer_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_PeripheryControllerInterface_EnableBuzzer_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_PeripheryControllerInterface_EnableBuzzer_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_SetKillSwitch_proxy(struct drone_controller_PeripheryControllerInterface_proxy *self,
                                                                           struct drone_controller_PeripheryControllerInterface_SetKillSwitch_req *req,
                                                                           const
                                                                           struct nk_arena *req_arena,
                                                                           struct drone_controller_PeripheryControllerInterface_SetKillSwitch_res *res,
                                                                           struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_PeripheryControllerInterface_SetKillSwitch_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_PeripheryControllerInterface_SetKillSwitch_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_PeripheryControllerInterface_SetKillSwitch_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_PeripheryControllerInterface_SetKillSwitch_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_SetCargoLock_proxy(struct drone_controller_PeripheryControllerInterface_proxy *self,
                                                                          struct drone_controller_PeripheryControllerInterface_SetCargoLock_req *req,
                                                                          const
                                                                          struct nk_arena *req_arena,
                                                                          struct drone_controller_PeripheryControllerInterface_SetCargoLock_res *res,
                                                                          struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_PeripheryControllerInterface_SetCargoLock_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_PeripheryControllerInterface_SetCargoLock_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_PeripheryControllerInterface_SetCargoLock_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_PeripheryControllerInterface_SetCargoLock_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
void drone_controller_PeripheryControllerInterface_proxy_init(struct drone_controller_PeripheryControllerInterface_proxy *self,
                                                              struct nk_transport *transport,
                                                              nk_iid_t iid)
{
    static const
    struct drone_controller_PeripheryControllerInterface_ops
    ops =
    {(drone_controller_PeripheryControllerInterface_EnableBuzzer_fn *) &drone_controller_PeripheryControllerInterface_EnableBuzzer_proxy,
     (drone_controller_PeripheryControllerInterface_SetKillSwitch_fn *) &drone_controller_PeripheryControllerInterface_SetKillSwitch_proxy,
     (drone_controller_PeripheryControllerInterface_SetCargoLock_fn *) &drone_controller_PeripheryControllerInterface_SetCargoLock_proxy};
    
    nk_assert(self != NK_NULL);
    self->base.ops = &ops;
    self->transport = transport;
    self->iid = iid;
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_EnableBuzzer(struct drone_controller_PeripheryControllerInterface *self,
                                                                    struct drone_controller_PeripheryControllerInterface_EnableBuzzer_req *req,
                                                                    const
                                                                    struct nk_arena *req_arena,
                                                                    struct drone_controller_PeripheryControllerInterface_EnableBuzzer_res *res,
                                                                    struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->EnableBuzzer != NK_NULL);
    return self->ops->EnableBuzzer(self, req,
                                   req_arena, res,
                                   res_arena);
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_SetKillSwitch(struct drone_controller_PeripheryControllerInterface *self,
                                                                     struct drone_controller_PeripheryControllerInterface_SetKillSwitch_req *req,
                                                                     const
                                                                     struct nk_arena *req_arena,
                                                                     struct drone_controller_PeripheryControllerInterface_SetKillSwitch_res *res,
                                                                     struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->SetKillSwitch !=
        NK_NULL);
    return self->ops->SetKillSwitch(self, req,
                                    req_arena,
                                    res,
                                    res_arena);
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_SetCargoLock(struct drone_controller_PeripheryControllerInterface *self,
                                                                    struct drone_controller_PeripheryControllerInterface_SetCargoLock_req *req,
                                                                    const
                                                                    struct nk_arena *req_arena,
                                                                    struct drone_controller_PeripheryControllerInterface_SetCargoLock_res *res,
                                                                    struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->SetCargoLock != NK_NULL);
    return self->ops->SetCargoLock(self, req,
                                   req_arena, res,
                                   res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define PeripheryControllerInterface_EnableBuzzer_proxy drone_controller_PeripheryControllerInterface_EnableBuzzer_proxy
#define PeripheryControllerInterface_SetKillSwitch_proxy drone_controller_PeripheryControllerInterface_SetKillSwitch_proxy
#define PeripheryControllerInterface_SetCargoLock_proxy drone_controller_PeripheryControllerInterface_SetCargoLock_proxy
#define PeripheryControllerInterface_EnableBuzzer drone_controller_PeripheryControllerInterface_EnableBuzzer
#define PeripheryControllerInterface_SetKillSwitch drone_controller_PeripheryControllerInterface_SetKillSwitch
#define PeripheryControllerInterface_SetCargoLock drone_controller_PeripheryControllerInterface_SetCargoLock
#define PeripheryControllerInterface_proxy drone_controller_PeripheryControllerInterface_proxy
#define PeripheryControllerInterface_proxy_init drone_controller_PeripheryControllerInterface_proxy_init
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__PeripheryControllerInterface__CLIENT__ */

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

#ifndef __drone_controller__PeripheryControllerInterface__TESTS__
#define __drone_controller__PeripheryControllerInterface__TESTS__
static inline
nk_err_t drone_controller_PeripheryControllerInterface_EnableBuzzer_test_req(struct drone_controller_PeripheryControllerInterface_EnableBuzzer_req *msg,
                                                                             struct nk_arena *arena,
                                                                             int (*rand)(void),
                                                                             nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    return NK_EOK;
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_EnableBuzzer_test_res(struct drone_controller_PeripheryControllerInterface_EnableBuzzer_res *msg,
                                                                             struct nk_arena *arena,
                                                                             int (*rand)(void),
                                                                             nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->success = (nk_uint8_t) rand();
    return NK_EOK;
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_EnableBuzzer_test_err(struct drone_controller_PeripheryControllerInterface_EnableBuzzer_err *msg,
                                                                             struct nk_arena *arena,
                                                                             int (*rand)(void),
                                                                             nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    return NK_EOK;
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_SetKillSwitch_test_req(struct drone_controller_PeripheryControllerInterface_SetKillSwitch_req *msg,
                                                                              struct nk_arena *arena,
                                                                              int (*rand)(void),
                                                                              nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->enable = (nk_uint8_t) rand();
    return NK_EOK;
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_SetKillSwitch_test_res(struct drone_controller_PeripheryControllerInterface_SetKillSwitch_res *msg,
                                                                              struct nk_arena *arena,
                                                                              int (*rand)(void),
                                                                              nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->success = (nk_uint8_t) rand();
    return NK_EOK;
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_SetKillSwitch_test_err(struct drone_controller_PeripheryControllerInterface_SetKillSwitch_err *msg,
                                                                              struct nk_arena *arena,
                                                                              int (*rand)(void),
                                                                              nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    return NK_EOK;
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_SetCargoLock_test_req(struct drone_controller_PeripheryControllerInterface_SetCargoLock_req *msg,
                                                                             struct nk_arena *arena,
                                                                             int (*rand)(void),
                                                                             nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->enable = (nk_uint8_t) rand();
    return NK_EOK;
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_SetCargoLock_test_res(struct drone_controller_PeripheryControllerInterface_SetCargoLock_res *msg,
                                                                             struct nk_arena *arena,
                                                                             int (*rand)(void),
                                                                             nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->success = (nk_uint8_t) rand();
    return NK_EOK;
}
static inline
nk_err_t drone_controller_PeripheryControllerInterface_SetCargoLock_test_err(struct drone_controller_PeripheryControllerInterface_SetCargoLock_err *msg,
                                                                             struct nk_arena *arena,
                                                                             int (*rand)(void),
                                                                             nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    return NK_EOK;
}

#endif /* __drone_controller__PeripheryControllerInterface__TESTS__ */

#pragma GCC diagnostic pop

