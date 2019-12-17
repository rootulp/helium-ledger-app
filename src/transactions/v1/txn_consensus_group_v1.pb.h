/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev */

#ifndef PB_HELIUM_TXNS_TXN_CONSENSUS_GROUP_V1_PB_H_INCLUDED
#define PB_HELIUM_TXNS_TXN_CONSENSUS_GROUP_V1_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _helium_txns_txn_consensus_group_v1 {
    pb_callback_t members;
    pb_callback_t proof;
    uint64_t height;
    uint32_t delay;
/* @@protoc_insertion_point(struct:helium_txns_txn_consensus_group_v1) */
} helium_txns_txn_consensus_group_v1;


/* Initializer values for message structs */
#define helium_txns_txn_consensus_group_v1_init_default {{{NULL}, NULL}, {{NULL}, NULL}, 0, 0}
#define helium_txns_txn_consensus_group_v1_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define helium_txns_txn_consensus_group_v1_members_tag 1
#define helium_txns_txn_consensus_group_v1_proof_tag 2
#define helium_txns_txn_consensus_group_v1_height_tag 3
#define helium_txns_txn_consensus_group_v1_delay_tag 4

/* Struct field encoding specification for nanopb */
#define helium_txns_txn_consensus_group_v1_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, BYTES, members, 1) \
X(a, CALLBACK, SINGULAR, BYTES, proof, 2) \
X(a, STATIC, SINGULAR, UINT64, height, 3) \
X(a, STATIC, SINGULAR, UINT32, delay, 4)
#define helium_txns_txn_consensus_group_v1_CALLBACK pb_default_field_callback
#define helium_txns_txn_consensus_group_v1_DEFAULT NULL

extern const pb_msgdesc_t helium_txns_txn_consensus_group_v1_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define helium_txns_txn_consensus_group_v1_fields &helium_txns_txn_consensus_group_v1_msg

/* Maximum encoded size of messages (where known) */
/* helium_txns_txn_consensus_group_v1_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
