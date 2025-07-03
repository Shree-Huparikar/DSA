// Combination ncr=n!/r!(n-r)!
/*
#include<iostream>
using namespace std;
int fact(int i)
{
    if(i<=1)
      return i;
    return fact(i-1)*i;
}
// In this factorial is recursive not combination
int NCR(int n,int r)
{
    int num ,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}
// Recursive Combination
int RNCR(int n,int r)
{
    if(r==0||n==r)
    {
        return 1;
    }
    else{
        return RNCR(n-1,r-1)+RNCR(n-1,r);
    }
}
int main(){
    cout<<NCR(3,2);
    return 0;
}
*/

// Tower Of Hanoi
/*
The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered n. Also, all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc. Refer the provided link to get a better clarity about the puzzle.
Here n= NO of disc
     A= Tower No 1, B= Tower No 2, C= Tower no 3.


#include<iostream>
using namespace std;
void TOH(int n ,int A,int B,int C)
{
    
        
    
    if(n>0)
    {
         TOH(n-1,A,C,B);
         cout<<"Move the disc from ( Tower "<<A<<" to Tower "<<C<<")"<<endl;
         TOH(n-1,B,A,C);
    }
}
int main(){
    TOH(3,1,2,3);
    return 0;
}
*/