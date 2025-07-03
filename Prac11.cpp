#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void addStudent()
{
    ofstream f("db.txt", ios::app);

    string rn, name, div, add;
    cout << "Enter The Roll No of Student :" << endl;
    cin >> rn;
    cout << "Enter The Name of Student :" << endl;
    cin >> name;
    cout << "Enter The Division of Student :" << endl;
    cin >> div;
    cout << "Enter The Address of Student :" << endl;
    cin >> add;

    f << left << setw(20) << rn << setw(20) << name << setw(20) << div << setw(20) << add <<endl;

    f.close();

    cout << "Student Added Successfully :" << endl;
}
void deleteStudent()
{
    ifstream f("db.txt");
    string line;

    string rn;
    cout << "Enter the Roll No of Student to delete :";
    cin >> rn;
    string fileData;
    while (getline(f, line))
    {
        if (line.find(rn) == string::npos)
        {
            fileData += line;
            fileData += "\n";
        }
    }
    f.close();

    ofstream f1("db.txt", ios::out);
    f1 << fileData;
    f1.close();
}
void searchStudent()
{
    ifstream f("db.txt");
    string line;

    string rn;
    cout << "Enter the Roll No of Student to search :";
    cin >> rn;

    bool found = false;
    while (getline(f, line))
    {
        if (line.find(rn) != string::npos)
        {
            cout << "Student Details :" << endl;
            cout << line << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Student Does not Exist..!" << endl;
    }
}
void printStudent()
{
    ifstream f("db.txt");
    string line;
    cout << "Printing File Data..." << endl;
    while (getline(f, line))
    {
        cout << line << endl;
    }
    cout << "Printing Complete...!" << endl;
    f.close();
}

int main()
{
    ofstream f("db.txt", ios::out);

    f << left << setw(20) << "Roll NO" << setw(20) << "Name" << setw(20) << "Division" << setw(20) << "Address" << endl;

    f.close();

    int ip;
    while (true)
    {
        cout << "\nEnter your choice\n1.Add Student\n2.Delete Student\n3.Search Student\n4.Print Data\n5.Exit\n";
        cin >> ip;
        switch (ip)
        {
        case 1:
            addStudent();
            break;
        case 2:
            deleteStudent();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            printStudent();
            break;
        case 5:
            return 0;
            break;
        default:
            cout << "PLease ReEnter your Choice" << endl;
        }
    }
    return 0;
}