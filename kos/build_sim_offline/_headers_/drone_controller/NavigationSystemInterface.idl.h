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

#ifndef __drone_controller__NavigationSystemInterface__CLIENT__
#define __drone_controller__NavigationSystemInterface__CLIENT__
typedef struct drone_controller_NavigationSystemInterface_proxy {
            struct drone_controller_NavigationSystemInterface base;
            struct nk_transport *transport;
            nk_iid_t iid;
        }
drone_controller_NavigationSystemInterface_proxy;
static inline
nk_err_t drone_controller_NavigationSystemInterface_GetCoords_proxy(struct drone_controller_NavigationSystemInterface_proxy *self,
                                                                    struct drone_controller_NavigationSystemInterface_GetCoords_req *req,
                                                                    const
                                                                    struct nk_arena *req_arena,
                                                                    struct drone_controller_NavigationSystemInterface_GetCoords_res *res,
                                                                    struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_NavigationSystemInterface_GetCoords_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_NavigationSystemInterface_GetCoords_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_NavigationSystemInterface_GetCoords_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_NavigationSystemInterface_GetCoords_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
nk_err_t drone_controller_NavigationSystemInterface_GetGpsInfo_proxy(struct drone_controller_NavigationSystemInterface_proxy *self,
                                                                     struct drone_controller_NavigationSystemInterface_GetGpsInfo_req *req,
                                                                     const
                                                                     struct nk_arena *req_arena,
                                                                     struct drone_controller_NavigationSystemInterface_GetGpsInfo_res *res,
                                                                     struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_NavigationSystemInterface_GetGpsInfo_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_NavigationSystemInterface_GetGpsInfo_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_NavigationSystemInterface_GetGpsInfo_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_NavigationSystemInterface_GetGpsInfo_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
void drone_controller_NavigationSystemInterface_proxy_init(struct drone_controller_NavigationSystemInterface_proxy *self,
                                                           struct nk_transport *transport,
                                                           nk_iid_t iid)
{
    static const
    struct drone_controller_NavigationSystemInterface_ops
    ops =
    {(drone_controller_NavigationSystemInterface_GetCoords_fn *) &drone_controller_NavigationSystemInterface_GetCoords_proxy,
     (drone_controller_NavigationSystemInterface_GetGpsInfo_fn *) &drone_controller_NavigationSystemInterface_GetGpsInfo_proxy};
    
    nk_assert(self != NK_NULL);
    self->base.ops = &ops;
    self->transport = transport;
    self->iid = iid;
}
static inline
nk_err_t drone_controller_NavigationSystemInterface_GetCoords(struct drone_controller_NavigationSystemInterface *self,
                                                              struct drone_controller_NavigationSystemInterface_GetCoords_req *req,
                                                              const
                                                              struct nk_arena *req_arena,
                                                              struct drone_controller_NavigationSystemInterface_GetCoords_res *res,
                                                              struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->GetCoords != NK_NULL);
    return self->ops->GetCoords(self, req,
                                req_arena, res,
                                res_arena);
}
static inline
nk_err_t drone_controller_NavigationSystemInterface_GetGpsInfo(struct drone_controller_NavigationSystemInterface *self,
                                                               struct drone_controller_NavigationSystemInterface_GetGpsInfo_req *req,
                                                               const
                                                               struct nk_arena *req_arena,
                                                               struct drone_controller_NavigationSystemInterface_GetGpsInfo_res *res,
                                                               struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->GetGpsInfo != NK_NULL);
    return self->ops->GetGpsInfo(self, req,
                                 req_arena, res,
                                 res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define NavigationSystemInterface_GetCoords_proxy drone_controller_NavigationSystemInterface_GetCoords_proxy
#define NavigationSystemInterface_GetGpsInfo_proxy drone_controller_NavigationSystemInterface_GetGpsInfo_proxy
#define NavigationSystemInterface_GetCoords drone_controller_NavigationSystemInterface_GetCoords
#define NavigationSystemInterface_GetGpsInfo drone_controller_NavigationSystemInterface_GetGpsInfo
#define NavigationSystemInterface_proxy drone_controller_NavigationSystemInterface_proxy
#define NavigationSystemInterface_proxy_init drone_controller_NavigationSystemInterface_proxy_init
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__NavigationSystemInterface__CLIENT__ */

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

#ifndef __drone_controller__NavigationSystemInterface__TESTS__
#define __drone_controller__NavigationSystemInterface__TESTS__
static inline
nk_err_t drone_controller_NavigationSystemInterface_GetCoords_test_req(struct drone_controller_NavigationSystemInterface_GetCoords_req *msg,
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
nk_err_t drone_controller_NavigationSystemInterface_GetCoords_test_res(struct drone_controller_NavigationSystemInterface_GetCoords_res *msg,
                                                                       struct nk_arena *arena,
                                                                       int (*rand)(void),
                                                                       nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->success = (nk_uint8_t) rand();
    msg->lat = (nk_sint32_t) rand();
    msg->lng = (nk_sint32_t) rand();
    msg->alt = (nk_sint32_t) rand();
    return NK_EOK;
}
static inline
nk_err_t drone_controller_NavigationSystemInterface_GetCoords_test_err(struct drone_controller_NavigationSystemInterface_GetCoords_err *msg,
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
nk_err_t drone_controller_NavigationSystemInterface_GetGpsInfo_test_req(struct drone_controller_NavigationSystemInterface_GetGpsInfo_req *msg,
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
nk_err_t drone_controller_NavigationSystemInterface_GetGpsInfo_test_res(struct drone_controller_NavigationSystemInterface_GetGpsInfo_res *msg,
                                                                        struct nk_arena *arena,
                                                                        int (*rand)(void),
                                                                        nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->success = (nk_uint8_t) rand();
    msg->dop = (nk_sint32_t) rand();
    msg->sats = (nk_sint32_t) rand();
    return NK_EOK;
}
static inline
nk_err_t drone_controller_NavigationSystemInterface_GetGpsInfo_test_err(struct drone_controller_NavigationSystemInterface_GetGpsInfo_err *msg,
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

#endif /* __drone_controller__NavigationSystemInterface__TESTS__ */

#pragma GCC diagnostic pop

