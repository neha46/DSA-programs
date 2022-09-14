//  program to finding pair of elements with sum k in unsorted array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={6,3,8,10,16,7,5,2,9,14};
    int k=10;
    int i,j,N;
      cout<<" pair is ->"<<endl;
    for(i=0;i<10;i++)// it takes 0(n2) time complexity
    {
        N=k-a[i];//10-array elements
        for(j=i+1;j<10;j++)
        {
            if(a[j]==N)
            {
                cout<<a[i]<<" , "<<a[j]<<endl;
            }
        }
    }
    return 0;
}
