/*program to convert whole string upper into lower case
and lower to upper case in Toggle case.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{ char a[20]="NeHa MiShRa";
int i;
for(i=0;a[i]!='\0';i++)
{
     if(a[i]>=65&&a[i]<=90)
// the ASCII value of capital  letter starts from 65 to 90.
// if  given alphabet is capital then by adding 32 we will get lower  case.
        a[i]=a[i]+32;
     else if(a[i]>=97&&a[i]<=122)
// the ASCII value of small starts from 97 to 122..
// and if given alphabet is lower by subtracting  32 we will get upper case .
        a[i]=a[i]-32;
}
cout<<a;
return 0;
}


