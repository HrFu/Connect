#include <stdio.h>
#include "wiringPi.h"
#include "../toPayload.h"
#include "test_toPayload.h"

int main() {
	int t_res_toPayload = test_toPayload();
	if((t_res_toPayload)) {
		printf("Tests failed");
	}
}
