// Linear probing


#include <iostream>
using namespace std;

#define size 10

int myhash(int key)
{
    return key % size ;
}

int probe(int H[], int key)
{
    int index = myhash(key);
    int i = 0;
    while (H[(index + i) % size] != 0)
    {
        i++;
    }
    return (index + i) % size;
}

void insert(int H[], int key)
{
    int index = myhash(key);
    if (H[index] != 0)
    {
        index = probe(H, key);
    }
    H[index] = key;
}

int search(int H[], int key)
{
    int index = myhash(key);
    int i = 0;
    while (H[(index + i) % size] != key)
    {
        i++;
    }
    return (index + i) % size;
}

int main()
{
    int H[size] = {0};
    insert(H, 25);
    insert(H, 35);
    insert(H, 46);
    insert(H, 57);
    insert(H, 87);
    insert(H, 22);

    for (int i = 0; i < size; i++)
    {
        cout << H[i] << " ";
    }
    cout << endl;
    cout << "Key found at " << search(H, 35);
    return 0;
}
