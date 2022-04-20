#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a, n, m, i, j;
    int **mat;

    printf("Введите размер матицы: ");

    scanf("%d", &n);
    m = n;
    mat = (int **)malloc(m * sizeof(int *));
    for (i = 0; i < m; i++)
        mat[i] = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {

            mat[i][j] = rand() % 10 - 3;
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
    int index_h = -1, index_w = -1, k;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                if (index_h == -1 && index_w == -1)
                {
                    index_h = i;
                    index_w = j;
                }
                k++;
            }
        }
    }
    printf("Индекс перого нуля: %d %d", index_h, index_w);
    printf("Кол-во нулей: %d", k);

    for (int i = 0; i < m; i++)
        free(mat[i]);
    free(mat);
}
