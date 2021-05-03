#include <stdio.h>
#include <stdlib.h>
#define  N 4 // declare of the constant
#define  M 5 // declare of the constant

// method fills an array by random values
void arrayFilling(int array[N][M]) {
	for (int i = 0; i < N; i += 1) {
		for (int j = 0; j < M; j += 1) {
			if ((i + j) % 2 == 0) { // for even numbers
				array[i][j] = rand() % 100; //rand.num. divided. remainder rec to arrray
			}
			else { // for not even numbers
				array[i][j] = (rand() % 100) / (-1);
			}
		}
	}
}


// method print an array 
void arrayPrinter(int array[N][M]) {
	for (int i = 0; i < N; i += 1) {
		for (int j = 0; j < M; j += 1) {
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
}

// method for array sorting 
void arraySorter(int array[N][M]) {
	int temp;
	for (int h = 0; h < N; h++) {
		for (int l = 0; l < M; l++) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (array[h][l] < array[i][j]) {
						temp = array[h][l];
						array[h][l] = array[i][j];
						array[i][j] = temp;
					}
				}
			}
		}
	}
}
// method of analysis by value: possit/negat/zero
void arrayAnalyser(int array[N][M]) {
	int negat_cntr = 0;
	int zero_cntr = 0;
	int posit_cntr = 0;
	for (int i = 0; i < N; i += 1) {
		for (int j = 0; j < M; j += 1) {
			if (array[i][j] > 0) {
				posit_cntr += 1;
			}
			else if (array[i][j] == 0) {
				zero_cntr += 1;
			}
			else {
				negat_cntr += 1;
			}
		}
	}
	printf("In the array: \n possitive val. %d \n zero val. %d \n negative val. %d \n", posit_cntr, zero_cntr, negat_cntr);
}

//start of programm
int main(void) {

	int array[N][M];

	arrayFilling(array);

	arrayPrinter(array);
	printf("\n");

	arraySorter(array);

	arrayPrinter(array);
	printf("\n");

	arrayAnalyser(array);
	return 0;
}