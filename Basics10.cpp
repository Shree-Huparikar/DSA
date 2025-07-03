// ****************** Classes and Templates ************************

#include <iostream>
using namespace std;

template <class T>
class Arithmatic
{
public:
    T a;
    T b;

    Arithmatic(T a, T b); // Constructor declaration

    T add()
    {
        T c;
        c = a + b;
        return c;
    }

    T sub()
    {
        T c;
        c = a - b;
        return c;
    }
};

// Constructor definition
template <class T>
Arithmatic<T>::Arithmatic(T a, T b)
{
    this->a = a;
    this->b = b;
}

int main()
{
    Arithmatic<int> ar(10, 5);
    cout << ar.add() << endl;
    cout << ar.sub() << endl;

    Arithmatic<float> ar2(10.99, 5.65);
    cout << ar2.add() << endl;
    cout << ar2.sub() << endl;

    return 0;
}
