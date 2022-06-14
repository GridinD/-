#include <stdlib.h>
void form(int matr[6][6]) {
	int i, j;
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			matr[i][j] = rand() % 100 - 40;
		}
	}
}

int quantity(int matr[6][6]) {
	int k = 0;
	for (int i = 0; i < 6 - 1; ++i) {
		for (int j = i + 1; j < 6; ++j) {
			if (matr[i][j] % 2 == 0) {
				k += 1;
			}
		}
	}
	return k;
}

int MaxMain(int matr[6][6]) {
	int max = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (matr[i][i] > max) {
				max = matr[i][i];
			}
		}
	}
	return max;
}

int MinSide(int matr[6][6]) {
	int min = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (matr[i][6 + i - 1] < min) {
				min = matr[i][6 + i - 1];
			}
		}
	}
	return min;
}