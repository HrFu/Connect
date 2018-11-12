#include "wiringPi.h"
#include <stdio.h>
#include "../toPayload.h"

int test_toPayload() {
	int test_res = 0;
	uchar dA = 'A'; //ASCII:65
	int payload_dA[8];
	int expected_payload_dA[8] = {1,0,0,0,0,0,1,0};
	toPayload(dA,payload_dA,8);
	for(uint i = 0;i<8;i++) {
		printf("Got: %d \tExpected: %d\n",payload_dA[i],expected_payload_dA[i]);
		if(payload_dA[i] != expected_payload_dA[i]) {
			printf("\nError: toPayload doesn't convert rigth!\n");
			test_res = 1;
		}
	}
	return test_res;
}
