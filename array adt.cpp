// how to  create array as abstract data type
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int *A;
    int Size;
    int length;
};
//for display the elements--->
void display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
        cout<<arr.A[i]<<" "<<"\n";
}
int main()
{int n;
    struct Array arr;
    cout<<"enter array size"<<endl;
    cin>>arr.Size;
    arr.A=new int[arr.Size];// creating an array in heap;
    arr.length=0;
    cout<<"Enter how  many elements you want"<<endl;
    cin>>n;
    cout<<"Enter the elements-->"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr.A[i];
    }
    arr.length=n;
    cout<<"Array elements are------------->"<<endl;
display(arr);
return 0;
}
