#include <stdio.h>

int main(void) {
	int grid[20][20];
	
	FILE *input = fopen("euler11.txt", "r");
	int i, j;
	for(i = 0; i < 20; i++) {
		for(j = 0; j < 20; j++) {
			fscanf(input, "%d", &grid[i][j]);
			printf("%2d ", grid[i][j]);
		}
		printf("\n");
	}
	
	unsigned int product;
	unsigned int largest = 0;
	
	for(i = 0; i < 20; i++) {
		for(j = 0; j < 20; j++) {
			//Down
			if(i <= 16) {
				product = grid[i][j]*grid[i+1][j]*grid[i+2][j]*grid[i+3][j];
				if(product > largest)
					largest = product;
			}
			
			//Right
			if(j <= 16) {
				product = grid[i][j]*grid[i][j+1]*grid[i][j+2]*grid[i][j+3];
				if(product > largest)
					largest = product;
			}
			
			//Down-Right
			if(i <= 16 && j <= 16) {
				product = grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
				if(product > largest)
					largest = product;
			}
			
			//Up-Right
			if(i > 2 && j <= 16) {
				product = grid[i][j]*grid[i-1][j+1]*grid[i-2][j+2]*grid[i-3][j+3];
				if(product > largest)
					largest = product;
			}
		}
	}
	
	printf("%d", largest);
	
	return;
}