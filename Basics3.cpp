//**********Structure = collection of disimilar data types **************




#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    // struct rectangle r;  // Declaration
    
    struct rectangle r = {15, 10}; // Initialisation + Declaration
    
    cout << r.length << endl;
    cout << r.breadth << endl;
    
    cout << "After Accessing parameter to change value " << endl;
   
    r.length = 25; // Accessing parameter
    r.breadth = 20;
   
    cout << r.length << endl;
    cout << r.breadth << endl;
   
    return 0;
}