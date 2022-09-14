#include<bits/stdc++.h>
using namespace std;
int main()
{ int last_d=0;
    int a[]={3,6,8,8,10,15,15,15,20};
    for(int i=0;i<10;i++)
    {
        if(a[i]==a[i+1]&&last_d!=a[i])
            {
                cout<<a[i]<<"  ";
                last_d=a[i];
            }
        }
    return 0;
}
