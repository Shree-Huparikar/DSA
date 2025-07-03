//************Structure and functions
#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};

int initialise(struct rectangle *p, int l, int b)
{
    p->length = l;
    p->breadth = b;
}

int area(struct rectangle r1)
{
    return r1.length*r1.breadth;
}

int changelen(struct rectangle *r, int l)
{
    r->length = l;
}
int main()
{
    struct rectangle r;
    initialise(&r, 10, 5);
    area(r);
    changelen(&r, 20);
    cout <<" After the changing length "<< area(r) << endl;
    return 0;
}