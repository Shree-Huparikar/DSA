#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    // Constructor that initializes length and breadth
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    int area()
    {
        return length * breadth;
    }

    // Function to calculate perimeter
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    int l, b;
    cout << "Enter the values of length and breadth: ";
    cin >> l >> b;

    // Creating a rectangle object with provided length and breadth
    rectangle r(l, b);

    // Calculating area and perimeter
    int a = r.area();
    int peri = r.perimeter();

    cout << "Area: " << a << endl;
    cout << "Perimeter: " << peri << endl;

    return 0;
}
