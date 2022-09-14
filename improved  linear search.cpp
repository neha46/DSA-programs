/*program to find key element enter by user is present in
linked list by  using move to front or head method*/
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
{ while(p)
{
    cout<<p->data<<" ";
    p=p->next;
}}
//function to search element By loop using move to front method--->
node *search(node*p,int key)
            {node*q;
                  while(p!=NULL)
                {
                 if(key==p->data)
                    {
                    q->next=p->next;
                    p->next=first;
                    first=p;
                    return p;
                    }
                 q=p;
                 p=p->next;
                }
                return NULL;
            }

int main()
    {
        int n;
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
      struct node *temp;
    while(1)
    {
          int key;
    cout<<"\n******enter the key*******"<<endl;
    cin>>key;
temp=search--(first,key);
if(temp)
    printf("\n By using move to front method  key %d is found\n",temp->data);
else
    printf("not found\n");
    cout<<"------------nodes are------------>"<<endl;
    display(first);
int choice;
cout<<"\n 1.enter any number for continue------->"<<endl;
    cout<<"2.enter 0 for exit---------->"<<endl;
    cin>>choice;
    if(choice==0)
        exit(0);
    }
return 0;}










