// UPPER BOUND AND lOWER BOUND

/*
Given array - 2 13 26 29 35 40

1) If lower bound of any number present in array is asked then lower bound of this number is number itself.
2) If l_b of number like between in range of array but not prsent in the array then l_b will be greater than that number. for ex- l_b of 15 is asked then answer is 26.
3) If u_p of any number present in the array is asked then greater than the asked number is the answer.
  ex -> u_p of 26 is 29.
     -> u_p of 40 is garbage value.
4) for any problem check the code and change the input and see the output.
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"How many numbers do you want :";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    auto it=upper_bound(v.begin(),v.end(),8);
    cout<<*it<<endl;

    auto bd = lower_bound(v.begin(),v.end(),8);  
    cout<<*bd<<endl;

}