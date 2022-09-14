#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int A[15];
    int Size;
    int length;
};
//FUNCTION FOR BINAR SEARCH->
 int R_binary(int a[],int l,int h,int key)
 {//for best case time complexity=O(1)
     // for worst and avg case time complexity=O(log n)
int mid;
    if(l<=h)
        {
    mid=(l+h)/2;
    if(a[mid]==key)
        return mid;
    else if(a[mid]<key)
        return  R_binary(a,mid+1,h,key);
    else
        return  R_binary(a,l,mid-1,key);
        }
        return -1;
 }
int main()
{
    struct Array arr={{4,8,10,15,18,21,24,27,29,33,34,37,39,41,43},15,15};
    int key=10;
        cout<<"At index "<< R_binary(arr.A,0,arr.length,key)<<" value  "<<key<<" is present"<<endl;
       if(  R_binary(arr.A,0,arr.length,key)>=0)
            cout<<"successful search"<<endl;
       else
            cout<<"unsuccessful search";
return 0;
}
