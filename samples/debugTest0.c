#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	float result = 0.0;
	for(i = 1; i < 10; i++) {
		float tmp = 1/i;
		result = result + tmp;
	}
	printf("result = %f\n", result);
	fflush(stdout); /* この時点で、出力を強制したければ */
	return 0;
}
