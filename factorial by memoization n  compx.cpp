#include<bits/stdc++.h>
using namespace std;
// function for fi
int fib(int n)
{
    static int a[100];
    for(int i=0;i<n;i++)
    {
        a[i]=-1;
    }
    if(n<=1)
    {
        a[n]=n;
        return n;
    }
    else
    {
        if (a[n-2]==-1)
            a[n-2]=fib(n-2);
        if (a[n-1]==-1)
            a[n-1]=fib(n-1);
return fib(n-2)+fib(n-1);

    }
}
int main()
{
    int n;
    cout<<"enter n th term";
    cin>>n;
    cout<<"term is ="<<fib(n);
    return 0;
}
