// ****************** Array As a Parameter **********************

#include <iostream>
using namespace std;
int fun(int A[], int n)
{

    A[0] = 34;
    int i;
    for (int i; i < n; i++)
    {
        cout << A[i] << " " << endl;
    }
}
int main()
{
    int A[5] = {2, 3, 4, 5, 6};
    fun(A, 5);

    return 0;
}