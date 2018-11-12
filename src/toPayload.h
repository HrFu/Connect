#include <stdio.h>
#include "wiringPi.h"
#include <string.h>

#ifndef _TO_PAYLOAD_H_
#define _TO_PAYLOAD_H_
typedef unsigned char uchar;
typedef unsigned int uint;

void toPayload(uchar data,int *output,uint s_data) {
	uchar pattern = 1;
	for(uint i = 0; i < s_data;i++) {
		output[i] = (data & pattern) == 1 ? HIGH : LOW;
		data = data>>1;
	}
}
#endif
