// program to access memory in heap(dynamically)
#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int *p;
    p=new int[5];//dynamic array
    cout<<"enter values in array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    //for printing  values
     for(int i=0;i<5;i++)
    {
        cout<<p[i]<<"\t";//we can use p[i] same  as array name
    }
    delete []p;
    p=NULL;
    return 0;
}
