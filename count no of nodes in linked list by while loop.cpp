/*program to create linked list , to find length
and to add all the elements of linked list  */
#include<bits/stdc++.h>
using namespace std;
// structure----------->
    struct node
    {
        int data;
        struct node *next;
    }*head=NULL;

    //function to create linked list
    void create_list(int a[],int n)
    {  struct node *p,*last;
    // for create our first node
    head=new node;
     head->data=a[0];
     head->next=NULL;
     last=head;
     p=last;
     // fun for store other elements
     for(int i=1;i<n;i++)
     {
        p=new node;
        p->data=a[i];
        p->next=NULL;
        last->next=p;
        last=p;
     }
}

//to get the length of linked list by simple loop
int count(struct node *p)
{int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}

//to get the length of linked list by recusrsion
int Rcount(struct node *p)
{
    if(p==0)
        return 0;
    else
        return Rcount(p->next)+1;
}

//to get sum of all elements of linked list by  loop
int add(struct node *p)
{ int sum=0;
    while(p)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

//to get sum of all elements of linked list by recusrion
int R_add(struct node *p)
{
    if(p==NULL)
        return 0;
    else
        return R_add(p->next)+p->data;
}

//fun to display linked list
void display(struct node *p)
{ while(p)
{
    cout<<p->data<<" ";
    p=p->next;
}
}


int main()
{int a[]={10,20,30,40,50};
    create_list(a,5);
    cout<<" By loop ->Length is "<<count(head)<<endl;
    cout<<" By recursion -> Length is "<<Rcount(head)<<endl;
    cout<<"By loop-> Addition is "<<add(head)<<endl;
    cout<<" By recursion -> Addition is "<<R_add(head)<<endl;
    cout<<"linked list is----------------->";
    display(head);
    return 0;}
