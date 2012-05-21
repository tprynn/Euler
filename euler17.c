#include <stdio.h>

int numLetters(int digit) {
	switch(digit) {
				case 1:
					return 3;
				case 2:
					return 3;
				case 3:
					return 5;
				case 4:
					return 4;
				case 5:
					return 4;
				case 6:
					return 3;
				case 7:
					return 5;
				case 8:
					return 5;
				case 9:
					return 4;
				case 0:
					return 0;
				default:
					printf("ERROR");
					return 0;
	}
	return 0;
}

int main(void) {
	long long sum = 0;
	int ones, tens, hundreds;
	for(int i = 1; i < 1000; i++) {
		if(i > 0 && i < 10) {
			ones = i;
			sum += numLetters(ones);		
		}
		else if(i >= 10 && i < 100) {
		
		}
		else {
		
		}
	}
	sum += 3+8; //one thousand
	printf("%lld", sum);

	return 0;
}