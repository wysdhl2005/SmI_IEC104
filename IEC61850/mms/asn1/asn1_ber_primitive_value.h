/*
 *  asn1_ber_primitive_value.h
 *
 *  Copyright 2013 Michael Zillgith
 *
 *  This file is part of libIEC61850.
 *
 *  libIEC61850 is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  libIEC61850 is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with libIEC61850.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  See COPYING file for the complete license text.
 */

#ifndef ASN1_BER_PRIMITIVE_VALUE_H_
#define ASN1_BER_PRIMITIVE_VALUE_H_

#include "stdlib.h"
#include "stdarg.h"
#include "string.h"
#include "stdio.h"
#include "stdbool.h"
#include "stdint.h"


/*************************************************************************
 * ��������� ����������� ���������� Asn1
 * ������� ������ ���������� size
 * ������������ ������ ������ ��� ���������� maxSize
 * ��������� �� ������ � ���������� ����� ����������.
 *************************************************************************/
typedef struct {
	int size;
	int maxSize;
	uint8_t* octets;
} Asn1PrimitiveValue;

Asn1PrimitiveValue*		Asn1PrimitiveValue_create(int size);													// ������� � ������ ����������
int						Asn1PrimitiveValue_getSize(Asn1PrimitiveValue* self);									// �������� ������� ����� ����������
int						Asn1PrimitiveValue_getMaxSize(Asn1PrimitiveValue* self);								// �������� ������������ ����� ����������
Asn1PrimitiveValue*		Asn1PrimitiveValue_clone(Asn1PrimitiveValue* self);										// ����������� ����������, ���������� ��������� �� ����.
bool					Asn1PrimitivaValue_compare(Asn1PrimitiveValue* self, Asn1PrimitiveValue* otherValue);	// �������� 2 ����������
void					Asn1PrimitiveValue_destroy(Asn1PrimitiveValue* self);									// ������� ���������� �� ������

#endif /* ASN1_BER_PRIMITIVE_VALUE_H_ */
