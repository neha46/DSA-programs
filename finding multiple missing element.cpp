// program for find multiple  missing element in sorted array------>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int A[]={2,4,5,6,7,10,11,12,13};
    int low=A[0];
    int high=A[9];
    int diff;
     diff=low-0;
    for(int i=0;i<10;i++)
    {
        if(A[i]-i!=diff)
        {
            while(diff<A[i]-i)
            {
                cout<<i+diff<<"  ";
                diff++;
            }
        }
        }
    return 0;
}
