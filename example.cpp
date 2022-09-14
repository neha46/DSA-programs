#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,rem=0,sum=0;
 cout<<"enter a number\n";
cin>>n;
rem=(n%10)*100;
n=(n/10);
sum=sum+rem+(n%10)*10+(n/10);
cout<<" rotated as "<<sum;
return 0;
}
