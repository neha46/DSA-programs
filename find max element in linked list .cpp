
/*program to find maximum  element in
linked list by loop and recursion*/
#include<bits/stdc++.h>
// structure of node type-->
using namespace std;
        struct  node
        {
        int data;
        struct node *next;
        } *first=NULL;
// for create linked list------>
void create_node(int a[], int n)
    {
        first=new node;
        first->data=a[0];
        first->next=NULL;
        struct node *last,*p;
        last=first;
        p=last;
for(int i=1;i<n;i++)
        {
            p=new node;
            p->data=a[i];
            p->next=NULL;
            last->next=p;
            last=p;
        }
}
//for display linked list----->
    void display(struct node *p)
        {
            while(p)
            {
            cout<<p->data<<" ";
            p=p->next;
            }
        }
//function to find max element By loop--->
int max( node*p)
        {
        int m=-32768;
        while(p)
            {
            if(p->data>m)
                m=p->data;
            p=p->next;
            }
    return m;
        }
// fun to find max element by recursion--->
int Rmax(node*p)
        {
            int x=0;
            if(p==0)
                return -32768;
            x=Rmax(p->next);
            if(x>p->data)
                return x;
           else
                return p->data;
        }
int main()
    {
        int n;
    cout<<"*******Enter how many elements you want*******"<<endl;
    cin>>n;//for array size
    int a[n];//array at run time
    cout<<"enter data elements------------->"<<endl;
//for inputting array elements------->
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\n";
    cout<<"ARRAY ELEMETS ARE-------------------->"<<endl;
    //for display array elements------->
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    create_node(a,n);
    cout<<"\n---------node are---------------------"<<endl;
        display(first);
    cout<<"\n By loop maximum element is  "<<max(first);
    cout<<"\n by recursion  max elements is "<<Rmax(first);
    return 0;
}








