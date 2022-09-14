// program to count duplicates by indexing
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[15]={2,3,4,4,5,6,6,6,7,7,8,10,11,12,12};
    int i,j;
    for(i=0;i<15;i++)//time complexity=o(n)
    {
        if(a[i]==a[i+1])// if i and i+1 element is equal
        {
            j=i+1;
            while(a[j]==a[i])
            {
                j++;
            }
            cout<<a[i]<<" appears "<<j-i<<" times "<<endl;
            i=j-1;
        }
    }
    return 0;
}
