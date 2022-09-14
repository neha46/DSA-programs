#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int A[20];
    int Size;
    int length;
};
void display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
        cout<<arr.A[i]<<" "<<"\n";
}
int main()
{
    struct Array arr={{11,12,13,14,18},20,5};// 20 is size and 5 is length
    arr.length=5;
    cout<<"Array elements are------------->"<<endl;
display(arr);
return 0;
}

