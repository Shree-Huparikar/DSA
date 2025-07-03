// **********************************Bradth first search******************************************** 



#include <iostream>
using namespace std;
class Queue
{
public:
    const static int size = 100;
    int front = -1;
    int rear = -1;
    int *q;
    int array[size];

    void enQueue(int vertex)
    {
        if (rear == front - 1)
        {
            cout << "Queue overflow!!" << endl;
        }
        rear++;
        array[rear] = vertex;
    }
    int deQueue()
    {
        if (front == rear)
        {
            cout << "Queue underflow!!" << endl;
        }
        front++;
        return array[front];
    }
    int isEmpty()
    {
        if (front == rear)
        {
            return 1;
        }
        return 0;
    }

    void BFS(int B[8][8], int i)
    {
        int visited[8] = {0, 0, 0, 0, 0, 0, 0, 0};
        int u;
        q = new int[size];
        cout << i << ",";
        visited[i] = 1;
        enQueue(i);
        while (!isEmpty())
        {
            u = deQueue();
            for (int v = 1; v <= 7; v++)
            {
                if (B[u][v] == 1 && visited[v] == 0)
                {
                    cout << v << ",";
                    visited[v] = 1;
                    enQueue(v);
                }
            }
        }
    }
};
int main()
{
    Queue e;
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};
    e.BFS(A, 4);
    return 0;
}