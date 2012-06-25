#include <stdio.h>
#include <string.h>

int main(void) {

	char decimal[1001000];
	char temp[10];
	int position = 0;
	
	for(int i = 1; position <= 1000000; i++) {
		position += sprintf(temp, "%d", i);
		strcat(decimal, temp);
	}
	
	int answer = (decimal[0]-48) * (decimal[9]-48) * (decimal[99]-48) * (decimal[999]-48) * (decimal[9999]-48) * (decimal[99999]-48) * (decimal[999999]-48);
	
	printf("%d\n", answer);
	
	return 0;
}