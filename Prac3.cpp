#include <iostream>
#include <cstring>
#include<string.h>

using namespace std;

struct node
{
    char name[20];
    int flag;
    node *next;
    node *down;
};

class GLL
{
    char ch[20];
    int n, i;
    node *head = NULL, *temp = NULL, *t1 = NULL, *t2 = NULL ,*t3 = NULL;

public:
    node *create();
    void insertb();
    void insertc();
    void inserts();
    void insertss();
    void displayb();
};

node *GLL ::create()
{
    node *p = new (struct node);
    p->next = NULL;
    p->down = NULL;
    p->flag = 0;
    cout << "\n Enter the name  : ";
    cin >> p->name;
    return p;
}
void GLL ::insertb()
{
    if (head == NULL)
    {
        t1 = create();
        head = t1;
    }
    else
    {
        cout << "Book Alredy Exist" << endl;
    }
}
void GLL::insertc()
{
    if (head == NULL)
    {
        cout << "\n Book is not Exist : ";
    }
    else
    {
        cout << "\n How many Chapters do you want to insert :";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            t1 = create(); // Call the create() function to create a new chapter node
            if (head->flag == 0) // No chapters are included.
            {
                head->down = t1;
                head->flag = 1;
            }
            else
            {
                temp = head->down;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = t1;
            }
        }
    }
}


void GLL ::inserts()
{
    if (head == NULL)
    {
        cout << "\n Book does not exist : ";
    }
    else
    {
        cout << "\n Insert the name of Chapter on which  do you wnat to insert section : ";

        cin >> ch;
        temp = head;
        if (temp->flag == 0)
        {
            cout << "\n No chapters are present : ";
        }

        else
        {
            temp = temp->down;   // move towards the chapters.
            while (temp != NULL)
            {
                if (!strcmp(ch, temp->name))
                {
                    cout << "\n How many Sections Do you Want to Insert : ";
                    cin >> n;
                    for (int i = 0; i < n; i++)
                    {
                        t1 = create();
                        if (temp->flag == 0)
                        {
                            temp->down = t1;
                            temp->flag = 1;
                            t2 = temp->down;
                        }
                        else
                        {
                            while (t2->next != NULL)
                            {
                                t2 = t2->next;
                            }
                            t2->next = t1;
                        }
                    }
                    break;
                }
                temp = temp->next;
            }
        }
    }
}

void GLL::insertss()
{
    if (head == NULL)
    {
        cout << "\n Book Is not Exist : ";
    }
    else
    {
        cout << "\n Enter the name of the Chapter on which you want to insert subsection: ";
        cin >> ch;

        temp = head;
        if (temp->flag == 0)
        {
            cout << "\n There is No chapter Present : ";
        }
        else
        {
            temp = temp->down;
            while (temp != NULL)
            {
                if (!strcmp(ch, temp->name))
                {
                    cout << "\n Enter the name of the section on which you want to insert subsection: ";
                    cin >> ch;

                    if (temp->flag == 0)
                    {
                        cout << "\n Section is not present : ";
                    }
                    else
                    {
                        t1 = temp->down;
                        while (t1 != NULL)
                        {
                            if (!strcmp(ch, t1->name))
                            {
                                cout << "\n How many SubSections do you want to insert: ";
                                cin >> n;
                                for (int i = 0; i < n; i++)
                                {
                                    t2 = create(); // Create a new subsection node
                                    if (t1->flag == 0)
                                    {
                                        t1->down = t2;
                                        t1->flag = 1;
                                    }
                                    else
                                    {
                                        node *temp2 = t1->down;
                                        while (temp2->next != NULL)
                                        {
                                            temp2 = temp2->next;
                                        }
                                        temp2->next = t2;
                                    }
                                }
                                break;
                            }
                            t1 = t1->next;
                        }
                    }
                }
                temp = temp->next;
            }
        }
    }
}

void GLL::displayb()
{
    if (head == NULL)
    {
        cout << "\n No book Is Exist : ";
    }
    else
    {
        temp = head;
        cout << "\n Name Of Book : " << temp->name;

        while (temp != NULL)
        {
            if (temp->flag == 1)
            {
                t1 = temp->down;
                while (t1 != NULL)
                {
                    cout << "\n\t\t Name Of The Chapter : " << t1->name;
                    if (t1->flag == 1)
                    {
                        t2 = t1->down;
                        while (t2 != NULL)
                        {
                            cout << "\n\t\t\t Name Of The Section : " << t2->name;
                            if (t2->flag == 1)
                            {
                                t3 = t2->down;
                                while (t3 != NULL)
                                {
                                    cout << "\n\t\t\t\t Name of SubSection : " << t3->name;
                                    t3 = t3->next;
                                }
                            }
                            t2 = t2->next;
                        }
                    }
                    t1 = t1->next;
                }
            }
            temp = temp->next;
        }
    }
}

int main()
{
    GLL  myGLL ;
    int x ;
    while (1)
    {
        cout << "\n\n Enter your Choice :";
        cout << "\n 1.Insert Book ";
        cout << "\n 2.Insert Chapter ";
        cout << "\n 3.Insert Section ";
        cout << "\n 4.Insert SubSection ";
        cout << "\n 5.Display Book ";
        cout << "\n 6.Exit ";

        cin >> x;

        switch (x)
        {
        case 1:
            myGLL.insertb();
            break;
        case 2:
             myGLL.insertc();
            break;
        case 3:
             myGLL.inserts();
            break;
        case 4:
            myGLL.insertss();
            break;
        case 5:
            myGLL.displayb();
            break;
        case 6:
            exit(0);
        }
    }
    return 0;
}