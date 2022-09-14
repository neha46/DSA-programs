#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cout<<"how many elements you want"<<endl;
    cin>>n;
     int A[n];//a[n]={1,2,3} cant do that we can only declare like this but not initialize;
    cout<<"enter the elements on array";
     // for input the array elements
    for(i=0;i<n;i++)
    {
    cin>>A[i];
    }
    cout<<"elements are----------"<<endl;
    //for display the array elements
    for(int x:A)
    {
    cout<<x<<endl;
    }
    return 0;
}
