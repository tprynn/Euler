#include <stdio.h>

int main(void) {
	int sumSquares = 0;
	int squareSums = 0;
	
	int i;
	for(i = 1; i <= 100; i++) {
		sumSquares += i*i;
		squareSums += i;
	}
	squareSums *= squareSums;
	
	int x = squareSums-sumSquares;
	printf("%d", x);
	
	return 0;
}