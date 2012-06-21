#include <stdio.h>
#include "gmp.h"

int main(void) {
	mpz_t a;
	mpz_t b;
	mpz_t temp;
	mpz_init(a);
	mpz_init(b);
	mpz_init(temp);
	mpz_set_ui(a, 1);
	mpz_set_ui(b, 1);
	
	long long numTerm = 1;
	
	int numDigits = 0;
	char fibString[1050];
	while(numDigits < 1000) {
		mpz_set(temp, b);
		mpz_add(b, a, b);
		mpz_set(a, temp);
		numDigits = gmp_sprintf(fibString, "%Zd", a);
		numTerm++;
	}
	
	printf("%s\n%lld", fibString, numTerm);
	
	return 0;
}