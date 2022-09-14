// insert, sort for positive and  negative
#include<bits/stdc++.h>
using namespace std;
struct Array
{ int a[10];
int Size;
int length;
};
//swap function------->
void Swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
//function to arrange negative  elements---------->
void  Rearrange(struct Array  arr)
{
    int i=0;
    int j=arr.length-1;
    while(i<j)
    {
        while(arr.a[i]<0){i++;}
        {
            while(arr.a[j]>=0){j--;}
            {
                if(i<j)
                {
                    Swap(&arr.a[i],&arr.a[j]);
                }
            }
        }
    }
}
//function to sort positive values---------->
int Sort(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        if(arr.a[i]<arr.a[i+1])
            return 1;
    }
    return 0;
}
 void Insert(struct Array *arr, int key)
 {int i;
     for(i=arr->length-1;i>=0;i--)
     {
         if(arr->a[i]>key)
            {arr->a[i+1]=arr->a[i];}
        else
            {arr->a[i+1]=key;
            break;}
 }
 }
 void display(struct Array arr)
 {
     for(int i=0;i<arr.length;i++)
     {
         cout<<arr.a[i]<<"  "<<endl;
     }
     cout<<"\n";
 }
int main()
{
    struct Array arr={{2,5,9,17,22,33,65,78,98},10,9};
    int value=44;
    if(Sort(arr)==0)
        cout<<"it is unsorted array\n";
    else
        cout<<"it is sorted array\n";

    Insert(&arr,value);
    cout<<"After insertion----->\n";
    display(arr);
    return 0;
}
