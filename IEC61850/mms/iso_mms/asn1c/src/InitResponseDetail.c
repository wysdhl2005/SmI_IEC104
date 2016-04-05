/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#include "asn_internal.h"

#include "InitResponseDetail.h"

static asn_TYPE_member_t asn_MBR_InitResponseDetail_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct InitResponseDetail, negotiatedVersionNumber),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Integer16,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"negotiatedVersionNumber"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitResponseDetail, negotiatedParameterCBB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ParameterSupportOptions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"negotiatedParameterCBB"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InitResponseDetail, servicesSupportedCalled),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServiceSupportOptions,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"servicesSupportedCalled"
		},
};
static ber_tlv_tag_t asn_DEF_InitResponseDetail_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_InitResponseDetail_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* negotiatedVersionNumber at 210 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* negotiatedParameterCBB at 211 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* servicesSupportedCalled at 213 */
};
static asn_SEQUENCE_specifics_t asn_SPC_InitResponseDetail_specs_1 = {
	sizeof(struct InitResponseDetail),
	offsetof(struct InitResponseDetail, _asn_ctx),
	asn_MAP_InitResponseDetail_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_InitResponseDetail = {
	"InitResponseDetail",
	"InitResponseDetail",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_InitResponseDetail_tags_1,
	sizeof(asn_DEF_InitResponseDetail_tags_1)
		/sizeof(asn_DEF_InitResponseDetail_tags_1[0]), /* 1 */
	asn_DEF_InitResponseDetail_tags_1,	/* Same as above */
	sizeof(asn_DEF_InitResponseDetail_tags_1)
		/sizeof(asn_DEF_InitResponseDetail_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_InitResponseDetail_1,
	3,	/* Elements count */
	&asn_SPC_InitResponseDetail_specs_1	/* Additional specs */
};
