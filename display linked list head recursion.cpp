//to display list by using head recursion-->
#include<bits/stdc++.h>
using namespace std;
// structure--->
struct Node
{
    int data;
    struct Node *next;
}*first=0;

//to create new node in linked list-->
void new_node(int a[],int n)
{struct Node *t,*last;
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
//fun for display list by head  recursion->
 void Rdisplay( struct Node *p)
 {
     if(p!=NULL)
     {
         Rdisplay(p->next);
//because recursive fun is first statement
        cout<<p->data<<" ";
     }}
int main()
{ int a[]={1,2,3,4};
    new_node(a,4);
    Rdisplay(first);
    return 0;
}

