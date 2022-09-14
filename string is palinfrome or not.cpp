// string to check palindrome or not------>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     char a[]="madam";
     int i,j,p=0;
     for(j=0;a[j]!='\0';j++);
     // for finding length
        j-=1;
    // start j from null char-1
     for(i=0;i<=j;i++,j--)
     {
         if((a[i]==a[j]))
            // check for equality
              {
              }
            else
               {
                p=1;
                break;}

     }
     if(p==1)
     cout<<"not palindrome"<<endl;
     else
        cout<<"palindrome"<<endl;
     return 0;
}

