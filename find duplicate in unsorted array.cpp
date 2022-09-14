// program to count duplicates by hash table in unsorted array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={21,13,4,8,13,33,21,30,8,13};
    int i,j;
    int low=4;// low value of array
    int high=30;// hight value of array
    int h[high];// for hash table
    // create hash table;
    for(i=0;i<high;i++)// time complexity=o(n)
    {
        h[i]=0;
    }
    for(i=0;i<10;i++)
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


