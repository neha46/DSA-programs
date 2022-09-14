//program for difference ------>
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int a[10];
    int Size;
    int length;
};
//function for difference
struct Array* difference(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=new struct Array[10];
    while(i<arr1->length&&j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])//if samller
            arr3->a[k++]=arr1->a[i++];
        else if(arr2->a[j]<arr1->a[i])//if bigger
            j++;
        else//if equal
        {i++;
            j++;}
    }
    //for remaining->
    for(;i<arr1->length;i++)
    {
        arr3->a[k++]=arr1->a[i];
    }
    arr3->length=i;
    arr3->Size=10;
    return arr3;
}
//for display -->
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
    struct Array arr2={{11,31,39,45,80},10,5};
    struct Array *arr3;
    arr3=difference(&arr1,&arr2);
    display(*arr3);
    return 0;
}
