// USing Stack find next greater element

/*
     It is based on an algorithm.
     1) we take an array/vector to find next greater element we use stack data structure.
     2) To get answer we need an vector to store the answer.
     3) firstly we put the first element in stack, then sceck the next element from the array with is greater or not from the stacks top element .if vector element is greater then assign answers vector yo array element and push it and also pop the stacks top elemnt.
     4) If any element is remaining in stack after complition of vector then assign those elemnt to -1 which indicates no next greater element is present in the vector for thet element.
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> NGE(vector<int> v)
{
    stack<int> st;
    vector<int> nge(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        while (!st.empty() && v[i] > v[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while (!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}
int main()
{
    int n;
    cout << "How many inputs do you want :";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i] ;
    }
    vector<int> nge = NGE(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
    }
}