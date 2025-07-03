#include <iostream>
using namespace std;

#define size 20

int myhash(int key)
{
    return key % size;
}

int probe(int H[], int key)
{
    int index = myhash(key);
    int i = 0;
    while (H[(index + i * i) % size] != 0)
    {
        i++;
    }
    return (index + i * i) % size;
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
    while (H[(index + i * i) % size] != key)
    {
        i++;
    }
    return (index + i * i) % size;
}

int main()
{
    int H[size] = {0};
    insert(H, 25);
    insert(H, 67);
    insert(H, 46);
    insert(H, 57);
    insert(H, 76);
    insert(H, 96);
    insert(H, 46);
    insert(H, 38);
    insert(H, 85);
    insert(H, 23);

    for (int i = 0; i < size; i++)
    {
        cout << H[i] << " ";
    }
    cout << endl;
    cout << "Key found at " << search(H, 38);
    return 0;
}
