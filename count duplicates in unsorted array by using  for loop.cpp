// program to find duplicates in  unsorted array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={21,13,4,8,13,33,21,36,8,13};// time complexity=o(n2)
    int i,j,count;
    for(i=0;i<10;i++)
    {
        count=1;
    if(a[i]!=-1)
    {
        for(j=i+1;j<10;j++)
        {
        if(a[i]==a[j])// if i and i+1 element is equal
        {
            count++;
            a[j]=-1;
        }
    }
    }
    if(count>1)
        cout<<a[i]<<" appears "<<count<<" times "<<endl;
    }
    return 0;
}
