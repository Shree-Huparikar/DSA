//******************* NASTED STL ******************//
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<string,string>,vector<int>>m;
    int n;
    cout<<"How many passes do you want: ";
    cin>>n;


    for(int i=0;i<n;i++)
    {
        string fr,lr;
        int ct;  // no of subjects
        cout<<"Enter First name last name no of subjects :";
        cin>>fr>>lr>>ct;    
        for(int j=0;j<ct;j++)
        {
            int x;
            cin>>x;      // marks obtained in each subject.
            m[{fr,lr}].push_back(x);
        }
    }
    for (auto &pr : m)
    {
         auto &full_Name = pr.first;
         auto &total_subject= pr.second;
         cout<<pr.first.first<<" "<<pr.first.second<<endl;
         cout<<"Total no of subjects :"<<total_subject.size()<<endl;
         for(auto &marks :total_subject)
         {
            cout<<marks<<" ";
         }
         cout<<endl;
         
        }
}

*/
/*
    PROBLEM:
       The monk is supposed to arrange the list in such a manner that the list is stored in decreasing order of marks and if two students have the same marks, they should be arranged in lexicographical order.

       on the first line  take an integer N denoting number of students. other n lines which contains a string and an interger denoting name of the student  and the marks.

       sample input
        3
        Shree 78
        Harsh 85
        Subhodh 78
        Shree 78

        output
        Harsh 85
        Shree 78
        Shree 78
        Subhodh 78
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,multiset<string>>marks_map;
    
    // We need ordering in terms of marks so that in map keys are marks.
    int n;
    cout<<"Total no of students: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        int marks;
        cin>> name >>marks;
        
        marks_map[-1*marks].insert(name);
    }
    for(auto &marks_student_pr : marks_map)
    {
        auto &students = marks_student_pr.second;
        auto &marks = marks_student_pr.first;
        for(auto &student : students)
        {
            cout<<student<< " " << -1*marks<<endl;
        }
    }
}

