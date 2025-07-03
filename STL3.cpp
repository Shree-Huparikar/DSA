#include<iostream>
#include<vector>
#include<map>
using namespace std;

void printMap(map<int, string> &m)
{
    cout << "size: " << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "abd"; // O(log(n)), n is the size of the map
    m[5] = "sdf";
    m[6] = "jgd";
    m[5] = "dgf"; // Updates the value of key 5 to "dgf"
    m.insert({3, "dgf"});

    m[7]; // Default-initializes m[7] to an empty string

    // Uncomment the line below to print the map
    //  printMap(m);

    auto it = m.find(5); // Finds key 5
    if (it != m.end())
    {
        m.erase(it); // Erases the key 5 if it exists
    }

    printMap(m); // Prints the map
}
