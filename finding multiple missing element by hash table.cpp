// program for find multiple missing element in unsorted array->
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,9,13,5,6,1,6,8,10};
    int H[13];
    int low=1;
    int high=13;
    for(int i=low;i<high;i++)
    {
    H[i]=0;
    }
    for(int i=0;i<10;i++)
    {
       H[a[i]]=1;
    }
    for(int i=0;i<=high;i++)
    {
        if(H[i]==0)
            cout<<i<<" ";
    }
    return 0;
}
