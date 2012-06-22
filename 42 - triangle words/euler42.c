#include <stdio.h>

int main(void) {

	int nums[30];
	int i, sum = 0, count = 0;
	
	for(i = 0; i < 30; i++) {
		nums[i] = (i+1) * (i+2) / 2;
	}
	
	FILE *words = fopen("words.txt", "r");
	
	char word[20];
	while(fscanf(words, "%s", word) != EOF) {
		i = 0;
		sum = 0;
		while(word[i] != '\0') {
			sum += word[i] - 'A' + 1;
			i++;
		}
		i = 0;
		while(sum > nums[i]) {
			i++;
			if(sum == nums[i]) {
				printf("%3d\t%s\n", sum, word);
				count++;
				break;
			}
		}
	}

	printf("\n%d", count);
	return 0;
}