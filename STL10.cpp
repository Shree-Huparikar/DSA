// STL SORT

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << " How many element do you want :";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    // sort(a.begin()+2,a.end());
    // sort(a.begin(),a.begin()+3);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
