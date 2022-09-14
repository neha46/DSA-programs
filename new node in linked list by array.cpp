/*program to create linked
list by using array*/
#include<bits/stdc++.h>
using namespace std;
// structure------->
struct Node
{
    int data;
    struct Node *next;
}*first=0;

void new_node(int a[],int n)
{struct Node *t,*last;
//to create new node in linked list-->
    first=new Node;
    first->data=a[0];
    first->next=NULL;
    last=first;
// store other array data in linked list-->
    for(int i=1;i<n;i++)
    {    t=new Node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
          last=t;
    }
}
//to display linked list-->
 void display( struct Node *p)
 {
     while(p!=NULL)
     {
         cout<<p->data<<" ";
         p=p->next;
     }
 }
int main()
{ int a[]={1,2,3,4};
    new_node(a,4);
    display(first);
    return 0;
}

