#include <stdio.h>
#include "gmp.h"

int main(void) {
	mpz_t factorial;
	mpz_init(factorial);
	mpz_set_si(factorial, 1);
	long int i;
	for(i = 1; i <= 100; i++) {
		mpz_mul_si(factorial, factorial, i);
	}

	char factorialString[1000];
	int length = gmp_sprintf(factorialString, "%Zd", factorial);
	
	
	int sum = 0;
	for(i = 0; i < length; i++) {
		sum += factorialString[i]-'0';
	}
	
	printf("%s\n%d", factorialString, sum);
	return 0;
}