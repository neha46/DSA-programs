/* program to check string is valid or not
( containing  lower and upper cases and digits only)*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[20]="Anisa@12";
    int i,temp=0;
    // temp is flag var.
    for(i=0;name[i]!='\0';i++)
    {
        if(!((name[i]>=65&&name[i]<=90)||(name[i]>=97&&name[i]<=122)
           ||(name[i]>=48&&name[i]<=57)))
/*in this condition we will check  if any string element
is not in the range of (lower, upper ,digits) ASCII values
then change condition(F as T ) result by using not(!) operator so that
flag var will be incremented by 1 and we break loop by break keyword*/
// check for all upper and  lower cases& for digits.
            {cout<<"INvalid string"<<endl;
            temp=1;
            break;}
    }
    // if flag is 1 then invalid string
    // if flag is not 1 then valid string
    if(temp!=1)
        cout<<"Valid string"<<endl;
    return 0;
}
