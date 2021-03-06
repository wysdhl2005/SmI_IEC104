/*
 * IEC850.h
 *
 *  Created on: 09.12.2015
 *      Author: sagok
 */

/******************************************************************************
 *
 * Server			- ����������� ���������� (VMD)
 * logicalDevice 	- �����
 * logicalNode		- ���������� ����������
 * DataObject		- ���������� ����������
 *
 ******************************************************************************/
// ������� ������� ����� ������������
// ������ mms_server_conection.c
#ifndef IEC850_H_
#define IEC850_H_

#include "stack_config.h"

#define RECEIVE_BUF_SIZE 	MMS_MAXIMUM_PDU_SIZE
#define SEND_BUF_SIZE 		MMS_MAXIMUM_PDU_SIZE

#define ISO_CON_STATE_RUNNING 1
#define ISO_CON_STATE_STOPPED 0



// QUALITY Definitions and functions related to data attribute quality
// C�������� ���� ������ Quality ������������� ������� ���� ��������� ��������:

// ������� Validity ����� ����� ��������: good, questionable, invalid
#define QUALITY_VALIDITY_GOOD 0			// Good: �������� Validity ������������� ��� ��������, ���� �� ���������� � ������ ��������� ���������� ���������� �� ���������� �����-���� ��������������.
#define QUALITY_VALIDITY_INVALID 2		// Invalid: �������� Validity ������������� ��� ��������, ���� ���������� ������������� � ������ ��������� ����������. �������� invalid ���������� ������� � ���, ��� ���������� �� ���������� ������� � �� ������ ������������ ��� �����-���� �����.
#define QUALITY_VALIDITY_RESERVED 1
#define QUALITY_VALIDITY_QUESTIONABLE 3	// Questionable: �������� Validity ������������� ��� ��������, ���� ������� ��������������� ������������ ������������ ��������� �������, ���� ���� ������������ ���������� ����� ���������� ����������.

// �������� Validity �������� invalid � questionable ������������� � ����������� �� ��������� ������������� �������������� ��������������� �������� �������� detailQual.

#define QUALITY_DETAIL_OVERFLOW 4		// Overflow: ��������� ����� �������������� ������ ������������� � ��� ������, ���� ��������������� �������� ������ �� ����� ���� ��������� ������������ (������ ��� ���������).�������� ��������� ��������.
#define QUALITY_DETAIL_OUT_OF_RANGE 8	// OutOfRange: ��������� ����� �������������� ������ ������������� � ��� ������, ���� �������� ���������� �������� ������� �� ������� ����������������� ����������� ��������� ��������
#define QUALITY_DETAIL_BAD_REFERENCE 16	// BadReference: ��������� ����� �������������� ������ ������������� � ��� ������, ���� ���������� �������� ����������.
#define QUALITY_DETAIL_OSCILLATORY 32	// Oscillatory: ��� �������������� �������� ���������� ������� �������� ������ ���������� ��������� ������ ��������� ��������� ���������� ������. ���� �� �������� ����� ������ ������ �������� ���� �������� �� ���� � �� ��, ����� ����������� ������� � ������ ���� ����������� ������������� oscillatory.
#define QUALITY_DETAIL_FAILURE 64		// Failure: ������ ������������� ������ ��������������, ���� ������� ��������������� ���������� ���������� ���������� ��� ������� �������������.
#define QUALITY_DETAIL_OLD_DATA 128		// oldData: ������ ������������� ������ ��������������, ���� ��������������� ������ �� ����������� � ������� ������������� �������.
#define QUALITY_DETAIL_INCONSISTENT 256	// inconsistency: ������ ������������� ������ ��������������, ���� ������� ��������������� ������������ �������������� ������ ����������������.
#define QUALITY_DETAIL_INACCURATE 512	// inaccurate: ������ ������������� ������ ��������������, ���� �������� ������ �� ������������� ��������� ���������� ���������������. ��������, �������� ������������ �������� ����� ����������� � ������� ������������ ��� ����� �����.
//
#define QUALITY_SOURCE_SUBSTITUTED 1024	// substituted: �������� ������ ��������������� �������������.
//
#define QUALITY_TEST 2048				// ������� Test ������ �������������� ��� ������������� ����, ��� ���������� ��������� � ������ ������������ � ������ ����������� �� �� ������ ���� ������������.
//
#define QUALITY_OPERATOR_BLOCKED  4096	// operatorBlocked: ������� ������ ���������� ��������, ���� ���������� ������ ����������� ����������. ������ ������ ��������� �� ��������, ������� ����� ����� �� ������� ����������. ��� ����������� ������� �������� ����� ������ ������������� ����������� �������������� oldData �������� DetailQual.
/*
 * �������� Validity � Source ����� �����������. ���� ������� source ����� �������� process, ����� ������� Validity ���������� �������� ������ ��������.
 * ���� ������� source ����� �������� substituted, ����� ������� Validity ���������� �������� ������������� ������������� ������. ��������� �����������
 * �����, ��������� ������ ������ ������������� �������������� ��� ����, ����� ��������� ���������������� (��������) ������. ����� �������, �������������
 * ������������� ������ ����� �������������� ��������� ��� �������������� (��� ������������� ��������  �������� Validity=good).
 *
 */


void StartIEC850Task(void const * argument);
uint64_t 		Hal_getTimeInMs (void);

#endif /* IEC850_H_ */
