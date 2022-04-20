#include <iostream>
#include <cstdlib>
#include <ctime>
#include "function.h"

using namespace std;

int main()
{
    int n;
    int A[n1][n1];

    cin >> n;

    creatematrix(A, n);
    vivod(A, n);
    searchmax(A, n);
    quantity(A, n);

    return 0;
}
