/***********************************COMPARATIVE FUNCTIONS******************************/

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first!=b.first)
    {
        if(a.first>b.first) return false;  // IT prints first say column in ascending order
                return true;            // Return false do swaping and return true means does not perform swapping 
    }
    else{
        if(a.second<b.second) return false; // It prints second column in descending order
        return true;
    }
}

/* We can also write
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first!=b.first)
    {
        return a.first < b.first ; // it prints 1st column in ascending order
    }
    return a.second > b.second ;  // it prints second column in descending order
}
*/
int main()
{
    int n;
    cout<<"Enter how many pair do you want :";
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i].first>>a[i].second;
    }

    sort(a.begin(),a.end(),cmp);

    for(int i=0;i<n;i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
}