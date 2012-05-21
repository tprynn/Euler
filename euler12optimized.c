#include <stdio.h>
// This is wrong

int numFactors(long long x) {
	long long i;
	int count = 0;
	long long largestDivisor = 0;
	largestDivisor = x/2;
	int check = 1;
	for(i = 1; i <= largestDivisor; i++)
		if(x % i == 0)
			count++;
	if(count+1 > 200)
		printf("%lld: %d\n", x, count);
	return count+1;
}

int main(void) {
	long long i;
	int a = 1, b;
	
	for(i = 10000; ;i++) {
		a = b;
		b = numFactors(i+1);
		if(a + b - 1 > 500)
			printf("%lld\n", i*(i+1)/2);
	}
	return 0;
}
