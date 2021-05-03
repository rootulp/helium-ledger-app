/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6-dev */

#ifndef PB_HELIUM_BLOCKCHAIN_TXN_ROUTING_V1_PB_H_INCLUDED
#define PB_HELIUM_BLOCKCHAIN_TXN_ROUTING_V1_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _helium_update_routers { 
    pb_callback_t router_addresses; /* max of 3 */
} helium_update_routers;

typedef struct _helium_update_xor { 
    uint32_t index; /* we allow up to 5 */
    pb_callback_t filter; /* 100kb or less */
} helium_update_xor;

typedef struct _helium_blockchain_txn_routing_v1 { 
    uint32_t oui; 
    pb_callback_t owner; 
    pb_size_t which_update;
    union {
        helium_update_routers update_routers;
        pb_callback_t new_xor;
        helium_update_xor update_xor;
        uint32_t request_subnet;
    } update; 
    uint64_t fee; /* 100kb or less */
    uint64_t nonce; 
    pb_callback_t signature; /* number of addresses to request */
    uint64_t staking_fee; 
} helium_blockchain_txn_routing_v1;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define helium_update_routers_init_default       {{{NULL}, NULL}}
#define helium_update_xor_init_default           {0, {{NULL}, NULL}}
#define helium_blockchain_txn_routing_v1_init_default {0, {{NULL}, NULL}, 0, {helium_update_routers_init_default}, 0, 0, {{NULL}, NULL}, 0}
#define helium_update_routers_init_zero          {{{NULL}, NULL}}
#define helium_update_xor_init_zero              {0, {{NULL}, NULL}}
#define helium_blockchain_txn_routing_v1_init_zero {0, {{NULL}, NULL}, 0, {helium_update_routers_init_zero}, 0, 0, {{NULL}, NULL}, 0}

/* Field tags (for use in manual encoding/decoding) */
#define helium_update_routers_router_addresses_tag 1
#define helium_update_xor_index_tag              1
#define helium_update_xor_filter_tag             2
#define helium_blockchain_txn_routing_v1_oui_tag 1
#define helium_blockchain_txn_routing_v1_owner_tag 2
#define helium_blockchain_txn_routing_v1_update_routers_tag 3
#define helium_blockchain_txn_routing_v1_new_xor_tag 4
#define helium_blockchain_txn_routing_v1_update_xor_tag 5
#define helium_blockchain_txn_routing_v1_request_subnet_tag 6
#define helium_blockchain_txn_routing_v1_fee_tag 7
#define helium_blockchain_txn_routing_v1_nonce_tag 8
#define helium_blockchain_txn_routing_v1_signature_tag 9
#define helium_blockchain_txn_routing_v1_staking_fee_tag 10

/* Struct field encoding specification for nanopb */
#define helium_update_routers_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, BYTES,    router_addresses,   1)
#define helium_update_routers_CALLBACK pb_default_field_callback
#define helium_update_routers_DEFAULT NULL

#define helium_update_xor_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   index,             1) \
X(a, CALLBACK, SINGULAR, BYTES,    filter,            2)
#define helium_update_xor_CALLBACK pb_default_field_callback
#define helium_update_xor_DEFAULT NULL

#define helium_blockchain_txn_routing_v1_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   oui,               1) \
X(a, CALLBACK, SINGULAR, BYTES,    owner,             2) \
X(a, STATIC,   ONEOF,    MESSAGE,  (update,update_routers,update.update_routers),   3) \
X(a, CALLBACK, ONEOF,    BYTES,    (update,new_xor,update.new_xor),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (update,update_xor,update.update_xor),   5) \
X(a, STATIC,   ONEOF,    UINT32,   (update,request_subnet,update.request_subnet),   6) \
X(a, STATIC,   SINGULAR, UINT64,   fee,               7) \
X(a, STATIC,   SINGULAR, UINT64,   nonce,             8) \
X(a, CALLBACK, SINGULAR, BYTES,    signature,         9) \
X(a, STATIC,   SINGULAR, UINT64,   staking_fee,      10)
#define helium_blockchain_txn_routing_v1_CALLBACK pb_default_field_callback
#define helium_blockchain_txn_routing_v1_DEFAULT NULL
#define helium_blockchain_txn_routing_v1_update_update_routers_MSGTYPE helium_update_routers
#define helium_blockchain_txn_routing_v1_update_update_xor_MSGTYPE helium_update_xor

extern const pb_msgdesc_t helium_update_routers_msg;
extern const pb_msgdesc_t helium_update_xor_msg;
extern const pb_msgdesc_t helium_blockchain_txn_routing_v1_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define helium_update_routers_fields &helium_update_routers_msg
#define helium_update_xor_fields &helium_update_xor_msg
#define helium_blockchain_txn_routing_v1_fields &helium_blockchain_txn_routing_v1_msg

/* Maximum encoded size of messages (where known) */
/* helium_update_routers_size depends on runtime parameters */
/* helium_update_xor_size depends on runtime parameters */
/* helium_blockchain_txn_routing_v1_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
