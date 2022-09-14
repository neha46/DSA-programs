// program for membership---------->
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int a[10];
    int Size;
    int length;
};

struct Array* Union(struct Array *arr1,struct Array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct Array *arr3=new struct Array[10];
    while(i<arr1->length&&j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])//if smaller
            arr3->a[k++]=arr1->a[i++];
        else if(arr2->a[j]<arr1->a[i])//if bigger
            arr3->a[k++]=arr2->a[j++];
        else//if equal
        {arr3->a[k++]=arr1->a[i++];
            j++;}
    }// remaining elements-->
    for(;i<arr1->length;i++)
    {
        arr3->a[k++]=arr1->a[i];
    }
    for(;j<arr2->length;j++)
    {
        arr3->a[k++]=arr2->a[j];
    }
    arr3->length=k;
    arr3->Size=10;
    return arr3;
}
int set_m(struct Array arr,int key)
{
    for(int i=0;i,arr.length;i++)
    {
        if(arr.a[i]==key)
            return 1;
    }
    return 0;
}
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
    int key=80;
    arr3=Union(&arr1,&arr2);
    if(set_m(*arr3,key)==1)
        cout<<"yes key is present"<<endl;
    else
        cout<<"not present "<<endl;
    return 0;
}


