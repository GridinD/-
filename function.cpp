#include <iostream>
#include <cstdlib>
#include <ctime>
#define n1 50

using namespace std;

int creatematrix(int A[][n1], int n)
{

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            A[i][j] = rand() % 100 - 50;
        }
    }

    cout << endl;

    return n;
}

int vivod(int A[][n1], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << A[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;

    return n;
}

int searchmax(int A[][n1], int n)
{

    int max = -999999, i1, j1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (A[i][j] < 0 && A[i][j] > max)
            {

                max = A[i][j];
                i1 = i;
                j1 = j;
            }
        }
    }

    cout << max << "[" << i1 << "]"
         << "[" << j1 << "]" << endl
         << endl;

    return n;
}

int quantity(int A[][n1], int n)
{

    int k = 0, max = -999999;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (A[i][j] > max)
            {

                max = A[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (A[i][j] == max)
            {

                k++;
            }
        }
    }

    cout << k;

    return n;
}
