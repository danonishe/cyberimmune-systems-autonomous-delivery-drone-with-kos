#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt8__RAWTYPE__
#define ____UInt8__RAWTYPE__
nk_static_assert(sizeof(nk_uint8_t) == 1, bad_nk_uint8_t_size);
nk_static_assert(nk_alignof(nk_uint8_t) == 1, bad_nk_uint8_t_align);

#endif /* ____UInt8__RAWTYPE__ */

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

#ifndef __drone_controller__CredentialManager__COMPONENT_ENDPOINTS__
#define __drone_controller__CredentialManager__COMPONENT_ENDPOINTS__
enum {
    drone_controller_CredentialManager_waitForInit_iid,
    drone_controller_CredentialManager_interface_iid,
    drone_controller_CredentialManager_iidMax,
};
enum {
    drone_controller_CredentialManager_iidOffset =
    0,
};
enum {
    drone_controller_CredentialManager_securityIidMax,
};
enum {
    drone_controller_CredentialManager_component_req_arena_size =
    1025,
    drone_controller_CredentialManager_component_res_arena_size =
    258,
    drone_controller_CredentialManager_component_arena_size =
    1025,
    drone_controller_CredentialManager_component_req_handles =
    0,
    drone_controller_CredentialManager_component_res_handles =
    0,
    drone_controller_CredentialManager_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CredentialManager_waitForInit_iid drone_controller_CredentialManager_waitForInit_iid
#define CredentialManager_interface_iid drone_controller_CredentialManager_interface_iid
#define CredentialManager_iidMax drone_controller_CredentialManager_iidMax
#define CredentialManager_iidOffset drone_controller_CredentialManager_iidOffset
#define CredentialManager_securityIidMax drone_controller_CredentialManager_securityIidMax
#define CredentialManager_component_req_arena_size drone_controller_CredentialManager_component_req_arena_size
#define CredentialManager_component_res_arena_size drone_controller_CredentialManager_component_res_arena_size
#define CredentialManager_component_arena_size drone_controller_CredentialManager_component_arena_size
#define CredentialManager_component_req_handles drone_controller_CredentialManager_component_req_handles
#define CredentialManager_component_res_handles drone_controller_CredentialManager_component_res_handles
#define CredentialManager_component_err_handles drone_controller_CredentialManager_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__CredentialManager__COMPONENT_ENDPOINTS__ */

#ifndef __drone_controller__CredentialManager__TASK_ENDPOINTS__
#define __drone_controller__CredentialManager__TASK_ENDPOINTS__
enum {
    drone_controller_CredentialManager_entity_req_arena_size =
    drone_controller_CredentialManager_component_req_arena_size,
    drone_controller_CredentialManager_entity_res_arena_size =
    drone_controller_CredentialManager_component_res_arena_size,
    drone_controller_CredentialManager_entity_arena_size =
    drone_controller_CredentialManager_component_arena_size,
    drone_controller_CredentialManager_entity_req_handles =
    drone_controller_CredentialManager_component_req_handles,
    drone_controller_CredentialManager_entity_res_handles =
    drone_controller_CredentialManager_component_res_handles,
    drone_controller_CredentialManager_entity_err_handles =
    drone_controller_CredentialManager_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CredentialManager_entity_req_arena_size drone_controller_CredentialManager_entity_req_arena_size
#define CredentialManager_entity_res_arena_size drone_controller_CredentialManager_entity_res_arena_size
#define CredentialManager_entity_arena_size drone_controller_CredentialManager_entity_arena_size
#define CredentialManager_entity_req_handles drone_controller_CredentialManager_entity_req_handles
#define CredentialManager_entity_res_handles drone_controller_CredentialManager_entity_res_handles
#define CredentialManager_entity_err_handles drone_controller_CredentialManager_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__CredentialManager__TASK_ENDPOINTS__ */

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

#ifndef __drone_controller__CredentialManager__COMPONENT_SERVER_TYPES__
#define __drone_controller__CredentialManager__COMPONENT_SERVER_TYPES__
typedef struct drone_controller_CredentialManager_component {
            struct drone_controller_Initialization *waitForInit;
            struct drone_controller_CredentialManagerInterface *interface;
        }
drone_controller_CredentialManager_component;

#endif /* __drone_controller__CredentialManager__COMPONENT_SERVER_TYPES__ */

#ifndef __drone_controller__CredentialManager__COMPONENT_SERVER_DISPATCHER__
#define __drone_controller__CredentialManager__COMPONENT_SERVER_DISPATCHER__
static inline
void drone_controller_CredentialManager_component_init(struct drone_controller_CredentialManager_component *self,
                                                       struct drone_controller_Initialization *waitForInit,
                                                       struct drone_controller_CredentialManagerInterface *interface)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->waitForInit = waitForInit;
    self->interface = interface;
}
typedef union drone_controller_CredentialManager_component_req {
            struct nk_message base_;
            drone_controller_Initialization_req waitForInit;
            drone_controller_CredentialManagerInterface_req interface;
        }
drone_controller_CredentialManager_component_req;
typedef union drone_controller_CredentialManager_component_res {
            struct nk_message base_;
            drone_controller_Initialization_res waitForInit;
            drone_controller_CredentialManagerInterface_res interface;
        }
drone_controller_CredentialManager_component_res;
static inline
nk_err_t drone_controller_CredentialManager_component_dispatch(struct drone_controller_CredentialManager_component *self,
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
        
      case drone_controller_CredentialManager_waitForInit_iid:
        return drone_controller_Initialization_interface_dispatch(self->waitForInit,
                                                                  req->iid,
                                                                  req,
                                                                  req_arena,
                                                                  res,
                                                                  res_arena);
        
      case drone_controller_CredentialManager_interface_iid:
        return drone_controller_CredentialManagerInterface_interface_dispatch(self->interface,
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
#define CredentialManager_component drone_controller_CredentialManager_component
#define CredentialManager_component_init drone_controller_CredentialManager_component_init
#define CredentialManager_component_req drone_controller_CredentialManager_component_req
#define CredentialManager_component_res drone_controller_CredentialManager_component_res
#define CredentialManager_component_dispatch drone_controller_CredentialManager_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__CredentialManager__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __drone_controller__CredentialManager__ENTITY_SERVER__
#define __drone_controller__CredentialManager__ENTITY_SERVER__
#define drone_controller_CredentialManager_entity_res drone_controller_CredentialManager_component_res
#define drone_controller_CredentialManager_entity_req drone_controller_CredentialManager_component_req
#define drone_controller_CredentialManager_entity drone_controller_CredentialManager_component
static inline
void drone_controller_CredentialManager_entity_init(struct drone_controller_CredentialManager_entity *self,
                                                    struct drone_controller_Initialization *waitForInit,
                                                    struct drone_controller_CredentialManagerInterface *interface)
{
    drone_controller_CredentialManager_component_init(self,
                                                      waitForInit,
                                                      interface);
}
static inline
nk_err_t drone_controller_CredentialManager_entity_dispatch(struct drone_controller_CredentialManager_entity *self,
                                                            const
                                                            struct nk_message *req,
                                                            const
                                                            struct nk_arena *req_arena,
                                                            struct nk_message *res,
                                                            struct nk_arena *res_arena)
{
    return drone_controller_CredentialManager_component_dispatch(self,
                                                                 0,
                                                                 req,
                                                                 req_arena,
                                                                 res,
                                                                 res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define CredentialManager_entity drone_controller_CredentialManager_entity
#define CredentialManager_entity_init drone_controller_CredentialManager_entity_init
#define CredentialManager_entity_req drone_controller_CredentialManager_entity_req
#define CredentialManager_entity_res drone_controller_CredentialManager_entity_res
#define CredentialManager_entity_dispatch drone_controller_CredentialManager_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__CredentialManager__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

