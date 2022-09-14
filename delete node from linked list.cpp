#include<bits/stdc++.h>
using namespace std;
struct  node
{
    int data;
    struct node *next;
}*first=NULL;
void createNode(int a[],int n)
{
    first=new node;
    first->data=a[0];
    first->next=NULL;
    struct node *last;
    last=first;
    struct node *temp;
    for(int i=1;i<n;i++)
    {
        temp=new  node;
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void display(struct node*p)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
void deleteNode(struct node*p, int x)
{
    struct  node *q=NULL,*t;
    p=first;
    while(p&&p->data<x)
    {
    q=p;
    p=p->next;
    }
    if(p->data==x)
    {
    q->next=p->next;
    free(p);}

}
int main()
{
    int n=10;
   int  a[n]={10,9,77,3,7,22,44,87,45,32};
   createNode(a,n);
   display(first);
   int x;
   cout<<"\n Enter  the data you want to delete"<<endl;
   cin>>x;
deleteNode(first,x);
display(first);
   return 0;
}
