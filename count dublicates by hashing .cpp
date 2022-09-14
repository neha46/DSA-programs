#include<bits/stdc++.h>
using namespace std;
int main()
{ int h[20];
int i;
    int a[]={3,6,8,8,10,15,15,15,20};
    int low=3;
    int high=20;
    for(int i=0;i<high+1;i++)
    {
        h[i]=0;
    }
    for(int i=0;i<10;i++)
    {
        h[a[i]]++;}
    for(int i=low;i<=high;i++)
{if(h[i]>1)
    cout<<i<<" appears  "<<h[i]<<"times"<<endl;
    }
    return 0;
}


