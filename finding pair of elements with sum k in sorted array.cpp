// code to finding pair of elements with sum k in sorted array having 0(n) time complexity
#include<bits/stdc++.h>
using namespace std;
int main()
{//  it takes o(n)  time complexity.
    int a[10]={1,3,4,5,6,8,9,10,12,14};
    int i,j,k=10;// k is key
    i=0;
    j=9;
        while(i<j)// we use two index , i will start from starting and j from last
        {
            if(a[i]+a[j]==k)// if sum is equal to key
            {
                cout<<a[i]<<" ,"<<a[j]<<endl;
        i++;// so increase i and decrease j for next element
        j--;
            }
            else if(a[i]+a[j]<k)//if less then decrease j
                i++;
            else
                j--;// if greater then increase i
        }
        return 0;
}
