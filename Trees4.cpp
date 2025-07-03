#include<iostream>
using namespace std;

struct node{
    struct node* lchild;
    struct node* rchild;
    int data;
};

node* insert(node* root, int key) {
    node* parent = nullptr;
    node* current = root;

    // Create a new node with the given key
    node* newNode = new node();
    newNode->data = key;
    newNode->lchild = nullptr;
    newNode->rchild = nullptr;

    // If the tree is empty, make the new node as root
    if (root == nullptr) {
        return newNode;
    }

    // Traverse the tree to find the appropriate position to insert the new node
    while (current != nullptr) {
        parent = current;
        if( key==current->data){
            return  ;
        }
        else if (key < current->data) {
            current = current->lchild;
        } else {
            current = current->rchild;
        }
    }

    // Connect the new node to its parent
    if (key < parent->data) {
        parent->lchild = newNode;
    } else {
        parent->rchild = newNode;
    }

    return root;
}

node* search(node*root,int key)
{
   node*current=root;
   while(current!=NULL)
   {
   if(key==current->data){
    return current;
   }
   else if(key>current->data)
   {
       current=current->rchild;
   }
   else{
        current=current->lchild;
   }
   }
   return NULL;
 

}
void inorderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    inorderTraversal(root->lchild);
    inorderTraversal(root->rchild);
}
    


int main() {
    struct node*temp;
    node* root = nullptr;
    root = insert(root, 30);
    insert(root, 20);
    insert(root, 25);
    insert(root, 40);
    insert(root, 35);
    insert(root, 50);




    // Perform any operations you want with the tree

    cout<<"inorder Traversal :";
    inorderTraversal(root);
    cout<<endl;
    temp=search(root,21);
    if(temp!=NULL){
        cout<<"Element is found ",temp->data ;
    }
    else{
        cout<<"Element is not found"<<endl;
    }


    return 0;
}
