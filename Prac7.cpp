#include <iostream>
using namespace std;

class tree
{
public:
    int a[20][20], w, l, u, v, e, i, j, visited[20];

    void insert();
    void display();
    void minimum();
};
void tree::insert()
{
    cout << "Enter the number of branches : ";
    cin >> v;

    for (i = 0; i < v; i++)
    {
        visited[i] = 0;

        for (j = 0; j < v; j++)
        {
            a[i][j] = 999;
        }
    }

    cout << "Enter the number of connections : ";
    cin >> e;

    for (i = 0; i < e; i++)
    {
        cout << "Enter the end branches of connections : " << endl;
        cin >> l >> u;

        cout << "Enter the Phone Company Charges for this Connection : ";
        cin >> w;
        a[l - 1][u - 1] = a[u - 1][l - 1] = w;
    }
}

void tree::display()
{
    cout << "ADJACENCY MATRIX" << endl;
    for (i = 0; i < v; i++)
    {
        cout << endl;
        for (j = 0; j < v; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void tree::minimum()
{
    int p = 0, q = 0, total = 0, min;

    visited[0] = 1;
    for (int count = 0; count < (v - 1); count++)
    {
        min = 999;
        for (i = 0; i < v; i++)
        {
            if (visited[i] == 1)
            {
                for (j = 0; j < v; j++)
                {
                    if (visited[j] != 1)
                    {
                        if (min > a[i][j])
                        {
                            min = a[i][j];
                            p = i;
                            q = j;
                        }
                    }
                }
            }
        }
        visited[p] = 1;
        visited[q] = 1;
        total = total + min;
        cout << "Minimum cost connection is " << (p + 1) << " -> " << (q + 1) << " with charge : " << min << endl;
    }
    cout << "The minimum total cost of connections of all branches is : "
         << total << endl;
}
int main()
{
    int ch;
    tree t;
    while (true)
    {
        cout << "*******PRIMS ALGORITHM*******" << endl;
        cout << "\n1.INSERT\n\n2.DISPLAY\n\n3.MINIMUM\n\n4.EXIT" << endl;
        cout << "Enter Your Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            t.insert();
            break;
        case 2:
            cout << "*******DISPLAY CONTENT*******" << endl;
            t.display();
            break;
        case 3:
            cout << "*******MINIMUM*******" << endl;
            t.minimum();
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}