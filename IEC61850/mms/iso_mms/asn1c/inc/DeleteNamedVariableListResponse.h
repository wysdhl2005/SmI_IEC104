/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_DeleteNamedVariableListResponse_H_
#define	_DeleteNamedVariableListResponse_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Unsigned32.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DeleteNamedVariableListResponse */
typedef struct DeleteNamedVariableListResponse {
	Unsigned32_t	 numberMatched;
	Unsigned32_t	 numberDeleted;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeleteNamedVariableListResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DeleteNamedVariableListResponse;

#ifdef __cplusplus
}
#endif

#endif	/* _DeleteNamedVariableListResponse_H_ */
