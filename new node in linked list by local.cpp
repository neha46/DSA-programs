/*program to create new node in linked
list locally */
#include<bits/stdc++.h>
using namespace std;
// structure------->
struct Node
{
    int data;
    struct Node *next;
};

//to create new node in linked list-->
struct Node* new_node(struct Node *p)
{
    int n;// data
    cout<<"enter data for new node";
    cin>>n;
    p=new Node;

    p->data=n;
    p->next=NULL;
    return p;
}

//to display list-->
 void display( struct Node *p)
 {
     while(p!=NULL)
     {
         cout<<p->data;
         p=p->next;
     }
 }
int main()
{
    struct Node  *first=NULL;
    struct Node *p;
    p=new_node(first);
    display(p);
    return 0;
}

