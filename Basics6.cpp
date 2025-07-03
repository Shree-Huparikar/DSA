
//************ Structure as a parameter **************

// Call by value
#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};

int area(struct rectangle r1)
{ // for call by referance use struct rectangle &r1 as a parameter
    r1.length++;
    return r1.length * r1.breadth;
}
int main()
{
    struct rectangle r = {10, 5};
    cout << area(r) << endl;
    return 0;
}

// Call by referance

/*#include<iostream>
using namespace std;
struct rectangle{
     int length;
     int breadth;
};

int changelen( struct rectangle *p,int l){
     p->length=l;
}

int main(){
    struct rectangle r={10,5};
    changelen (&r,20);
    return 0;
}*/