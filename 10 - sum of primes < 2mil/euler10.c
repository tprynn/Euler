#include <stdio.h>
#include <math.h>
#include "gmp.h"

int main(void) {
	mpz_t sum;
	mpz_init(sum);
	mpz_t temp;
	unsigned int i = 0;
	mpz_init_set_ui(temp, i);

	for(i = 2; i < 2000000; i++) {
		if(isPrime(i) == 1) {
			mpz_init_set_ui(temp, i);
			mpz_add(sum, sum, temp);
		}
	}
	
	gmp_printf("%Zd", sum);
	
	return 0;
}

int isPrime(int x) {
	int i;
	for(i = 2; i <= sqrt(x); i++) {
		if(x % i == 0)
			return 0;
	}
	
	return 1;
}