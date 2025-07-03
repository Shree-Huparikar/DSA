#include<iostream>
#include<cstring>

using namespace std;
typedef struct node
{
   char k[20];
   char m[20];
   node *left;
   node *right;
}node;

class dict
{
     public:
     node *root;
     void create();
     void disp(node*root);
     void insert(node*root,node*temp);
     int search(node*root,char[]);
     int update(node*root,char[]);
     node*del(node*root,char[]);
     node*min(node*root);


};

void dict:: create()
{
  node*temp;
  int ch;
  do
  {
    temp=new node;
    cout<<"Enter the Keyword :"<<endl;
    cin>>temp->k;
    cout<<"Enter the Meaning : "<<endl;
    cin>>temp->m;
    temp->right=NULL;
    temp->left=NULL;
    if(root==NULL)
    {
      root=temp;
    }
    else
    {
       insert(root,temp);
    }
    cout<<"\nDo you want to add more(y=1/n=0): ";
    cin>>ch;
  }
  while(ch==1);
}

void dict::insert(node*root,node*temp)
{
    if(strcmp(temp->k,temp->m)<0)
    {
      if(root->left==NULL)
      {
         root->left=temp;
      }
      else
      {
        insert(root->left,temp);
      }
    }
    else{
      if(root->right==NULL)
      {
         root->right=temp;
      }
      else
      {
        insert(root->right,temp);
      }
    }
}

void dict::disp(node*root)
{
  if(root!=NULL)
  {
    disp(root->left);
    cout<<"\n KeyWord : "<<root->k;
    cout<<"\t Meaning : "<<root->m;
    disp(root->right);
  }
}
int dict::search(node* root, char k[20]) {
    int c = 0;
    while (root != NULL) {
        c++;
        if (strcmp(k, root->k) == 0)
        {
            cout << "\n No of Comparisons : " << c <<endl;
            return 1;
        }
        if (strcmp(k, root->k) < 0) 
        {
            root = root->left;
        }
        else if (strcmp(k, root->k) > 0) 
        {
            root = root->right;
        }
    }
    cout << "\n No of Comparisons : " << c<<endl;
    return -1;  // If no element found then return -1
}

int dict:: update(node*root,char k[20])
{
     while(root!=NULL)
     {
        if(strcmp(k,root->k)==0)
        {
          cout<<"Enter the New meaning of keyword : "<<root->k<<endl;
          cin>>root->m;
          return 1;
        }
       if(strcmp(k,root->k)<0)
       {
        root=root->left;
       }
       if(strcmp(k,root->k)==0)
       {
        root=root->right;
       }
     }
     return -1;
}
node* dict:: del(node*root,char k[20])
{
    node*temp;
    if(root==NULL)
    {
      cout<<"\n Element No Found ";
      return root;
    }

    if(strcmp(k,root->k)<0)
    {
      root->left=del(root->left,k);
      return root;
    }
    if(strcmp(k,root->k)>0)
    {
      root->right=del(root->right,k);
      return root;
    }

    if(root->right==NULL && root->left==NULL)
    {
        temp=root;
        delete temp;
        return NULL;
    }
    if(root->right==NULL)
    {
      temp=root;
      root=root->left;
      delete temp;
      return root;
    }
    else if(root->left==NULL)
    {
      temp=root;
      root=root->right;
      delete temp;
      return root;
    }
    temp=min(root->right);
    strcpy(root->k,temp->k);
    root->right=del(root->right,temp->k);
    return root;
      

}
node* dict::min(node*q)
{
  while(q->left!=NULL)
  {
    q=q->left;
  }
  return q;
}
int main(){
    int ch;
    dict d;
    d.root=NULL;
    while(1)
    {
        cout<<"\nMENU : \n1.Create \n2.Search \n3.Delete \n4.Update \n5.Dispaly \n6.Exit \nEnter Your Choice :  ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                  d.create();
                  break;
            case 2:
                  if(d.root==NULL)
                  {
                    cout<<"Dictionary is Empty.\nAdd keyword then try again "<<endl;
                  }
                  else
                  {
                    cout<<"Enter the Keyword do you want to search :"<<endl;
                    char k[20];
                    cin>>k;

                    if(d.search(d.root,k)==1)
                    {
                        cout<<"Keyword is Found "<<endl;
                    }
                    else
                    {
                        cout<<"Keyword is Not Found "<<endl;
                    }
                  }
                  break;
            case 3:
                   if(d.root==NULL)
                   {
                    cout<<"Dictionary is Empty.\nAdd keyword then try again "<<endl;
                   }
                   else
                   {
                    cout<<"Enter the keyword you want to delete : "<<endl;
                    char k[20];
                    cin>>k;
                    if(d.root==NULL)
                    {
                        cout<<"Np any Keyword is presnrt : "<<endl;
                    }
                    else
                    {
                        d.root=d.del(d.root,k);
                    }
                    
                   }
                   break;
            case 4:
                  if(d.root==NULL)
                  {
                    cout<<"Dictionary is Empty.\nAdd keyword then try again "<<endl;
                  }
                  else
                  {
                    cout<<"Enter the Keyword do you want to update : "<<endl;
                    char k[20];
                    cin>>k;
                    if(d.update(d.root,k)==1)
                    {
                        cout<<"Keyword is Updated : "<<endl;
                    }
                    else
                    {
                        cout<<"Keyword is not Updated : "<<endl;
                    }
                  }
                  break;
            case 5:
                  if(d.root==NULL)
                  {
                    cout<<"No any Keyword IS present : "<<endl;
                  }
                  else
                  {
                    d.disp(d.root);
                  }
                  break;
            case 6:
                  exit(0);
        }
    }
    return 0;
}