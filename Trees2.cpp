// Recursive method for inorder , preorder , postorder traversal



#include <iostream>

using namespace std;

// Define the structure of a node in the binary tree
struct Node
{
    int data;
    Node *left;
    Node *right;

    // Constructor to initialize a new node
    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to insert a new node into the binary tree
Node *insert(Node *root, int value)
{
    if (root == nullptr)
    {
        // If the tree is empty, create a new node as the root
        return new Node(value);
    }
    else
    {
        if (value <= root->data)
        {
            // If the value is less than or equal to the current node's value, insert into the left subtree
            root->left = insert(root->left, value);
        }
        else
        {
            // If the value is greater than the current node's value, insert into the right subtree
            root->right = insert(root->right, value);
        }
        return root;
    }
}

// Function to traverse the binary tree in inorder (left, root, right) manner
void inorderTraversal(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
// Function to traverse the binary tree in preorder (root, left, right) manner
void preorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
// Function to traverse the binary tree in postorder (left, right, root) manner
void postorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    // Create an empty binary tree
    Node *root = nullptr;

    // Insert elements into the binary tree
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 8);

    // Print the elements of the binary tree in preorder , inorder , postorder traversal
    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;
    
    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;
   
    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
