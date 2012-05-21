#include <stdio.h>

int sumFactors(int x) {
	if(x == 1)
		return 0;
	
	int i;
	int sum = 1;
	int	largestDivisor = x/2;
	for(i = 2; i <= largestDivisor; i++)
		if(x % i == 0)
			sum += i;
	return sum;
}

int main(void) {
	printf("%d %d\n", sumFactors(220), sumFactors(284));

	long long sum = 0;
	int temp1, temp2;
	for(int i = 2; i < 10000; i++) {
		temp1 = sumFactors(i);
		temp2 = sumFactors(temp1);
		if(i == temp2 && i != temp1) {
			printf("%d %d\n", i, temp1);
			sum += i + temp1;
		}
	}
	
	printf("%lld\n", sum/2);

	return 0;
}