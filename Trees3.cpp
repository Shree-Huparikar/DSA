#include <iostream>
using namespace std;

// Tree Node Structure
struct TreeNode
{
    int data;
    TreeNode *lchild;
    TreeNode *rchild;
    TreeNode(int val)
    {
        data = val;
        rchild = NULL;
        lchild = NULL;
    }
};

// Stack Structure
struct StackNode
{
    TreeNode *data;
    StackNode *next;
    StackNode(TreeNode *node)
    {
        data = node;
        next = NULL;
    }
};

// Custom Stack Implementation
class Stack
{
private:
    StackNode *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(TreeNode *node)
    {
        StackNode *newNode = new StackNode(node);
        newNode->next = top;
        top = newNode;
    }

    TreeNode *pop()
    {
        if (isEmpty())
            return nullptr;
        TreeNode *poppedNode = top->data;
        StackNode *temp = top;
        top = top->next;
        delete temp;
        return poppedNode;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    TreeNode *peek()
    {
        if (isEmpty())
            return nullptr;
        return top->data;
    }
};

void IPreOrder(TreeNode *root)
{
    if (root == nullptr)
        return;

    Stack s;
    TreeNode *current = root;

    while (current != nullptr || !s.isEmpty())
    {
        while (current != nullptr)
        {
            s.push(current);
            cout << current->data << " ";
            current = current->lchild;
        }
        current = s.pop();
        current = current->rchild;
    }
}

// InOrder Traversal using Custom Stack
void IInOrder(TreeNode *root)
{
    if (root == nullptr)
        return;

    Stack s;
    TreeNode *current = root;

    while (current != nullptr || !s.isEmpty())
    {
        while (current != nullptr)
        {
            s.push(current);
            current = current->lchild;
        }
        current = s.pop();
        cout << current->data << " ";
        current = current->rchild;
    }
}

// PostOrder Traversal using Custom Stack
void IPostOrder(TreeNode *root)
{
    if (root == nullptr)
        return;

    Stack s;
    TreeNode *current = root;
    long int temp;
    while (current != nullptr || !s.isEmpty())
    {
        while (current != nullptr)
        {
            s.push(current);
            current = current->lchild;
        }
        temp = (long int)s.pop();
        if (temp > 0)
        {
            //s,push(-temp);
            s.push((TreeNode *)(-temp));
            current = ((TreeNode *)temp)->rchild;
        }
        else
        {
            cout << ((TreeNode *)(-temp))->data << " ";
            current = nullptr;
        }
    }
}

int main()
{
    // Example Tree
    TreeNode *root = new TreeNode(1);
    root->lchild = new TreeNode(2);
    root->rchild = new TreeNode(3);
    root->lchild->lchild = new TreeNode(4);
    root->lchild->rchild = new TreeNode(5);
    root->rchild->lchild = new TreeNode(6);
    root->rchild->rchild = new TreeNode(7);

    cout << "Preorder Traversal: ";
    IPreOrder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    IInOrder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    IPostOrder(root);
    cout << endl;

    return 0;
}
