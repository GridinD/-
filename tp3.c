#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
#define n1 50

int creatematrix(int mat[][n1], int n){ 
    printf("Введите размер матрицы: "); 
    scanf("%d", &n); 
    mat = (int **) malloc(n * sizeof(int*)); 
    for (int i=0; i<n; i++) 
    mat[i] = (int *) malloc(n * sizeof(int)); 
    for (int i=0; i<n; i++){ 
        for (int j=0; j<n; j++){ 
            mat[i][j]=rand()%10; 
            printf("%3d", mat[i][j]); 
        }
        printf("\n");
    }
} 

int main(){ 
    int n; 
    int mat[n1][n1]; 
    creatematrix(mat, n);
}