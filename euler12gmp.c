#include <stdio.h>
#include "gmp.h"

int main(void) {
	mpz_t triangleNum;
	mpz_init(triangleNum);
	mpz_t temp;
	mpz_init(temp);
	unsigned int i;
	int x;
	
	for(i = 1; ; i++) {
		mpz_init_set_ui(temp, i);
		mpz_add_ui(triangleNum, triangleNum, i);
		//gmp_printf("%Zd\n", triangleNum);
		if(numFactors(triangleNum) > 500) {
			gmp_printf("%Zd", triangleNum);
			return;
		}
	}
	return;
}

int numFactors(mpz_t x) {
	unsigned int i;
	int count = 0;
	mpz_t largestDivisor;
	mpz_init(largestDivisor);
	mpz_t temp;
	mpz_init(temp);
	mpz_cdiv_q_ui(largestDivisor, x, 2);
	int check = 1;
	for(i = 1; check > 0; i++) {
		mpz_mod_ui(temp, x, i);
		if(mpz_cmp_ui(temp, 0) == 0) {
			count++;
		}
		check = mpz_cmp_ui(largestDivisor, i);
	}
	return count+1;
}