/* note point-> if our char array size is 10 and our string  length is just 4
so how  we know that where our string should be end!!!*/
// program to find out string length------------->
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char  a[10]={'N','E','H','A','\0'};
    // or we also write->  a[10]="NEHA";
    int i;
    for(i=0;a[i]!='\0';i++);
    cout<<"String length is "<<i<<endl;
return 0;
/* main diff between char array and string is null character*/
}
