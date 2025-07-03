//Function and parameter passing
// 1.Call By Value
/*#include<iostream>
using namespace std;
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int a,b;
    a=10;
    b=20;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    
    return 0;
}*/

// 2.Call by Address -> It uses Pointers
#include<iostream>
using namespace std;
void swap(int *x,int *y){    // x and y are formal parametes
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a,b;
    a=10;
    b=20;
    swap(&a,&b);   // a and b are actual parameters
    cout<<a<<endl;
    cout<<b<<endl;
    
    return 0;
}


// 3.Call By Referance

/*#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int a,b;
    a=10;
    b=20;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    
    return 0;
}*/