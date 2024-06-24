#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt16__RAWTYPE__
#define ____UInt16__RAWTYPE__
nk_static_assert(sizeof(nk_uint16_t) == 2, bad_nk_uint16_t_size);
nk_static_assert(nk_alignof(nk_uint16_t) == 2, bad_nk_uint16_t_align);

#endif /* ____UInt16__RAWTYPE__ */

#ifndef ____UInt8__RAWTYPE__
#define ____UInt8__RAWTYPE__
nk_static_assert(sizeof(nk_uint8_t) == 1, bad_nk_uint8_t_size);
nk_static_assert(nk_alignof(nk_uint8_t) == 1, bad_nk_uint8_t_align);

#endif /* ____UInt8__RAWTYPE__ */

#ifndef __drone_controller_CredentialManagerInterface__MaxMessageLength__CONST__
#define __drone_controller_CredentialManagerInterface__MaxMessageLength__CONST__
#define drone_controller_CredentialManagerInterface_MaxMessageLength ((nk_uint16_t)(NK_UINT16_C(1024)))
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CredentialManagerInterface_MaxMessageLength drone_controller_CredentialManagerInterface_MaxMessageLength
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller_CredentialManagerInterface__MaxMessageLength__CONST__ */

#ifndef __drone_controller_CredentialManagerInterface__MaxSignatureLength__CONST__
#define __drone_controller_CredentialManagerInterface__MaxSignatureLength__CONST__
#define drone_controller_CredentialManagerInterface_MaxSignatureLength ((nk_uint16_t)(NK_UINT16_C(257)))
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CredentialManagerInterface_MaxSignatureLength drone_controller_CredentialManagerInterface_MaxSignatureLength
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller_CredentialManagerInterface__MaxSignatureLength__CONST__ */

#ifndef __drone_controller__CredentialManagerInterface__INTERFACE__
#define __drone_controller__CredentialManagerInterface__INTERFACE__
enum {
    drone_controller_CredentialManagerInterface_SignMessage_mid,
    drone_controller_CredentialManagerInterface_CheckSignature_mid,
    drone_controller_CredentialManagerInterface_mid_max,
};
enum {
    drone_controller_CredentialManagerInterface_SignMessage_req_message_size =
    1025,
    drone_controller_CredentialManagerInterface_SignMessage_res_signature_size =
    258,
    drone_controller_CredentialManagerInterface_SignMessage_req_arena_size =
    1025,
    drone_controller_CredentialManagerInterface_SignMessage_res_arena_size =
    258,
    drone_controller_CredentialManagerInterface_SignMessage_req_handles =
    0,
    drone_controller_CredentialManagerInterface_SignMessage_res_handles =
    0,
    drone_controller_CredentialManagerInterface_SignMessage_err_handles =
    0,
    drone_controller_CredentialManagerInterface_CheckSignature_req_message_size =
    1025,
    drone_controller_CredentialManagerInterface_CheckSignature_req_arena_size =
    1025,
    drone_controller_CredentialManagerInterface_CheckSignature_res_arena_size =
    0,
    drone_controller_CredentialManagerInterface_CheckSignature_req_handles =
    0,
    drone_controller_CredentialManagerInterface_CheckSignature_res_handles =
    0,
    drone_controller_CredentialManagerInterface_CheckSignature_err_handles =
    0,
    drone_controller_CredentialManagerInterface_req_arena_size =
    1025,
    drone_controller_CredentialManagerInterface_res_arena_size =
    258,
    drone_controller_CredentialManagerInterface_arena_size =
    1025,
    drone_controller_CredentialManagerInterface_req_handles =
    0,
    drone_controller_CredentialManagerInterface_res_handles =
    0,
    drone_controller_CredentialManagerInterface_err_handles =
    0,
};
typedef struct __nk_packed drone_controller_CredentialManagerInterface_SignMessage_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_ptr_t message;
        }
drone_controller_CredentialManagerInterface_SignMessage_req;
#pragma pack(push, 8) /* drone_controller_CredentialManagerInterface_SignMessage_res */
typedef struct drone_controller_CredentialManagerInterface_SignMessage_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_CredentialManagerInterface_SignMessage_err;
typedef struct drone_controller_CredentialManagerInterface_SignMessage_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                    __nk_alignas(4)
                    nk_ptr_t signature;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                    __nk_alignas(4)
                    nk_ptr_t signature;
                } res_;
                struct drone_controller_CredentialManagerInterface_SignMessage_err err_;
            };
        }
drone_controller_CredentialManagerInterface_SignMessage_res;
#pragma pack(pop) /* drone_controller_CredentialManagerInterface_SignMessage_res */
typedef struct __nk_packed drone_controller_CredentialManagerInterface_CheckSignature_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_ptr_t message;
        }
drone_controller_CredentialManagerInterface_CheckSignature_req;
#pragma pack(push, 8) /* drone_controller_CredentialManagerInterface_CheckSignature_res */
typedef struct drone_controller_CredentialManagerInterface_CheckSignature_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_CredentialManagerInterface_CheckSignature_err;
typedef struct drone_controller_CredentialManagerInterface_CheckSignature_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                    __nk_alignas(1)
                    nk_uint8_t correct;
                };
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(1)
                    nk_uint8_t success;
                    __nk_alignas(1)
                    nk_uint8_t correct;
                } res_;
                struct drone_controller_CredentialManagerInterface_CheckSignature_err err_;
            };
        }
drone_controller_CredentialManagerInterface_CheckSignature_res;
#pragma pack(pop) /* drone_controller_CredentialManagerInterface_CheckSignature_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CredentialManagerInterface_SignMessage_mid drone_controller_CredentialManagerInterface_SignMessage_mid
#define CredentialManagerInterface_CheckSignature_mid drone_controller_CredentialManagerInterface_CheckSignature_mid
#define CredentialManagerInterface_mid_max drone_controller_CredentialManagerInterface_mid_max
#define CredentialManagerInterface_SignMessage_req_message_size drone_controller_CredentialManagerInterface_SignMessage_req_message_size
#define CredentialManagerInterface_SignMessage_res_signature_size drone_controller_CredentialManagerInterface_SignMessage_res_signature_size
#define CredentialManagerInterface_SignMessage_req_arena_size drone_controller_CredentialManagerInterface_SignMessage_req_arena_size
#define CredentialManagerInterface_SignMessage_res_arena_size drone_controller_CredentialManagerInterface_SignMessage_res_arena_size
#define CredentialManagerInterface_SignMessage_req_handles drone_controller_CredentialManagerInterface_SignMessage_req_handles
#define CredentialManagerInterface_SignMessage_res_handles drone_controller_CredentialManagerInterface_SignMessage_res_handles
#define CredentialManagerInterface_SignMessage_err_handles drone_controller_CredentialManagerInterface_SignMessage_err_handles
#define CredentialManagerInterface_CheckSignature_req_message_size drone_controller_CredentialManagerInterface_CheckSignature_req_message_size
#define CredentialManagerInterface_CheckSignature_req_arena_size drone_controller_CredentialManagerInterface_CheckSignature_req_arena_size
#define CredentialManagerInterface_CheckSignature_res_arena_size drone_controller_CredentialManagerInterface_CheckSignature_res_arena_size
#define CredentialManagerInterface_CheckSignature_req_handles drone_controller_CredentialManagerInterface_CheckSignature_req_handles
#define CredentialManagerInterface_CheckSignature_res_handles drone_controller_CredentialManagerInterface_CheckSignature_res_handles
#define CredentialManagerInterface_CheckSignature_err_handles drone_controller_CredentialManagerInterface_CheckSignature_err_handles
#define CredentialManagerInterface_req_arena_size drone_controller_CredentialManagerInterface_req_arena_size
#define CredentialManagerInterface_res_arena_size drone_controller_CredentialManagerInterface_res_arena_size
#define CredentialManagerInterface_arena_size drone_controller_CredentialManagerInterface_arena_size
#define CredentialManagerInterface_req_handles drone_controller_CredentialManagerInterface_req_handles
#define CredentialManagerInterface_res_handles drone_controller_CredentialManagerInterface_res_handles
#define CredentialManagerInterface_err_handles drone_controller_CredentialManagerInterface_err_handles
#define CredentialManagerInterface_SignMessage_req drone_controller_CredentialManagerInterface_SignMessage_req
#define CredentialManagerInterface_SignMessage_res drone_controller_CredentialManagerInterface_SignMessage_res
#define CredentialManagerInterface_CheckSignature_req drone_controller_CredentialManagerInterface_CheckSignature_req
#define CredentialManagerInterface_CheckSignature_res drone_controller_CredentialManagerInterface_CheckSignature_res
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__CredentialManagerInterface__INTERFACE__ */

#ifndef __drone_controller__CredentialManagerInterface__VTABLE__
#define __drone_controller__CredentialManagerInterface__VTABLE__
typedef struct drone_controller_CredentialManagerInterface {
            const
            struct drone_controller_CredentialManagerInterface_ops *ops;
        }
drone_controller_CredentialManagerInterface;
typedef nk_err_t
drone_controller_CredentialManagerInterface_SignMessage_fn(struct drone_controller_CredentialManagerInterface *,
                                                           const
                                                           struct drone_controller_CredentialManagerInterface_SignMessage_req *,
                                                           const
                                                           struct nk_arena *,
                                                           struct drone_controller_CredentialManagerInterface_SignMessage_res *,
                                                           struct nk_arena *);
typedef nk_err_t
drone_controller_CredentialManagerInterface_CheckSignature_fn(struct drone_controller_CredentialManagerInterface *,
                                                              const
                                                              struct drone_controller_CredentialManagerInterface_CheckSignature_req *,
                                                              const
                                                              struct nk_arena *,
                                                              struct drone_controller_CredentialManagerInterface_CheckSignature_res *,
                                                              struct nk_arena *);
typedef struct drone_controller_CredentialManagerInterface_ops {
            drone_controller_CredentialManagerInterface_SignMessage_fn *SignMessage;
            drone_controller_CredentialManagerInterface_CheckSignature_fn *CheckSignature;
        }
drone_controller_CredentialManagerInterface_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CredentialManagerInterface_SignMessage_fn drone_controller_CredentialManagerInterface_SignMessage_fn
#define CredentialManagerInterface_CheckSignature_fn drone_controller_CredentialManagerInterface_CheckSignature_fn
#define CredentialManagerInterface_ops drone_controller_CredentialManagerInterface_ops
#define CredentialManagerInterface drone_controller_CredentialManagerInterface
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__CredentialManagerInterface__VTABLE__ */

#ifndef __drone_controller__CredentialManagerInterface__CLIENT__
#define __drone_controller__CredentialManagerInterface__CLIENT__
typedef struct drone_controller_CredentialManagerInterface_proxy {
            struct drone_controller_CredentialManagerInterface base;
            struct nk_transport *transport;
            nk_iid_t iid;
        }
drone_controller_CredentialManagerInterface_proxy;
static inline
nk_err_t drone_controller_CredentialManagerInterface_SignMessage_proxy(struct drone_controller_CredentialManagerInterface_proxy *self,
                                                                       struct drone_controller_CredentialManagerInterface_SignMessage_req *req,
                                                                       const
                                                                       struct nk_arena *req_arena,
                                                                       struct drone_controller_CredentialManagerInterface_SignMessage_res *res,
                                                                       struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_CredentialManagerInterface_SignMessage_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_CredentialManagerInterface_SignMessage_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_CredentialManagerInterface_SignMessage_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_CredentialManagerInterface_SignMessage_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
nk_err_t drone_controller_CredentialManagerInterface_CheckSignature_proxy(struct drone_controller_CredentialManagerInterface_proxy *self,
                                                                          struct drone_controller_CredentialManagerInterface_CheckSignature_req *req,
                                                                          const
                                                                          struct nk_arena *req_arena,
                                                                          struct drone_controller_CredentialManagerInterface_CheckSignature_res *res,
                                                                          struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_CredentialManagerInterface_CheckSignature_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_CredentialManagerInterface_CheckSignature_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_CredentialManagerInterface_CheckSignature_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_CredentialManagerInterface_CheckSignature_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
void drone_controller_CredentialManagerInterface_proxy_init(struct drone_controller_CredentialManagerInterface_proxy *self,
                                                            struct nk_transport *transport,
                                                            nk_iid_t iid)
{
    static const
    struct drone_controller_CredentialManagerInterface_ops
    ops =
    {(drone_controller_CredentialManagerInterface_SignMessage_fn *) &drone_controller_CredentialManagerInterface_SignMessage_proxy,
     (drone_controller_CredentialManagerInterface_CheckSignature_fn *) &drone_controller_CredentialManagerInterface_CheckSignature_proxy};
    
    nk_assert(self != NK_NULL);
    self->base.ops = &ops;
    self->transport = transport;
    self->iid = iid;
}
static inline
nk_err_t drone_controller_CredentialManagerInterface_SignMessage(struct drone_controller_CredentialManagerInterface *self,
                                                                 struct drone_controller_CredentialManagerInterface_SignMessage_req *req,
                                                                 const
                                                                 struct nk_arena *req_arena,
                                                                 struct drone_controller_CredentialManagerInterface_SignMessage_res *res,
                                                                 struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->SignMessage != NK_NULL);
    return self->ops->SignMessage(self, req,
                                  req_arena, res,
                                  res_arena);
}
static inline
nk_err_t drone_controller_CredentialManagerInterface_CheckSignature(struct drone_controller_CredentialManagerInterface *self,
                                                                    struct drone_controller_CredentialManagerInterface_CheckSignature_req *req,
                                                                    const
                                                                    struct nk_arena *req_arena,
                                                                    struct drone_controller_CredentialManagerInterface_CheckSignature_res *res,
                                                                    struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->CheckSignature !=
        NK_NULL);
    return self->ops->CheckSignature(self, req,
                                     req_arena,
                                     res,
                                     res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CredentialManagerInterface_SignMessage_proxy drone_controller_CredentialManagerInterface_SignMessage_proxy
#define CredentialManagerInterface_CheckSignature_proxy drone_controller_CredentialManagerInterface_CheckSignature_proxy
#define CredentialManagerInterface_SignMessage drone_controller_CredentialManagerInterface_SignMessage
#define CredentialManagerInterface_CheckSignature drone_controller_CredentialManagerInterface_CheckSignature
#define CredentialManagerInterface_proxy drone_controller_CredentialManagerInterface_proxy
#define CredentialManagerInterface_proxy_init drone_controller_CredentialManagerInterface_proxy_init
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__CredentialManagerInterface__CLIENT__ */

#ifndef __drone_controller__CredentialManagerInterface__SERVER__
#define __drone_controller__CredentialManagerInterface__SERVER__
typedef union drone_controller_CredentialManagerInterface_req {
            struct nk_message base_;
            struct drone_controller_CredentialManagerInterface_SignMessage_req SignMessage;
            struct drone_controller_CredentialManagerInterface_CheckSignature_req CheckSignature;
        }
drone_controller_CredentialManagerInterface_req;
typedef union drone_controller_CredentialManagerInterface_res {
            struct nk_message base_;
            struct drone_controller_CredentialManagerInterface_SignMessage_res SignMessage;
            struct drone_controller_CredentialManagerInterface_CheckSignature_res CheckSignature;
        }
drone_controller_CredentialManagerInterface_res;
static inline
nk_err_t drone_controller_CredentialManagerInterface_interface_dispatch(struct drone_controller_CredentialManagerInterface *impl,
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
            
          case drone_controller_CredentialManagerInterface_SignMessage_mid:
            {
                struct drone_controller_CredentialManagerInterface_SignMessage_res
                *res_ =
                (struct drone_controller_CredentialManagerInterface_SignMessage_res *) res;
                
                rc = impl->ops->SignMessage(impl,
                                            (const
                                             struct drone_controller_CredentialManagerInterface_SignMessage_req *) req,
                                            req_arena,
                                            res_,
                                            res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_CredentialManagerInterface_SignMessage_res_handles);
                }
                break;
            }
            
          case drone_controller_CredentialManagerInterface_CheckSignature_mid:
            {
                struct drone_controller_CredentialManagerInterface_CheckSignature_res
                *res_ =
                (struct drone_controller_CredentialManagerInterface_CheckSignature_res *) res;
                
                rc =
                    impl->ops->CheckSignature(impl,
                                              (const
                                               struct drone_controller_CredentialManagerInterface_CheckSignature_req *) req,
                                              req_arena,
                                              res_,
                                              res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_CredentialManagerInterface_CheckSignature_res_handles);
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
#define CredentialManagerInterface_req drone_controller_CredentialManagerInterface_req
#define CredentialManagerInterface_res drone_controller_CredentialManagerInterface_res
#define CredentialManagerInterface_interface_dispatch drone_controller_CredentialManagerInterface_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__CredentialManagerInterface__SERVER__ */

#ifndef __drone_controller__CredentialManagerInterface__TESTS__
#define __drone_controller__CredentialManagerInterface__TESTS__
static inline
nk_err_t drone_controller_CredentialManagerInterface_SignMessage_test_req(struct drone_controller_CredentialManagerInterface_SignMessage_req *msg,
                                                                          struct nk_arena *arena,
                                                                          int (*rand)(void),
                                                                          nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    {
        struct {
            const int prob;
            nk_bool_t fail;
        } should_fail[] = {{1, NK_FALSE}, {2,
                                           NK_FALSE}};
        nk_size_t i;
        nk_size_t size =
                  nk_array_size(should_fail);
        int max = should_fail[size - 1].prob;
        int chosen = rand() % max;
        
        for (i = 0; i < size; i++) {
            if (should_fail[i].prob > chosen) {
                should_fail[i].fail = NK_TRUE;
                break;
            }
        }
        {
            nk_uint8_t *string2;
            nk_size_t len1;
            nk_size_t i0;
            
            nk_unused(string2);
            nk_unused(len1);
            nk_unused(i0);
            len1 =
                (nk_size_t) (should_fail[0].fail ? 1026 : rand() %
                             1026);
            if (len1 > 1025)
                *failure = NK_TRUE;
            string2 = nk_arena_alloc(nk_uint8_t,
                                     arena,
                                     &msg->message,
                                     len1);
            if (string2 == NK_NULL)
                return NK_EINVAL;
            for (i0 = 0; i0 < len1; i0++)
                string2[i0] = (nk_uint8_t) rand();
        }
    }
    return NK_EOK;
}
static inline
nk_err_t drone_controller_CredentialManagerInterface_SignMessage_test_res(struct drone_controller_CredentialManagerInterface_SignMessage_res *msg,
                                                                          struct nk_arena *arena,
                                                                          int (*rand)(void),
                                                                          nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    {
        struct {
            const int prob;
            nk_bool_t fail;
        } should_fail[] = {{1, NK_FALSE}, {2,
                                           NK_FALSE}};
        nk_size_t i;
        nk_size_t size =
                  nk_array_size(should_fail);
        int max = should_fail[size - 1].prob;
        int chosen = rand() % max;
        
        for (i = 0; i < size; i++) {
            if (should_fail[i].prob > chosen) {
                should_fail[i].fail = NK_TRUE;
                break;
            }
        }
        msg->success = (nk_uint8_t) rand();
        {
            nk_uint8_t *string2;
            nk_size_t len1;
            nk_size_t i0;
            
            nk_unused(string2);
            nk_unused(len1);
            nk_unused(i0);
            len1 =
                (nk_size_t) (should_fail[0].fail ? 259 : rand() %
                             259);
            if (len1 > 258)
                *failure = NK_TRUE;
            string2 = nk_arena_alloc(nk_uint8_t,
                                     arena,
                                     &msg->signature,
                                     len1);
            if (string2 == NK_NULL)
                return NK_EINVAL;
            for (i0 = 0; i0 < len1; i0++)
                string2[i0] = (nk_uint8_t) rand();
        }
    }
    return NK_EOK;
}
static inline
nk_err_t drone_controller_CredentialManagerInterface_SignMessage_test_err(struct drone_controller_CredentialManagerInterface_SignMessage_err *msg,
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
nk_err_t drone_controller_CredentialManagerInterface_CheckSignature_test_req(struct drone_controller_CredentialManagerInterface_CheckSignature_req *msg,
                                                                             struct nk_arena *arena,
                                                                             int (*rand)(void),
                                                                             nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    {
        struct {
            const int prob;
            nk_bool_t fail;
        } should_fail[] = {{1, NK_FALSE}, {2,
                                           NK_FALSE}};
        nk_size_t i;
        nk_size_t size =
                  nk_array_size(should_fail);
        int max = should_fail[size - 1].prob;
        int chosen = rand() % max;
        
        for (i = 0; i < size; i++) {
            if (should_fail[i].prob > chosen) {
                should_fail[i].fail = NK_TRUE;
                break;
            }
        }
        {
            nk_uint8_t *string2;
            nk_size_t len1;
            nk_size_t i0;
            
            nk_unused(string2);
            nk_unused(len1);
            nk_unused(i0);
            len1 =
                (nk_size_t) (should_fail[0].fail ? 1026 : rand() %
                             1026);
            if (len1 > 1025)
                *failure = NK_TRUE;
            string2 = nk_arena_alloc(nk_uint8_t,
                                     arena,
                                     &msg->message,
                                     len1);
            if (string2 == NK_NULL)
                return NK_EINVAL;
            for (i0 = 0; i0 < len1; i0++)
                string2[i0] = (nk_uint8_t) rand();
        }
    }
    return NK_EOK;
}
static inline
nk_err_t drone_controller_CredentialManagerInterface_CheckSignature_test_res(struct drone_controller_CredentialManagerInterface_CheckSignature_res *msg,
                                                                             struct nk_arena *arena,
                                                                             int (*rand)(void),
                                                                             nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->success = (nk_uint8_t) rand();
    msg->correct = (nk_uint8_t) rand();
    return NK_EOK;
}
static inline
nk_err_t drone_controller_CredentialManagerInterface_CheckSignature_test_err(struct drone_controller_CredentialManagerInterface_CheckSignature_err *msg,
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

#endif /* __drone_controller__CredentialManagerInterface__TESTS__ */

#pragma GCC diagnostic pop

