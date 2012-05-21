#include <stdio.h>
#include <limits.h>

int numDivisors(long long x) {
	long long i;
	int count = 0;
	long long largestDivisor = x/2;
	int check = 1;
	for(i = 1; i <= largestDivisor; i++)
		if(x % i == 0)
			count++;
	if(count+1 > 400)
		printf("%lld: %d\n", x, count);
	return count+1;
}

int main(void) {
	int sum = 0;
	for(int i = 1; i < 10; i++) {
		sum += i;
		printf("%d:%d\n", sum, numDivisors(sum));
	}
	return 0;

	long long triangleNum = 0;
	long long temp = 0;
	long long i, x;
	int nFactors = 1, n1Factors;
	
	for(i = 1; ; i++) {
		temp = i;
		triangleNum += i;
		n1Factors = numDivisors(i+1);
		if(nFactors + n1Factors - 2 > 150) {
			printf("\n%lld\n", triangleNum);
			return 0;
		}
		nFactors = n1Factors;
	}
	return 0;
}
