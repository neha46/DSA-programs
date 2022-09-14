#include<bits/stdc++.h>
using namespace std;
int add(int a,int b);
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y;
    cout<<"enter two number "<<endl;
    cin>>x>>y;
    printf("%d",add(x,y));//call by value
    return 0;
}
