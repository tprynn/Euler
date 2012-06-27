#include <stdio.h>
#include <math.h>

int main(void) {
	int counter = 0;
	int i;
	for(i = 2; ;i++) {
		if(isPrime(i) == 1)
			counter++;
		if(counter == 10001) {
			printf("%d", i);
			return;
		}
	}
	return;
}

int isPrime(int x) {
	int i;
	for(i = 2; i <= sqrt(x); i++) {
		if(x % i == 0)
			return 0;
	}
	return 1;
}