#include <iostream>
#include <vector>
using namespace std;

int printVec(vector<int> v)
{
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{

    /*

                             //  ****************** ARRAY OF VECTORS **************************

    int N;
    cout<<"How mant arrays do you want to insert "<<endl;
    cin>>N;
    vector<int>v[N];
    for(int i=0;i<N;i++)
    {
       int n;
       cout<<"Enter the Array Size : ";
       cin>>n;
          for(int j=0;j<n;j++)
          {
             int x;
             cin>>x;
             v[i].push_back(x);
          }
    }

    for(int i=0 ; i< N ;i++)
    {
         printVec(v[i]);
    }
    */

    //************************ VECTOR OF VECTORS ***********************************//
    vector<vector<int>> v;
    int N;
    cout << "How many Vectors do you want to insert :";
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter the size of an array :";
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
    cout << v[1][1];
}
