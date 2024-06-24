#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef __drone_controller__FlightController__COMPONENT_ENDPOINTS__
#define __drone_controller__FlightController__COMPONENT_ENDPOINTS__
enum {
    drone_controller_FlightController_iidMax,
};
enum {
    drone_controller_FlightController_iidOffset =
    0,
};
enum {
    drone_controller_FlightController_securityIidMax,
};
enum {
    drone_controller_FlightController_component_req_arena_size =
    0,
    drone_controller_FlightController_component_res_arena_size =
    0,
    drone_controller_FlightController_component_arena_size =
    0,
    drone_controller_FlightController_component_req_handles =
    0,
    drone_controller_FlightController_component_res_handles =
    0,
    drone_controller_FlightController_component_err_handles =
    0,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define FlightController_iidMax drone_controller_FlightController_iidMax
#define FlightController_iidOffset drone_controller_FlightController_iidOffset
#define FlightController_securityIidMax drone_controller_FlightController_securityIidMax
#define FlightController_component_req_arena_size drone_controller_FlightController_component_req_arena_size
#define FlightController_component_res_arena_size drone_controller_FlightController_component_res_arena_size
#define FlightController_component_arena_size drone_controller_FlightController_component_arena_size
#define FlightController_component_req_handles drone_controller_FlightController_component_req_handles
#define FlightController_component_res_handles drone_controller_FlightController_component_res_handles
#define FlightController_component_err_handles drone_controller_FlightController_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__FlightController__COMPONENT_ENDPOINTS__ */

#ifndef __drone_controller__FlightController__TASK_ENDPOINTS__
#define __drone_controller__FlightController__TASK_ENDPOINTS__
enum {
    drone_controller_FlightController_entity_req_arena_size =
    drone_controller_FlightController_component_req_arena_size,
    drone_controller_FlightController_entity_res_arena_size =
    drone_controller_FlightController_component_res_arena_size,
    drone_controller_FlightController_entity_arena_size =
    drone_controller_FlightController_component_arena_size,
    drone_controller_FlightController_entity_req_handles =
    drone_controller_FlightController_component_req_handles,
    drone_controller_FlightController_entity_res_handles =
    drone_controller_FlightController_component_res_handles,
    drone_controller_FlightController_entity_err_handles =
    drone_controller_FlightController_component_err_handles,
};
#ifdef NK_USE_UNQUALIFIED_NAMES
#define FlightController_entity_req_arena_size drone_controller_FlightController_entity_req_arena_size
#define FlightController_entity_res_arena_size drone_controller_FlightController_entity_res_arena_size
#define FlightController_entity_arena_size drone_controller_FlightController_entity_arena_size
#define FlightController_entity_req_handles drone_controller_FlightController_entity_req_handles
#define FlightController_entity_res_handles drone_controller_FlightController_entity_res_handles
#define FlightController_entity_err_handles drone_controller_FlightController_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */

#endif /* __drone_controller__FlightController__TASK_ENDPOINTS__ */

#pragma GCC diagnostic pop

