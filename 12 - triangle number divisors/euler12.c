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
	
	//For each potential prime divisor of x in the list of 50k primes
	for(i = 0; i < 50000 && primes[i] <= x; i++) {
		//If the prime divides x
		if(x % primes[i] == 0) {
			exponent = 1;
			temp = x/primes[i];
			//Find the number of times x is divided by it
			while(temp % primes[i] == 0) {
				temp = temp/primes[i];
				exponent++;
			}
			//The number of divisors is a composite of every prime that divides x
			divisors *= exponent + 1;	// The Tau function
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