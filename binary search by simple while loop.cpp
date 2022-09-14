// binary search by using simple programs
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int  A[15];
    int Size;
    int length;
};
int Binary_search(struct Array arr,int key)
{int l=0,mid;
int h=arr.length-1;// for index 14
    while(l<=h)
    {  mid=(l+h)/2;
        if(arr.A[mid]==key)//if mid==key
            return mid;
        else if(arr.A[mid]<key)// if mid is less than key
            l=mid+1;
        else // if mid is greatr than  key
            h=mid -1;
    }
    return -1;// for unsuccessful search
}
int main()
{
     struct Array arr={{4,8,10,15,18,21,24,27,29,33,34,37,39,41,43},15,15};
      int key=24;
      if(Binary_search(arr,key)>=0)
        {cout<<"Ohh Yaaa its successful  search"<<endl;
     cout<<"index of "<<key<<" is "<<Binary_search(arr,key)<<endl;}
     else
        cout<<"Unsuccessful search";

     return 0;
}
