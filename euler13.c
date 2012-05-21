#include <stdio.h>
#include "gmp.h"

int main(void) {
	FILE *input = fopen("euler13.txt", "r");
	
	char str [51];
	
	mpz_t temp;
	mpz_init(temp);
	
	mpz_t sum;
	mpz_init(sum);
	
	int i;
	for(i = 0; i < 100; i++) {
		gmp_fscanf(input, "%Zd", temp);
		gmp_printf("%Zd\n", temp);
		//gmp_sscanf(str, "%Z", temp);
		mpz_add(sum, sum, temp);
	}

	gmp_printf("%Zd", sum);

	return 0;
}