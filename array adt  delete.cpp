//program to delete an element  at given index
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int A[20];
    int Size;
    int length;
};
// function for deleting an element--->
int delet(struct Array *arr,int index)
{ int x=0;
    if(index<arr->length&& index>=0)
       {
            x= arr->A[index];
           for(int i=index;i<arr->length-1;i++)
           {
               arr->A[i]=arr->A[i+1];
           }
          arr->length--;
          return x;
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
    cout<<"Element "<<delet(&arr,0)<<" is deleted"<<endl;
    cout<<"Array elements are------------->"<<endl;
display(arr);
return 0;
}



