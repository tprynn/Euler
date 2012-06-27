#include <stdio.h>

int main(void) {
	int a, b, c;
	
	for(a = 0; a < 500; a++) {
		for(b = 0; b < 500; b++) {
			for(c = 0; c < 500; c++) {
				if(a + b + c != 1000)
					continue;
				if(a*a + b*b == c*c) {
					printf("%d %d %d = %d\n", a, b, c, a*b*c);
					return 0;
				}
			}
		}
	}
	
	return 0;
}