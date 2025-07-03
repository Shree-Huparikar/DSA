//Taylors series
/*
#include<iostream>
using namespace std;
double e(int x,int n)
{
    static double p=1,f=1;
    double r;

    if(n==0)
       return 1;
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+(p/f);
}
int main(){
    double result=e(4,15);
    cout<<result<<endl;
    return 0;
}
*/

// Factorial of number
/*
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
       return 1;
    return fact(n-1)*n;
}
int main(){
    int r=fact(1);
    cout<<r;
    return 0;
}
*/

// Iterative Method for Factorial of a number
/*
#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result =result* i;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << n << " is " << factorial(n) << endl;
    }

    return 0;
}
*/

// Fibonacci Number
/*
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10;
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
*/

// Iterative Methode for Fibonacci series
/*
#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1 ,s,i;
    for (i = 0; i < n; ++i) {
        cout << a << " ";
        s = a + b;
        a = b;
        b = s;
    }
}

int main() {
    int n = 10;
    fibonacci(n);
    return 0;
}
*/

// Memoization Fibonacci
/*
#include<iostream>
using namespace std;
int f[10];
int mfib(int n)
{
    if(n<=1)
    {
        f[n]=n;
        return n;
    }
    else{
        if(f[n-2]==-1)
           f[n-2]=mfib(n-2);
        if(f[n-1]==-1)
            f[n-1]=mfib(n-1);
        return f[n-2]+f[n-1];
    }
}
int main(){
    int i;
    for (i=0;i<10;i++)
    {
        f[i]=-1;
    }
    cout<<mfib(6);
    return 0;
}
*/