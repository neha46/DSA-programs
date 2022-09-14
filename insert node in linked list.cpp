//program to insert  new node->
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*first=NULL;

//for creating linked list----->
void create_node(int a[],int n)
{
struct node *last,*p;
first=new node;
first->data=a[0];
first->next=NULL;
last=first;
p=last;
for( int i=1;i<n;i++)
{
    p=new node;
    p->data=a[i];
    p->next=NULL;
    last->next=p;
    last=p;
}
}
//for displaying linked list---->
void display(struct node *p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }

}

//for inserting node------->
void insert_node(struct node*p,int x)
{ struct node *t,*q=NULL;
t=new node;
t->data=x;
t->next=NULL;
    if(first==NULL)
        //when no node is here
        // insert at beginning
        first=t;
    else
    {
        while(p&&p->data<x)
//check if data is greater than  node data and p is not null
        {
        q=p;
        p=p->next;
        }
        if(p==first)
//if p is on first node
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
    }
}

int main()
{
    int a[10]={10,20,30,40,50,60,70,80,90};
int    n=10,x;
    create_node(a,n);
    //for creating linked list--->
    display(first);
//for displaying linked list-->
    cout<<"\n enter the data"<<endl;
cin>>x;
    insert_node(first,x);
//for inserting new node at any position
    display(first);
    return 0;
}
