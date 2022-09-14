//program for intersection----->
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int a[10];
    int Size;
    int length;
};
// function for intersection->
struct Array* intersection(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=new struct Array[10];
    while(i<arr1->length&&j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])//if smaller
            i++;
        else if(arr2->a[j]<arr1->a[i])//if bigger
            j++;
        else// if equal
        {arr3->a[k++]=arr1->a[i++];
            j++;}
    }

    arr3->length=k;
    arr3->Size=10;
    return arr3;
}
//function for display-->
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
    arr3=intersection(&arr1,&arr2);
    display(*arr3);
    return 0;
}
