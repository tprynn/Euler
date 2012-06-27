#include <stdio.h>

long long travel(int x, int y) {
	if(x == 0 || y == 0)
		return 1;
	return travel(x-1, y) + travel(x, y-1);
}

int main(void) {
	//Warning: This recursive implementation is VERY slow for travel(20,20)
	//For smaller grids it works better, and is an "elegant" solution
	long long count = travel(20,20);
	printf("%lld", count);
	return 0;
}