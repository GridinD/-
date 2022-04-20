#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define n1 50

int creatematrix(int mat[][n1], int n){
    srand(time(NULL));
    for (int i = 0; i < n; i++){ 
        for (int j = 0; j < n; j++){
            mat[i][j] = rand()%100-50;
        }
    }
    printf("\n"); 
    return n;
}

int vivod(int mat[][n1], int n){
    for (int i; i < n; i++){ 
        for (int j; j < n; j++){ 
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n"); 
    return n;
}

int searchmax(int mat[][n1], int n){ 
    int max = -99; 
    for (int i = 0; i < n; i++){ 
        for (int j = 0; j < n; j++){ 
            if (mat[i][j] < 0 && mat[i][j] < max){ 
                max = mat[i][j];
            }
        }
    }
    printf("%d\n", max);
    return n;
}

int quantity(int mat[][n1], int n){ 
    int k = 0, max = -99; 

    for (int i = 0; i < n; i++){ 
        for (int j =0; j < n; j++){ 
            if (mat[i][j] > max){ 
                max = mat[i][j]; 
            }
        }
    }

    for (int i = 0; i < n; i++){ 
        for(int j = 0; j < n; j++){ 
            if (mat[i][j] == max){ 
                k++;
            }
        }
    }
    printf("%d\n", k);
    return n;
} 

int main () {
    int n; 
    int mat[n1][n1]; 
    scanf("%d", &n);

    creatematrix(mat, n); 
    vivod(mat, n);
    searchmax(mat, n);
    quantity(mat, n); 
}
