/*program to find key  element is present in
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
    {    struct node *last,*p;
        first=new node;
        first->data=a[0];
        first->next=NULL;
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
{ while(p)
{
    cout<<p->data<<" ";
    p=p->next;
}
}
//function to search element By loop--->
node *search(node*p,int key)
            {
                  while(p!=NULL)
                {
                 if(key==p->data)
                    return p;
                 p=p->next;
                }
                return NULL;
            }
// fun to search element by recursion--->
node *Rsearch(node *p,int key)
    {
        if(p==0)
            return 0;
        else
        {
            if(key==p->data)
                return p;
            return Rsearch(p->next,key);
        }
    }
int main()
    {int n;
    cout<<"\n*******Enter how many elements you want*******"<<endl;
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
          int key;
    cout<<"\n******enter the key*******"<<endl;
    cin>>key;
search(first,key)?printf("\n By loop key is found\n"):printf("not found\n");
Rsearch(first,key)?printf("By recursion key is found\n"):printf("not found\n");
    return 0;}









