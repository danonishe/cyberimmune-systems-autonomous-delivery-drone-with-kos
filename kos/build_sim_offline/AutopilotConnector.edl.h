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

#ifndef __drone_controller__AutopilotConnector__COMPONENT_ENDPOINTS__
#define __drone_controller__AutopilotConnector__COMPONENT_ENDPOINTS__
enum {
    drone_controller_AutopilotConnector_waitForInit_iid,
    drone_controller_AutopilotConnector_interface_iid,
    drone_controller_AutopilotConnector_iidMax,
};
enum {
    drone_controller_AutopilotConnector_iidOffset =
    0,
};
enum {
    drone_controller_AutopilotConnector_securityIidMax,
};
enum {
    drone_controller_AutopilotConnector_component_req_arena_size =
    0,
    drone_controller_AutopilotConnector_component_res_arena_size =
    0,
    drone_controller_AutopilotConnector_component_arena_size =
    0,
    drone_controller_AutopilotConnector_component_req_handles =
    0,
    drone_controller_AutopilotConnector_component_res_handles =
    0,
    drone_controller_AutopilotConnector_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define AutopilotConnector_waitForInit_iid drone_controller_AutopilotConnector_waitForInit_iid
#define AutopilotConnector_interface_iid drone_controller_AutopilotConnector_interface_iid
#define AutopilotConnector_iidMax drone_controller_AutopilotConnector_iidMax
#define AutopilotConnector_iidOffset drone_controller_AutopilotConnector_iidOffset
#define AutopilotConnector_securityIidMax drone_controller_AutopilotConnector_securityIidMax
#define AutopilotConnector_component_req_arena_size drone_controller_AutopilotConnector_component_req_arena_size
#define AutopilotConnector_component_res_arena_size drone_controller_AutopilotConnector_component_res_arena_size
#define AutopilotConnector_component_arena_size drone_controller_AutopilotConnector_component_arena_size
#define AutopilotConnector_component_req_handles drone_controller_AutopilotConnector_component_req_handles
#define AutopilotConnector_component_res_handles drone_controller_AutopilotConnector_component_res_handles
#define AutopilotConnector_component_err_handles drone_controller_AutopilotConnector_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__AutopilotConnector__COMPONENT_ENDPOINTS__ */

#ifndef __drone_controller__AutopilotConnector__TASK_ENDPOINTS__
#define __drone_controller__AutopilotConnector__TASK_ENDPOINTS__
enum {
    drone_controller_AutopilotConnector_entity_req_arena_size =
    drone_controller_AutopilotConnector_component_req_arena_size,
    drone_controller_AutopilotConnector_entity_res_arena_size =
    drone_controller_AutopilotConnector_component_res_arena_size,
    drone_controller_AutopilotConnector_entity_arena_size =
    drone_controller_AutopilotConnector_component_arena_size,
    drone_controller_AutopilotConnector_entity_req_handles =
    drone_controller_AutopilotConnector_component_req_handles,
    drone_controller_AutopilotConnector_entity_res_handles =
    drone_controller_AutopilotConnector_component_res_handles,
    drone_controller_AutopilotConnector_entity_err_handles =
    drone_controller_AutopilotConnector_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define AutopilotConnector_entity_req_arena_size drone_controller_AutopilotConnector_entity_req_arena_size
#define AutopilotConnector_entity_res_arena_size drone_controller_AutopilotConnector_entity_res_arena_size
#define AutopilotConnector_entity_arena_size drone_controller_AutopilotConnector_entity_arena_size
#define AutopilotConnector_entity_req_handles drone_controller_AutopilotConnector_entity_req_handles
#define AutopilotConnector_entity_res_handles drone_controller_AutopilotConnector_entity_res_handles
#define AutopilotConnector_entity_err_handles drone_controller_AutopilotConnector_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__AutopilotConnector__TASK_ENDPOINTS__ */

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

#ifndef __drone_controller__AutopilotConnector__COMPONENT_SERVER_TYPES__
#define __drone_controller__AutopilotConnector__COMPONENT_SERVER_TYPES__
typedef struct drone_controller_AutopilotConnector_component {
            struct drone_controller_Initialization *waitForInit;
            struct drone_controller_AutopilotConnectorInterface *interface;
        }
drone_controller_AutopilotConnector_component;

#endif /* __drone_controller__AutopilotConnector__COMPONENT_SERVER_TYPES__ */

#ifndef __drone_controller__AutopilotConnector__COMPONENT_SERVER_DISPATCHER__
#define __drone_controller__AutopilotConnector__COMPONENT_SERVER_DISPATCHER__
static inline
void drone_controller_AutopilotConnector_component_init(struct drone_controller_AutopilotConnector_component *self,
                                                        struct drone_controller_Initialization *waitForInit,
                                                        struct drone_controller_AutopilotConnectorInterface *interface)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->waitForInit = waitForInit;
    self->interface = interface;
}
typedef union drone_controller_AutopilotConnector_component_req {
            struct nk_message base_;
            drone_controller_Initialization_req waitForInit;
            drone_controller_AutopilotConnectorInterface_req interface;
        }
drone_controller_AutopilotConnector_component_req;
typedef union drone_controller_AutopilotConnector_component_res {
            struct nk_message base_;
            drone_controller_Initialization_res waitForInit;
            drone_controller_AutopilotConnectorInterface_res interface;
        }
drone_controller_AutopilotConnector_component_res;
static inline
nk_err_t drone_controller_AutopilotConnector_component_dispatch(struct drone_controller_AutopilotConnector_component *self,
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
        
      case drone_controller_AutopilotConnector_waitForInit_iid:
        return drone_controller_Initialization_interface_dispatch(self->waitForInit,
                                                                  req->iid,
                                                                  req,
                                                                  req_arena,
                                                                  res,
                                                                  res_arena);
        
      case drone_controller_AutopilotConnector_interface_iid:
        return drone_controller_AutopilotConnectorInterface_interface_dispatch(self->interface,
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
#define AutopilotConnector_component drone_controller_AutopilotConnector_component
#define AutopilotConnector_component_init drone_controller_AutopilotConnector_component_init
#define AutopilotConnector_component_req drone_controller_AutopilotConnector_component_req
#define AutopilotConnector_component_res drone_controller_AutopilotConnector_component_res
#define AutopilotConnector_component_dispatch drone_controller_AutopilotConnector_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__AutopilotConnector__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __drone_controller__AutopilotConnector__ENTITY_SERVER__
#define __drone_controller__AutopilotConnector__ENTITY_SERVER__
#define drone_controller_AutopilotConnector_entity_res drone_controller_AutopilotConnector_component_res
#define drone_controller_AutopilotConnector_entity_req drone_controller_AutopilotConnector_component_req
#define drone_controller_AutopilotConnector_entity drone_controller_AutopilotConnector_component
static inline
void drone_controller_AutopilotConnector_entity_init(struct drone_controller_AutopilotConnector_entity *self,
                                                     struct drone_controller_Initialization *waitForInit,
                                                     struct drone_controller_AutopilotConnectorInterface *interface)
{
    drone_controller_AutopilotConnector_component_init(self,
                                                       waitForInit,
                                                       interface);
}
static inline
nk_err_t drone_controller_AutopilotConnector_entity_dispatch(struct drone_controller_AutopilotConnector_entity *self,
                                                             const
                                                             struct nk_message *req,
                                                             const
                                                             struct nk_arena *req_arena,
                                                             struct nk_message *res,
                                                             struct nk_arena *res_arena)
{
    return drone_controller_AutopilotConnector_component_dispatch(self,
                                                                  0,
                                                                  req,
                                                                  req_arena,
                                                                  res,
                                                                  res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define AutopilotConnector_entity drone_controller_AutopilotConnector_entity
#define AutopilotConnector_entity_init drone_controller_AutopilotConnector_entity_init
#define AutopilotConnector_entity_req drone_controller_AutopilotConnector_entity_req
#define AutopilotConnector_entity_res drone_controller_AutopilotConnector_entity_res
#define AutopilotConnector_entity_dispatch drone_controller_AutopilotConnector_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__AutopilotConnector__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

