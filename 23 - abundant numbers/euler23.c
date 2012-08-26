#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int abundantNums[20000];

int isAbundant(int x) {
	int sum = 0;
	int largest = floor(x/2);
	
	for(int i = 1; i < largest; i++) {
		if(x % i == 0) {
			sum += i;
		}
	}
	
	if(sum < x)
		return -1;
	if(sum == x)
		return 0;
	return 1;
}

bool canBeSummed(int x) {
	
	for(int i = 0; abundantNums[i] < x; i++) {
		for(int j = 0; abundantNums[i] + abundantNums[j] <= x; j++) {
			if(abundantNums[i] + abundantNums[j] == x)
				return true;
		}
	}
	
	return false;
}

int main(void) {
	
	int j = 0;
	for(int i = 0; i < 28123; i++) {
		if(isAbundant(i) == 1) {
			abundantNums[j] = i;
			j++;
		}
	}
	
	long long sum = 0;
	for(j = 0; j <= 28123; j++) {
		if(canBeSummed(j) == false)
			sum += j;
	}

	printf("%lld", sum);
	return 0;
}