#include <stdio.h>
#include "gmp.h"

int main(void) {
	mpz_t power2;
	mpz_ui_pow_ui(power2, 2, 1000);

	char powerString[1000];
	int length = gmp_sprintf(powerString, "%Zd", power2);
	
	
	int i, sum = 0;
	for(i = 0; i < length; i++) {
		sum += powerString[i]-'0';
	}
	
	printf("%s\n%d", powerString, sum);
	return 0;
}