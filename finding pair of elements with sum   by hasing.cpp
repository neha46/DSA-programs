// find pair of elements with sum using hash table taking 0(n) complexity
#include<iostream>
using namespace std;
    int main()
    { int i,k=10;
        int a[15]={2,5,8,3,4,7,6,5,9,10,0,1,20,7,12};
        int high=20;
        int h[high];
        // for hash table
        for(i=0;i<high;i++)
        {
            h[i]=0;
        }
        cout<<"sum pair is----------------->"<<endl;
        // loop for checking  hash is 0 or 1 , by using array elements as index for hash
        for(i=0;i<15;i++)
        {
            if(h[k-a[i]]!=0&& k-a[i]>=0)
              {cout<<k-a[i]<<","<<a[i]<<endl;}
            h[a[i]]++;
        }
        return 0;
    }
