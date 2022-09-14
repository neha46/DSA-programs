#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int a=10;
    int &b=a;
    cout<<"normal value"<<a<<endl;
    cout<<"by alias value"<<b<<endl;
    // adres is
    cout<<&a<<endl;
    cout<<&b<<endl;
    return 0;
}
