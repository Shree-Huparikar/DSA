// Convert BST into Sorted Doubly Linked List
#include <iostream>

using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int data;
};

class BST
{
private:
    Node *headLinkedList;
    Node *prev;

    Node *createNewNode(int k)
    {
        Node *newNode = new Node();
        newNode->data = k;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

public:
    BST()
    {
        headLinkedList = nullptr;
        prev = nullptr;
    }
    
    void bstToDoublyLinkedList(Node *node)
    {
        if (node == nullptr)
            return;

        bstToDoublyLinkedList(node->left);

        if (prev == nullptr)
        {
            headLinkedList = node; // Root Node
        }
        else
        {
            node->left = prev;
            prev->right = node;
        }

        prev = node;

        bstToDoublyLinkedList(node->right);
    }



    Node *insert(Node *node, int val)
    {
        if (node == nullptr)
        {
            return createNewNode(val);
        }

        if (val < node->data)
        {
            node->left = insert(node->left, val);
        }
        else if (val > node->data)
        {
            node->right = insert(node->right, val);
        }

        return node;
    }

    void printList()
    {
        Node *node = headLinkedList;

        while (node != nullptr)
        {
            cout << node->data << " ";
            node = node->right;
        }
    }

    void bstToDoublyLinkedListWrapper(Node *root)
    {
        bstToDoublyLinkedList(root);
    }
};

int main()
{
    BST a;
    Node *root = nullptr;
    int n, val;

    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter the values of the nodes:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> val;
        root = a.insert(root, val);
    }

    a.bstToDoublyLinkedListWrapper(root);
    cout << "Doubly Linked List: ";
    a.printList();

    return 0;
}
