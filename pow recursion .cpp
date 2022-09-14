#include<bits/stdc++.h>
 using namespace std;
 int pow(int m, int n)
 {
     if (n==0)
        return 1;
     if(n%2==0)
        return pow(m*m,n/2);
     else
        return m*pow(m*m,(n-1)/2);
 }
 int main()
 {
     int m,n;
     cout<<"m= ";
     cin>>m;
     cout<<"n= ";
     cin>>n;
     cout<<"result is ="<<pow(m,n);
     return 0;
      }


