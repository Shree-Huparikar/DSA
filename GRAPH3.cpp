//*************************Krushkals algorithm******************************************




#include <iostream>
using namespace std;
#define I 32767
int edges[3][9] = {{1, 1, 2, 2, 3, 4, 4, 5, 5},
                   {2, 6, 3, 7, 4, 5, 7, 6, 7},
                   {25, 5, 12, 10, 8, 16, 14, 20, 18}};

int set[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
static int included[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0}, t[2][6];
void Myunion(int u, int v)
{
    if (set[u] < set[v])
    {
        set[u] = set[u] + set[v];
        set[v] = u;
    }
    else
    {
        set[v] = set[u] + set[v];
        set[u] = v;
    }
}

int find(int u)
{
    int x = u, v = 0;
    while (set[x] > 0)
    {
        x = set[x];
    }

    while (u != x)
    {
        v = set[u];
        set[u] = x;
        u = v;
    }
    return x;
}

int main()
{
    int i = 0, j, k, n = 7, e = 9, min, u, v;
    while (i < n - 1)
    {
        min = I;
        for (j = 0; j < e; j++)
        {
            if (included[j] == 0 && edges[2][j] < min)
            {
                min = edges[2][j];
                k = j;
                u = edges[0][j];
                v = edges[1][j];
            }
        }

        if (find(u) != find(v))
        {
            t[0][i] = u;
            t[1][i] = v;
            Myunion(find(u), find(v));
            i++;
        }
        included[k] = 1;
    }
    for (i = 0; i < n - 1; i++)
    {
        cout << "(" << t[0][i] << "," << t[1][i] << ")" << endl;
    }
    return 0;
}