#include<bits/stdc++.h>
using namespace std;
int main()
{ int j;
int count;
    int a[]={3,6,8,8,10,15,15,15,20};
    for(int i=0;i<10;i++)
    {
        if(a[i]==a[i+1])
            {j=i+1;
            while(a[j]==a[i])j++;
            cout<<a[i]<<" appears  "<<j-i <<"times"<<endl;;
              i=j-1;
            }
    }
    return 0;
}

