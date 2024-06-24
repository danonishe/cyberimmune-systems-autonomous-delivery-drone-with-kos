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

#ifndef __drone_controller__AutopilotConnectorInterface__INTERFACE__
#define __drone_controller__AutopilotConnectorInterface__INTERFACE__
enum {
    drone_controller_AutopilotConnectorInterface_WaitForArmRequest_mid,
    drone_controller_AutopilotConnectorInterface_PermitArm_mid,
    drone_controller_AutopilotConnectorInterface_ForbidArm_mid,
    drone_controller_AutopilotConnectorInterface_PauseFlight_mid,
    drone_controller_AutopilotConnectorInterface_ResumeFlight_mid,
    drone_controller_AutopilotConnectorInterface_ChangeSpeed_mid,
    drone_controller_AutopilotConnectorInterface_ChangeAltitude_mid,
    drone_controller_AutopilotConnectorInterface_ChangeWaypoint_mid,
    drone_controller_AutopilotConnectorInterface_mid_max,
};
enum {
    drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req_handles =
    0,
    drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res_handles =
    0,
    drone_controller_AutopilotConnectorInterface_WaitForArmRequest_err_handles =
    0,
    drone_controller_AutopilotConnectorInterface_PermitArm_req_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_PermitArm_res_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_PermitArm_req_handles =
    0,
    drone_controller_AutopilotConnectorInterface_PermitArm_res_handles =
    0,
    drone_controller_AutopilotConnectorInterface_PermitArm_err_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ForbidArm_req_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_ForbidArm_res_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_ForbidArm_req_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ForbidArm_res_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ForbidArm_err_handles =
    0,
    drone_controller_AutopilotConnectorInterface_PauseFlight_req_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_PauseFlight_res_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_PauseFlight_req_handles =
    0,
    drone_controller_AutopilotConnectorInterface_PauseFlight_res_handles =
    0,
    drone_controller_AutopilotConnectorInterface_PauseFlight_err_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ResumeFlight_req_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_ResumeFlight_res_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_ResumeFlight_req_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ResumeFlight_res_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ResumeFlight_err_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeSpeed_req_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeSpeed_res_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeSpeed_req_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeSpeed_res_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeSpeed_err_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeAltitude_req_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeAltitude_res_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeAltitude_req_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeAltitude_res_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeAltitude_err_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res_handles =
    0,
    drone_controller_AutopilotConnectorInterface_ChangeWaypoint_err_handles =
    0,
    drone_controller_AutopilotConnectorInterface_req_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_res_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_arena_size =
    0,
    drone_controller_AutopilotConnectorInterface_req_handles =
    0,
    drone_controller_AutopilotConnectorInterface_res_handles =
    0,
    drone_controller_AutopilotConnectorInterface_err_handles =
    0,
};
typedef struct __nk_packed drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req;
#pragma pack(push, 8) /* drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res */
typedef struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_WaitForArmRequest_err;
typedef struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res {
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
                struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_err err_;
            };
        }
drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res;
#pragma pack(pop) /* drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res */
typedef struct __nk_packed drone_controller_AutopilotConnectorInterface_PermitArm_req {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_PermitArm_req;
#pragma pack(push, 8) /* drone_controller_AutopilotConnectorInterface_PermitArm_res */
typedef struct drone_controller_AutopilotConnectorInterface_PermitArm_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_PermitArm_err;
typedef struct drone_controller_AutopilotConnectorInterface_PermitArm_res {
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
                struct drone_controller_AutopilotConnectorInterface_PermitArm_err err_;
            };
        }
drone_controller_AutopilotConnectorInterface_PermitArm_res;
#pragma pack(pop) /* drone_controller_AutopilotConnectorInterface_PermitArm_res */
typedef struct __nk_packed drone_controller_AutopilotConnectorInterface_ForbidArm_req {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_ForbidArm_req;
#pragma pack(push, 8) /* drone_controller_AutopilotConnectorInterface_ForbidArm_res */
typedef struct drone_controller_AutopilotConnectorInterface_ForbidArm_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_ForbidArm_err;
typedef struct drone_controller_AutopilotConnectorInterface_ForbidArm_res {
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
                struct drone_controller_AutopilotConnectorInterface_ForbidArm_err err_;
            };
        }
drone_controller_AutopilotConnectorInterface_ForbidArm_res;
#pragma pack(pop) /* drone_controller_AutopilotConnectorInterface_ForbidArm_res */
typedef struct __nk_packed drone_controller_AutopilotConnectorInterface_PauseFlight_req {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_PauseFlight_req;
#pragma pack(push, 8) /* drone_controller_AutopilotConnectorInterface_PauseFlight_res */
typedef struct drone_controller_AutopilotConnectorInterface_PauseFlight_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_PauseFlight_err;
typedef struct drone_controller_AutopilotConnectorInterface_PauseFlight_res {
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
                struct drone_controller_AutopilotConnectorInterface_PauseFlight_err err_;
            };
        }
drone_controller_AutopilotConnectorInterface_PauseFlight_res;
#pragma pack(pop) /* drone_controller_AutopilotConnectorInterface_PauseFlight_res */
typedef struct __nk_packed drone_controller_AutopilotConnectorInterface_ResumeFlight_req {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_ResumeFlight_req;
#pragma pack(push, 8) /* drone_controller_AutopilotConnectorInterface_ResumeFlight_res */
typedef struct drone_controller_AutopilotConnectorInterface_ResumeFlight_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_ResumeFlight_err;
typedef struct drone_controller_AutopilotConnectorInterface_ResumeFlight_res {
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
                struct drone_controller_AutopilotConnectorInterface_ResumeFlight_err err_;
            };
        }
drone_controller_AutopilotConnectorInterface_ResumeFlight_res;
#pragma pack(pop) /* drone_controller_AutopilotConnectorInterface_ResumeFlight_res */
typedef struct __nk_packed drone_controller_AutopilotConnectorInterface_ChangeSpeed_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_sint32_t speed;
        }
drone_controller_AutopilotConnectorInterface_ChangeSpeed_req;
#pragma pack(push, 8) /* drone_controller_AutopilotConnectorInterface_ChangeSpeed_res */
typedef struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_ChangeSpeed_err;
typedef struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_res {
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
                struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_err err_;
            };
        }
drone_controller_AutopilotConnectorInterface_ChangeSpeed_res;
#pragma pack(pop) /* drone_controller_AutopilotConnectorInterface_ChangeSpeed_res */
typedef struct __nk_packed drone_controller_AutopilotConnectorInterface_ChangeAltitude_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_sint32_t altitude;
        }
drone_controller_AutopilotConnectorInterface_ChangeAltitude_req;
#pragma pack(push, 8) /* drone_controller_AutopilotConnectorInterface_ChangeAltitude_res */
typedef struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_ChangeAltitude_err;
typedef struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_res {
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
                struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_err err_;
            };
        }
drone_controller_AutopilotConnectorInterface_ChangeAltitude_res;
#pragma pack(pop) /* drone_controller_AutopilotConnectorInterface_ChangeAltitude_res */
typedef struct __nk_packed drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_sint32_t latitude;
            __nk_alignas(4) nk_sint32_t longitude;
            __nk_alignas(4) nk_sint32_t altitude;
        }
drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req;
#pragma pack(push, 8) /* drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res */
typedef struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
drone_controller_AutopilotConnectorInterface_ChangeWaypoint_err;
typedef struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res {
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
                struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_err err_;
            };
        }
drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res;
#pragma pack(pop) /* drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define AutopilotConnectorInterface_WaitForArmRequest_mid drone_controller_AutopilotConnectorInterface_WaitForArmRequest_mid
#define AutopilotConnectorInterface_PermitArm_mid drone_controller_AutopilotConnectorInterface_PermitArm_mid
#define AutopilotConnectorInterface_ForbidArm_mid drone_controller_AutopilotConnectorInterface_ForbidArm_mid
#define AutopilotConnectorInterface_PauseFlight_mid drone_controller_AutopilotConnectorInterface_PauseFlight_mid
#define AutopilotConnectorInterface_ResumeFlight_mid drone_controller_AutopilotConnectorInterface_ResumeFlight_mid
#define AutopilotConnectorInterface_ChangeSpeed_mid drone_controller_AutopilotConnectorInterface_ChangeSpeed_mid
#define AutopilotConnectorInterface_ChangeAltitude_mid drone_controller_AutopilotConnectorInterface_ChangeAltitude_mid
#define AutopilotConnectorInterface_ChangeWaypoint_mid drone_controller_AutopilotConnectorInterface_ChangeWaypoint_mid
#define AutopilotConnectorInterface_mid_max drone_controller_AutopilotConnectorInterface_mid_max
#define AutopilotConnectorInterface_WaitForArmRequest_req_arena_size drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req_arena_size
#define AutopilotConnectorInterface_WaitForArmRequest_res_arena_size drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res_arena_size
#define AutopilotConnectorInterface_WaitForArmRequest_req_handles drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req_handles
#define AutopilotConnectorInterface_WaitForArmRequest_res_handles drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res_handles
#define AutopilotConnectorInterface_WaitForArmRequest_err_handles drone_controller_AutopilotConnectorInterface_WaitForArmRequest_err_handles
#define AutopilotConnectorInterface_PermitArm_req_arena_size drone_controller_AutopilotConnectorInterface_PermitArm_req_arena_size
#define AutopilotConnectorInterface_PermitArm_res_arena_size drone_controller_AutopilotConnectorInterface_PermitArm_res_arena_size
#define AutopilotConnectorInterface_PermitArm_req_handles drone_controller_AutopilotConnectorInterface_PermitArm_req_handles
#define AutopilotConnectorInterface_PermitArm_res_handles drone_controller_AutopilotConnectorInterface_PermitArm_res_handles
#define AutopilotConnectorInterface_PermitArm_err_handles drone_controller_AutopilotConnectorInterface_PermitArm_err_handles
#define AutopilotConnectorInterface_ForbidArm_req_arena_size drone_controller_AutopilotConnectorInterface_ForbidArm_req_arena_size
#define AutopilotConnectorInterface_ForbidArm_res_arena_size drone_controller_AutopilotConnectorInterface_ForbidArm_res_arena_size
#define AutopilotConnectorInterface_ForbidArm_req_handles drone_controller_AutopilotConnectorInterface_ForbidArm_req_handles
#define AutopilotConnectorInterface_ForbidArm_res_handles drone_controller_AutopilotConnectorInterface_ForbidArm_res_handles
#define AutopilotConnectorInterface_ForbidArm_err_handles drone_controller_AutopilotConnectorInterface_ForbidArm_err_handles
#define AutopilotConnectorInterface_PauseFlight_req_arena_size drone_controller_AutopilotConnectorInterface_PauseFlight_req_arena_size
#define AutopilotConnectorInterface_PauseFlight_res_arena_size drone_controller_AutopilotConnectorInterface_PauseFlight_res_arena_size
#define AutopilotConnectorInterface_PauseFlight_req_handles drone_controller_AutopilotConnectorInterface_PauseFlight_req_handles
#define AutopilotConnectorInterface_PauseFlight_res_handles drone_controller_AutopilotConnectorInterface_PauseFlight_res_handles
#define AutopilotConnectorInterface_PauseFlight_err_handles drone_controller_AutopilotConnectorInterface_PauseFlight_err_handles
#define AutopilotConnectorInterface_ResumeFlight_req_arena_size drone_controller_AutopilotConnectorInterface_ResumeFlight_req_arena_size
#define AutopilotConnectorInterface_ResumeFlight_res_arena_size drone_controller_AutopilotConnectorInterface_ResumeFlight_res_arena_size
#define AutopilotConnectorInterface_ResumeFlight_req_handles drone_controller_AutopilotConnectorInterface_ResumeFlight_req_handles
#define AutopilotConnectorInterface_ResumeFlight_res_handles drone_controller_AutopilotConnectorInterface_ResumeFlight_res_handles
#define AutopilotConnectorInterface_ResumeFlight_err_handles drone_controller_AutopilotConnectorInterface_ResumeFlight_err_handles
#define AutopilotConnectorInterface_ChangeSpeed_req_arena_size drone_controller_AutopilotConnectorInterface_ChangeSpeed_req_arena_size
#define AutopilotConnectorInterface_ChangeSpeed_res_arena_size drone_controller_AutopilotConnectorInterface_ChangeSpeed_res_arena_size
#define AutopilotConnectorInterface_ChangeSpeed_req_handles drone_controller_AutopilotConnectorInterface_ChangeSpeed_req_handles
#define AutopilotConnectorInterface_ChangeSpeed_res_handles drone_controller_AutopilotConnectorInterface_ChangeSpeed_res_handles
#define AutopilotConnectorInterface_ChangeSpeed_err_handles drone_controller_AutopilotConnectorInterface_ChangeSpeed_err_handles
#define AutopilotConnectorInterface_ChangeAltitude_req_arena_size drone_controller_AutopilotConnectorInterface_ChangeAltitude_req_arena_size
#define AutopilotConnectorInterface_ChangeAltitude_res_arena_size drone_controller_AutopilotConnectorInterface_ChangeAltitude_res_arena_size
#define AutopilotConnectorInterface_ChangeAltitude_req_handles drone_controller_AutopilotConnectorInterface_ChangeAltitude_req_handles
#define AutopilotConnectorInterface_ChangeAltitude_res_handles drone_controller_AutopilotConnectorInterface_ChangeAltitude_res_handles
#define AutopilotConnectorInterface_ChangeAltitude_err_handles drone_controller_AutopilotConnectorInterface_ChangeAltitude_err_handles
#define AutopilotConnectorInterface_ChangeWaypoint_req_arena_size drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req_arena_size
#define AutopilotConnectorInterface_ChangeWaypoint_res_arena_size drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res_arena_size
#define AutopilotConnectorInterface_ChangeWaypoint_req_handles drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req_handles
#define AutopilotConnectorInterface_ChangeWaypoint_res_handles drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res_handles
#define AutopilotConnectorInterface_ChangeWaypoint_err_handles drone_controller_AutopilotConnectorInterface_ChangeWaypoint_err_handles
#define AutopilotConnectorInterface_req_arena_size drone_controller_AutopilotConnectorInterface_req_arena_size
#define AutopilotConnectorInterface_res_arena_size drone_controller_AutopilotConnectorInterface_res_arena_size
#define AutopilotConnectorInterface_arena_size drone_controller_AutopilotConnectorInterface_arena_size
#define AutopilotConnectorInterface_req_handles drone_controller_AutopilotConnectorInterface_req_handles
#define AutopilotConnectorInterface_res_handles drone_controller_AutopilotConnectorInterface_res_handles
#define AutopilotConnectorInterface_err_handles drone_controller_AutopilotConnectorInterface_err_handles
#define AutopilotConnectorInterface_WaitForArmRequest_req drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req
#define AutopilotConnectorInterface_WaitForArmRequest_res drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res
#define AutopilotConnectorInterface_PermitArm_req drone_controller_AutopilotConnectorInterface_PermitArm_req
#define AutopilotConnectorInterface_PermitArm_res drone_controller_AutopilotConnectorInterface_PermitArm_res
#define AutopilotConnectorInterface_ForbidArm_req drone_controller_AutopilotConnectorInterface_ForbidArm_req
#define AutopilotConnectorInterface_ForbidArm_res drone_controller_AutopilotConnectorInterface_ForbidArm_res
#define AutopilotConnectorInterface_PauseFlight_req drone_controller_AutopilotConnectorInterface_PauseFlight_req
#define AutopilotConnectorInterface_PauseFlight_res drone_controller_AutopilotConnectorInterface_PauseFlight_res
#define AutopilotConnectorInterface_ResumeFlight_req drone_controller_AutopilotConnectorInterface_ResumeFlight_req
#define AutopilotConnectorInterface_ResumeFlight_res drone_controller_AutopilotConnectorInterface_ResumeFlight_res
#define AutopilotConnectorInterface_ChangeSpeed_req drone_controller_AutopilotConnectorInterface_ChangeSpeed_req
#define AutopilotConnectorInterface_ChangeSpeed_res drone_controller_AutopilotConnectorInterface_ChangeSpeed_res
#define AutopilotConnectorInterface_ChangeAltitude_req drone_controller_AutopilotConnectorInterface_ChangeAltitude_req
#define AutopilotConnectorInterface_ChangeAltitude_res drone_controller_AutopilotConnectorInterface_ChangeAltitude_res
#define AutopilotConnectorInterface_ChangeWaypoint_req drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req
#define AutopilotConnectorInterface_ChangeWaypoint_res drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__AutopilotConnectorInterface__INTERFACE__ */

#ifndef __drone_controller__AutopilotConnectorInterface__VTABLE__
#define __drone_controller__AutopilotConnectorInterface__VTABLE__
typedef struct drone_controller_AutopilotConnectorInterface {
            const
            struct drone_controller_AutopilotConnectorInterface_ops *ops;
        }
drone_controller_AutopilotConnectorInterface;
typedef nk_err_t
drone_controller_AutopilotConnectorInterface_WaitForArmRequest_fn(struct drone_controller_AutopilotConnectorInterface *,
                                                                  const
                                                                  struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req *,
                                                                  const
                                                                  struct nk_arena *,
                                                                  struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res *,
                                                                  struct nk_arena *);
typedef nk_err_t
drone_controller_AutopilotConnectorInterface_PermitArm_fn(struct drone_controller_AutopilotConnectorInterface *,
                                                          const
                                                          struct drone_controller_AutopilotConnectorInterface_PermitArm_req *,
                                                          const
                                                          struct nk_arena *,
                                                          struct drone_controller_AutopilotConnectorInterface_PermitArm_res *,
                                                          struct nk_arena *);
typedef nk_err_t
drone_controller_AutopilotConnectorInterface_ForbidArm_fn(struct drone_controller_AutopilotConnectorInterface *,
                                                          const
                                                          struct drone_controller_AutopilotConnectorInterface_ForbidArm_req *,
                                                          const
                                                          struct nk_arena *,
                                                          struct drone_controller_AutopilotConnectorInterface_ForbidArm_res *,
                                                          struct nk_arena *);
typedef nk_err_t
drone_controller_AutopilotConnectorInterface_PauseFlight_fn(struct drone_controller_AutopilotConnectorInterface *,
                                                            const
                                                            struct drone_controller_AutopilotConnectorInterface_PauseFlight_req *,
                                                            const
                                                            struct nk_arena *,
                                                            struct drone_controller_AutopilotConnectorInterface_PauseFlight_res *,
                                                            struct nk_arena *);
typedef nk_err_t
drone_controller_AutopilotConnectorInterface_ResumeFlight_fn(struct drone_controller_AutopilotConnectorInterface *,
                                                             const
                                                             struct drone_controller_AutopilotConnectorInterface_ResumeFlight_req *,
                                                             const
                                                             struct nk_arena *,
                                                             struct drone_controller_AutopilotConnectorInterface_ResumeFlight_res *,
                                                             struct nk_arena *);
typedef nk_err_t
drone_controller_AutopilotConnectorInterface_ChangeSpeed_fn(struct drone_controller_AutopilotConnectorInterface *,
                                                            const
                                                            struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_req *,
                                                            const
                                                            struct nk_arena *,
                                                            struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_res *,
                                                            struct nk_arena *);
typedef nk_err_t
drone_controller_AutopilotConnectorInterface_ChangeAltitude_fn(struct drone_controller_AutopilotConnectorInterface *,
                                                               const
                                                               struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_req *,
                                                               const
                                                               struct nk_arena *,
                                                               struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_res *,
                                                               struct nk_arena *);
typedef nk_err_t
drone_controller_AutopilotConnectorInterface_ChangeWaypoint_fn(struct drone_controller_AutopilotConnectorInterface *,
                                                               const
                                                               struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req *,
                                                               const
                                                               struct nk_arena *,
                                                               struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res *,
                                                               struct nk_arena *);
typedef struct drone_controller_AutopilotConnectorInterface_ops {
            drone_controller_AutopilotConnectorInterface_WaitForArmRequest_fn *WaitForArmRequest;
            drone_controller_AutopilotConnectorInterface_PermitArm_fn *PermitArm;
            drone_controller_AutopilotConnectorInterface_ForbidArm_fn *ForbidArm;
            drone_controller_AutopilotConnectorInterface_PauseFlight_fn *PauseFlight;
            drone_controller_AutopilotConnectorInterface_ResumeFlight_fn *ResumeFlight;
            drone_controller_AutopilotConnectorInterface_ChangeSpeed_fn *ChangeSpeed;
            drone_controller_AutopilotConnectorInterface_ChangeAltitude_fn *ChangeAltitude;
            drone_controller_AutopilotConnectorInterface_ChangeWaypoint_fn *ChangeWaypoint;
        }
drone_controller_AutopilotConnectorInterface_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define AutopilotConnectorInterface_WaitForArmRequest_fn drone_controller_AutopilotConnectorInterface_WaitForArmRequest_fn
#define AutopilotConnectorInterface_PermitArm_fn drone_controller_AutopilotConnectorInterface_PermitArm_fn
#define AutopilotConnectorInterface_ForbidArm_fn drone_controller_AutopilotConnectorInterface_ForbidArm_fn
#define AutopilotConnectorInterface_PauseFlight_fn drone_controller_AutopilotConnectorInterface_PauseFlight_fn
#define AutopilotConnectorInterface_ResumeFlight_fn drone_controller_AutopilotConnectorInterface_ResumeFlight_fn
#define AutopilotConnectorInterface_ChangeSpeed_fn drone_controller_AutopilotConnectorInterface_ChangeSpeed_fn
#define AutopilotConnectorInterface_ChangeAltitude_fn drone_controller_AutopilotConnectorInterface_ChangeAltitude_fn
#define AutopilotConnectorInterface_ChangeWaypoint_fn drone_controller_AutopilotConnectorInterface_ChangeWaypoint_fn
#define AutopilotConnectorInterface_ops drone_controller_AutopilotConnectorInterface_ops
#define AutopilotConnectorInterface drone_controller_AutopilotConnectorInterface
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__AutopilotConnectorInterface__VTABLE__ */

#ifndef __drone_controller__AutopilotConnectorInterface__CLIENT__
#define __drone_controller__AutopilotConnectorInterface__CLIENT__
typedef struct drone_controller_AutopilotConnectorInterface_proxy {
            struct drone_controller_AutopilotConnectorInterface base;
            struct nk_transport *transport;
            nk_iid_t iid;
        }
drone_controller_AutopilotConnectorInterface_proxy;
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_WaitForArmRequest_proxy(struct drone_controller_AutopilotConnectorInterface_proxy *self,
                                                                              struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req *req,
                                                                              const
                                                                              struct nk_arena *req_arena,
                                                                              struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res *res,
                                                                              struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_AutopilotConnectorInterface_WaitForArmRequest_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_AutopilotConnectorInterface_WaitForArmRequest_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_PermitArm_proxy(struct drone_controller_AutopilotConnectorInterface_proxy *self,
                                                                      struct drone_controller_AutopilotConnectorInterface_PermitArm_req *req,
                                                                      const
                                                                      struct nk_arena *req_arena,
                                                                      struct drone_controller_AutopilotConnectorInterface_PermitArm_res *res,
                                                                      struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_AutopilotConnectorInterface_PermitArm_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_AutopilotConnectorInterface_PermitArm_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_AutopilotConnectorInterface_PermitArm_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_AutopilotConnectorInterface_PermitArm_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ForbidArm_proxy(struct drone_controller_AutopilotConnectorInterface_proxy *self,
                                                                      struct drone_controller_AutopilotConnectorInterface_ForbidArm_req *req,
                                                                      const
                                                                      struct nk_arena *req_arena,
                                                                      struct drone_controller_AutopilotConnectorInterface_ForbidArm_res *res,
                                                                      struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_AutopilotConnectorInterface_ForbidArm_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_AutopilotConnectorInterface_ForbidArm_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_AutopilotConnectorInterface_ForbidArm_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_AutopilotConnectorInterface_ForbidArm_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_PauseFlight_proxy(struct drone_controller_AutopilotConnectorInterface_proxy *self,
                                                                        struct drone_controller_AutopilotConnectorInterface_PauseFlight_req *req,
                                                                        const
                                                                        struct nk_arena *req_arena,
                                                                        struct drone_controller_AutopilotConnectorInterface_PauseFlight_res *res,
                                                                        struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_AutopilotConnectorInterface_PauseFlight_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_AutopilotConnectorInterface_PauseFlight_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_AutopilotConnectorInterface_PauseFlight_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_AutopilotConnectorInterface_PauseFlight_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ResumeFlight_proxy(struct drone_controller_AutopilotConnectorInterface_proxy *self,
                                                                         struct drone_controller_AutopilotConnectorInterface_ResumeFlight_req *req,
                                                                         const
                                                                         struct nk_arena *req_arena,
                                                                         struct drone_controller_AutopilotConnectorInterface_ResumeFlight_res *res,
                                                                         struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_AutopilotConnectorInterface_ResumeFlight_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_AutopilotConnectorInterface_ResumeFlight_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_AutopilotConnectorInterface_ResumeFlight_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_AutopilotConnectorInterface_ResumeFlight_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeSpeed_proxy(struct drone_controller_AutopilotConnectorInterface_proxy *self,
                                                                        struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_req *req,
                                                                        const
                                                                        struct nk_arena *req_arena,
                                                                        struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_res *res,
                                                                        struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_AutopilotConnectorInterface_ChangeSpeed_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_AutopilotConnectorInterface_ChangeSpeed_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_AutopilotConnectorInterface_ChangeSpeed_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_AutopilotConnectorInterface_ChangeSpeed_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeAltitude_proxy(struct drone_controller_AutopilotConnectorInterface_proxy *self,
                                                                           struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_req *req,
                                                                           const
                                                                           struct nk_arena *req_arena,
                                                                           struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_res *res,
                                                                           struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_AutopilotConnectorInterface_ChangeAltitude_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_AutopilotConnectorInterface_ChangeAltitude_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_AutopilotConnectorInterface_ChangeAltitude_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_AutopilotConnectorInterface_ChangeAltitude_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeWaypoint_proxy(struct drone_controller_AutopilotConnectorInterface_proxy *self,
                                                                           struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req *req,
                                                                           const
                                                                           struct nk_arena *req_arena,
                                                                           struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res *res,
                                                                           struct nk_arena *res_arena)
{
    nk_err_t rc;
    
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_req_reset(req);
    nk_msg_set_method_id(req, self->iid,
                         drone_controller_AutopilotConnectorInterface_ChangeWaypoint_mid);
    nk_msg_set_ncaps(req,
                     drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req_handles);
    nk_req_reset(res);
    nk_msg_set_method_id(res, self->iid,
                         drone_controller_AutopilotConnectorInterface_ChangeWaypoint_mid);
    nk_msg_set_ncaps(res,
                     drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res_handles);
    rc = nk_transport_call(self->transport,
                           &req->base_, req_arena,
                           &res->base_,
                           res_arena);
    return rc;
}
static inline
void drone_controller_AutopilotConnectorInterface_proxy_init(struct drone_controller_AutopilotConnectorInterface_proxy *self,
                                                             struct nk_transport *transport,
                                                             nk_iid_t iid)
{
    static const
    struct drone_controller_AutopilotConnectorInterface_ops
    ops =
    {(drone_controller_AutopilotConnectorInterface_WaitForArmRequest_fn *) &drone_controller_AutopilotConnectorInterface_WaitForArmRequest_proxy,
     (drone_controller_AutopilotConnectorInterface_PermitArm_fn *) &drone_controller_AutopilotConnectorInterface_PermitArm_proxy,
     (drone_controller_AutopilotConnectorInterface_ForbidArm_fn *) &drone_controller_AutopilotConnectorInterface_ForbidArm_proxy,
     (drone_controller_AutopilotConnectorInterface_PauseFlight_fn *) &drone_controller_AutopilotConnectorInterface_PauseFlight_proxy,
     (drone_controller_AutopilotConnectorInterface_ResumeFlight_fn *) &drone_controller_AutopilotConnectorInterface_ResumeFlight_proxy,
     (drone_controller_AutopilotConnectorInterface_ChangeSpeed_fn *) &drone_controller_AutopilotConnectorInterface_ChangeSpeed_proxy,
     (drone_controller_AutopilotConnectorInterface_ChangeAltitude_fn *) &drone_controller_AutopilotConnectorInterface_ChangeAltitude_proxy,
     (drone_controller_AutopilotConnectorInterface_ChangeWaypoint_fn *) &drone_controller_AutopilotConnectorInterface_ChangeWaypoint_proxy};
    
    nk_assert(self != NK_NULL);
    self->base.ops = &ops;
    self->transport = transport;
    self->iid = iid;
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_WaitForArmRequest(struct drone_controller_AutopilotConnectorInterface *self,
                                                                        struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req *req,
                                                                        const
                                                                        struct nk_arena *req_arena,
                                                                        struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res *res,
                                                                        struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->WaitForArmRequest !=
        NK_NULL);
    return self->ops->WaitForArmRequest(self, req,
                                        req_arena,
                                        res,
                                        res_arena);
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_PermitArm(struct drone_controller_AutopilotConnectorInterface *self,
                                                                struct drone_controller_AutopilotConnectorInterface_PermitArm_req *req,
                                                                const
                                                                struct nk_arena *req_arena,
                                                                struct drone_controller_AutopilotConnectorInterface_PermitArm_res *res,
                                                                struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->PermitArm != NK_NULL);
    return self->ops->PermitArm(self, req,
                                req_arena, res,
                                res_arena);
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ForbidArm(struct drone_controller_AutopilotConnectorInterface *self,
                                                                struct drone_controller_AutopilotConnectorInterface_ForbidArm_req *req,
                                                                const
                                                                struct nk_arena *req_arena,
                                                                struct drone_controller_AutopilotConnectorInterface_ForbidArm_res *res,
                                                                struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->ForbidArm != NK_NULL);
    return self->ops->ForbidArm(self, req,
                                req_arena, res,
                                res_arena);
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_PauseFlight(struct drone_controller_AutopilotConnectorInterface *self,
                                                                  struct drone_controller_AutopilotConnectorInterface_PauseFlight_req *req,
                                                                  const
                                                                  struct nk_arena *req_arena,
                                                                  struct drone_controller_AutopilotConnectorInterface_PauseFlight_res *res,
                                                                  struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->PauseFlight != NK_NULL);
    return self->ops->PauseFlight(self, req,
                                  req_arena, res,
                                  res_arena);
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ResumeFlight(struct drone_controller_AutopilotConnectorInterface *self,
                                                                   struct drone_controller_AutopilotConnectorInterface_ResumeFlight_req *req,
                                                                   const
                                                                   struct nk_arena *req_arena,
                                                                   struct drone_controller_AutopilotConnectorInterface_ResumeFlight_res *res,
                                                                   struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->ResumeFlight != NK_NULL);
    return self->ops->ResumeFlight(self, req,
                                   req_arena, res,
                                   res_arena);
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeSpeed(struct drone_controller_AutopilotConnectorInterface *self,
                                                                  struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_req *req,
                                                                  const
                                                                  struct nk_arena *req_arena,
                                                                  struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_res *res,
                                                                  struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->ChangeSpeed != NK_NULL);
    return self->ops->ChangeSpeed(self, req,
                                  req_arena, res,
                                  res_arena);
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeAltitude(struct drone_controller_AutopilotConnectorInterface *self,
                                                                     struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_req *req,
                                                                     const
                                                                     struct nk_arena *req_arena,
                                                                     struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_res *res,
                                                                     struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->ChangeAltitude !=
        NK_NULL);
    return self->ops->ChangeAltitude(self, req,
                                     req_arena,
                                     res,
                                     res_arena);
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeWaypoint(struct drone_controller_AutopilotConnectorInterface *self,
                                                                     struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req *req,
                                                                     const
                                                                     struct nk_arena *req_arena,
                                                                     struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res *res,
                                                                     struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(self->ops != NK_NULL);
    nk_assert(self->ops->ChangeWaypoint !=
        NK_NULL);
    return self->ops->ChangeWaypoint(self, req,
                                     req_arena,
                                     res,
                                     res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define AutopilotConnectorInterface_WaitForArmRequest_proxy drone_controller_AutopilotConnectorInterface_WaitForArmRequest_proxy
#define AutopilotConnectorInterface_PermitArm_proxy drone_controller_AutopilotConnectorInterface_PermitArm_proxy
#define AutopilotConnectorInterface_ForbidArm_proxy drone_controller_AutopilotConnectorInterface_ForbidArm_proxy
#define AutopilotConnectorInterface_PauseFlight_proxy drone_controller_AutopilotConnectorInterface_PauseFlight_proxy
#define AutopilotConnectorInterface_ResumeFlight_proxy drone_controller_AutopilotConnectorInterface_ResumeFlight_proxy
#define AutopilotConnectorInterface_ChangeSpeed_proxy drone_controller_AutopilotConnectorInterface_ChangeSpeed_proxy
#define AutopilotConnectorInterface_ChangeAltitude_proxy drone_controller_AutopilotConnectorInterface_ChangeAltitude_proxy
#define AutopilotConnectorInterface_ChangeWaypoint_proxy drone_controller_AutopilotConnectorInterface_ChangeWaypoint_proxy
#define AutopilotConnectorInterface_WaitForArmRequest drone_controller_AutopilotConnectorInterface_WaitForArmRequest
#define AutopilotConnectorInterface_PermitArm drone_controller_AutopilotConnectorInterface_PermitArm
#define AutopilotConnectorInterface_ForbidArm drone_controller_AutopilotConnectorInterface_ForbidArm
#define AutopilotConnectorInterface_PauseFlight drone_controller_AutopilotConnectorInterface_PauseFlight
#define AutopilotConnectorInterface_ResumeFlight drone_controller_AutopilotConnectorInterface_ResumeFlight
#define AutopilotConnectorInterface_ChangeSpeed drone_controller_AutopilotConnectorInterface_ChangeSpeed
#define AutopilotConnectorInterface_ChangeAltitude drone_controller_AutopilotConnectorInterface_ChangeAltitude
#define AutopilotConnectorInterface_ChangeWaypoint drone_controller_AutopilotConnectorInterface_ChangeWaypoint
#define AutopilotConnectorInterface_proxy drone_controller_AutopilotConnectorInterface_proxy
#define AutopilotConnectorInterface_proxy_init drone_controller_AutopilotConnectorInterface_proxy_init
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__AutopilotConnectorInterface__CLIENT__ */

#ifndef __drone_controller__AutopilotConnectorInterface__SERVER__
#define __drone_controller__AutopilotConnectorInterface__SERVER__
typedef union drone_controller_AutopilotConnectorInterface_req {
            struct nk_message base_;
            struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req WaitForArmRequest;
            struct drone_controller_AutopilotConnectorInterface_PermitArm_req PermitArm;
            struct drone_controller_AutopilotConnectorInterface_ForbidArm_req ForbidArm;
            struct drone_controller_AutopilotConnectorInterface_PauseFlight_req PauseFlight;
            struct drone_controller_AutopilotConnectorInterface_ResumeFlight_req ResumeFlight;
            struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_req ChangeSpeed;
            struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_req ChangeAltitude;
            struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req ChangeWaypoint;
        }
drone_controller_AutopilotConnectorInterface_req;
typedef union drone_controller_AutopilotConnectorInterface_res {
            struct nk_message base_;
            struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res WaitForArmRequest;
            struct drone_controller_AutopilotConnectorInterface_PermitArm_res PermitArm;
            struct drone_controller_AutopilotConnectorInterface_ForbidArm_res ForbidArm;
            struct drone_controller_AutopilotConnectorInterface_PauseFlight_res PauseFlight;
            struct drone_controller_AutopilotConnectorInterface_ResumeFlight_res ResumeFlight;
            struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_res ChangeSpeed;
            struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_res ChangeAltitude;
            struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res ChangeWaypoint;
        }
drone_controller_AutopilotConnectorInterface_res;
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_interface_dispatch(struct drone_controller_AutopilotConnectorInterface *impl,
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
            
          case drone_controller_AutopilotConnectorInterface_WaitForArmRequest_mid:
            {
                struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res
                *res_ =
                (struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res *) res;
                
                rc =
                    impl->ops->WaitForArmRequest(impl,
                                                 (const
                                                  struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req *) req,
                                                 req_arena,
                                                 res_,
                                                 res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res_handles);
                }
                break;
            }
            
          case drone_controller_AutopilotConnectorInterface_PermitArm_mid:
            {
                struct drone_controller_AutopilotConnectorInterface_PermitArm_res
                *res_ =
                (struct drone_controller_AutopilotConnectorInterface_PermitArm_res *) res;
                
                rc = impl->ops->PermitArm(impl,
                                          (const
                                           struct drone_controller_AutopilotConnectorInterface_PermitArm_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_AutopilotConnectorInterface_PermitArm_res_handles);
                }
                break;
            }
            
          case drone_controller_AutopilotConnectorInterface_ForbidArm_mid:
            {
                struct drone_controller_AutopilotConnectorInterface_ForbidArm_res
                *res_ =
                (struct drone_controller_AutopilotConnectorInterface_ForbidArm_res *) res;
                
                rc = impl->ops->ForbidArm(impl,
                                          (const
                                           struct drone_controller_AutopilotConnectorInterface_ForbidArm_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_AutopilotConnectorInterface_ForbidArm_res_handles);
                }
                break;
            }
            
          case drone_controller_AutopilotConnectorInterface_PauseFlight_mid:
            {
                struct drone_controller_AutopilotConnectorInterface_PauseFlight_res
                *res_ =
                (struct drone_controller_AutopilotConnectorInterface_PauseFlight_res *) res;
                
                rc = impl->ops->PauseFlight(impl,
                                            (const
                                             struct drone_controller_AutopilotConnectorInterface_PauseFlight_req *) req,
                                            req_arena,
                                            res_,
                                            res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_AutopilotConnectorInterface_PauseFlight_res_handles);
                }
                break;
            }
            
          case drone_controller_AutopilotConnectorInterface_ResumeFlight_mid:
            {
                struct drone_controller_AutopilotConnectorInterface_ResumeFlight_res
                *res_ =
                (struct drone_controller_AutopilotConnectorInterface_ResumeFlight_res *) res;
                
                rc = impl->ops->ResumeFlight(impl,
                                             (const
                                              struct drone_controller_AutopilotConnectorInterface_ResumeFlight_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_AutopilotConnectorInterface_ResumeFlight_res_handles);
                }
                break;
            }
            
          case drone_controller_AutopilotConnectorInterface_ChangeSpeed_mid:
            {
                struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_res
                *res_ =
                (struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_res *) res;
                
                rc = impl->ops->ChangeSpeed(impl,
                                            (const
                                             struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_req *) req,
                                            req_arena,
                                            res_,
                                            res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_AutopilotConnectorInterface_ChangeSpeed_res_handles);
                }
                break;
            }
            
          case drone_controller_AutopilotConnectorInterface_ChangeAltitude_mid:
            {
                struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_res
                *res_ =
                (struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_res *) res;
                
                rc =
                    impl->ops->ChangeAltitude(impl,
                                              (const
                                               struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_req *) req,
                                              req_arena,
                                              res_,
                                              res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_AutopilotConnectorInterface_ChangeAltitude_res_handles);
                }
                break;
            }
            
          case drone_controller_AutopilotConnectorInterface_ChangeWaypoint_mid:
            {
                struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res
                *res_ =
                (struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res *) res;
                
                rc =
                    impl->ops->ChangeWaypoint(impl,
                                              (const
                                               struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req *) req,
                                              req_arena,
                                              res_,
                                              res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res_handles);
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
#define AutopilotConnectorInterface_req drone_controller_AutopilotConnectorInterface_req
#define AutopilotConnectorInterface_res drone_controller_AutopilotConnectorInterface_res
#define AutopilotConnectorInterface_interface_dispatch drone_controller_AutopilotConnectorInterface_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__AutopilotConnectorInterface__SERVER__ */

#ifndef __drone_controller__AutopilotConnectorInterface__TESTS__
#define __drone_controller__AutopilotConnectorInterface__TESTS__
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_WaitForArmRequest_test_req(struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_req *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_WaitForArmRequest_test_res(struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_res *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_WaitForArmRequest_test_err(struct drone_controller_AutopilotConnectorInterface_WaitForArmRequest_err *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_PermitArm_test_req(struct drone_controller_AutopilotConnectorInterface_PermitArm_req *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_PermitArm_test_res(struct drone_controller_AutopilotConnectorInterface_PermitArm_res *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_PermitArm_test_err(struct drone_controller_AutopilotConnectorInterface_PermitArm_err *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_ForbidArm_test_req(struct drone_controller_AutopilotConnectorInterface_ForbidArm_req *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_ForbidArm_test_res(struct drone_controller_AutopilotConnectorInterface_ForbidArm_res *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_ForbidArm_test_err(struct drone_controller_AutopilotConnectorInterface_ForbidArm_err *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_PauseFlight_test_req(struct drone_controller_AutopilotConnectorInterface_PauseFlight_req *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_PauseFlight_test_res(struct drone_controller_AutopilotConnectorInterface_PauseFlight_res *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_PauseFlight_test_err(struct drone_controller_AutopilotConnectorInterface_PauseFlight_err *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_ResumeFlight_test_req(struct drone_controller_AutopilotConnectorInterface_ResumeFlight_req *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_ResumeFlight_test_res(struct drone_controller_AutopilotConnectorInterface_ResumeFlight_res *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_ResumeFlight_test_err(struct drone_controller_AutopilotConnectorInterface_ResumeFlight_err *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeSpeed_test_req(struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_req *msg,
                                                                           struct nk_arena *arena,
                                                                           int (*rand)(void),
                                                                           nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->speed = (nk_sint32_t) rand();
    return NK_EOK;
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeSpeed_test_res(struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_res *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeSpeed_test_err(struct drone_controller_AutopilotConnectorInterface_ChangeSpeed_err *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeAltitude_test_req(struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_req *msg,
                                                                              struct nk_arena *arena,
                                                                              int (*rand)(void),
                                                                              nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->altitude = (nk_sint32_t) rand();
    return NK_EOK;
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeAltitude_test_res(struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_res *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeAltitude_test_err(struct drone_controller_AutopilotConnectorInterface_ChangeAltitude_err *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeWaypoint_test_req(struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_req *msg,
                                                                              struct nk_arena *arena,
                                                                              int (*rand)(void),
                                                                              nk_bool_t *failure)
{
    nk_unused(msg);
    nk_unused(arena);
    nk_unused(rand);
    *failure = NK_FALSE;
    msg->latitude = (nk_sint32_t) rand();
    msg->longitude = (nk_sint32_t) rand();
    msg->altitude = (nk_sint32_t) rand();
    return NK_EOK;
}
static inline
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeWaypoint_test_res(struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_res *msg,
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
nk_err_t drone_controller_AutopilotConnectorInterface_ChangeWaypoint_test_err(struct drone_controller_AutopilotConnectorInterface_ChangeWaypoint_err *msg,
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

#endif /* __drone_controller__AutopilotConnectorInterface__TESTS__ */

#pragma GCC diagnostic pop

