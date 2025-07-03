//RECURSION

#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;  // This prints 3 2 1
        fun(n-1);       // Recursive function call
        cout<<n<<endl;  // This prints 1 2 3
    }
}
int main()
{
    int x=3;
    fun(x);
    return 0;
}