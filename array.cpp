//creating an array
#include<iostream>
using namespace std;
int main()
{
    int A[5],i,j, a[5]={};// static array
     cout<<"enter the elements on array";
     // for input the array elements
    for(i=0;i<5;i++)
    {
    cin>>A[i];
    }
    cout<<"elements are----------"<<endl;
    //for display the array elements
    for(i=0;i<5;i++)
    {
    cout<<i<<" = "<<A[i]<<endl;
    }
    cout<<"size of array is "<<sizeof(A)<<endl;

    return 0;
}

