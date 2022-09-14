//comparing two string by ignoring upper and lower case.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[]="Nehap";// string 1
    char b[]="nehal";// string 2
    int i=0,j=0,temp=0;
    // temp is flag var
    for(i=0;a[i]!='\0';i++)
    /*first convert into lower case if any of  is in
    upper case*/

    {
        if(a[i]>=65&&a[i]<=90)
            a[i]=a[i]+32;
    }
for(i=0,j=0;a[i]!='\0'&&b[j]!='\0';i++,j++)
{// if both string elements are equal
    if(a[i]==b[j])
        temp++;// increment flag temp by 1
    else
// if any one of is not  equal then store 0 in temp
        temp=0;
}
if(temp>0)
// if temp is 1 then it means both string are same
    cout<<" same "<<endl;
else
// if temp is 0 then it means both string are not same
    cout<<" not same"<<endl;
return 0;
}
