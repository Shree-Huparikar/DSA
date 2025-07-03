// ALGORITHMS

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter how number do you want :";
    cin>> n;
    vector<int>v(n);
    for(int i=0 ;i<n;i++)
    {
        cin>>v[i];
    }
    
    int min=*min_element(v.begin(),v.end());  //max_element gives the location to  get value written with *
    cout<<"The minimum element present in the vector is :"<<min<<endl;
    
    int max=*max_element(v.begin(),v.end());
    cout<<"The maximum element present in the vector is :"<<max<<endl;

    int sum=accumulate(v.begin(),v.end(),0);  // Gives the sum of all elements in vector
    cout<<"The sum of elements in the vector is :"<<sum<<endl;

    int ct=count(v.begin(),v.end(),7);  // how many number a number id repeated in vector
    cout<<"The 7 number repeated in vector "<<ct<<" times."<<endl;

    sort(v.begin(),v.end());

    reverse(v.begin(),v.end());
    cout<<"The Reverse Vector : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


    string s="SHREYASH";
    reverse(s.begin(),s.end());
    cout<<s;

}