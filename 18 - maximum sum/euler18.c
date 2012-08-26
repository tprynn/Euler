#include <stdio.h>

int main(void) {
	int triangle[15][15];
	
	FILE *input = fopen("euler18.txt", "r");
	
	int i, j;
	for(i = 0; i < 15; i++) {
		for(j = 0; j <= i; j++) {
			fscanf(input, "%d", &triangle[i][j]);
			printf("%2d ", triangle[i][j]);
		}
		printf("\n");
	}
	
	int max = 0;
	int sum = 0;
	int route[15];
	int xPos, z = 0;
	
	//Yes, this is awful. I couldn't get the recursive search to work!
	for(route[0] = 0; route[0] <= 1; route[0]++) {
	for(route[1] = 0; route[1] <= 1; route[1]++) {
	for(route[2] = 0; route[2] <= 1; route[2]++) {
	for(route[3] = 0; route[3] <= 1; route[3]++) {
	for(route[4] = 0; route[4] <= 1; route[4]++) {
	for(route[5] = 0; route[5] <= 1; route[5]++) {
	for(route[6] = 0; route[6] <= 1; route[6]++) {
	for(route[7] = 0; route[7] <= 1; route[7]++) {
	for(route[8] = 0; route[8] <= 1; route[8]++) {
	for(route[9] = 0; route[9] <= 1; route[9]++) {
	for(route[10] = 0; route[10] <= 1; route[10]++) {
	for(route[11] = 0; route[11] <= 1; route[11]++) {
	for(route[12] = 0; route[12] <= 1; route[12]++) {
	for(route[13] = 0; route[13] <= 1; route[13]++) {
	for(route[14] = 0; route[14] <= 1; route[14]++) {
		xPos = 0;
		sum = 0;
		z++;
		for(i = 0; i < 15; i++) {
			sum += triangle[i][xPos];
			xPos += route[i];
		}
		if(sum > max)
			max = sum;
	}}}}}}}}}}}}}}}

	printf("\n%d\n", max);
	return 0;
}