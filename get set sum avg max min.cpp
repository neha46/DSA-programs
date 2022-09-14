// program for get(),set(),min(),max(),sum(),avg()--->
#include<bits/stdc++.h>
using namespace std;
struct Array
{
int a[10];
int Size;
int length;
};
//for getting an element form array
int get(struct Array arr,int index)//time complexity=  o(1)
{
    if(index>=0&& index<arr.length)
        return arr.a[index];
    else
        return -1;
}
//for replacing any index value using get()
void Set(struct Array *arr,int index,int num)//time complexity=  o(1)
{
    if(index>=0&& index<arr->length)
        arr->a[index]=num;
}
//to find out the maximum element from entire array
int Max(struct Array arr)//time complexity=  o(n)
{
    int Max=arr.a[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.a[i]>Max)
            Max=arr.a[i];
    }
    return Max;
}

//to find out the minimum element from entire array
int Min(struct Array arr)//time complexity=  o(n)
{
    int Min=arr.a[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.a[i]<Min)
            Min=arr.a[i];
    }
    return Min;
}
//for finding the sum of all the elements of array
int sum(struct Array arr)//time complexity=  o(n)
{
    int total=0;
    for(int i=0;i<arr.length;i++)
    {
        total=total+arr.a[i];
    }
    return total;
}
// average of all elements form array
float avg(struct Array arr)//time complexity=  o(n)
{
  return (float)sum(arr)/arr.length;
}
//for displaying after replacing a element
void display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.a[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    struct Array arr={{12,4,2,9,10,20,1,6,7,3},10,10};
    int index=5,num=100;
    cout<<"get()->  "<<"At index "<<index<<" element is "<<get(arr,index)<<endl;
    Set(&arr,index,num);
    cout<<"by set()->";
    display(arr);
    cout<<"\n";
    cout<<"Max()-> Maximum element is "<<Max(arr)<<endl;
     cout<<"Min()-> Minimum element is "<<Min(arr)<<endl;
     cout<<"sum()-> sum of array element is "<<sum(arr)<<endl;
     cout<<"avg()->  average of array element is "<<avg(arr)<<endl;
     return 0;
}
