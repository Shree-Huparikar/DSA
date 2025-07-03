#include<iostream>
#include<vector>

using namespace std;

int printVec(vector<int> v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
// Declaration
      //   vector<string> v; 

    /*
       ***** VECTOR DECLARATION *****
       vector<int>v(5);    --->  0 0 0 0 0

       vector<int>v(5,3);  --->  3 3 3 3 3

       vector<int>v(5);    --->  0 0 0 0 0
       v.push_back(5);     --->  0 0 0 0 0 3   Push The element at end.

       vector<int>v(5,2);  --->  2 2 2 2 2
       v,pop_back(v);      --->  2 2 2 2       Last Element Poped.

    */


    // Also we Print Strings by changing declaration of vector insted of int replace it by string...
    //   vector<string>v;
int main()   
{
    vector<int> v;

    int n;
    cout << "How many numbers do you want to enter in Vector : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    printVec(v);
}



    // Declaration
      //   vector<string> v; 

    /*
       ***** VECTOR DECLARATION *****
       vector<int>v(5);    --->  0 0 0 0 0

       vector<int>v(5,3);  --->  3 3 3 3 3

       vector<int>v(5);    --->  0 0 0 0 0
       v.push_back(5);     --->  0 0 0 0 0 3   Push The element at end.

       vector<int>v(5,2);  --->  2 2 2 2 2
       v,pop_back(v);      --->  2 2 2 2       Last Element Poped.

    */


    // Also we Print Strings by changing declaration of vector insted of int replace it by string...
    //   vector<string>v;
    
 


    
 
