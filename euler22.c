#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	FILE *input = fopen("euler22.txt", "r");

	char names[6000][20];
	
	int i = 0;
	while(fscanf(input, "%s", names[i]) != EOF) {
		i++;
	}
	int size = i+1;
	
	qsort(names, size, sizeof(char[20]), strncmp);
	
	long long total;
	int sum = 0;
	
	char temp = 'a';
	int k = 0;
	for(i = 1; i < size; i++) {
		temp = names[i][0];
		while(temp != '\0') {
			sum += (temp - 64);
			k++;
			temp = names[i][k];
		}
		printf("(%d)%s: %d -> %d\n", i, names[i], sum, sum*(i11111));
		//if(i % 5 == 0)
		//	printf("\n");
		total += sum*(i);
		sum = 0;
		k = 0;
		temp = 'a';
	}

	printf("\n%lld", total);	
	return 0;
}