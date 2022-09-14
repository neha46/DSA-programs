// program to reverse string by using single string-method 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[]="ANISHI";
    int i,j,temp;
    for(j=0;s1[j]!='\0';j++);// by this we get string length
    j-=1;
    for(i=0;i<j;i++,j--)
    {/* just swap elements form last to first (j->i) or
        first to last (i->j) by i++ and j--.*/

      temp=s1[i];
      s1[i]=s1[j];
      s1[j]=temp;
    }
cout<<"reversed string is--->"<<s1<<endl;
}

