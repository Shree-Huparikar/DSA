//****************** MULTISETS ***********************//
// PLEASE SEE THIS
/*

#include<bits/stdc++.h>
using namespace std;
void PrintMultiSet(multiset<string>&s)
{
    cout<<"Size of MultiSet :"<<s.size()<<endl;
    for(auto value: s)
    {
        cout<<value<<endl;
    }
}

int main(){

    multiset<string>s;
    s.insert("adf");   // O(log(n))
    s.insert("sdf");
    s.insert("hgf");
    s.insert("adf");   // It stores dupicates also.
    s.insert("ghj");

    // auto it=s.find("adf");   // O(log(n))
    // if(it!=s.end())
    // {
    //     s.erase(it);  // It will remove the firstly come "adf" in multiset
    // }

    s.erase("adf");   // It removes all the "adf" present in multiset

   PrintMultiSet(s);
}
*/

// Question On Multiset
/*
We hve N bags which contains no of candies.we have K minutes. A man picks up a bag in a minute and eats all candies. after eating all candies the no candies can increase magically , if x candies are present then [x/2] candies are increased.
find the "maximum" no of candies that a Man can eat.


input be like
1          -> no of test cases
5 3        -> 5 bags and 3 minutes for eating
2 1 7 4 2   -> no of candies in each bag

output - 14  -> A man can eat maximum no of candies


1st case
2 1 7 4 2
Man eats candies from 3rd bag (7 CANDIES)
2 1 3 4 2
Man eats candies from 4th bag ( 4 CANDIES)
2 1 3 2 2
Man eats candies from 3 rd bag(3 CANDIES)
2 1 1 2 2

Total Candies = 7+4+3 = 14
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter the NO of test Cases :";
    cin >> t;
    while (t--)
    {
        int n, k;
        cout << "Enter the no of bages and Minutes "<<endl;
        cout<<"Bags : ";
        cin >> n;
        cout<<"Minutes :";
        cin>>k;

        multiset<long long> bags;
        cout<<"Enter no of candies in "<< n <<" bag :"<<endl;
        for (int i = 0; i < n; i++)
        {
            long long candy__ct; 
            cin >> candy__ct;  // No of Candies in each bag
            bags.insert(candy__ct);
        }

        long long total_candies = 0;

        for (int i = 0; i < k; i++)
        {
            auto last_it = (--bags.end());
            long long candy__ct = *last_it; 
             // It access which bag contains maximum no of candies. we need to print maximum no of candies eaten by a man in k minutes.And in multiset data in sorted order so last element is maximum element. 
            total_candies += candy__ct;
            bags.erase(last_it);   // we remove that candy value.
            bags.insert(candy__ct / 2); // and insert the new updated value.
        }

        cout <<"The Maximum no of Candies Eaten By a Man are :" << total_candies << endl;
    }
}