/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.6-dev */

#ifndef PB_HELIUM_BLOCKCHAIN_TXN_POC_RECEIPTS_V1_PB_H_INCLUDED
#define PB_HELIUM_BLOCKCHAIN_TXN_POC_RECEIPTS_V1_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _helium_origin { 
    helium_origin_p2p = 0, 
    helium_origin_radio = 1 
} helium_origin;

/* Struct definitions */
typedef struct _helium_blockchain_poc_receipt_v1 { 
    pb_callback_t gateway; 
    uint64_t timestamp; 
    int32_t signal; 
    pb_callback_t data; 
    helium_origin origin; 
    pb_callback_t signature; 
    float snr; 
    float frequency; 
    int32_t channel; 
    pb_callback_t datarate; 
    pb_callback_t addr_hash; 
} helium_blockchain_poc_receipt_v1;

typedef struct _helium_blockchain_poc_witness_v1 { 
    pb_callback_t gateway; 
    uint64_t timestamp; 
    int32_t signal; 
    pb_callback_t packet_hash; 
    pb_callback_t signature; 
    float snr; 
    float frequency; 
    int32_t channel; 
    pb_callback_t datarate; 
} helium_blockchain_poc_witness_v1;

typedef struct _helium_blockchain_txn_poc_receipts_v1 { 
    pb_callback_t challenger; 
    pb_callback_t secret; 
    pb_callback_t onion_key_hash; 
    pb_callback_t path; 
    uint64_t fee; 
    pb_callback_t signature; 
    pb_callback_t request_block_hash; 
} helium_blockchain_txn_poc_receipts_v1;

typedef struct _helium_blockchain_poc_path_element_v1 { 
    pb_callback_t challengee; 
    bool has_receipt;
    helium_blockchain_poc_receipt_v1 receipt; 
    pb_callback_t witnesses; 
} helium_blockchain_poc_path_element_v1;

typedef struct _helium_blockchain_poc_response_v1 { 
    pb_size_t which_payload;
    union {
        helium_blockchain_poc_receipt_v1 receipt;
        helium_blockchain_poc_witness_v1 witness;
    } payload; 
} helium_blockchain_poc_response_v1;


/* Helper constants for enums */
#define _helium_origin_MIN helium_origin_p2p
#define _helium_origin_MAX helium_origin_radio
#define _helium_origin_ARRAYSIZE ((helium_origin)(helium_origin_radio+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define helium_blockchain_poc_receipt_v1_init_default {{{NULL}, NULL}, 0, 0, {{NULL}, NULL}, _helium_origin_MIN, {{NULL}, NULL}, 0, 0, 0, {{NULL}, NULL}, {{NULL}, NULL}}
#define helium_blockchain_poc_witness_v1_init_default {{{NULL}, NULL}, 0, 0, {{NULL}, NULL}, {{NULL}, NULL}, 0, 0, 0, {{NULL}, NULL}}
#define helium_blockchain_poc_response_v1_init_default {0, {helium_blockchain_poc_receipt_v1_init_default}}
#define helium_blockchain_poc_path_element_v1_init_default {{{NULL}, NULL}, false, helium_blockchain_poc_receipt_v1_init_default, {{NULL}, NULL}}
#define helium_blockchain_txn_poc_receipts_v1_init_default {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0, {{NULL}, NULL}, {{NULL}, NULL}}
#define helium_blockchain_poc_receipt_v1_init_zero {{{NULL}, NULL}, 0, 0, {{NULL}, NULL}, _helium_origin_MIN, {{NULL}, NULL}, 0, 0, 0, {{NULL}, NULL}, {{NULL}, NULL}}
#define helium_blockchain_poc_witness_v1_init_zero {{{NULL}, NULL}, 0, 0, {{NULL}, NULL}, {{NULL}, NULL}, 0, 0, 0, {{NULL}, NULL}}
#define helium_blockchain_poc_response_v1_init_zero {0, {helium_blockchain_poc_receipt_v1_init_zero}}
#define helium_blockchain_poc_path_element_v1_init_zero {{{NULL}, NULL}, false, helium_blockchain_poc_receipt_v1_init_zero, {{NULL}, NULL}}
#define helium_blockchain_txn_poc_receipts_v1_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0, {{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define helium_blockchain_poc_receipt_v1_gateway_tag 1
#define helium_blockchain_poc_receipt_v1_timestamp_tag 2
#define helium_blockchain_poc_receipt_v1_signal_tag 3
#define helium_blockchain_poc_receipt_v1_data_tag 4
#define helium_blockchain_poc_receipt_v1_origin_tag 5
#define helium_blockchain_poc_receipt_v1_signature_tag 6
#define helium_blockchain_poc_receipt_v1_snr_tag 7
#define helium_blockchain_poc_receipt_v1_frequency_tag 8
#define helium_blockchain_poc_receipt_v1_channel_tag 9
#define helium_blockchain_poc_receipt_v1_datarate_tag 10
#define helium_blockchain_poc_receipt_v1_addr_hash_tag 11
#define helium_blockchain_poc_witness_v1_gateway_tag 1
#define helium_blockchain_poc_witness_v1_timestamp_tag 2
#define helium_blockchain_poc_witness_v1_signal_tag 3
#define helium_blockchain_poc_witness_v1_packet_hash_tag 4
#define helium_blockchain_poc_witness_v1_signature_tag 5
#define helium_blockchain_poc_witness_v1_snr_tag 6
#define helium_blockchain_poc_witness_v1_frequency_tag 7
#define helium_blockchain_poc_witness_v1_channel_tag 8
#define helium_blockchain_poc_witness_v1_datarate_tag 9
#define helium_blockchain_txn_poc_receipts_v1_challenger_tag 1
#define helium_blockchain_txn_poc_receipts_v1_secret_tag 2
#define helium_blockchain_txn_poc_receipts_v1_onion_key_hash_tag 3
#define helium_blockchain_txn_poc_receipts_v1_path_tag 4
#define helium_blockchain_txn_poc_receipts_v1_fee_tag 5
#define helium_blockchain_txn_poc_receipts_v1_signature_tag 6
#define helium_blockchain_txn_poc_receipts_v1_request_block_hash_tag 7
#define helium_blockchain_poc_path_element_v1_challengee_tag 1
#define helium_blockchain_poc_path_element_v1_receipt_tag 2
#define helium_blockchain_poc_path_element_v1_witnesses_tag 3
#define helium_blockchain_poc_response_v1_receipt_tag 1
#define helium_blockchain_poc_response_v1_witness_tag 2

/* Struct field encoding specification for nanopb */
#define helium_blockchain_poc_receipt_v1_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    gateway,           1) \
X(a, STATIC,   SINGULAR, UINT64,   timestamp,         2) \
X(a, STATIC,   SINGULAR, SINT32,   signal,            3) \
X(a, CALLBACK, SINGULAR, BYTES,    data,              4) \
X(a, STATIC,   SINGULAR, UENUM,    origin,            5) \
X(a, CALLBACK, SINGULAR, BYTES,    signature,         6) \
X(a, STATIC,   SINGULAR, FLOAT,    snr,               7) \
X(a, STATIC,   SINGULAR, FLOAT,    frequency,         8) \
X(a, STATIC,   SINGULAR, INT32,    channel,           9) \
X(a, CALLBACK, SINGULAR, STRING,   datarate,         10) \
X(a, CALLBACK, SINGULAR, BYTES,    addr_hash,        11)
#define helium_blockchain_poc_receipt_v1_CALLBACK pb_default_field_callback
#define helium_blockchain_poc_receipt_v1_DEFAULT NULL

#define helium_blockchain_poc_witness_v1_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    gateway,           1) \
X(a, STATIC,   SINGULAR, UINT64,   timestamp,         2) \
X(a, STATIC,   SINGULAR, SINT32,   signal,            3) \
X(a, CALLBACK, SINGULAR, BYTES,    packet_hash,       4) \
X(a, CALLBACK, SINGULAR, BYTES,    signature,         5) \
X(a, STATIC,   SINGULAR, FLOAT,    snr,               6) \
X(a, STATIC,   SINGULAR, FLOAT,    frequency,         7) \
X(a, STATIC,   SINGULAR, INT32,    channel,           8) \
X(a, CALLBACK, SINGULAR, STRING,   datarate,          9)
#define helium_blockchain_poc_witness_v1_CALLBACK pb_default_field_callback
#define helium_blockchain_poc_witness_v1_DEFAULT NULL

#define helium_blockchain_poc_response_v1_FIELDLIST(X, a) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,receipt,payload.receipt),   1) \
X(a, STATIC,   ONEOF,    MESSAGE,  (payload,witness,payload.witness),   2)
#define helium_blockchain_poc_response_v1_CALLBACK NULL
#define helium_blockchain_poc_response_v1_DEFAULT NULL
#define helium_blockchain_poc_response_v1_payload_receipt_MSGTYPE helium_blockchain_poc_receipt_v1
#define helium_blockchain_poc_response_v1_payload_witness_MSGTYPE helium_blockchain_poc_witness_v1

#define helium_blockchain_poc_path_element_v1_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    challengee,        1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  receipt,           2) \
X(a, CALLBACK, REPEATED, MESSAGE,  witnesses,         3)
#define helium_blockchain_poc_path_element_v1_CALLBACK pb_default_field_callback
#define helium_blockchain_poc_path_element_v1_DEFAULT NULL
#define helium_blockchain_poc_path_element_v1_receipt_MSGTYPE helium_blockchain_poc_receipt_v1
#define helium_blockchain_poc_path_element_v1_witnesses_MSGTYPE helium_blockchain_poc_witness_v1

#define helium_blockchain_txn_poc_receipts_v1_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    challenger,        1) \
X(a, CALLBACK, SINGULAR, BYTES,    secret,            2) \
X(a, CALLBACK, SINGULAR, BYTES,    onion_key_hash,    3) \
X(a, CALLBACK, REPEATED, MESSAGE,  path,              4) \
X(a, STATIC,   SINGULAR, UINT64,   fee,               5) \
X(a, CALLBACK, SINGULAR, BYTES,    signature,         6) \
X(a, CALLBACK, SINGULAR, BYTES,    request_block_hash,   7)
#define helium_blockchain_txn_poc_receipts_v1_CALLBACK pb_default_field_callback
#define helium_blockchain_txn_poc_receipts_v1_DEFAULT NULL
#define helium_blockchain_txn_poc_receipts_v1_path_MSGTYPE helium_blockchain_poc_path_element_v1

extern const pb_msgdesc_t helium_blockchain_poc_receipt_v1_msg;
extern const pb_msgdesc_t helium_blockchain_poc_witness_v1_msg;
extern const pb_msgdesc_t helium_blockchain_poc_response_v1_msg;
extern const pb_msgdesc_t helium_blockchain_poc_path_element_v1_msg;
extern const pb_msgdesc_t helium_blockchain_txn_poc_receipts_v1_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define helium_blockchain_poc_receipt_v1_fields &helium_blockchain_poc_receipt_v1_msg
#define helium_blockchain_poc_witness_v1_fields &helium_blockchain_poc_witness_v1_msg
#define helium_blockchain_poc_response_v1_fields &helium_blockchain_poc_response_v1_msg
#define helium_blockchain_poc_path_element_v1_fields &helium_blockchain_poc_path_element_v1_msg
#define helium_blockchain_txn_poc_receipts_v1_fields &helium_blockchain_txn_poc_receipts_v1_msg

/* Maximum encoded size of messages (where known) */
/* helium_blockchain_poc_receipt_v1_size depends on runtime parameters */
/* helium_blockchain_poc_witness_v1_size depends on runtime parameters */
/* helium_blockchain_poc_response_v1_size depends on runtime parameters */
/* helium_blockchain_poc_path_element_v1_size depends on runtime parameters */
/* helium_blockchain_txn_poc_receipts_v1_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
