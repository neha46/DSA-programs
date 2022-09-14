// comparing two string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[]="ANISHI";
    char s2[]="ANISHI";
    int i,j;
    for(i=0,j=0;s1[i]!='\0',s2[i]!='\0';i++,j++)
    {
    if(s1[i]!=s2[j])
    // if any of one is not equal then break
        break;
    }
     if(s1[i]==s2[j])
        cout<<"Equal"<<endl;
    else if(s1[i]<s2[j])
        cout<<"Smaller is "<<s1<<endl;
    else
        cout<<"Greater is "<<s1<<endl;
    return 0;
}
