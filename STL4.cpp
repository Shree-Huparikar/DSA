/*
     Problem On Maps.
     Take N strings print uniqur strings in lexiographical order with their frequency.
     N <= 10^5
     S <= 100
*/
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    map<string, int> m;
    int n;
    cout << "Hoe many strings do you want to insert: ";
    cin >> n;
    cout << "Enter the " << n << " Strings " << endl;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        // When we enter a string its frequency is zero.
        // To show ferquency of string we need increase the counter.
        m[s]++; // It increase the string count by one.
    }
    for (auto &pr : m)
    {
        cout << "String Name: " << pr.first << "   " << " Frequency: " << pr.second << endl;
    }
}