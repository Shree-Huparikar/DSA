#include <iostream>
using namespace std;
class Node
{
public:
    int data = 0;
    Node *left = NULL;
    Node *right = NULL;
};
class BST
{
public:
    Node *root = NULL;
    int insert(int val)
    {
        Node *temp = new Node();
        temp->data = val;
        if (this->root == NULL)
        {
            this->root = temp;
        }
        else
        {
            Node *cur = this->root;
            while (true)
            {
                if (val > cur->data)
                {
                    if (cur->right == NULL)
                    {
                        cur->right = temp;
                        break;
                    }
                    cur = cur->right;
                }
                else
                {
                    if (cur->left == NULL)
                    {
                        cur->left = temp;
                        break;
                    }
                    cur = cur->left;
                }
            }
        }
    }
    void inorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
    bool search(Node *root, int value)
    {

        while (root != NULL)
        {
            if (root->data == value)
                return true;

            if (value < root->data)
                root = root->left;

            else
                root = root->right;
        }

        return false;
    }
    int minValue(Node *root)
    {
        if (root->left == NULL)
        {
            return root->data;
        }
        minValue(root->left);
    }
    int maxValue(Node *root)
    {
        if (root->right == NULL)
        {
            return root->data;
        }
        maxValue(root->right);
    }

    int calHeight(Node*root){
        if(root==NULL){
            return 0;

        }
        return max ((1+ calHeight(root->left)),(1+ calHeight(root->right)));
    }

    void swapTree(Node*root){
        if(root==NULL){
            return;
        }
        swapTree(root->left);
        swapTree(root->right);

        Node*temp=root->right;
        root->right=root->left;
        root->left=temp;
    }
};

int main()
{
    BST t;
    t.insert(15);
    t.insert(10);
    t.insert(19);
    t.insert(17);
    t.insert(13);

    cout<<"Inorder Traversal :";
    t.inorder(t.root);
    cout << endl;

    cout << t.search(t.root, 19) << endl;

    cout << "The minimum element in tree :" << t.minValue(t.root) << endl;

    cout << "The maximum element in tree :" << t.maxValue(t.root) << endl;

    cout<<"The maximum number of nodes present in largest path :"<< t.calHeight(t.root)<<endl;

    t.swapTree(t.root);
    cout<<"After Swapping :";
    t.inorder(t.root);
    
    return 0;
}