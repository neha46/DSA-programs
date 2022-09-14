#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    static int p=0;
    if(n>0)
    { p=p+n;
        sum(n-1);}
        return p;

}
int main()
{
    int a;
    cin>>a;
    cout<<sum(a);
}
