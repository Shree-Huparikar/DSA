//**************************************Depth first search**************************************


#include <iostream>
using namespace std;
static int visited[8] = {0, 0, 0, 0, 0, 0, 0, 0};
void DFS(int vtx, int A[8][8], int n)
{

    int i = vtx;
    if (visited[i] == 0)
    {
        cout << i << " , ";
        visited[i] = 1;
        for (int j = 1; j <= n; j++)
        {
            if (A[i][j] == 1 && visited[j] == 0)
            {
                DFS(j, A, n);
            }
        }
    }
}

int main()
{

    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};

    cout << " Vertex : 3 -> " << flush;
    DFS(3, A, 8);

    for (int i = 0; i <= 7; i++)
    {
        visited[i] = 0;
    }

    cout << " Vertex : 5 -> " << flush;
    DFS(5, A, 8);
    return 0;
}