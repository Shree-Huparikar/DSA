// Two vectors are in incresing order with size m & n .merge the two arrys in single sorted array of size m+n.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    vector<int>arr1 = {-2,-1,1,3,5,7};
    vector<int>arr2 = {-3,4,6,8};

    arr1.insert(arr1.end(),arr2.begin(),arr2.end());

    sort(arr1.begin(),arr1.end());

    for(int num : arr1){
        cout<<num<<" ";
    } cout<<endl;
    return 0;
}