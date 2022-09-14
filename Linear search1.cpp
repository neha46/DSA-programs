//simple linear  search
#include<bits/stdc++.h>
using namespace std;
struct Array
{
    int A[20];int Size;int length;
};
//function for linear search to return  index ---->
int Linear_search(struct Array arr, int key)
{int i;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
            return i;//best (time complexity)=o(1),when key element is present at starting
                            //worst (time complexity)=o(n),when key element is present at last
                                // these are only for successful searching

    }
    return -1;
}
// for display the elements--->
void display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<"  "<<endl;
    }
}
int main()
{
    struct Array arr={{10,20,30,40,50},20,5};
    cout<<"index is "<<Linear_search(arr,30)<<endl;// funcrtion call;
    cout<<"Elements are---->"<<endl;
    display(arr);
    return 0;

}
