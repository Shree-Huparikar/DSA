// Structure to pointers

#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r = {10, 5};
    cout << r.length << endl;
    cout << r.breadth << endl;

    struct rectangle *p = &r;
    p->length = 20;
    p->breadth = 7;

    cout << p->length << endl;
    cout << p->breadth << endl;

    /*memory created in heap
       int main()
      {
       struct rectangle *p;
       p=new rectangle;
       p->length=20;
       p->breadth=87;
       cout<<p->length<<endl;
       cout<< p->breadth<<endl;
       }
   */ 
    return 0;
}