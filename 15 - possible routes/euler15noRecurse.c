#include <stdio.h>
#include "gmp.h"

int main(void) {
	mpz_t result;
	mpz_init(result);
	mpz_set_ui(result, 1);
	mpz_t numer;
	mpz_init(numer);
	mpz_set_ui(numer, 1);
	mpz_t denom;
	mpz_init(denom);
	mpz_set_ui(denom, 1);
	
	// A solution by combinatorics: Choose(40,20) => 40!/20! = 40*39*38*..*21*20
	for(int i = 40; i > 20; i--) {
		mpz_mul_ui(numer, numer, i);
		mpz_mul_ui(denom, denom, i-20);
	}
	
	mpz_div(result, numer, denom);
	
	gmp_printf("%Zd", result);
	return 0;
}