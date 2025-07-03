//*******************SETS********************** //

/*
   1) Stores Unique Values.If duplicate values are present in set then it will not print the duplicate value.
   2) Types - Normal Sets, Unordered Sets, Multi Sets
   3) Scroll and see the problem on set.
   4) In unordered set the time complexity of insertion and finding the element is O(1). 
*/

/*
#include<bits/stdc++.h>
using namespace std;

void printSet(set<string>s)
{
    for(auto value: s)
    {
        cout<<value<<endl;
    }
}

int main()
{
    set<string>s;
    s.insert("Abd");   // O(log(n))
    s.insert("shu");
    s.insert("dfg");
    s.insert("fgh");
    s.find("Abd");  //  s.find() function is used to access the element in set with time complexity O(log(n)).
                    
    auto it=s.find("shu");
    if(it!=s.end())
    {
        s.erase(it);  // To remove an element from the set.
    }

    // s.erase("shu");   // We can also directly remove the element from the set.
    printSet(s);
}
*/


  //Question - Given N strings, print "unique"  strings in lexiographical order means in ascending order.

 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    set<string>s;
    int n;
    cout<<" Hoe many strings do you want to insert :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        s.insert(str);    
    }
    cout<<"Unique strings from the given input are :"<<endl;
    for(auto value: s)
    {
        
        cout<<value<<endl;
    }
 } 


