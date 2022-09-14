/*program to create new node in linked
list globally */
#include<bits/stdc++.h>
using namespace std;
// structure------->
struct Node
{
    int data;
    struct Node *next;
}*first=0;//global

//to create new node--->
void new_node()
{
    int n;//for data
    cout<<"enter data for new node";
    cin>>n;
    first=new Node;
    first->data=n;
    first->next=NULL;
}

// to display linked list--->
 void display( struct Node *p)
 {
     while(p!=NULL)
     {
         cout<<p->data;
         p=p->next;
     }
 }
int main()
{//function call
    new_node();
    display(first);
    return 0;
}
