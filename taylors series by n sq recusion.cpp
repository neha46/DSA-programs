#include<bits/stdc++.h>
using namespace std;
double e(int x,int n)
{ static  double p=1,f=1;
int r;
    if(n==0)
        return 1;
    else
        {r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
        }
}
int main()
{
    int x,n;
    cout<<"enter x= ";
    cin>>x;
    cout<<"enter n= ";
    cin>>n;
    cout<< "ans is= "<<e(x,n);
    return 0;
}
