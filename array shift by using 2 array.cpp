// program  for reverse an array
 #include<bits/stdc++.h>
using namespace std;
struct Array
{
    int *A;
    int Size;
    int length;
};
// method 1-  function for reverse by using another array
void Reverse1(struct Array *arr)// having o(n) time comlexity
{
    int *B;
    int i,j;
    B=new int[arr->length];
    for(int i=arr->length-1,j=0;i>=0;i--,j++)
    {
        B[j]=arr->A[i];
    }
    for(int i=0;i<arr->length;i++)
    {
        arr->A[i]=B[i];
    }
}
//method 2- reverse array by swapping
void Reverse2(struct Array *arr)//having o(n) time comlexity
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        int temp;
       temp= arr->A[i];
       arr->A[i]=arr->A[j];
       arr->A[j]=temp;
    }
}
// function for  display the elements
void display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    struct Array arr;
    int n;
    cout<<"Enter array size"<<endl;
    cin>>arr.Size;
    arr.A=new int[arr.Size];
    arr.length=0;
     cout<<"enter how many elements you wants"<<endl;
    cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr.A[i];
}
arr.length=n;
    Reverse1(&arr);// for 1 function
    cout<<"Reversed elements are by 1 time recursion-------->"<<endl;
    display(arr);
       cout<<"Reversed elements are by 2 time recursion-------->"<<endl;
        Reverse2(&arr);// for 2 function
    display(arr);

    return 0;
}
