//program using append method----------------->
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int A[20];
    int Size;
    int length;
};
//function for adding an element at end of array
void append(struct Array *arr,int x)// time taken o((1)
{
    if(arr->length<arr->Size)
       {arr->A[arr->length]=x;
       arr->length++;
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
    append(&arr,200);
    cout<<"Array elements are------------->"<<endl;

display(arr);
return 0;
}

