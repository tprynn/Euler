#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	int b;
	int c;
	for(a = 100; a < 1000; a++) {
		for(b = 100; b < 1000; b++) {
			c = a*b;
			if(isPalindrome(c) == 1)
				printf("%d",c);
		}
	}

	return;
}

int isPalindrome(int x) {
	char check[10];
	
	int length = sprintf(check, "%d", x);
	
	int i;
	for(i = 0; i <= length/2; i++) {
		if(check[i] != check[length-i])
			return 0;
	}
	
	return 1;
}