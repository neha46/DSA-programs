// program  to merge  an array
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int a[10];
    int Size;
    int length;
};
// function for merging--->
struct Array* Merge(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=new struct Array[10];
    while(i<arr1->length&&j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])//if smaller
            arr3->a[k++]=arr1->a[i++];
        else// if bigger
            arr3->a[k++]=arr2->a[j++];
    }
    // for remaining elements->
    for(;i<arr1->length;i++)
    {
        arr3->a[k++]=arr1->a[i];
    }
    for(;j<arr2->length;j++)
    {
        arr3->a[k++]=arr2->a[j];
    }
    arr3->length=arr1->length+arr2->length;
    arr3->Size=10;
    return arr3;
}
// function for display--->
void display(struct Array arr)
{ int k;
    for( k=0;k<arr.length;k++)
    {
        cout<<arr.a[k]<<" ";
    }
    cout<<"\n";
}

int main()
{
    struct Array arr1={{1,10,31,45,50},10,5};
    struct Array arr2={{11,23,39,55,80},10,5};
    struct Array *arr3;
    arr3=Merge(&arr1,&arr2);
    display(*arr3);
    return 0;
}

