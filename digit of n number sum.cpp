#include<bits/stdc++.h>
using namespace std;
int sum=0,r=0;
int add(int n)
{
   if(n>0)
    {  r=n%10;
    sum=sum+r;
    n=n/10;
  add(n);
  }
    return sum;
}
int main()
{
    int a;
    cin>>a;
    cout<<add(a);
}

