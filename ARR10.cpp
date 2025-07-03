// Given a sorted array in increasing order of size n and interger x . Find if their exist a pair in the array whose sum is exactly x.


#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int n = 5;
    int x = 9; // The pair present in the array whose sum should be 
    int i = 0;
    int j = n-1;
    bool found = false;
    while(i<j){
        int sum = arr[i]+arr[j];
        if(sum==x){
            found = true ; 
            break;
        }
        else if(sum < x){
            i++;
        }
        else{
            j++;
        }
    }
    
    if(found==true) {
        cout<<"Yes"<<endl;
    }
    else{
    cout<<"No"<<endl;
    }
    return 0;
}