#include <stdio.h>
#include <math.h>

int primes[50000];

static void initializePrimes() {
	FILE *input = fopen("primes.txt", "r");
	
	int temp;
	for(int i = 0; i < 50000; i++) {
		fscanf(input, "%d", &primes[i]);
	}
	
	return;
}

int numDivisors(long long x) {
	long long i;
	int divisors = 1, exponent, temp;
	
	for(i = 0; i < 50000 && primes[i] <= x; i++) {
		if(x % primes[i] == 0) {
			exponent = 1;
			temp = x/primes[i];
			while(temp % primes[i] == 0) {
				temp = temp/primes[i];
				exponent++;
			}
			divisors *= exponent + 1;
		}
	}
	
	return divisors;
}

int main(void) {
	initializePrimes();

	long long sum = 0;
	int count;
	for(long long i = 1; ; i++) {
		sum += i;
		count = numDivisors(sum);
		if(count > 500) {
			printf("%lld:%d\n", sum, numDivisors(sum));
			break;
		}
	}

	return 0;
}