#include <stdio.h>

long long travel(int x, int y) {
	if(x == 0 || y == 0)
		return 1;
	return travel(x-1, y) + travel(x, y-1);
}

int main(void) {
	long long count = travel(4,4);
	printf("%lld", count);
	return 0;
}