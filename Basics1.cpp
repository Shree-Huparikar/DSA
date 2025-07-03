#include <iostream>
using namespace std;

int main( )
{
    int i;
    int A[5];
    A[0] = 12;
    A[1] = 13;
    A[2] = 14;
    A[3] = 15;
    A[4] = 16;
    cout<<"First array"<<endl;
    for (i = 0; i < 5; i++)
    {
        cout << A[i] << " " << endl;
    }
    cout<< "Second array"<<endl;
    int B[5] = {1, 2, 3, 4, 5};
    for (i = 0; i < 5; i++)
    {
        cout << B[i] << " " << endl;
    }
    return 0;
}