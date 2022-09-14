//program for inserting an element at given index--->
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int A[20];
    int Size;
    int length;
};
// function for insert an array--->
void Insert(struct Array *arr,int index,int x)// insert an element at given indexs
{
    if(arr->length<arr->Size&& index>=0)
       {
           for(int i=arr->length;i>index;i--)
           {
               arr->A[i]=arr->A[i-1];
           }
           arr->A[index]=x;
       }
}
void display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
        cout<<arr.A[i]<<" "<<"\n";
}
int main()
{
    struct Array arr={{11,12,13,14,25},10,5};// 10 is size and 5 is length
    arr.length=5;
    Insert(&arr,-1,200);
    cout<<"Array elements are------------->"<<endl;

display(arr);
return 0;
}


