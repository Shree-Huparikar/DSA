#include <iostream>
using namespace std;
int main() {
    int marks[]={40,50,60,80};
    /*
    In this way we can also declare Array
    
    int marks[5]={1,2,3,4,5}; -> 1 2 3 4 5
    
    int marks[5];
    
    int marks[5]={2,4};    -> 2 4 0 0 0 

    int marks[5]={0};      -> 0 0 0 0 0
    */
    int*p = marks;
    
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;


    cout<<"The value of *p is   : "<< *(p)<<endl;
    cout<<"The value of *p+1 is : "<< *(p+1)<<endl;
    cout<<"The value of *p+2 is : "<< *(p+2)<<endl;
    cout<<"The value of *p+3 is : "<< *(p+3)<<endl;
    cout<<* (p)<<endl;
    cout<<* (++p)<<endl;

    for(int i=0;i<3;i++)
    {
        cout<<marks[i]<<" ";
    }

    return 0;
}