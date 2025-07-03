// Sum of First n numbers
/*
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return sum(n-1)+n;
    }
}

int Isum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
        s=s+i;
    return s;
}

int fast_sum(int n)
{ 
   if(n==0)
   {
     return 0;
   }
   else
   {
      return n*(n+1)/2;
   }

}
int main(){
    int x,y;
    x=Isum(5);
    y=sum(20);
    z=fast_sum(12);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z;
    return 0;
}
*/

// Fctorial of Number
/*
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}

int Ifact(int n)
{
    int i,f=1;

    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main(){
    int x,y;
    x=fact(5);
    y=Ifact(5);
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}
*/