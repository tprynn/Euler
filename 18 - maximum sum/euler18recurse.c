#include <stdio.h>

int triangle[15][15];

int max(int a, int b) {
	if(a > b)
		return a;
	else return b;
}

int travel(int xPos, int yPos) {
	if(yPos == 14)
		return triangle[xPos][yPos];
	else return triangle[xPos][yPos] + max(travel(xPos, yPos+1), travel(xPos+1, yPos+1));
}

int main(void) {
	FILE *input = fopen("euler18.txt", "r");
	
	int i, j;
	for(i = 0; i < 15; i++) {
		for(j = 0; j <= i; j++) {
			fscanf(input, "%d", &triangle[i][j]);
			printf("%2d ", triangle[i][j]);
		}
		printf("\n");
	}

	printf("%d", travel(0,0));

	return 0;	
}
