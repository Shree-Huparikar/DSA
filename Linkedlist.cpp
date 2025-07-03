//*************************************LINKED LIST******************************************************//


#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

//**************************INSERTION*********************************//


//Insert AT Begining
void InsertAtBegin(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
//Inser At Last
void InsertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
 
//**************************SEARCH***********************************//


/*void search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}*/


//"*************************DELETION*************************************"//


//delete the node in between two nodes
void deletion(node* &head,int val){
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;

    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}

void deleteAtBegin(node* &head){
    node* todelete = head;
    head= head->next;
    delete todelete;
    
}
// No any node is present or only one node is present
void del(node* &head,int val){
     if (head=NULL)
     {
        return;
     }
     if(head->next=NULL){
        deleteAtBegin(head);
        return;
     }     
}


//*******************************REVERSE*********************************//
/* There are two methods to reverse a linled list 
   1> Iterative Method
   2> Recursive Method */


//Iterative Method
node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next= prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

//Recursive Method
 
node* Recursive(node* &head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    
    node* newhead= Recursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

//Reverse K nodes in linled list
node* reversek(node* &head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next= prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}


//***********DETECTION AND REMOVAL OF CYCLE**************//

void makecycle(node* &head,int pos){
    node* temp=head;
    node* startnode;
    int count=1;
    while(temp->next!=NULL){
        if (count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}

bool detectcycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }

    }
    return false;
}

void removecycle(node* &head){
    node* slow=head;
    node* fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}

void display(node *head)
{
    node *temp = head;
    while (temp->next = NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    InsertAtTail(head, 6);
    display(head);


    InsertAtBegin(head, 4);
    display(head);
   
   /* deletion(head,3);
   display(head);*/

   /* deleteAtBegin(head);
   display(head);*/

   /* node* newhead=reverse(head);
   display(newhead);*/

   /* node* newhead=Recursive(head);
   display(newhead);*/

   /* int k=2;
   node* newhead=reversek(head,k);
   display (newhead);*/

   /*makecycle(head,3);
   cout<<detect cycle(head)<<endl;
   removecycle(head);
   cout<<detectcycle(head)<<endl;
   display (head)*/

    return 0;
}