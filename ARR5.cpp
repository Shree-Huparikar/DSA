// Prefix Sum Question
#include<iostream>
using namespace std;
#include<vector>

void calculatePrefixSum(vector<int>&v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i-1]+v[i];
    }
    return;
}

int main(){
    vector<int>v;
    int n;
    cin>>n;
    cout<<"Enter the Elements"<<endl;
    for(int i=0;i<n ;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    calculatePrefixSum(v);
    cout<<"The prefic Sum Array is : "<<endl;

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    return 0;
}