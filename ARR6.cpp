#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSuffixSum(vector<int>&v)
{
    int total_sum = 0 ;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }

    int prefix_sum = 0;
    for(int i=0;i<v.size();i++){
          prefix_sum+=v[i];
          int suffix_sum=total_sum-prefix_sum;
          if(prefix_sum==suffix_sum){
            return true;
          }
    }
    return false;
}

int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
        
    }

    if(checkPrefixSuffixSum(v)) {
        cout << "Yes, prefix sum equals suffix sum at some point." << endl;
    } else {
        cout << "No such point exists." << endl;
    }
    return 0;
}