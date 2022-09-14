//Taylors series ---->
#include<bits/stdc++.h>
using namespace std;
double e(int x,int n)
{ static  double s=1;
    if(n==0)
        return s;
    else
    {
        s=1+x*s/n;
       return e(x,n-1);
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

