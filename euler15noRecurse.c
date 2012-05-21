#include <stdio.h>
#include <math.h>

int main(void) {
	long long count = 0;
	int i;
	for(i = 1; i <= 20; i++) {
		count += pow(2,i);
	}

	printf("%lld", count);
	return 0;
}