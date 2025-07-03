// MAX Heap MIN Heap

#include <iostream>

using namespace std;

// MIN HEAP -> parent < child

void minInsert(int marks[], int i)
{    
    int parent = (i - 1) / 2;
    int cur = i;
    while (parent >= 0 && marks[parent] > marks[cur])
    {
        swap(marks[parent], marks[cur]);
        cur = parent;
        parent = (cur - 1) / 2;
    }
}

// MAX HEAP -> parent > child

void maxInsert(int marks[], int i)
{
    int parent = (i - 1) / 2;
    int cur = i;
    while (parent >= 0 && marks[parent] < marks[cur])
    {
        swap(marks[parent], marks[cur]);
        cur = parent;
        parent = (cur - 1) / 2;
    }
}
int main()
{
    const int MAX_STUDENTS = 100; // Maximum number of students
    int marks[MAX_STUDENTS];      // Array to store marks
    int numStudents;              // Number of students

    // Input the number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Input marks for each student
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marks[i];
    }

    
    cout << "After inserting elements in Min Heap" << endl;
    for (int i = 0; i < numStudents; ++i)
    {
        minInsert(marks, i);
    }
    for (int i = 0; i < numStudents; ++i)
    {
        cout << marks[i]<< " ";
        
    }
    cout<<endl;

    cout << "The Minimum Marks Obtained : " << marks[0] << endl;

    cout << "After inserting elements in Max Heap " << endl;
    for (int i = 0; i < numStudents; ++i)
    {
        maxInsert(marks, i);
    }
    for (int i = 0; i < numStudents; ++i)
    {
        cout << marks[i] << " ";
        
    }
    cout<<endl;
    cout << "The Maximum Marks Obtained : " << marks[0] << endl;

    return 0;
}