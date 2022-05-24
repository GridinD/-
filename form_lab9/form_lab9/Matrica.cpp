#pragma once
#include <stdio.h>
#include <stdlib.h>//библиотека содержит функцию rand()
#include <time.h>
void form(int matr[6][6])
{
	srand(time(NULL));
	int i; 
	int j;
	for (i = 0; i < 6; i++)
		for (j = 0; j < 6; j++)
			matr[i][j] = rand() % 100 - 30;
}
int Summ(int matr[6][6])
{
	int i;
	int j; 
	int S = 0;
	for (i = 0; i < 6 - 1; i++) {
		for (j = 0; j < 6 - i - 1; j++) {
			S = S + matr[i][j];
		}
	
	}
	return S;
}

void Result(int matr[6][6], int S) {
	int i;
	int j;
	for (i = 0; i < 6; i++) {
		for (j = 2; j < 3; j++) {
			matr[i][j] = matr[i][j + 2] + S;
		}
	}
}
