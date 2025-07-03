//********************** POINTERS ***********************

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p; // Declaration
    p = &a; // Initialisation
    cout << a << endl;
    cout << *p << endl; // Dereferancing
    cout << p << endl;  // Address

    // Pointers to array
    int A[5] = {1, 2, 3, 4, 5};
    int *c;
    c = A; // OR c=&A[0];   both correct but not use c=&A like this ....It will give error.
    for (int i = 0; i < 5; i++)
    {
        cout << c[i] << endl;
    }
    return 0;
}