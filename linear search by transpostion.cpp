//using transposition method for improving  linear seaching
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int A[20];int Size;int length;
};
void Swap(int *p,int *q)
{
    int temp;
    temp=*p;
*p=*q;
    *q=temp;
}

int Linear_search(struct Array *arr, int key)
{int i,temp;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
  Swap(&arr->A[i],&arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

void display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<"  "<<endl;
    }
}
int main()
{
    struct Array arr={{10,20,30,40,50},20,5};
    cout<<" By transposition index is  "<<Linear_search(&arr,30)<<endl;
    cout<<"Elements are- after swapping--->"<<endl;
    display(arr);
    return 0;

}

