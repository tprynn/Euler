#include <stdio.h>

int main(void) {
	long long i, n, counter;
	long long longest = 0;
	long long x;
	for(i = 1; i < 1000000; i++) {
		n = i;
		counter = 0;
		while(n > 1) {
			if(n%2 == 0) {
				n = n/2;
			}
			else {
				n = 3*n+1;
			}
			counter++;
		}
		if(counter > longest) {
			longest = counter;
			x = i;
		}
	}
	printf("%lld", x);
	return 0;
}