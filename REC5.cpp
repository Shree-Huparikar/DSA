#include<iostream>
using namespace std;
int power(int m,int n)
{
    if(n==0)
        return 1;         // Recursive Function -> power(m,n)=power(m,(n-1))*m
    return (power(m,(n-1))*m);
}
int power1(int m,int n)
{
    if(n==0)
       return 1;
    if(n%2==0)   // If power is even.
       return power1(m*m,n/2);
    return m*power1(m*m,(n-1)/2);   // If power is odd.
}
int main(){
    int x,y;
    x=power(2,4);
    y=power1(3,4);
    cout<<x<<endl;
    cout<<y;
    return 0;
}