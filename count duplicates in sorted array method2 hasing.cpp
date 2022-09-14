// program to count duplicates by hash table in sorted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[15]={2,3,4,4,5,6,6,6,7,7,8,10,11,12,12};
    int i,j;
    int low=2;// low value of array
    int high=12;// hight value of array
    int h[high];// for hash table
    // create hash table;
    for(i=0;i<high;i++)
    {
        h[i]=0;
    }
    for(i=0;i<15;i++)
    {
      h[a[i]]++;
    }
     for(i=low;i<high;i++)
    {
        if(h[i]>1)
            cout<<i<<" appears "<<h[i]<<" times "<<endl;
        }
    return 0;
}

