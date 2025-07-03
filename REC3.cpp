//Types of recursion
/*
1) Head Recursion -> Recursive call at the starting step in the program.
2) Tail Recursion -> Recursive call at the last step of the program.
3) Tree Reursion  -> Having more then one recursive call in the program.
4) Indirect Recursion -> Having more then one recursive call in the program but in cyclic form.
5) Nested Recursion -> 
*/


// Head Recursion
/*
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;  // This prints 3 2 1
        fun(n-1);       // Recursive function call
    }    
}
int main()
{
    int x=3;
    fun(x);
    return 0;
}
*/

// Tail Recursion
/*
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
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
*/

// Tree Recursion
/*
#include<iostream>
using namespace std;
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;  // This prints 3 2 1
        fun(n-1);       // Recursive function call
        fun(n-1);    
        
}
int main()
{
    int x=3;
    fun(x);
    return 0;
}
*/

// Indirect Recursion
/*
#include<iostream>
using namespace std;
void fun2(int n);
void fun1(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun2(n-1);
    }
}

void fun2(int n)
{
    if(n>1)
    {
        cout<<n<<endl;
        fun1(n/2);
    }
}
int main(){
    fun1(20);
    return 0;
}
*/

// Nested Recursion

#include<iostream>
using namespace std;
int fun(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else{
        return fun(fun(n+11));
    }
}
int main(){
    int x;
    x=fun(95);
    cout<<x;
    return 0;
}