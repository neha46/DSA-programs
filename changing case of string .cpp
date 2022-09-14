/*program to convert whole string into lower case*/
#include<bits/stdc++.h>
using namespace std;
int main()
{ char a[20]="NEHA MISHRA";
int i;
for(i=0;a[i]!='\0';i++)
{
    if(a[i]!=' ')// if string is having any space then also convert
        a[i]=a[i]+32;// because lower and capital letter diff is 32
        // if  given string is capital then by adding 32 we will get lower  case.
        // and if given string is lower by subtracting we will get upper case .
}
cout<<a;
return 0;
}

